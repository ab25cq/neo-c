// source head
typedef unsigned long int size_t;
typedef long ssize_t;
typedef long off_t;
typedef struct _IO_FILE FILE;
typedef __builtin_va_list va_list;
typedef __builtin_va_list __isoc_va_list;
union _G_fpos64_t
{
char __opaque[16];
long long __lldata;
double __align;
};
typedef union _G_fpos64_t fpos_t;
extern struct _IO_FILE* stdin;
extern struct _IO_FILE* stdout;
extern struct _IO_FILE* stderr;
typedef long (*cookie_read_function_t)(void*,char*,unsigned long int);
typedef long (*cookie_write_function_t)(void*,const char*,unsigned long int);
typedef int (*cookie_seek_function_t)(void*,long*,int);
typedef int (*cookie_close_function_t)(void*);
struct _IO_cookie_io_functions_t
{
    long (*read)(void*,char*,unsigned long int);
    long (*write)(void*,const char*,unsigned long int);
    int (*seek)(void*,long*,int);
    int (*close)(void*);
};
typedef struct _IO_cookie_io_functions_t cookie_io_functions_t;
typedef unsigned int wchar_t;
struct anonymous_typeX1
{
    int quot;
    int rem;
};
typedef struct anonymous_typeX1 div_t;
struct anonymous_typeX2
{
    long quot;
    long rem;
};
typedef struct anonymous_typeX2 ldiv_t;
struct anonymous_typeX3
{
    long long quot;
    long long rem;
};
typedef struct anonymous_typeX3 lldiv_t;
struct __locale_struct;
typedef struct __locale_struct* locale_t;
typedef void* any;
typedef char* string;
extern _Bool gComeGCLib;
struct list_item$1voidp
{
    void* item;
    struct list_item$1voidp* prev;
    struct list_item$1voidp* next;
};
struct list$1voidp
{
    struct list_item$1voidp* head;
    struct list_item$1voidp* tail;
    int len;
    struct list_item$1voidp* it;
};
struct buffer
{
    char* buf;
    int len;
    int size;
};
struct smart_pointer$1char
{
    struct buffer* memory;
    char* p;
};
struct smart_pointer$1short
{
    struct buffer* memory;
    short short* p;
};
struct smart_pointer$1int
{
    struct buffer* memory;
    int* p;
};
struct smart_pointer$1long
{
    struct buffer* memory;
    long* p;
};
struct smart_pointer$1float
{
    struct buffer* memory;
    float* p;
};
struct smart_pointer$1double
{
    struct buffer* memory;
    double* p;
};
struct list_item$1char
{
    char item;
    struct list_item$1char* prev;
    struct list_item$1char* next;
};
struct list$1char
{
    struct list_item$1char* head;
    struct list_item$1char* tail;
    int len;
    struct list_item$1char* it;
};
struct list_item$1short
{
    short short item;
    struct list_item$1short* prev;
    struct list_item$1short* next;
};
struct list$1short
{
    struct list_item$1short* head;
    struct list_item$1short* tail;
    int len;
    struct list_item$1short* it;
};
struct list_item$1int
{
    int item;
    struct list_item$1int* prev;
    struct list_item$1int* next;
};
struct list$1int
{
    struct list_item$1int* head;
    struct list_item$1int* tail;
    int len;
    struct list_item$1int* it;
};
struct list_item$1long
{
    long item;
    struct list_item$1long* prev;
    struct list_item$1long* next;
};
struct list$1long
{
    struct list_item$1long* head;
    struct list_item$1long* tail;
    int len;
    struct list_item$1long* it;
};
struct list_item$1float
{
    float item;
    struct list_item$1float* prev;
    struct list_item$1float* next;
};
struct list$1float
{
    struct list_item$1float* head;
    struct list_item$1float* tail;
    int len;
    struct list_item$1float* it;
};
struct list_item$1double
{
    double item;
    struct list_item$1double* prev;
    struct list_item$1double* next;
};
struct list$1double
{
    struct list_item$1double* head;
    struct list_item$1double* tail;
    int len;
    struct list_item$1double* it;
};
struct list_item$1charph
{
    char* item;
    struct list_item$1charph* prev;
    struct list_item$1charph* next;
};
struct list$1charph
{
    struct list_item$1charph* head;
    struct list_item$1charph* tail;
    int len;
    struct list_item$1charph* it;
};
struct integer
{
    long value;
};
extern _Bool gComeDebug;
extern _Bool gComeGC;
extern _Bool gComeC;
extern _Bool gComeMalloc;
extern _Bool gCommonHeader;
extern int gComeDebugStackFrameID;
struct sType;
struct sClass;
struct tuple2$2charphsTypeph
{
    char* v1;
    struct sType* v2;
};
struct list_item$1tuple2$2charphsTypephph
{
    struct tuple2$2charphsTypeph* item;
    struct list_item$1tuple2$2charphsTypephph* prev;
    struct list_item$1tuple2$2charphsTypephph* next;
};
struct list$1tuple2$2charphsTypephph
{
    struct list_item$1tuple2$2charphsTypephph* head;
    struct list_item$1tuple2$2charphsTypephph* tail;
    int len;
    struct list_item$1tuple2$2charphsTypephph* it;
};
struct sClass
{
    _Bool mStruct;
    _Bool mFloat;
    _Bool mUnion;
    _Bool mGenerics;
    _Bool mMethodGenerics;
    _Bool mEnum;
    _Bool mProtocol;
    _Bool mNumber;
    char* mName;
    int mGenericsNum;
    int mMethodGenericsNum;
    struct list$1tuple2$2charphsTypephph* mFields;
    _Bool mOutputed;
    _Bool mOutputed2;
    char* mDeclareSName;
    _Bool mNobodyStruct;
    char* mParentClassName;
};
struct sInfo;
struct sNode
{
    void* _protocol_obj;
    void (*finalize)(void*);
    void* (*clone)(void*);
    _Bool (*compile)(void*,struct sInfo*);
    int (*sline)(void*);
    char* (*sname)(void*);
    _Bool (*terminated)(void*);
    char* (*kind)(void*);
};
struct sNodeBase
{
    int sline;
    char* sname;
};
struct list_item$1sTypeph
{
    struct sType* item;
    struct list_item$1sTypeph* prev;
    struct list_item$1sTypeph* next;
};
struct list$1sTypeph
{
    struct list_item$1sTypeph* head;
    struct list_item$1sTypeph* tail;
    int len;
    struct list_item$1sTypeph* it;
};
struct tuple1$1sTypeph
{
    struct sType* v1;
};
struct list_item$1sNodeph
{
    struct sNode* item;
    struct list_item$1sNodeph* prev;
    struct list_item$1sNodeph* next;
};
struct list$1sNodeph
{
    struct list_item$1sNodeph* head;
    struct list_item$1sNodeph* tail;
    int len;
    struct list_item$1sNodeph* it;
};
struct sType
{
    struct sClass* mClass;
    struct list$1sTypeph* mMultipleTypes;
    struct tuple1$1sTypeph* mNoSolvedGenericsType;
    struct tuple1$1sTypeph* mOriginalLoadVarType;
    char* mGenericsName;
    struct list$1sTypeph* mGenericsTypes;
    struct list$1sNodeph* mArrayNum;
    _Bool mOmitArrayNum;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct tuple1$1sTypeph* mResultType;
    _Bool mVarArgs;
    struct sNode* mAlignas;
    _Bool mUnsigned;
    _Bool mShort;
    _Bool mLong;
    _Bool mLongLong;
    _Bool mConstant;
    _Bool mRegister;
    _Bool mVolatile;
    _Bool mStatic;
    _Bool mUniq;
    _Bool mRecord;
    _Bool mExtern;
    _Bool mRestrict;
    _Bool mImmutable;
    _Bool mHeap;
    _Bool mDummyHeap;
    _Bool mDelegate;
    _Bool mShare;
    _Bool mClone;
    _Bool mNoHeap;
    _Bool mNoCallingDestructor;
    _Bool mRefference;
    _Bool mException;
    int mPointerNum;
    int mOriginalTypeNamePointerNum;
    int mNoArrayPointerNum;
    int mTypedefOriginalPointerNum;
    struct sNode* mSizeNum;
    unsigned int mDynamicArrayNum;
    unsigned int mTypeOfExpression;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mFunctionParam;
    _Bool mAllocaValue;
    _Bool mGenericsStruct;
    _Bool mSolvedGenericsName;
    _Bool mComeMemCore;
    _Bool mInline;
    _Bool mNullValue;
    _Bool mGuardValue;
    char* mAsmName;
    _Bool mArrayPointerType;
    _Bool mLambdaArray;
    _Bool mNoNumberArray;
};
struct sVar;
struct CVALUE
{
    char* c_value;
    struct sType* type;
    struct sVar* var;
};
struct sVar
{
    char* mName;
    char* mCValueName;
    struct sType* mType;
    int mBlockLevel;
    _Bool mGlobal;
    _Bool mAllocaValue;
    _Bool mFunctionParam;
    _Bool mNoFree;
    char* mFunName;
};
struct sVarTable;
struct sBlock;
struct sFun
{
    char* mName;
    struct sType* mResultType;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    struct sType* mLambdaType;
    struct sBlock* mBlock;
    _Bool mExternal;
    _Bool mVarArgs;
    struct buffer* mSource;
    struct buffer* mSourceHead;
    struct buffer* mSourceHead2;
    struct buffer* mSourceDefer;
    _Bool mStatic;
    char* mComeHeader;
    _Bool mCloner;
    char* mDeclareSName;
};
struct sGenericsFun
{
    struct sType* mImplType;
    struct list$1charph* mGenericsTypeNames;
    struct list$1charph* mMethodGenericsTypeNames;
    char* mName;
    struct sType* mResultType;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    char* mBlock;
    int mSLine;
    _Bool mVarArgs;
    char* mGenericsSName;
    int mGenericsSLine;
};
struct sModule
{
    struct buffer* mSourceHead;
    struct buffer* mSourceHead2;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    char* mLastCode3;
    struct buffer* mHeader;
};
struct sVarTable;
struct list_item$1charp
{
    char* item;
    struct list_item$1charp* prev;
    struct list_item$1charp* next;
};
struct list$1charp
{
    struct list_item$1charp* head;
    struct list_item$1charp* tail;
    int len;
    struct list_item$1charp* it;
};
struct map$2charphsVarph
{
    char** keys;
    _Bool* item_existance;
    struct sVar** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct sVarTable
{
    struct map$2charphsVarph* mVars;
    _Bool mGlobal;
    struct sVarTable* mParent;
    int mID;
};
struct sBlock
{
    struct list$1sNodeph* mNodes;
    struct sVarTable* mVarTable;
};
struct sRightValueObject
{
    struct sType* mType;
    char* mVarName;
    char* mFunName;
    _Bool mFreed;
    int mID;
    int mBlockLevel;
};
struct sClassModule
{
    char* mName;
    char* mText;
    struct list$1charph* mParams;
    char* mSName;
    int mSLine;
};
struct map$2charphsFunph
{
    char** keys;
    _Bool* item_existance;
    struct sFun** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct map$2charphsGenericsFunph
{
    char** keys;
    _Bool* item_existance;
    struct sGenericsFun** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct map$2charphsClassph
{
    char** keys;
    _Bool* item_existance;
    struct sClass** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct map$2charphsClassModuleph
{
    char** keys;
    _Bool* item_existance;
    struct sClassModule** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct map$2charphsTypeph
{
    char** keys;
    _Bool* item_existance;
    struct sType** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct list_item$1sRightValueObjectph
{
    struct sRightValueObject* item;
    struct list_item$1sRightValueObjectph* prev;
    struct list_item$1sRightValueObjectph* next;
};
struct list$1sRightValueObjectph
{
    struct list_item$1sRightValueObjectph* head;
    struct list_item$1sRightValueObjectph* tail;
    int len;
    struct list_item$1sRightValueObjectph* it;
};
struct list_item$1CVALUEph
{
    struct CVALUE* item;
    struct list_item$1CVALUEph* prev;
    struct list_item$1CVALUEph* next;
};
struct list$1CVALUEph
{
    struct list_item$1CVALUEph* head;
    struct list_item$1CVALUEph* tail;
    int len;
    struct list_item$1CVALUEph* it;
};
struct map$2charphcharph
{
    char** keys;
    _Bool* item_existance;
    char** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct sInfo
{
    char* p;
    char* head;
    struct buffer* original_source;
    struct buffer* source;
    char* sname;
    char* base_sname;
    int sline;
    int err_num;
    char* err_line;
    char* clang_option;
    char* cpp_option;
    _Bool no_output_err;
    _Bool no_output_come_code;
    struct sFun* come_fun;
    char* come_fun_name;
    struct sFun* caller_fun;
    int caller_line;
    char* caller_sname;
    int block_level;
    struct map$2charphsFunph* funcs;
    struct map$2charphsGenericsFunph* generics_funcs;
    struct map$2charphsClassph* classes;
    struct map$2charphsClassModuleph* modules;
    struct map$2charphsTypeph* types;
    struct map$2charphsClassph* generics_classes;
    struct sModule* module;
    struct sType* type;
    struct list$1sRightValueObjectph* right_value_objects;
    struct sType* generics_type;
    struct list$1sTypeph* method_generics_types;
    struct list$1CVALUEph* stack;
    struct sType* come_function_result_type;
    struct sVarTable* lv_table;
    struct sVarTable* gv_table;
    _Bool no_comma;
    _Bool no_assign;
    _Bool no_label;
    _Bool last_statment_is_return;
    struct list$1charph* generics_type_names;
    struct list$1charph* method_generics_type_names;
    struct sType* impl_type;
    int current_stack_num;
    int num_method_block;
    struct sClass* current_stack_frame_struct;
    struct list$1sTypeph* param_types;
    struct list$1charph* param_names;
    _Bool define_struct;
    _Bool in_typedef;
    _Bool in_loop;
    char* output_file_name;
    struct sVarTable* current_loop_vtable;
    _Bool verbose;
    _Bool output_header_file;
    int num_current_stack;
    int num_source_files;
    int max_source_files;
    _Bool without_semicolon;
    _Bool writing_source_file_position;
    struct sType* function_result_type;
    _Bool in_class;
    struct map$2charphcharph* module_params;
    _Bool constructor_;
    struct sClass* defining_class;
    _Bool array_initializer;
    _Bool va_arg;
};
struct tuple2$2sTypephcharph
{
    struct sType* v1;
    char* v2;
};
struct tuple3$3sTypephcharphbool
{
    struct sType* v1;
    char* v2;
    _Bool v3;
};
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool
{
    struct list$1sTypeph* v1;
    struct list$1charph* v2;
    struct list$1charph* v3;
    _Bool v4;
};
struct tuple2$2sFunpcharph
{
    struct sFun* v1;
    char* v2;
};
struct sNothingNode
{
    int sline;
    char* sname;
};
struct sNewNode
{
    int sline;
    char* sname;
    struct sType* type;
};
struct sImplementsNode
{
    int sline;
    char* sname;
    struct sNode* obj_exp;
    struct sType* inf_type;
};
struct sTrueNode
{
    int sline;
    char* sname;
};
struct sFalseNode
{
    int sline;
    char* sname;
};
struct sSizeOfNode
{
    int sline;
    char* sname;
    struct sType* type;
};
struct sSizeOfExpNode
{
    int sline;
    char* sname;
    struct sNode* exp;
};
struct sTypeOfNode
{
    int sline;
    char* sname;
    struct sType* type;
};
struct sTypeOfExpNode
{
    int sline;
    char* sname;
    struct sNode* exp;
};
struct sDynamicTypeOfNode
{
    int sline;
    char* sname;
    struct sNode* exp;
};
struct sAlignOfNode
{
    int sline;
    char* sname;
    struct sType* type;
};
struct sAlignOfExpNode
{
    int sline;
    char* sname;
    struct sNode* exp;
};
struct sAlignOfNode2
{
    int sline;
    char* sname;
    struct sType* type;
};
struct sAlignOfExpNode2
{
    int sline;
    char* sname;
    struct sNode* exp;
};
struct sAlignAsNode
{
    int sline;
    char* sname;
    struct sType* type;
};
struct sAlignAsExpNode
{
    int sline;
    char* sname;
    struct sNode* exp;
};
struct sDeleteNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sForceDeleteNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sDelegateNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sShareNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sBorrowNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sCloneNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sDupeNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sDummyHeapNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sGCIncNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sGCDecNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sIsHeap
{
    int sline;
    char* sname;
    struct sType* type;
};
struct sIsPointer
{
    int sline;
    char* sname;
    struct sType* type;
};

// uniq global variable
// header function
void come_heap_init(int come_malloc, int come_debug, int come_gc);

void come_heap_final();

struct _IO_FILE* fopen(const char* anonymous_var_nameX1, const char* anonymous_var_nameX2);

struct _IO_FILE* freopen(const char* anonymous_var_nameX3, const char* anonymous_var_nameX4, struct _IO_FILE* anonymous_var_nameX5);

int fclose(struct _IO_FILE* anonymous_var_nameX6);

int remove(const char* anonymous_var_nameX7);

int rename(const char* anonymous_var_nameX8, const char* anonymous_var_nameX9);

int feof(struct _IO_FILE* anonymous_var_nameX10);

int ferror(struct _IO_FILE* anonymous_var_nameX11);

int fflush(struct _IO_FILE* anonymous_var_nameX12);

void clearerr(struct _IO_FILE* anonymous_var_nameX13);

int fseek(struct _IO_FILE* anonymous_var_nameX14, long anonymous_var_nameX15, int anonymous_var_nameX16);

long ftell(struct _IO_FILE* anonymous_var_nameX17);

void rewind(struct _IO_FILE* anonymous_var_nameX18);

int fgetpos(struct _IO_FILE* anonymous_var_nameX19, union _G_fpos64_t* anonymous_var_nameX20);

int fsetpos(struct _IO_FILE* anonymous_var_nameX21, const union _G_fpos64_t* anonymous_var_nameX22);

unsigned long int fread(void* anonymous_var_nameX23, unsigned long int anonymous_var_nameX24, unsigned long int anonymous_var_nameX25, struct _IO_FILE* anonymous_var_nameX26);

unsigned long int fwrite(const void* anonymous_var_nameX27, unsigned long int anonymous_var_nameX28, unsigned long int anonymous_var_nameX29, struct _IO_FILE* anonymous_var_nameX30);

int fgetc(struct _IO_FILE* anonymous_var_nameX31);

int getc(struct _IO_FILE* anonymous_var_nameX32);

int getchar();

int ungetc(int anonymous_var_nameX33, struct _IO_FILE* anonymous_var_nameX34);

int fputc(int anonymous_var_nameX35, struct _IO_FILE* anonymous_var_nameX36);

int putc(int anonymous_var_nameX37, struct _IO_FILE* anonymous_var_nameX38);

int putchar(int anonymous_var_nameX39);

char* fgets(char* anonymous_var_nameX40, int anonymous_var_nameX41, struct _IO_FILE* anonymous_var_nameX42);

int fputs(const char* anonymous_var_nameX43, struct _IO_FILE* anonymous_var_nameX44);

int puts(const char* anonymous_var_nameX45);

int printf(const char* anonymous_var_nameX46, ...);

int fprintf(struct _IO_FILE* anonymous_var_nameX47, const char* anonymous_var_nameX48, ...);

int sprintf(char* anonymous_var_nameX49, const char* anonymous_var_nameX50, ...);

int snprintf(char* anonymous_var_nameX51, unsigned long int anonymous_var_nameX52, const char* anonymous_var_nameX53, ...);

int vprintf(const char* anonymous_var_nameX54, va_list anonymous_var_nameX55);

int vfprintf(struct _IO_FILE* anonymous_var_nameX56, const char* anonymous_var_nameX57, va_list anonymous_var_nameX58);

int vsprintf(char* anonymous_var_nameX59, const char* anonymous_var_nameX60, va_list anonymous_var_nameX61);

int vsnprintf(char* anonymous_var_nameX62, unsigned long int anonymous_var_nameX63, const char* anonymous_var_nameX64, va_list anonymous_var_nameX65);

int scanf(const char* anonymous_var_nameX66, ...);

int fscanf(struct _IO_FILE* anonymous_var_nameX67, const char* anonymous_var_nameX68, ...);

int sscanf(const char* anonymous_var_nameX69, const char* anonymous_var_nameX70, ...);

int vscanf(const char* anonymous_var_nameX71, va_list anonymous_var_nameX72);

int vfscanf(struct _IO_FILE* anonymous_var_nameX73, const char* anonymous_var_nameX74, va_list anonymous_var_nameX75);

int vsscanf(const char* anonymous_var_nameX76, const char* anonymous_var_nameX77, va_list anonymous_var_nameX78);

void perror(const char* anonymous_var_nameX79);

int setvbuf(struct _IO_FILE* anonymous_var_nameX80, char* anonymous_var_nameX81, int anonymous_var_nameX82, unsigned long int anonymous_var_nameX83);

void setbuf(struct _IO_FILE* anonymous_var_nameX84, char* anonymous_var_nameX85);

char* tmpnam(char* anonymous_var_nameX86);

struct _IO_FILE* tmpfile();

struct _IO_FILE* fmemopen(void* anonymous_var_nameX87, unsigned long int anonymous_var_nameX88, const char* anonymous_var_nameX89);

struct _IO_FILE* open_memstream(char** anonymous_var_nameX90, unsigned long int* anonymous_var_nameX91);

struct _IO_FILE* fdopen(int anonymous_var_nameX92, const char* anonymous_var_nameX93);

struct _IO_FILE* popen(const char* anonymous_var_nameX94, const char* anonymous_var_nameX95);

int pclose(struct _IO_FILE* anonymous_var_nameX96);

int fileno(struct _IO_FILE* anonymous_var_nameX97);

int fseeko(struct _IO_FILE* anonymous_var_nameX98, long anonymous_var_nameX99, int anonymous_var_nameX100);

long ftello(struct _IO_FILE* anonymous_var_nameX101);

int dprintf(int anonymous_var_nameX102, const char* anonymous_var_nameX103, ...);

int vdprintf(int anonymous_var_nameX104, const char* anonymous_var_nameX105, va_list anonymous_var_nameX106);

void flockfile(struct _IO_FILE* anonymous_var_nameX107);

int ftrylockfile(struct _IO_FILE* anonymous_var_nameX108);

void funlockfile(struct _IO_FILE* anonymous_var_nameX109);

int getc_unlocked(struct _IO_FILE* anonymous_var_nameX110);

int getchar_unlocked();

int putc_unlocked(int anonymous_var_nameX111, struct _IO_FILE* anonymous_var_nameX112);

int putchar_unlocked(int anonymous_var_nameX113);

long getdelim(char** anonymous_var_nameX114, unsigned long int* anonymous_var_nameX115, int anonymous_var_nameX116, struct _IO_FILE* anonymous_var_nameX117);

long getline(char** anonymous_var_nameX118, unsigned long int* anonymous_var_nameX119, struct _IO_FILE* anonymous_var_nameX120);

int renameat(int anonymous_var_nameX121, const char* anonymous_var_nameX122, int anonymous_var_nameX123, const char* anonymous_var_nameX124);

char* ctermid(char* anonymous_var_nameX125);

char* tempnam(const char* anonymous_var_nameX126, const char* anonymous_var_nameX127);

char* cuserid(char* anonymous_var_nameX128);

void setlinebuf(struct _IO_FILE* anonymous_var_nameX129);

void setbuffer(struct _IO_FILE* anonymous_var_nameX130, char* anonymous_var_nameX131, unsigned long int anonymous_var_nameX132);

int fgetc_unlocked(struct _IO_FILE* anonymous_var_nameX133);

int fputc_unlocked(int anonymous_var_nameX134, struct _IO_FILE* anonymous_var_nameX135);

int fflush_unlocked(struct _IO_FILE* anonymous_var_nameX136);

unsigned long int fread_unlocked(void* anonymous_var_nameX137, unsigned long int anonymous_var_nameX138, unsigned long int anonymous_var_nameX139, struct _IO_FILE* anonymous_var_nameX140);

unsigned long int fwrite_unlocked(const void* anonymous_var_nameX141, unsigned long int anonymous_var_nameX142, unsigned long int anonymous_var_nameX143, struct _IO_FILE* anonymous_var_nameX144);

void clearerr_unlocked(struct _IO_FILE* anonymous_var_nameX145);

int feof_unlocked(struct _IO_FILE* anonymous_var_nameX146);

int ferror_unlocked(struct _IO_FILE* anonymous_var_nameX147);

int fileno_unlocked(struct _IO_FILE* anonymous_var_nameX148);

int getw(struct _IO_FILE* anonymous_var_nameX149);

int putw(int anonymous_var_nameX150, struct _IO_FILE* anonymous_var_nameX151);

char* fgetln(struct _IO_FILE* anonymous_var_nameX152, unsigned long int* anonymous_var_nameX153);

int asprintf(char** anonymous_var_nameX154, const char* anonymous_var_nameX155, ...);

int vasprintf(char** anonymous_var_nameX156, const char* anonymous_var_nameX157, va_list anonymous_var_nameX158);

char* fgets_unlocked(char* anonymous_var_nameX159, int anonymous_var_nameX160, struct _IO_FILE* anonymous_var_nameX161);

int fputs_unlocked(const char* anonymous_var_nameX162, struct _IO_FILE* anonymous_var_nameX163);

struct _IO_FILE* fopencookie(void* anonymous_var_nameX174, const char* anonymous_var_nameX175, struct _IO_cookie_io_functions_t anonymous_var_nameX176);

int atoi(const char* anonymous_var_nameX177);

long atol(const char* anonymous_var_nameX178);

long long atoll(const char* anonymous_var_nameX179);

double atof(const char* anonymous_var_nameX180);

float strtof(const char* anonymous_var_nameX181, char** anonymous_var_nameX182);

double strtod(const char* anonymous_var_nameX183, char** anonymous_var_nameX184);

long double strtold(const char* anonymous_var_nameX185, char** anonymous_var_nameX186);

long strtol(const char* anonymous_var_nameX187, char** anonymous_var_nameX188, int anonymous_var_nameX189);

unsigned long int strtoul(const char* anonymous_var_nameX190, char** anonymous_var_nameX191, int anonymous_var_nameX192);

long long strtoll(const char* anonymous_var_nameX193, char** anonymous_var_nameX194, int anonymous_var_nameX195);

unsigned long long strtoull(const char* anonymous_var_nameX196, char** anonymous_var_nameX197, int anonymous_var_nameX198);

int rand();

void srand(unsigned int anonymous_var_nameX199);

void* malloc(unsigned long int anonymous_var_nameX200);

void* calloc(unsigned long int anonymous_var_nameX201, unsigned long int anonymous_var_nameX202);

void* realloc(void* anonymous_var_nameX203, unsigned long int anonymous_var_nameX204);

void free(void* anonymous_var_nameX205);

void* aligned_alloc(unsigned long int anonymous_var_nameX206, unsigned long int anonymous_var_nameX207);

void abort();

int atexit(void (*anonymous_lambda_var_nameZ1)());

void exit(int anonymous_var_nameX208);

void _Exit(int anonymous_var_nameX209);

int at_quick_exit(void (*anonymous_lambda_var_nameZ2)());

void quick_exit(int anonymous_var_nameX210);

char* getenv(const char* anonymous_var_nameX211);

int system(const char* anonymous_var_nameX212);

void* bsearch(const void* anonymous_var_nameX213, const void* anonymous_var_nameX214, unsigned long int anonymous_var_nameX215, unsigned long int anonymous_var_nameX216, int (*anonymous_lambda_var_nameZ3)(const void*,const void*));

void qsort(void* anonymous_var_nameX219, unsigned long int anonymous_var_nameX220, unsigned long int anonymous_var_nameX221, int (*anonymous_lambda_var_nameZ4)(const void*,const void*));

int abs(int anonymous_var_nameX224);

long labs(long anonymous_var_nameX225);

long long llabs(long long anonymous_var_nameX226);

struct anonymous_typeX1 div(int anonymous_var_nameX227, int anonymous_var_nameX228);

struct anonymous_typeX2 ldiv(long anonymous_var_nameX229, long anonymous_var_nameX230);

struct anonymous_typeX3 lldiv(long long anonymous_var_nameX231, long long anonymous_var_nameX232);

int mblen(const char* anonymous_var_nameX233, unsigned long int anonymous_var_nameX234);

int mbtowc(unsigned int* anonymous_var_nameX235, const char* anonymous_var_nameX236, unsigned long int anonymous_var_nameX237);

int wctomb(char* anonymous_var_nameX238, unsigned int anonymous_var_nameX239);

unsigned long int mbstowcs(unsigned int* anonymous_var_nameX240, const char* anonymous_var_nameX241, unsigned long int anonymous_var_nameX242);

unsigned long int wcstombs(char* anonymous_var_nameX243, const unsigned int* anonymous_var_nameX244, unsigned long int anonymous_var_nameX245);

unsigned long int __ctype_get_mb_cur_max();

int posix_memalign(void** anonymous_var_nameX246, unsigned long int anonymous_var_nameX247, unsigned long int anonymous_var_nameX248);

int setenv(const char* anonymous_var_nameX249, const char* anonymous_var_nameX250, int anonymous_var_nameX251);

int unsetenv(const char* anonymous_var_nameX252);

int mkstemp(char* anonymous_var_nameX253);

int mkostemp(char* anonymous_var_nameX254, int anonymous_var_nameX255);

char* mkdtemp(char* anonymous_var_nameX256);

int getsubopt(char** anonymous_var_nameX257, char** anonymous_var_nameX258, char** anonymous_var_nameX259);

int rand_r(unsigned int* anonymous_var_nameX260);

char* realpath(const char* anonymous_var_nameX261, char* anonymous_var_nameX262);

long int random();

void srandom(unsigned int anonymous_var_nameX263);

char* initstate(unsigned int anonymous_var_nameX264, char* anonymous_var_nameX265, unsigned long int anonymous_var_nameX266);

char* setstate(char* anonymous_var_nameX267);

int putenv(char* anonymous_var_nameX268);

int posix_openpt(int anonymous_var_nameX269);

int grantpt(int anonymous_var_nameX270);

int unlockpt(int anonymous_var_nameX271);

char* ptsname(int anonymous_var_nameX272);

char* l64a(long anonymous_var_nameX273);

long a64l(const char* anonymous_var_nameX274);

void setkey(const char* anonymous_var_nameX275);

double drand48();

double erand48(unsigned short int anonymous_var_nameX276[3]);

long int lrand48();

long int nrand48(unsigned short int anonymous_var_nameX277[3]);

long mrand48();

long jrand48(unsigned short int anonymous_var_nameX278[3]);

void srand48(long anonymous_var_nameX279);

unsigned short int* seed48(unsigned short int anonymous_var_nameX280[3]);

void lcong48(unsigned short int anonymous_var_nameX281[7]);

void* alloca(unsigned long int anonymous_var_nameX282);

char* mktemp(char* anonymous_var_nameX283);

int mkstemps(char* anonymous_var_nameX284, int anonymous_var_nameX285);

int mkostemps(char* anonymous_var_nameX286, int anonymous_var_nameX287, int anonymous_var_nameX288);

void* valloc(unsigned long int anonymous_var_nameX289);

void* memalign(unsigned long int anonymous_var_nameX290, unsigned long int anonymous_var_nameX291);

int getloadavg(double* anonymous_var_nameX292, int anonymous_var_nameX293);

int clearenv();

void* reallocarray(void* anonymous_var_nameX294, unsigned long int anonymous_var_nameX295, unsigned long int anonymous_var_nameX296);

void qsort_r(void* anonymous_var_nameX297, unsigned long int anonymous_var_nameX298, unsigned long int anonymous_var_nameX299, int (*anonymous_lambda_var_nameZ5)(const void*,const void*,void*), void* anonymous_var_nameX303);

int ptsname_r(int anonymous_var_nameX304, char* anonymous_var_nameX305, unsigned long int anonymous_var_nameX306);

char* ecvt(double anonymous_var_nameX307, int anonymous_var_nameX308, int* anonymous_var_nameX309, int* anonymous_var_nameX310);

char* fcvt(double anonymous_var_nameX311, int anonymous_var_nameX312, int* anonymous_var_nameX313, int* anonymous_var_nameX314);

char* gcvt(double anonymous_var_nameX315, int anonymous_var_nameX316, char* anonymous_var_nameX317);

char* secure_getenv(const char* anonymous_var_nameX318);

float strtof_l(const char* anonymous_var_nameX319, char** anonymous_var_nameX320, struct __locale_struct* anonymous_var_nameX321);

double strtod_l(const char* anonymous_var_nameX322, char** anonymous_var_nameX323, struct __locale_struct* anonymous_var_nameX324);

long double strtold_l(const char* anonymous_var_nameX325, char** anonymous_var_nameX326, struct __locale_struct* anonymous_var_nameX327);

void* memcpy(void* anonymous_var_nameX328, const void* anonymous_var_nameX329, unsigned long int anonymous_var_nameX330);

void* memmove(void* anonymous_var_nameX331, const void* anonymous_var_nameX332, unsigned long int anonymous_var_nameX333);

void* memset(void* anonymous_var_nameX334, int anonymous_var_nameX335, unsigned long int anonymous_var_nameX336);

int memcmp(const void* anonymous_var_nameX337, const void* anonymous_var_nameX338, unsigned long int anonymous_var_nameX339);

void* memchr(const void* anonymous_var_nameX340, int anonymous_var_nameX341, unsigned long int anonymous_var_nameX342);

char* strcpy(char* anonymous_var_nameX343, const char* anonymous_var_nameX344);

char* strncpy(char* anonymous_var_nameX345, const char* anonymous_var_nameX346, unsigned long int anonymous_var_nameX347);

char* strcat(char* anonymous_var_nameX348, const char* anonymous_var_nameX349);

char* strncat(char* anonymous_var_nameX350, const char* anonymous_var_nameX351, unsigned long int anonymous_var_nameX352);

int strcmp(const char* anonymous_var_nameX353, const char* anonymous_var_nameX354);

int strncmp(const char* anonymous_var_nameX355, const char* anonymous_var_nameX356, unsigned long int anonymous_var_nameX357);

int strcoll(const char* anonymous_var_nameX358, const char* anonymous_var_nameX359);

unsigned long int strxfrm(char* anonymous_var_nameX360, const char* anonymous_var_nameX361, unsigned long int anonymous_var_nameX362);

char* strchr(const char* anonymous_var_nameX363, int anonymous_var_nameX364);

char* strrchr(const char* anonymous_var_nameX365, int anonymous_var_nameX366);

unsigned long int strcspn(const char* anonymous_var_nameX367, const char* anonymous_var_nameX368);

unsigned long int strspn(const char* anonymous_var_nameX369, const char* anonymous_var_nameX370);

char* strpbrk(const char* anonymous_var_nameX371, const char* anonymous_var_nameX372);

char* strstr(const char* anonymous_var_nameX373, const char* anonymous_var_nameX374);

char* strtok(char* anonymous_var_nameX375, const char* anonymous_var_nameX376);

unsigned long int strlen(const char* anonymous_var_nameX377);

char* strerror(int anonymous_var_nameX378);

int bcmp(const void* anonymous_var_nameX379, const void* anonymous_var_nameX380, unsigned long int anonymous_var_nameX381);

void bcopy(const void* anonymous_var_nameX382, void* anonymous_var_nameX383, unsigned long int anonymous_var_nameX384);

void bzero(void* anonymous_var_nameX385, unsigned long int anonymous_var_nameX386);

char* index(const char* anonymous_var_nameX387, int anonymous_var_nameX388);

char* rindex(const char* anonymous_var_nameX389, int anonymous_var_nameX390);

int ffs(int anonymous_var_nameX391);

int ffsl(long anonymous_var_nameX392);

int ffsll(long long anonymous_var_nameX393);

int strcasecmp(const char* anonymous_var_nameX394, const char* anonymous_var_nameX395);

int strncasecmp(const char* anonymous_var_nameX396, const char* anonymous_var_nameX397, unsigned long int anonymous_var_nameX398);

int strcasecmp_l(const char* anonymous_var_nameX399, const char* anonymous_var_nameX400, struct __locale_struct* anonymous_var_nameX401);

int strncasecmp_l(const char* anonymous_var_nameX402, const char* anonymous_var_nameX403, unsigned long int anonymous_var_nameX404, struct __locale_struct* anonymous_var_nameX405);

char* strtok_r(char* anonymous_var_nameX406, const char* anonymous_var_nameX407, char** anonymous_var_nameX408);

int strerror_r(int anonymous_var_nameX409, char* anonymous_var_nameX410, unsigned long int anonymous_var_nameX411);

char* stpcpy(char* anonymous_var_nameX412, const char* anonymous_var_nameX413);

char* stpncpy(char* anonymous_var_nameX414, const char* anonymous_var_nameX415, unsigned long int anonymous_var_nameX416);

unsigned long int strnlen(const char* anonymous_var_nameX417, unsigned long int anonymous_var_nameX418);

char* strdup(const char* anonymous_var_nameX419);

char* strndup(const char* anonymous_var_nameX420, unsigned long int anonymous_var_nameX421);

char* strsignal(int anonymous_var_nameX422);

char* strerror_l(int anonymous_var_nameX423, struct __locale_struct* anonymous_var_nameX424);

int strcoll_l(const char* anonymous_var_nameX425, const char* anonymous_var_nameX426, struct __locale_struct* anonymous_var_nameX427);

unsigned long int strxfrm_l(char* anonymous_var_nameX428, const char* anonymous_var_nameX429, unsigned long int anonymous_var_nameX430, struct __locale_struct* anonymous_var_nameX431);

void* memmem(const void* anonymous_var_nameX432, unsigned long int anonymous_var_nameX433, const void* anonymous_var_nameX434, unsigned long int anonymous_var_nameX435);

void* memccpy(void* anonymous_var_nameX436, const void* anonymous_var_nameX437, int anonymous_var_nameX438, unsigned long int anonymous_var_nameX439);

char* strsep(char** anonymous_var_nameX440, const char* anonymous_var_nameX441);

unsigned long int strlcat(char* anonymous_var_nameX442, const char* anonymous_var_nameX443, unsigned long int anonymous_var_nameX444);

unsigned long int strlcpy(char* anonymous_var_nameX445, const char* anonymous_var_nameX446, unsigned long int anonymous_var_nameX447);

void explicit_bzero(void* anonymous_var_nameX448, unsigned long int anonymous_var_nameX449);

int strverscmp(const char* anonymous_var_nameX450, const char* anonymous_var_nameX451);

char* strchrnul(const char* anonymous_var_nameX452, int anonymous_var_nameX453);

char* strcasestr(const char* anonymous_var_nameX454, const char* anonymous_var_nameX455);

void* memrchr(const void* anonymous_var_nameX456, int anonymous_var_nameX457, unsigned long int anonymous_var_nameX458);

void* mempcpy(void* anonymous_var_nameX459, const void* anonymous_var_nameX460, unsigned long int anonymous_var_nameX461);

char* basename();

void come_push_stackframe(char* sname, int sline, int id);

void come_pop_stackframe();

void stackframe();

void come_save_stackframe(char* sname, int sline);

void* come_null_check(void* mem, char* sname, int sline, int id);

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*));

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*));

_Bool bool_value(_Bool self, void* parent, void (*block)(void*));

int int_expect(int self, void* parent, void (*block)(void*));

int int_catch(int self, void* parent, void (*block)(void*));

int int_value(int self, void* parent, void (*block)(void*));

int int_except(int self, void* parent, void (*block)(void*));

_Bool bool_except(_Bool self, void* parent, void (*block)(void*));

void xassert(char* msg, _Bool test);

void* come_calloc(unsigned long int count, unsigned long int size, char* sname, int sline, char* class_name);

void* come_increment_ref_count(void* mem);

void* come_print_ref_count(void* mem);

void* come_dynamic_typeof(void* mem);

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);

void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);

void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);

void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);

void come_free_object(void* mem);

void come_free(void* mem);

void* come_memdup(void* block, char* sname, int sline, char* class_name);

char* __builtin_string(char* str);

struct buffer* buffer_initialize(struct buffer* self);

void buffer_finalize(struct buffer* self);

void buffer_force_finalize(struct buffer* self);

struct buffer* buffer_clone(struct buffer* self);

int buffer_length(struct buffer* self);

void buffer_reset(struct buffer* self);

void buffer_trim(struct buffer* self, int len);

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long int size);

struct buffer* buffer_append_char(struct buffer* self, char c);

struct buffer* buffer_append_str(struct buffer* self, char* str);

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* str);

struct buffer* buffer_append_int(struct buffer* self, int value);

struct buffer* buffer_append_long(struct buffer* self, long value);

struct buffer* buffer_append_short(struct buffer* self, short short value);

struct buffer* buffer_alignment(struct buffer* self);

int buffer_compare(struct buffer* left, struct buffer* right);

struct buffer* string_to_buffer(char* self);

struct buffer* charp_to_buffer(char* self);

char* buffer_to_string(struct buffer* self);

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self);
static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self);
static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self);
static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self);
static struct smart_pointer$1char* smart_pointer$1char_initialize(struct smart_pointer$1char* self, void* memory, int size);
static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size);
static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size);
static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size);
static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size);
static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self);
static struct smart_pointer$1double* smart_pointer$1double_initialize(struct smart_pointer$1double* self, void* memory, int size);
static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self);
static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values);
static struct list$1char* list$1char_push_back(struct list$1char* self, char item);
static void list_item$1charp_finalize(struct list_item$1char* self);
static void list$1charp_finalize(struct list$1char* self);
static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values);
static struct list$1short* list$1short_push_back(struct list$1short* self, short short item);
static void list_item$1shortp_finalize(struct list_item$1short* self);
static void list$1shortp_finalize(struct list$1short* self);
static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values);
static struct list$1int* list$1int_push_back(struct list$1int* self, int item);
static void list_item$1intp_finalize(struct list_item$1int* self);
static void list$1intp_finalize(struct list$1int* self);
static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values);
static struct list$1long* list$1long_push_back(struct list$1long* self, long item);
static void list_item$1longp_finalize(struct list_item$1long* self);
static void list$1longp_finalize(struct list$1long* self);
static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values);
static struct list$1float* list$1float_push_back(struct list$1float* self, float item);
static void list_item$1floatp_finalize(struct list_item$1float* self);
static void list$1floatp_finalize(struct list$1float* self);
static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values);
static struct list$1double* list$1double_push_back(struct list$1double* self, double item);
static void list_item$1doublep_finalize(struct list_item$1double* self);
static void list$1doublep_finalize(struct list$1double* self);
_Bool bool_equals(_Bool self, _Bool right);

_Bool char_equals(char self, char right);

_Bool int_equals(int self, int right);

_Bool short_equals(short short self, short short right);

_Bool long_equals(long self, long right);

_Bool size_t_equals(long self, long right);

_Bool float_equals(float self, float right);

_Bool double_equals(double self, double right);

_Bool charp_equals(char* self, char* right);

_Bool string_equals(char* self, char* right);

_Bool string_operator_equals(char* self, char* right);

_Bool charp_operator_equals(char* self, char* right);

_Bool string_operator_not_equals(char* self, char* right);

_Bool charp_operator_not_equals(char* self, char* right);

char* charp_operator_add(char* self, char* right);

char* string_operator_add(char* self, char* right);

char* charp_operator_mult(char* self, int right);

char* string_operator_mult(char* self, int right);

unsigned int bool_get_hash_key(_Bool value);

unsigned int char_get_hash_key(char value);

unsigned int short_get_hash_key(short short value);

unsigned int int_get_hash_key(int value);

unsigned int long_get_hash_key(long value);

unsigned int size_t_get_hash_key(long value);

unsigned int float_get_hash_key(float value);

unsigned int double_get_hash_key(double value);

unsigned int string_get_hash_key(char* value);

unsigned int charp_get_hash_key(char* value);

_Bool bool_clone(char self);

char char_clone(char self);

short int short_clone(short short self);

int int_clone(int self);

long int long_clone(long self);

unsigned long int size_t_clone(long self);

double double_clone(double self);

float float_clone(float self);

char* charp_clone(char* self);

char* string_clone(char* self);

_Bool xiswascii(unsigned int c);

_Bool xiswalpha(unsigned int c);

_Bool xiswblank(unsigned int c);

_Bool xiswdigit(unsigned int c);

_Bool xiswalnum(unsigned int c);

_Bool xisblank(char c);

_Bool xisdigit(char c);

_Bool xisalnum(char c);

_Bool xisascii(char c);

_Bool xisalpha(char c);

int string_length(char* str);

int charp_length(char* str);

char* charp_substring(char* str, int head, int tail);

char* string_substring(char* str, int head, int tail);

char* string_operator_load_range_element(char* str, int head, int tail);

char* charp_operator_load_range_element(char* str, int head, int tail);

char* charp_reverse(char* str);

char* string_reverse(char* str);

char* xsprintf(char* msg, ...);

char* charp_delete(char* str, int head, int tail);

char* string_delete(char* str, int head, int tail);

struct list$1charph* string_split_char(char* self, char c);

struct list$1charph* charp_split_char(char* self, char c);

char* xrealpath(char* path);

char* xbasename(char* path);

char* xextname(char* path);

char* xdirname(char* path);

char* xnoextname(char* path);

char* bool_to_string(_Bool self);

char* char_to_string(char self);

char* short_to_string(short short self);

char* int_to_string(int self);

char* long_to_string(long self);

char* size_t_to_string(unsigned long int self);

char* float_to_string(float self);

char* double_to_string(double self);

char* string_to_string(char* self);

char* charp_to_string(char* self);

int bool_compare(_Bool left, _Bool right);

int char_compare(char left, char right);

int short_compare(short short left, short short right);

int int_compare(int left, int right);

int long_compare(long left, long right);

int float_compare(float left, float right);

int double_compare(float left, float right);

int size_t_compare(long left, long right);

int string_compare(char* left, char* right);

int charp_compare(char* left, char* right);

int FILE_write(struct _IO_FILE* f, char* str);

char* FILE_read(struct _IO_FILE* f);

int FILE_fclose(struct _IO_FILE* f);

int* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);

struct list$1charph* FILE_readlines(struct _IO_FILE* f);

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));

int string_write(char* self, char* file_name, _Bool append);

int charp_write(char* self, char* file_name, _Bool append);

char* charp_read(char* file_name);

char* string_read(char* file_name);

char* charp_puts(char* self);

char* string_puts(char* self);

int int_printf(int self, char* msg);

char* string_printf(char* self, ...);

char* charp_printf(char* self, ...);

char* charp_print(char* self);

void int_times(int self, void* parent, void (*block)(void*,int));

struct integer* integer_initialize(struct integer* self, long value);

struct integer* char_to_integer(char self);

struct integer* short_to_integer(short short self);

struct integer* int_to_integer(int self);

struct integer* long_to_integer(long self);

int integer_to_int(struct integer* self);

_Bool integer_equals(struct integer* self, struct integer* right);

int integer_compare(struct integer* self, struct integer* right);

_Bool integer_operator_equals(struct integer* self, struct integer* right);

_Bool integer_operator_not_equals(struct integer* self, struct integer* right);

struct integer* integer_operator_add(struct integer* left, struct integer* right);

struct integer* integer_operator_sub(struct integer* left, struct integer* right);

struct integer* integer_operator_mult(struct integer* left, struct integer* right);

struct integer* integer_operator_div(struct integer* left, struct integer* right);

struct integer* integer_operator_mod(struct integer* left, struct integer* right);

struct integer* integer_operator_lshift(struct integer* left, struct integer* right);

struct integer* integer_operator_rshift(struct integer* left, struct integer* right);

struct integer* integer_operator_gteq(struct integer* left, struct integer* right);

struct integer* integer_operator_lteq(struct integer* left, struct integer* right);

struct integer* integer_operator_lt(struct integer* left, struct integer* right);

struct integer* integer_operator_gt(struct integer* left, struct integer* right);

struct integer* integer_operator_and(struct integer* left, struct integer* right);

struct integer* integer_operator_xor(struct integer* left, struct integer* right);

struct integer* integer_operator_or(struct integer* left, struct integer* right);

struct integer* integer_operator_andand(struct integer* left, struct integer* right);

struct integer* integer_operator_oror(struct integer* left, struct integer* right);

int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);

char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);

int come_main_v1(int argc, char** argv);

struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);

_Bool node_compile(struct sNode* node, struct sInfo* info);

int come_main_v2(int argc, char** argv);

void err_msg(struct sInfo* info, char* msg, ...);

_Bool sNodeBase_terminated(struct sNodeBase* self);

int transpile_v2(struct sInfo* info);

_Bool output_source_file_v2(struct sInfo* info);

struct sModule* sModule_initialize(struct sModule* self);

struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);

void sVarTable_finalize(struct sVarTable* self);

struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);

struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);

struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info);

char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info);

char* make_come_type_name_string(struct sType* type, struct sInfo* info);

char* make_come_type_name_string_no_solved(struct sType* type, struct sInfo* info);

char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, struct sInfo* info);

char* header_function(struct sFun* fun, struct sInfo* info);

int transpile_v3(struct sInfo* info);

_Bool output_source_file_v3(struct sInfo* info);

void show_type(struct sType* type, struct sInfo* info);

char* create_generics_name(struct sType* generics_type, struct sInfo* info);

void add_last_code_to_source(struct sInfo* info);

void add_come_code_at_function_head(struct sInfo* info, char* code, ...);

void add_come_code_at_come_header(struct sInfo* info, const char* msg, ...);

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...);

void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...);

void add_come_code_at_source_head2(struct sInfo* info, const char* msg, ...);

void add_come_code(struct sInfo* info, const char* msg, ...);

void add_come_last_code(struct sInfo* info, const char* msg, ...);

void add_come_last_code2(struct sInfo* info, const char* msg, ...);

void add_come_last_code3(struct sInfo* info, const char* msg, ...);

void add_last_code_to_source_with_comma(struct sInfo* info);

void dec_stack_ptr(int value, struct sInfo* info);

struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);

char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);

void transpiler_clear_last_code(struct sInfo* info);

_Bool output_header_file(struct sInfo* info);

struct sType* solve_method_generics(struct sType* type, struct sInfo* info);

_Bool existance_free_right_value_objects(struct sInfo* info);

void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info);

char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info);

_Bool create_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);

struct sVar* get_variable_from_table(struct sVarTable* table, char* name);

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);

void free_objects_on_break(struct sInfo* info);

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);

struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info);

void free_right_value_objects(struct sInfo* info, _Bool comma);

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);

_Bool is_right_values(int right_value_num, struct sInfo* info);

int get_right_value_id_from_obj(char* obj);

void remove_object_from_right_values(int right_value_num, struct sInfo* info);

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_);

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);

_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);

_Bool strmemcmp(char* p, char* p2);

void caller_begin(struct sInfo* info);

void caller_end(struct sInfo* info);

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);

struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);

void transpile_toplevel(_Bool block, struct sInfo* info);

void skip_pointer_attribute(struct sInfo* info);

struct sNode* parse_normal_block(struct sInfo* info);

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, struct sInfo* info);

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);

char* parse_attribute(struct sInfo* info);

struct sNode* get_number(_Bool minus, struct sInfo* info);

struct sNode* get_oct_number(struct sInfo* info);

struct sNode* get_hex_number(_Bool minus, struct sInfo* info);

struct sNode* create_int_node(int value, struct sInfo* info);

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

char* skip_block(struct sInfo* info);

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);

_Bool is_type_name(char* buf, struct sInfo* info);

_Bool parsecmp(char* str, struct sInfo* info);

char* parse_word(struct sInfo* info);

char* backtrace_parse_word(struct sInfo* info);

void skip_spaces_and_lf(struct sInfo* info);

int expected_next_character(char c, struct sInfo* info);

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last);

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block);

void arrange_stack(struct sInfo* info, int top);

struct sNode* parse_function(struct sInfo* info);

struct sNode* expression_v5(struct sInfo* info);

struct sNode* statment(struct sInfo* info);

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* expression_node_v1(struct sInfo* info);

struct sNode* expression_node_v99(struct sInfo* info);

struct sNode* expression_node_v98(struct sInfo* info);

struct sNode* expression_node_v97(struct sInfo* info);

int transpile_v5(struct sInfo* info);

void parse_sharp_v5(struct sInfo* info);

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

struct sNode* expression_node_v96(struct sInfo* info);

struct sNode* parse_tuple(struct sInfo* info);

struct sNode* parse_array_initializer(struct sInfo* info);

struct sNode* parse_global_variable(struct sInfo* info);

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info);

struct sNode* load_var(char* name, struct sInfo* info);

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);

struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);

struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);

struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);

struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);

struct sNode* string_node_v9(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* string_node_v10(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* string_node_v12(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* create_null_node(struct sInfo* info);

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);

struct sNode* expression_v13(struct sInfo* info);

struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_struct(char* type_name, struct sInfo* info);

char* get_none_generics_name(char* class_name);

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);

void output_struct(struct sClass* klass, struct sInfo* info);

struct sNode* string_node_v15(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_union(char* type_name, struct sInfo* info);

struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_enum(char* type_name, struct sInfo* info);

struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* string_node_v17(char* buf, char* head, int head_sline, struct sInfo* info);

_Bool compiletime_get_exception_value(struct sInfo* info);

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);

struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);

struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* create_object(struct sType* type, struct sInfo* info);

struct sNode* create_true_object(struct sInfo* info);

struct sNode* create_false_object(struct sInfo* info);

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info);

char* sNothingNode_kind(struct sNothingNode* self);

_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info);

static void sNodeBase_finalize(struct sNodeBase* self);
struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct sInfo* info);

char* sNewNode_kind(struct sNewNode* self);

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info);

static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info);

char* sImplementsNode_kind(struct sImplementsNode* self);

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info);

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_operator_load_element(struct list$1tuple2$2charphsTypephph* self, int position);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info);

char* sTrueNode_kind(struct sTrueNode* self);

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info);

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info);

char* sFalseNode_kind(struct sFalseNode* self);

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info);

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info);

char* sSizeOfNode_kind(struct sSizeOfNode* self);

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info);

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info);

char* sSizeOfExpNode_kind(struct sSizeOfExpNode* self);

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info);

struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info);

char* sTypeOfNode_kind(struct sTypeOfNode* self);

_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info);

struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info);

char* sTypeOfExpNode_kind(struct sTypeOfExpNode* self);

_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info);

struct sDynamicTypeOfNode* sDynamicTypeOfNode_initialize(struct sDynamicTypeOfNode* self, struct sNode* exp, struct sInfo* info);

char* sDynamicTypeOfNode_kind(struct sDynamicTypeOfNode* self);

_Bool sDynamicTypeOfNode_compile(struct sDynamicTypeOfNode* self, struct sInfo* info);

static void sDynamicTypeOfNode_finalize(struct sDynamicTypeOfNode* self);
struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info);

char* sAlignOfNode_kind(struct sAlignOfNode* self);

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info);

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info);

char* sAlignOfExpNode_kind(struct sAlignOfExpNode* self);

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info);

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info);

char* sAlignOfNode2_kind(struct sAlignOfNode2* self);

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info);

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info);

char* sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self);

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info);

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info);

char* sAlignAsNode_kind(struct sAlignAsNode* self);

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info);

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info);

char* sAlignAsExpNode_kind(struct sAlignAsExpNode* self);

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info);

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info);

char* sDeleteNode_kind(struct sDeleteNode* self);

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info);

struct sForceDeleteNode* sForceDeleteNode_initialize(struct sForceDeleteNode* self, struct sNode* node, struct sInfo* info);

char* sForceDeleteNode_kind(struct sForceDeleteNode* self);

_Bool sForceDeleteNode_compile(struct sForceDeleteNode* self, struct sInfo* info);

struct sDelegateNode* sDelegateNode_initialize(struct sDelegateNode* self, struct sNode* node, struct sInfo* info);

char* sDelegateNode_kind(struct sDelegateNode* self);

_Bool sDelegateNode_compile(struct sDelegateNode* self, struct sInfo* info);

struct sShareNode* sShareNode_initialize(struct sShareNode* self, struct sNode* node, struct sInfo* info);

char* sShareNode_kind(struct sShareNode* self);

_Bool sShareNode_compile(struct sShareNode* self, struct sInfo* info);

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info);

char* sBorrowNode_kind(struct sBorrowNode* self);

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info);

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info);

char* sCloneNode_kind(struct sCloneNode* self);

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info);

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info);

char* sDupeNode_kind(struct sDupeNode* self);

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info);

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info);

char* sDummyHeapNode_kind(struct sDummyHeapNode* self);

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info);

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info);

char* sGCIncNode_kind(struct sGCIncNode* self);

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info);

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info);

char* sGCDecNode_kind(struct sGCDecNode* self);

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info);

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info);

char* sIsHeap_kind(struct sIsHeap* self);

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info);

struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info);

char* sIsPointer_kind(struct sIsPointer* self);

_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo* info);

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void sNewNode_finalize(struct sNewNode* self);
static struct sNewNode* sNewNode_clone(struct sNewNode* self);
static void sTrueNode_finalize(struct sTrueNode* self);
static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self);
static void sFalseNode_finalize(struct sFalseNode* self);
static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self);
static void sDeleteNode_finalize(struct sDeleteNode* self);
static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self);
static void sForceDeleteNode_finalize(struct sForceDeleteNode* self);
static struct sForceDeleteNode* sForceDeleteNode_clone(struct sForceDeleteNode* self);
static void sBorrowNode_finalize(struct sBorrowNode* self);
static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self);
static void sDelegateNode_finalize(struct sDelegateNode* self);
static struct sDelegateNode* sDelegateNode_clone(struct sDelegateNode* self);
static void sShareNode_finalize(struct sShareNode* self);
static struct sShareNode* sShareNode_clone(struct sShareNode* self);
static void sCloneNode_finalize(struct sCloneNode* self);
static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self);
static void sDupeNode_finalize(struct sDupeNode* self);
static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self);
static void sDummyHeapNode_finalize(struct sDummyHeapNode* self);
static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self);
static void sGCIncNode_finalize(struct sGCIncNode* self);
static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self);
static void sGCDecNode_finalize(struct sGCDecNode* self);
static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self);
static void sIsHeap_finalize(struct sIsHeap* self);
static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self);
static void sIsPointer_finalize(struct sIsPointer* self);
static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self);
static void sSizeOfNode_finalize(struct sSizeOfNode* self);
static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self);
static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self);
static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self);
static void sTypeOfNode_finalize(struct sTypeOfNode* self);
static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self);
static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self);
static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self);
static void sAlignOfNode_finalize(struct sAlignOfNode* self);
static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self);
static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self);
static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self);
static void sAlignOfNode2_finalize(struct sAlignOfNode2* self);
static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self);
static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self);
static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self);
static void sAlignAsNode_finalize(struct sAlignAsNode* self);
static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self);
static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self);
static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);

static void sNothingNode_finalize(struct sNothingNode* self);
static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);

static void sImplementsNode_finalize(struct sImplementsNode* self);
static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self);
// inline function
static inline _Bool die(char* msg){
void* __result_obj__;
_Bool __result1__;
memset(&__result_obj__, 0, sizeof(void*));
    (come_push_stackframe("./neo-c.h", 51,0),perror(msg),come_pop_stackframe());
    (come_push_stackframe("./neo-c.h", 52,1),stackframe(),come_pop_stackframe());
    (come_push_stackframe("./neo-c.h", 53,2),exit(4),come_pop_stackframe());
    __result1__ = (_Bool)0;
    return __result1__;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long int len){
void* __result_obj__;
void* right_value0;
void* right_value1;
struct buffer* __exception_result_var_b1;
struct buffer* result_0;
struct buffer* __exception_result_var_b2;
struct buffer* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
right_value0 = (void*)0;
right_value1 = (void*)0;
memset(&result_0, 0, sizeof(struct buffer*));
    result_0=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1903, 4),__exception_result_var_b1=((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1903, "buffer"))), "./neo-c.h", 1903, 3)))))), come_pop_stackframe(), __exception_result_var_b1));
    come_call_finalizer3(right_value0,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value1,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("./neo-c.h", 1904, 7),__exception_result_var_b2=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_0, "./neo-c.h", 1904, 5)), "./neo-c.h", 1904, 6)),self,sizeof(char)*len), come_pop_stackframe(), __exception_result_var_b2);
    __result2__ = __result_obj__ = result_0;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result2__;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* shortpa_to_buffer(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value2;
void* right_value3;
struct buffer* __exception_result_var_b3;
struct buffer* result_1;
struct buffer* __exception_result_var_b4;
struct buffer* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
right_value2 = (void*)0;
right_value3 = (void*)0;
memset(&result_1, 0, sizeof(struct buffer*));
    result_1=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1910, 9),__exception_result_var_b3=((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1910, "buffer"))), "./neo-c.h", 1910, 8)))))), come_pop_stackframe(), __exception_result_var_b3));
    come_call_finalizer3(right_value2,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value3,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("./neo-c.h", 1911, 12),__exception_result_var_b4=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_1, "./neo-c.h", 1911, 10)), "./neo-c.h", 1911, 11)),(char*)self,sizeof(short short)*len), come_pop_stackframe(), __exception_result_var_b4);
    __result3__ = __result_obj__ = result_1;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result3__;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long int len){
void* __result_obj__;
void* right_value4;
void* right_value5;
struct buffer* __exception_result_var_b5;
struct buffer* result_2;
struct buffer* __exception_result_var_b6;
struct buffer* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
right_value4 = (void*)0;
right_value5 = (void*)0;
memset(&result_2, 0, sizeof(struct buffer*));
    result_2=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1917, 14),__exception_result_var_b5=((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1917, "buffer"))), "./neo-c.h", 1917, 13)))))), come_pop_stackframe(), __exception_result_var_b5));
    come_call_finalizer3(right_value4,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value5,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("./neo-c.h", 1918, 17),__exception_result_var_b6=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_2, "./neo-c.h", 1918, 15)), "./neo-c.h", 1918, 16)),(char*)self,sizeof(int)*len), come_pop_stackframe(), __exception_result_var_b6);
    __result4__ = __result_obj__ = result_2;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result4__;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long int len){
void* __result_obj__;
void* right_value6;
void* right_value7;
struct buffer* __exception_result_var_b7;
struct buffer* result_3;
struct buffer* __exception_result_var_b8;
struct buffer* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
right_value6 = (void*)0;
right_value7 = (void*)0;
memset(&result_3, 0, sizeof(struct buffer*));
    result_3=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1924, 19),__exception_result_var_b7=((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1924, "buffer"))), "./neo-c.h", 1924, 18)))))), come_pop_stackframe(), __exception_result_var_b7));
    come_call_finalizer3(right_value6,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value7,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("./neo-c.h", 1925, 22),__exception_result_var_b8=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_3, "./neo-c.h", 1925, 20)), "./neo-c.h", 1925, 21)),(char*)self,sizeof(long)*len), come_pop_stackframe(), __exception_result_var_b8);
    __result5__ = __result_obj__ = result_3;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result5__;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long int len){
void* __result_obj__;
void* right_value8;
void* right_value9;
struct buffer* __exception_result_var_b9;
struct buffer* result_4;
struct buffer* __exception_result_var_b10;
struct buffer* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
right_value8 = (void*)0;
right_value9 = (void*)0;
memset(&result_4, 0, sizeof(struct buffer*));
    result_4=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1931, 24),__exception_result_var_b9=((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1931, "buffer"))), "./neo-c.h", 1931, 23)))))), come_pop_stackframe(), __exception_result_var_b9));
    come_call_finalizer3(right_value8,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value9,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("./neo-c.h", 1932, 27),__exception_result_var_b10=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_4, "./neo-c.h", 1932, 25)), "./neo-c.h", 1932, 26)),(char*)self,sizeof(float)*len), come_pop_stackframe(), __exception_result_var_b10);
    __result6__ = __result_obj__ = result_4;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result6__;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long int len){
void* __result_obj__;
void* right_value10;
void* right_value11;
struct buffer* __exception_result_var_b11;
struct buffer* result_5;
struct buffer* __exception_result_var_b12;
struct buffer* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
right_value11 = (void*)0;
memset(&result_5, 0, sizeof(struct buffer*));
    result_5=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1938, 29),__exception_result_var_b11=((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1938, "buffer"))), "./neo-c.h", 1938, 28)))))), come_pop_stackframe(), __exception_result_var_b11));
    come_call_finalizer3(right_value10,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value11,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("./neo-c.h", 1939, 32),__exception_result_var_b12=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_5, "./neo-c.h", 1939, 30)), "./neo-c.h", 1939, 31)),(char*)self,sizeof(double)*len), come_pop_stackframe(), __exception_result_var_b12);
    __result7__ = __result_obj__ = result_5;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result7__;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
void* right_value12;
struct smart_pointer$1char* result_6;
struct buffer* __exception_result_var_b13;
void* right_value13;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
right_value12 = (void*)0;
memset(&result_6, 0, sizeof(struct smart_pointer$1char*));
right_value13 = (void*)0;
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1954, "smart_pointer$1char"))));
    come_call_finalizer3(right_value12,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj1=((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_6, "./neo-c.h", 1956, 37)), "./neo-c.h", 1956, 38))->memory;
    ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_6, "./neo-c.h", 1956, 37)), "./neo-c.h", 1956, 38))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=(come_push_stackframe("./neo-c.h", 1956, 39),__exception_result_var_b13=buffer_clone(self), come_pop_stackframe(), __exception_result_var_b13))));
    come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value13,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_6, "./neo-c.h", 1957, 40)), "./neo-c.h", 1957, 41))->p=((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_6, "./neo-c.h", 1957, 42)), "./neo-c.h", 1957, 43))->memory, "./neo-c.h", 1957, 44)), "./neo-c.h", 1957, 45))->buf;
    __result8__ = __result_obj__ = result_6;
    come_call_finalizer3(result_6,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result8__;
    come_call_finalizer3(result_6,smart_pointer$1charp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
void* right_value14;
struct smart_pointer$1char* result_7;
struct buffer* __exception_result_var_b14;
void* right_value15;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
memset(&result_7, 0, sizeof(struct smart_pointer$1char*));
right_value15 = (void*)0;
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1964, "smart_pointer$1char"))));
    come_call_finalizer3(right_value14,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj2=((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_7, "./neo-c.h", 1966, 46)), "./neo-c.h", 1966, 47))->memory;
    ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_7, "./neo-c.h", 1966, 46)), "./neo-c.h", 1966, 47))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=(come_push_stackframe("./neo-c.h", 1966, 48),__exception_result_var_b14=buffer_clone(self), come_pop_stackframe(), __exception_result_var_b14))));
    come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value15,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_7, "./neo-c.h", 1967, 49)), "./neo-c.h", 1967, 50))->p=(char*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_7, "./neo-c.h", 1967, 51)), "./neo-c.h", 1967, 52))->memory, "./neo-c.h", 1967, 53)), "./neo-c.h", 1967, 54))->buf;
    __result9__ = __result_obj__ = result_7;
    come_call_finalizer3(result_7,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result9__;
    come_call_finalizer3(result_7,smart_pointer$1charp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
void* right_value16;
struct smart_pointer$1short* result_8;
struct buffer* __exception_result_var_b15;
void* right_value17;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
right_value16 = (void*)0;
memset(&result_8, 0, sizeof(struct smart_pointer$1short*));
right_value17 = (void*)0;
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 1974, "smart_pointer$1short"))));
    come_call_finalizer3(right_value16,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj3=((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_8, "./neo-c.h", 1976, 59)), "./neo-c.h", 1976, 60))->memory;
    ((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_8, "./neo-c.h", 1976, 59)), "./neo-c.h", 1976, 60))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value17=(come_push_stackframe("./neo-c.h", 1976, 61),__exception_result_var_b15=buffer_clone(self), come_pop_stackframe(), __exception_result_var_b15))));
    come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value17,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_8, "./neo-c.h", 1977, 62)), "./neo-c.h", 1977, 63))->p=(short short*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_8, "./neo-c.h", 1977, 64)), "./neo-c.h", 1977, 65))->memory, "./neo-c.h", 1977, 66)), "./neo-c.h", 1977, 67))->buf;
    __result10__ = __result_obj__ = result_8;
    come_call_finalizer3(result_8,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    return __result10__;
    come_call_finalizer3(result_8,smart_pointer$1shortp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
void* right_value18;
struct smart_pointer$1int* result_9;
struct buffer* __exception_result_var_b16;
void* right_value19;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
right_value18 = (void*)0;
memset(&result_9, 0, sizeof(struct smart_pointer$1int*));
right_value19 = (void*)0;
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 1984, "smart_pointer$1int"))));
    come_call_finalizer3(right_value18,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj4=((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_9, "./neo-c.h", 1986, 72)), "./neo-c.h", 1986, 73))->memory;
    ((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_9, "./neo-c.h", 1986, 72)), "./neo-c.h", 1986, 73))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=(come_push_stackframe("./neo-c.h", 1986, 74),__exception_result_var_b16=buffer_clone(self), come_pop_stackframe(), __exception_result_var_b16))));
    come_call_finalizer3(__dec_obj4,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value19,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_9, "./neo-c.h", 1987, 75)), "./neo-c.h", 1987, 76))->p=(int*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_9, "./neo-c.h", 1987, 77)), "./neo-c.h", 1987, 78))->memory, "./neo-c.h", 1987, 79)), "./neo-c.h", 1987, 80))->buf;
    __result11__ = __result_obj__ = result_9;
    come_call_finalizer3(result_9,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    return __result11__;
    come_call_finalizer3(result_9,smart_pointer$1intp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
void* right_value20;
struct smart_pointer$1long* result_10;
struct buffer* __exception_result_var_b17;
void* right_value21;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value20 = (void*)0;
memset(&result_10, 0, sizeof(struct smart_pointer$1long*));
right_value21 = (void*)0;
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 1994, "smart_pointer$1long"))));
    come_call_finalizer3(right_value20,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj5=((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_10, "./neo-c.h", 1996, 85)), "./neo-c.h", 1996, 86))->memory;
    ((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_10, "./neo-c.h", 1996, 85)), "./neo-c.h", 1996, 86))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value21=(come_push_stackframe("./neo-c.h", 1996, 87),__exception_result_var_b17=buffer_clone(self), come_pop_stackframe(), __exception_result_var_b17))));
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value21,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_10, "./neo-c.h", 1997, 88)), "./neo-c.h", 1997, 89))->p=(long*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_10, "./neo-c.h", 1997, 90)), "./neo-c.h", 1997, 91))->memory, "./neo-c.h", 1997, 92)), "./neo-c.h", 1997, 93))->buf;
    __result12__ = __result_obj__ = result_10;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    return __result12__;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long int len){
void* __result_obj__;
void* right_value22;
void* right_value25;
struct smart_pointer$1char* __exception_result_var_b20;
struct smart_pointer$1char* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
right_value22 = (void*)0;
right_value25 = (void*)0;
    __result14__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2165, 110),__exception_result_var_b20=((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2165, "smart_pointer$1char"))), "./neo-c.h", 2165, 94))),self,len))), come_pop_stackframe(), __exception_result_var_b20);
    come_call_finalizer3(right_value22,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value25,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result14__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value26;
void* right_value29;
struct smart_pointer$1short* __exception_result_var_b23;
struct smart_pointer$1short* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value26 = (void*)0;
right_value29 = (void*)0;
    __result16__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2170, 127),__exception_result_var_b23=((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2170, "smart_pointer$1short"))), "./neo-c.h", 2170, 111))),self,len))), come_pop_stackframe(), __exception_result_var_b23);
    come_call_finalizer3(right_value26,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value29,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result16__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long int len){
void* __result_obj__;
void* right_value30;
void* right_value33;
struct smart_pointer$1int* __exception_result_var_b26;
struct smart_pointer$1int* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value30 = (void*)0;
right_value33 = (void*)0;
    __result18__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2175, 144),__exception_result_var_b26=((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2175, "smart_pointer$1int"))), "./neo-c.h", 2175, 128))),self,len))), come_pop_stackframe(), __exception_result_var_b26);
    come_call_finalizer3(right_value30,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value33,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result18__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long int len){
void* __result_obj__;
void* right_value34;
void* right_value37;
struct smart_pointer$1long* __exception_result_var_b29;
struct smart_pointer$1long* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
right_value34 = (void*)0;
right_value37 = (void*)0;
    __result20__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2180, 161),__exception_result_var_b29=((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2180, "smart_pointer$1long"))), "./neo-c.h", 2180, 145))),self,len))), come_pop_stackframe(), __exception_result_var_b29);
    come_call_finalizer3(right_value34,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value37,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result20__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long int len){
void* __result_obj__;
void* right_value38;
void* right_value41;
struct smart_pointer$1float* __exception_result_var_b32;
struct smart_pointer$1float* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value38 = (void*)0;
right_value41 = (void*)0;
    __result22__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2185, 182),__exception_result_var_b32=((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2185, "smart_pointer$1float"))), "./neo-c.h", 2185, 162))),self,len))), come_pop_stackframe(), __exception_result_var_b32);
    come_call_finalizer3(right_value38,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value41,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result22__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long int len){
void* __result_obj__;
void* right_value42;
void* right_value45;
struct smart_pointer$1double* __exception_result_var_b35;
struct smart_pointer$1double* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
right_value42 = (void*)0;
right_value45 = (void*)0;
    __result24__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2190, 203),__exception_result_var_b35=((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2190, "smart_pointer$1double"))), "./neo-c.h", 2190, 183))),self,len))), come_pop_stackframe(), __exception_result_var_b35);
    come_call_finalizer3(right_value42,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value45,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    return __result24__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long int len){
void* __result_obj__;
void* right_value46;
void* right_value50;
struct list$1char* __exception_result_var_b37;
struct list$1char* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
right_value46 = (void*)0;
right_value50 = (void*)0;
    __result27__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2195, 264),__exception_result_var_b37=((struct list$1char*)(right_value50=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count(((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(((struct list$1char*)(right_value46=(struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2195, "list$1char"))), "./neo-c.h", 2195, 204)), "./neo-c.h", 2195, 205))),len,self))), come_pop_stackframe(), __exception_result_var_b37);
    come_call_finalizer3(right_value46,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value50,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result27__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value51;
void* right_value55;
struct list$1short* __exception_result_var_b39;
struct list$1short* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
right_value55 = (void*)0;
    __result30__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2200, 325),__exception_result_var_b39=((struct list$1short*)(right_value55=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count(((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(((struct list$1short*)(right_value51=(struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2200, "list$1short"))), "./neo-c.h", 2200, 265)), "./neo-c.h", 2200, 266))),len,self))), come_pop_stackframe(), __exception_result_var_b39);
    come_call_finalizer3(right_value51,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value55,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result30__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long int len){
void* __result_obj__;
void* right_value56;
void* right_value60;
struct list$1int* __exception_result_var_b41;
struct list$1int* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
right_value56 = (void*)0;
right_value60 = (void*)0;
    __result33__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2205, 386),__exception_result_var_b41=((struct list$1int*)(right_value60=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(((struct list$1int*)(right_value56=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2205, "list$1int"))), "./neo-c.h", 2205, 326)), "./neo-c.h", 2205, 327))),len,self))), come_pop_stackframe(), __exception_result_var_b41);
    come_call_finalizer3(right_value56,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value60,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result33__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long int len){
void* __result_obj__;
void* right_value61;
void* right_value65;
struct list$1long* __exception_result_var_b43;
struct list$1long* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value61 = (void*)0;
right_value65 = (void*)0;
    __result36__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2210, 447),__exception_result_var_b43=((struct list$1long*)(right_value65=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count(((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(((struct list$1long*)(right_value61=(struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2210, "list$1long"))), "./neo-c.h", 2210, 387)), "./neo-c.h", 2210, 388))),len,self))), come_pop_stackframe(), __exception_result_var_b43);
    come_call_finalizer3(right_value61,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value65,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result36__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long int len){
void* __result_obj__;
void* right_value66;
void* right_value70;
struct list$1float* __exception_result_var_b45;
struct list$1float* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value66 = (void*)0;
right_value70 = (void*)0;
    __result39__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2215, 508),__exception_result_var_b45=((struct list$1float*)(right_value70=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count(((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(((struct list$1float*)(right_value66=(struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2215, "list$1float"))), "./neo-c.h", 2215, 448)), "./neo-c.h", 2215, 449))),len,self))), come_pop_stackframe(), __exception_result_var_b45);
    come_call_finalizer3(right_value66,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value70,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result39__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long int len){
void* __result_obj__;
void* right_value71;
void* right_value75;
struct list$1double* __exception_result_var_b47;
struct list$1double* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value71 = (void*)0;
right_value75 = (void*)0;
    __result42__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2220, 569),__exception_result_var_b47=((struct list$1double*)(right_value75=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count(((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(((struct list$1double*)(right_value71=(struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2220, "list$1double"))), "./neo-c.h", 2220, 509)), "./neo-c.h", 2220, 510))),len,self))), come_pop_stackframe(), __exception_result_var_b47);
    come_call_finalizer3(right_value71,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value75,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    return __result42__;
}
static inline unsigned long int charpa_length(char* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result43__;
memset(&__result_obj__, 0, sizeof(void*));
    __result43__ = len;
    return __result43__;
}
static inline unsigned long int shortpa_length(short short* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result44__;
memset(&__result_obj__, 0, sizeof(void*));
    __result44__ = len;
    return __result44__;
}
static inline unsigned long int intpa_length(int* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result45__;
memset(&__result_obj__, 0, sizeof(void*));
    __result45__ = len;
    return __result45__;
}
static inline unsigned long int longpa_length(long* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result46__;
memset(&__result_obj__, 0, sizeof(void*));
    __result46__ = len;
    return __result46__;
}
static inline unsigned long int floatpa_length(float* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result47__;
memset(&__result_obj__, 0, sizeof(void*));
    __result47__ = len;
    return __result47__;
}
static inline unsigned long int doublepa_length(double* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result48__;
memset(&__result_obj__, 0, sizeof(void*));
    __result48__ = len;
    return __result48__;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value76;
char* __exception_result_var_b48;
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
    __result49__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2336, 570),__exception_result_var_b48=((char*)(right_value76=xsprintf(msg,self))), come_pop_stackframe(), __exception_result_var_b48);
    right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result49__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value77;
char* __exception_result_var_b49;
char* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value77 = (void*)0;
    __result50__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2341, 571),__exception_result_var_b49=((char*)(right_value77=xsprintf(msg,self))), come_pop_stackframe(), __exception_result_var_b49);
    right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result50__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
void* right_value78;
char* __exception_result_var_b50;
char* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value78 = (void*)0;
    __result51__ = __result_obj__ = (come_push_stackframe("./neo-c.h", 2346, 572),__exception_result_var_b50=((char*)(right_value78=xsprintf(msg,self))), come_pop_stackframe(), __exception_result_var_b50);
    right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result51__;
}

// body function








static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
void* __result_obj__;
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional1=self!=((void*)0)&&((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "smart_pointer$1charp_finalize", 0, 33)), "smart_pointer$1charp_finalize", 0, 34))->memory!=((void*)0),        _if_conditional1) {
            come_call_finalizer3(((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "smart_pointer$1charp_finalize", 0, 35)), "smart_pointer$1charp_finalize", 0, 36))->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
void* __result_obj__;
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional2=self!=((void*)0)&&((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "smart_pointer$1shortp_finalize", 0, 55)), "smart_pointer$1shortp_finalize", 0, 56))->memory!=((void*)0),        _if_conditional2) {
            come_call_finalizer3(((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "smart_pointer$1shortp_finalize", 0, 57)), "smart_pointer$1shortp_finalize", 0, 58))->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
void* __result_obj__;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional3=self!=((void*)0)&&((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "smart_pointer$1intp_finalize", 0, 68)), "smart_pointer$1intp_finalize", 0, 69))->memory!=((void*)0),        _if_conditional3) {
            come_call_finalizer3(((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "smart_pointer$1intp_finalize", 0, 70)), "smart_pointer$1intp_finalize", 0, 71))->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
void* __result_obj__;
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional4=self!=((void*)0)&&((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 0, 81)), "smart_pointer$1longp_finalize", 0, 82))->memory!=((void*)0),        _if_conditional4) {
            come_call_finalizer3(((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 0, 83)), "smart_pointer$1longp_finalize", 0, 84))->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static struct smart_pointer$1char* smart_pointer$1char_initialize(struct smart_pointer$1char* self, void* memory, int size){
void* __result_obj__;
void* right_value23;
void* right_value24;
struct buffer* __exception_result_var_b18;
struct buffer* __dec_obj6;
struct buffer* __exception_result_var_b19;
struct smart_pointer$1char* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value23 = (void*)0;
right_value24 = (void*)0;
        __dec_obj6=((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "./neo-c.h", 2006, 95)), "./neo-c.h", 2006, 96))->memory;
        ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "./neo-c.h", 2006, 95)), "./neo-c.h", 2006, 96))->memory=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 2006, 98),__exception_result_var_b18=((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))), "./neo-c.h", 2006, 97)))))), come_pop_stackframe(), __exception_result_var_b18));
        come_call_finalizer3(__dec_obj6,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value23,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value24,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("./neo-c.h", 2008, 103),__exception_result_var_b19=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "./neo-c.h", 2008, 99)), "./neo-c.h", 2008, 100))->memory, "./neo-c.h", 2008, 101)), "./neo-c.h", 2008, 102)),memory,sizeof(char)*size), come_pop_stackframe(), __exception_result_var_b19);
        ((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "./neo-c.h", 2010, 104)), "./neo-c.h", 2010, 105))->p=(char*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(((struct smart_pointer$1char*)come_null_check(self, "./neo-c.h", 2010, 106)), "./neo-c.h", 2010, 107))->memory, "./neo-c.h", 2010, 108)), "./neo-c.h", 2010, 109))->buf;
        __result13__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
        return __result13__;
        come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size){
void* __result_obj__;
void* right_value27;
void* right_value28;
struct buffer* __exception_result_var_b21;
struct buffer* __dec_obj7;
struct buffer* __exception_result_var_b22;
struct smart_pointer$1short* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
right_value27 = (void*)0;
right_value28 = (void*)0;
        __dec_obj7=((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "./neo-c.h", 2006, 112)), "./neo-c.h", 2006, 113))->memory;
        ((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "./neo-c.h", 2006, 112)), "./neo-c.h", 2006, 113))->memory=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 2006, 115),__exception_result_var_b21=((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))), "./neo-c.h", 2006, 114)))))), come_pop_stackframe(), __exception_result_var_b21));
        come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value27,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value28,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("./neo-c.h", 2008, 120),__exception_result_var_b22=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "./neo-c.h", 2008, 116)), "./neo-c.h", 2008, 117))->memory, "./neo-c.h", 2008, 118)), "./neo-c.h", 2008, 119)),memory,sizeof(short short)*size), come_pop_stackframe(), __exception_result_var_b22);
        ((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "./neo-c.h", 2010, 121)), "./neo-c.h", 2010, 122))->p=(short short*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1short*)come_null_check(((struct smart_pointer$1short*)come_null_check(self, "./neo-c.h", 2010, 123)), "./neo-c.h", 2010, 124))->memory, "./neo-c.h", 2010, 125)), "./neo-c.h", 2010, 126))->buf;
        __result15__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
        return __result15__;
        come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size){
void* __result_obj__;
void* right_value31;
void* right_value32;
struct buffer* __exception_result_var_b24;
struct buffer* __dec_obj8;
struct buffer* __exception_result_var_b25;
struct smart_pointer$1int* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
right_value31 = (void*)0;
right_value32 = (void*)0;
        __dec_obj8=((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "./neo-c.h", 2006, 129)), "./neo-c.h", 2006, 130))->memory;
        ((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "./neo-c.h", 2006, 129)), "./neo-c.h", 2006, 130))->memory=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 2006, 132),__exception_result_var_b24=((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))), "./neo-c.h", 2006, 131)))))), come_pop_stackframe(), __exception_result_var_b24));
        come_call_finalizer3(__dec_obj8,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value31,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value32,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("./neo-c.h", 2008, 137),__exception_result_var_b25=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "./neo-c.h", 2008, 133)), "./neo-c.h", 2008, 134))->memory, "./neo-c.h", 2008, 135)), "./neo-c.h", 2008, 136)),memory,sizeof(int)*size), come_pop_stackframe(), __exception_result_var_b25);
        ((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "./neo-c.h", 2010, 138)), "./neo-c.h", 2010, 139))->p=(int*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1int*)come_null_check(((struct smart_pointer$1int*)come_null_check(self, "./neo-c.h", 2010, 140)), "./neo-c.h", 2010, 141))->memory, "./neo-c.h", 2010, 142)), "./neo-c.h", 2010, 143))->buf;
        __result17__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
        return __result17__;
        come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size){
void* __result_obj__;
void* right_value35;
void* right_value36;
struct buffer* __exception_result_var_b27;
struct buffer* __dec_obj9;
struct buffer* __exception_result_var_b28;
struct smart_pointer$1long* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value35 = (void*)0;
right_value36 = (void*)0;
        __dec_obj9=((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "./neo-c.h", 2006, 146)), "./neo-c.h", 2006, 147))->memory;
        ((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "./neo-c.h", 2006, 146)), "./neo-c.h", 2006, 147))->memory=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 2006, 149),__exception_result_var_b27=((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))), "./neo-c.h", 2006, 148)))))), come_pop_stackframe(), __exception_result_var_b27));
        come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value35,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value36,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("./neo-c.h", 2008, 154),__exception_result_var_b28=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "./neo-c.h", 2008, 150)), "./neo-c.h", 2008, 151))->memory, "./neo-c.h", 2008, 152)), "./neo-c.h", 2008, 153)),memory,sizeof(long)*size), come_pop_stackframe(), __exception_result_var_b28);
        ((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "./neo-c.h", 2010, 155)), "./neo-c.h", 2010, 156))->p=(long*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1long*)come_null_check(((struct smart_pointer$1long*)come_null_check(self, "./neo-c.h", 2010, 157)), "./neo-c.h", 2010, 158))->memory, "./neo-c.h", 2010, 159)), "./neo-c.h", 2010, 160))->buf;
        __result19__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
        return __result19__;
        come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size){
void* __result_obj__;
void* right_value39;
void* right_value40;
struct buffer* __exception_result_var_b30;
struct buffer* __dec_obj10;
struct buffer* __exception_result_var_b31;
struct smart_pointer$1float* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
right_value39 = (void*)0;
right_value40 = (void*)0;
        __dec_obj10=((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "./neo-c.h", 2006, 163)), "./neo-c.h", 2006, 164))->memory;
        ((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "./neo-c.h", 2006, 163)), "./neo-c.h", 2006, 164))->memory=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 2006, 166),__exception_result_var_b30=((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))), "./neo-c.h", 2006, 165)))))), come_pop_stackframe(), __exception_result_var_b30));
        come_call_finalizer3(__dec_obj10,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value39,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value40,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("./neo-c.h", 2008, 171),__exception_result_var_b31=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "./neo-c.h", 2008, 167)), "./neo-c.h", 2008, 168))->memory, "./neo-c.h", 2008, 169)), "./neo-c.h", 2008, 170)),memory,sizeof(float)*size), come_pop_stackframe(), __exception_result_var_b31);
        ((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "./neo-c.h", 2010, 172)), "./neo-c.h", 2010, 173))->p=(float*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "./neo-c.h", 2010, 174)), "./neo-c.h", 2010, 175))->memory, "./neo-c.h", 2010, 176)), "./neo-c.h", 2010, 177))->buf;
        __result21__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
        return __result21__;
        come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
void* __result_obj__;
_Bool _if_conditional5;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional5=self!=((void*)0)&&((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "smart_pointer$1floatp_finalize", 0, 178)), "smart_pointer$1floatp_finalize", 0, 179))->memory!=((void*)0),            _if_conditional5) {
                come_call_finalizer3(((struct smart_pointer$1float*)come_null_check(((struct smart_pointer$1float*)come_null_check(self, "smart_pointer$1floatp_finalize", 0, 180)), "smart_pointer$1floatp_finalize", 0, 181))->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct smart_pointer$1double* smart_pointer$1double_initialize(struct smart_pointer$1double* self, void* memory, int size){
void* __result_obj__;
void* right_value43;
void* right_value44;
struct buffer* __exception_result_var_b33;
struct buffer* __dec_obj11;
struct buffer* __exception_result_var_b34;
struct smart_pointer$1double* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
right_value43 = (void*)0;
right_value44 = (void*)0;
        __dec_obj11=((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "./neo-c.h", 2006, 184)), "./neo-c.h", 2006, 185))->memory;
        ((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "./neo-c.h", 2006, 184)), "./neo-c.h", 2006, 185))->memory=(struct buffer*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 2006, 187),__exception_result_var_b33=((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))), "./neo-c.h", 2006, 186)))))), come_pop_stackframe(), __exception_result_var_b33));
        come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value43,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value44,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("./neo-c.h", 2008, 192),__exception_result_var_b34=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "./neo-c.h", 2008, 188)), "./neo-c.h", 2008, 189))->memory, "./neo-c.h", 2008, 190)), "./neo-c.h", 2008, 191)),memory,sizeof(double)*size), come_pop_stackframe(), __exception_result_var_b34);
        ((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "./neo-c.h", 2010, 193)), "./neo-c.h", 2010, 194))->p=(double*)((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "./neo-c.h", 2010, 195)), "./neo-c.h", 2010, 196))->memory, "./neo-c.h", 2010, 197)), "./neo-c.h", 2010, 198))->buf;
        __result23__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
        return __result23__;
        come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
void* __result_obj__;
_Bool _if_conditional6;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional6=self!=((void*)0)&&((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "smart_pointer$1doublep_finalize", 0, 199)), "smart_pointer$1doublep_finalize", 0, 200))->memory!=((void*)0),            _if_conditional6) {
                come_call_finalizer3(((struct smart_pointer$1double*)come_null_check(((struct smart_pointer$1double*)come_null_check(self, "smart_pointer$1doublep_finalize", 0, 201)), "smart_pointer$1doublep_finalize", 0, 202))->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__;
int i_11;
struct list$1char* __exception_result_var_b36;
struct list$1char* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_11, 0, sizeof(int));
        ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 109, 206)), "./neo-c.h", 109, 207))->head=((void*)0);
        ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 110, 208)), "./neo-c.h", 110, 209))->tail=((void*)0);
        ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 111, 210)), "./neo-c.h", 111, 211))->len=0;
        for(        i_11=0;        i_11<num_value;        i_11++        ){
            (come_push_stackframe("./neo-c.h", 114, 259),__exception_result_var_b36=list$1char_push_back(((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 114, 212)), "./neo-c.h", 114, 213)),((char*)come_null_check(values, "./neo-c.h", 114, 258))[i_11]), come_pop_stackframe(), __exception_result_var_b36);
        }
        __result26__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
        return __result26__;
        come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__;
_Bool _if_conditional7;
void* right_value47;
struct list_item$1char* litem_12;
_Bool _if_conditional8;
void* right_value48;
struct list_item$1char* litem_13;
void* right_value49;
struct list_item$1char* litem_14;
struct list$1char* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
right_value47 = (void*)0;
memset(&litem_12, 0, sizeof(struct list_item$1char*));
right_value48 = (void*)0;
memset(&litem_13, 0, sizeof(struct list_item$1char*));
right_value49 = (void*)0;
memset(&litem_14, 0, sizeof(struct list_item$1char*));
                if(_if_conditional7=((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 222, 214)), "./neo-c.h", 222, 215))->len==0,                _if_conditional7) {
                    litem_12=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value47=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 223, "list_item$1char"))));
                    come_call_finalizer3(right_value47,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_12, "./neo-c.h", 225, 216)), "./neo-c.h", 225, 217))->prev=((void*)0);
                    ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_12, "./neo-c.h", 226, 218)), "./neo-c.h", 226, 219))->next=((void*)0);
                    ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_12, "./neo-c.h", 227, 220)), "./neo-c.h", 227, 221))->item=item;
                    ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 229, 222)), "./neo-c.h", 229, 223))->tail=litem_12;
                    ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 230, 224)), "./neo-c.h", 230, 225))->head=litem_12;
                }
                else {
                    if(_if_conditional8=((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 232, 226)), "./neo-c.h", 232, 227))->len==1,                    _if_conditional8) {
                        litem_13=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value48=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 233, "list_item$1char"))));
                        come_call_finalizer3(right_value48,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_13, "./neo-c.h", 235, 228)), "./neo-c.h", 235, 229))->prev=((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 235, 230)), "./neo-c.h", 235, 231))->head;
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_13, "./neo-c.h", 236, 232)), "./neo-c.h", 236, 233))->next=((void*)0);
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_13, "./neo-c.h", 237, 234)), "./neo-c.h", 237, 235))->item=item;
                        ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 239, 236)), "./neo-c.h", 239, 237))->tail=litem_13;
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 240, 238)), "./neo-c.h", 240, 239))->head, "./neo-c.h", 240, 240)), "./neo-c.h", 240, 241))->next=litem_13;
                    }
                    else {
                        litem_14=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value49=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 243, "list_item$1char"))));
                        come_call_finalizer3(right_value49,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_14, "./neo-c.h", 245, 242)), "./neo-c.h", 245, 243))->prev=((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 245, 244)), "./neo-c.h", 245, 245))->tail;
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_14, "./neo-c.h", 246, 246)), "./neo-c.h", 246, 247))->next=((void*)0);
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(litem_14, "./neo-c.h", 247, 248)), "./neo-c.h", 247, 249))->item=item;
                        ((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 249, 250)), "./neo-c.h", 249, 251))->tail, "./neo-c.h", 249, 252)), "./neo-c.h", 249, 253))->next=litem_14;
                        ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 250, 254)), "./neo-c.h", 250, 255))->tail=litem_14;
                    }
                }
                ((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 253, 256)), "./neo-c.h", 253, 257))->len++;
                __result25__ = __result_obj__ = self;
                return __result25__;
}

static void list_item$1charp_finalize(struct list_item$1char* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1charp_finalize(struct list$1char* self){
void* __result_obj__;
struct list_item$1char* it_15;
_Bool _while_condtional1;
struct list_item$1char* prev_it_16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_15, 0, sizeof(struct list_item$1char*));
memset(&prev_it_16, 0, sizeof(struct list_item$1char*));
            it_15=((struct list$1char*)come_null_check(((struct list$1char*)come_null_check(self, "./neo-c.h", 120, 260)), "./neo-c.h", 120, 261))->head;
            while(_while_condtional1=it_15!=((void*)0),            _while_condtional1) {
                prev_it_16=it_15;
                it_15=((struct list_item$1char*)come_null_check(((struct list_item$1char*)come_null_check(it_15, "./neo-c.h", 123, 262)), "./neo-c.h", 123, 263))->next;
                come_call_finalizer3(prev_it_16,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
void* __result_obj__;
int i_17;
struct list$1short* __exception_result_var_b38;
struct list$1short* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_17, 0, sizeof(int));
        ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 109, 267)), "./neo-c.h", 109, 268))->head=((void*)0);
        ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 110, 269)), "./neo-c.h", 110, 270))->tail=((void*)0);
        ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 111, 271)), "./neo-c.h", 111, 272))->len=0;
        for(        i_17=0;        i_17<num_value;        i_17++        ){
            (come_push_stackframe("./neo-c.h", 114, 320),__exception_result_var_b38=list$1short_push_back(((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 114, 273)), "./neo-c.h", 114, 274)),((short short*)come_null_check(values, "./neo-c.h", 114, 319))[i_17]), come_pop_stackframe(), __exception_result_var_b38);
        }
        __result29__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
        return __result29__;
        come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short short item){
void* __result_obj__;
_Bool _if_conditional9;
void* right_value52;
struct list_item$1short* litem_18;
_Bool _if_conditional10;
void* right_value53;
struct list_item$1short* litem_19;
void* right_value54;
struct list_item$1short* litem_20;
struct list$1short* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
right_value52 = (void*)0;
memset(&litem_18, 0, sizeof(struct list_item$1short*));
right_value53 = (void*)0;
memset(&litem_19, 0, sizeof(struct list_item$1short*));
right_value54 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1short*));
                if(_if_conditional9=((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 222, 275)), "./neo-c.h", 222, 276))->len==0,                _if_conditional9) {
                    litem_18=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value52=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 223, "list_item$1short"))));
                    come_call_finalizer3(right_value52,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_18, "./neo-c.h", 225, 277)), "./neo-c.h", 225, 278))->prev=((void*)0);
                    ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_18, "./neo-c.h", 226, 279)), "./neo-c.h", 226, 280))->next=((void*)0);
                    ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_18, "./neo-c.h", 227, 281)), "./neo-c.h", 227, 282))->item=item;
                    ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 229, 283)), "./neo-c.h", 229, 284))->tail=litem_18;
                    ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 230, 285)), "./neo-c.h", 230, 286))->head=litem_18;
                }
                else {
                    if(_if_conditional10=((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 232, 287)), "./neo-c.h", 232, 288))->len==1,                    _if_conditional10) {
                        litem_19=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value53=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 233, "list_item$1short"))));
                        come_call_finalizer3(right_value53,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_19, "./neo-c.h", 235, 289)), "./neo-c.h", 235, 290))->prev=((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 235, 291)), "./neo-c.h", 235, 292))->head;
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_19, "./neo-c.h", 236, 293)), "./neo-c.h", 236, 294))->next=((void*)0);
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_19, "./neo-c.h", 237, 295)), "./neo-c.h", 237, 296))->item=item;
                        ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 239, 297)), "./neo-c.h", 239, 298))->tail=litem_19;
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 240, 299)), "./neo-c.h", 240, 300))->head, "./neo-c.h", 240, 301)), "./neo-c.h", 240, 302))->next=litem_19;
                    }
                    else {
                        litem_20=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value54=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 243, "list_item$1short"))));
                        come_call_finalizer3(right_value54,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_20, "./neo-c.h", 245, 303)), "./neo-c.h", 245, 304))->prev=((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 245, 305)), "./neo-c.h", 245, 306))->tail;
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_20, "./neo-c.h", 246, 307)), "./neo-c.h", 246, 308))->next=((void*)0);
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(litem_20, "./neo-c.h", 247, 309)), "./neo-c.h", 247, 310))->item=item;
                        ((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 249, 311)), "./neo-c.h", 249, 312))->tail, "./neo-c.h", 249, 313)), "./neo-c.h", 249, 314))->next=litem_20;
                        ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 250, 315)), "./neo-c.h", 250, 316))->tail=litem_20;
                    }
                }
                ((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 253, 317)), "./neo-c.h", 253, 318))->len++;
                __result28__ = __result_obj__ = self;
                return __result28__;
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1shortp_finalize(struct list$1short* self){
void* __result_obj__;
struct list_item$1short* it_21;
_Bool _while_condtional2;
struct list_item$1short* prev_it_22;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_21, 0, sizeof(struct list_item$1short*));
memset(&prev_it_22, 0, sizeof(struct list_item$1short*));
            it_21=((struct list$1short*)come_null_check(((struct list$1short*)come_null_check(self, "./neo-c.h", 120, 321)), "./neo-c.h", 120, 322))->head;
            while(_while_condtional2=it_21!=((void*)0),            _while_condtional2) {
                prev_it_22=it_21;
                it_21=((struct list_item$1short*)come_null_check(((struct list_item$1short*)come_null_check(it_21, "./neo-c.h", 123, 323)), "./neo-c.h", 123, 324))->next;
                come_call_finalizer3(prev_it_22,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__;
int i_23;
struct list$1int* __exception_result_var_b40;
struct list$1int* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_23, 0, sizeof(int));
        ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 109, 328)), "./neo-c.h", 109, 329))->head=((void*)0);
        ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 110, 330)), "./neo-c.h", 110, 331))->tail=((void*)0);
        ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 111, 332)), "./neo-c.h", 111, 333))->len=0;
        for(        i_23=0;        i_23<num_value;        i_23++        ){
            (come_push_stackframe("./neo-c.h", 114, 381),__exception_result_var_b40=list$1int_push_back(((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 114, 334)), "./neo-c.h", 114, 335)),((int*)come_null_check(values, "./neo-c.h", 114, 380))[i_23]), come_pop_stackframe(), __exception_result_var_b40);
        }
        __result32__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
        return __result32__;
        come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__;
_Bool _if_conditional11;
void* right_value57;
struct list_item$1int* litem_24;
_Bool _if_conditional12;
void* right_value58;
struct list_item$1int* litem_25;
void* right_value59;
struct list_item$1int* litem_26;
struct list$1int* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
right_value57 = (void*)0;
memset(&litem_24, 0, sizeof(struct list_item$1int*));
right_value58 = (void*)0;
memset(&litem_25, 0, sizeof(struct list_item$1int*));
right_value59 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1int*));
                if(_if_conditional11=((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 222, 336)), "./neo-c.h", 222, 337))->len==0,                _if_conditional11) {
                    litem_24=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value57=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 223, "list_item$1int"))));
                    come_call_finalizer3(right_value57,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_24, "./neo-c.h", 225, 338)), "./neo-c.h", 225, 339))->prev=((void*)0);
                    ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_24, "./neo-c.h", 226, 340)), "./neo-c.h", 226, 341))->next=((void*)0);
                    ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_24, "./neo-c.h", 227, 342)), "./neo-c.h", 227, 343))->item=item;
                    ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 229, 344)), "./neo-c.h", 229, 345))->tail=litem_24;
                    ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 230, 346)), "./neo-c.h", 230, 347))->head=litem_24;
                }
                else {
                    if(_if_conditional12=((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 232, 348)), "./neo-c.h", 232, 349))->len==1,                    _if_conditional12) {
                        litem_25=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value58=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 233, "list_item$1int"))));
                        come_call_finalizer3(right_value58,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_25, "./neo-c.h", 235, 350)), "./neo-c.h", 235, 351))->prev=((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 235, 352)), "./neo-c.h", 235, 353))->head;
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_25, "./neo-c.h", 236, 354)), "./neo-c.h", 236, 355))->next=((void*)0);
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_25, "./neo-c.h", 237, 356)), "./neo-c.h", 237, 357))->item=item;
                        ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 239, 358)), "./neo-c.h", 239, 359))->tail=litem_25;
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 240, 360)), "./neo-c.h", 240, 361))->head, "./neo-c.h", 240, 362)), "./neo-c.h", 240, 363))->next=litem_25;
                    }
                    else {
                        litem_26=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value59=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 243, "list_item$1int"))));
                        come_call_finalizer3(right_value59,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_26, "./neo-c.h", 245, 364)), "./neo-c.h", 245, 365))->prev=((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 245, 366)), "./neo-c.h", 245, 367))->tail;
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_26, "./neo-c.h", 246, 368)), "./neo-c.h", 246, 369))->next=((void*)0);
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(litem_26, "./neo-c.h", 247, 370)), "./neo-c.h", 247, 371))->item=item;
                        ((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 249, 372)), "./neo-c.h", 249, 373))->tail, "./neo-c.h", 249, 374)), "./neo-c.h", 249, 375))->next=litem_26;
                        ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 250, 376)), "./neo-c.h", 250, 377))->tail=litem_26;
                    }
                }
                ((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 253, 378)), "./neo-c.h", 253, 379))->len++;
                __result31__ = __result_obj__ = self;
                return __result31__;
}

static void list_item$1intp_finalize(struct list_item$1int* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1intp_finalize(struct list$1int* self){
void* __result_obj__;
struct list_item$1int* it_27;
_Bool _while_condtional3;
struct list_item$1int* prev_it_28;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_27, 0, sizeof(struct list_item$1int*));
memset(&prev_it_28, 0, sizeof(struct list_item$1int*));
            it_27=((struct list$1int*)come_null_check(((struct list$1int*)come_null_check(self, "./neo-c.h", 120, 382)), "./neo-c.h", 120, 383))->head;
            while(_while_condtional3=it_27!=((void*)0),            _while_condtional3) {
                prev_it_28=it_27;
                it_27=((struct list_item$1int*)come_null_check(((struct list_item$1int*)come_null_check(it_27, "./neo-c.h", 123, 384)), "./neo-c.h", 123, 385))->next;
                come_call_finalizer3(prev_it_28,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__;
int i_29;
struct list$1long* __exception_result_var_b42;
struct list$1long* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_29, 0, sizeof(int));
        ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 109, 389)), "./neo-c.h", 109, 390))->head=((void*)0);
        ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 110, 391)), "./neo-c.h", 110, 392))->tail=((void*)0);
        ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 111, 393)), "./neo-c.h", 111, 394))->len=0;
        for(        i_29=0;        i_29<num_value;        i_29++        ){
            (come_push_stackframe("./neo-c.h", 114, 442),__exception_result_var_b42=list$1long_push_back(((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 114, 395)), "./neo-c.h", 114, 396)),((long*)come_null_check(values, "./neo-c.h", 114, 441))[i_29]), come_pop_stackframe(), __exception_result_var_b42);
        }
        __result35__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
        return __result35__;
        come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__;
_Bool _if_conditional13;
void* right_value62;
struct list_item$1long* litem_30;
_Bool _if_conditional14;
void* right_value63;
struct list_item$1long* litem_31;
void* right_value64;
struct list_item$1long* litem_32;
struct list$1long* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
right_value62 = (void*)0;
memset(&litem_30, 0, sizeof(struct list_item$1long*));
right_value63 = (void*)0;
memset(&litem_31, 0, sizeof(struct list_item$1long*));
right_value64 = (void*)0;
memset(&litem_32, 0, sizeof(struct list_item$1long*));
                if(_if_conditional13=((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 222, 397)), "./neo-c.h", 222, 398))->len==0,                _if_conditional13) {
                    litem_30=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value62=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 223, "list_item$1long"))));
                    come_call_finalizer3(right_value62,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_30, "./neo-c.h", 225, 399)), "./neo-c.h", 225, 400))->prev=((void*)0);
                    ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_30, "./neo-c.h", 226, 401)), "./neo-c.h", 226, 402))->next=((void*)0);
                    ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_30, "./neo-c.h", 227, 403)), "./neo-c.h", 227, 404))->item=item;
                    ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 229, 405)), "./neo-c.h", 229, 406))->tail=litem_30;
                    ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 230, 407)), "./neo-c.h", 230, 408))->head=litem_30;
                }
                else {
                    if(_if_conditional14=((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 232, 409)), "./neo-c.h", 232, 410))->len==1,                    _if_conditional14) {
                        litem_31=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value63=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 233, "list_item$1long"))));
                        come_call_finalizer3(right_value63,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_31, "./neo-c.h", 235, 411)), "./neo-c.h", 235, 412))->prev=((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 235, 413)), "./neo-c.h", 235, 414))->head;
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_31, "./neo-c.h", 236, 415)), "./neo-c.h", 236, 416))->next=((void*)0);
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_31, "./neo-c.h", 237, 417)), "./neo-c.h", 237, 418))->item=item;
                        ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 239, 419)), "./neo-c.h", 239, 420))->tail=litem_31;
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 240, 421)), "./neo-c.h", 240, 422))->head, "./neo-c.h", 240, 423)), "./neo-c.h", 240, 424))->next=litem_31;
                    }
                    else {
                        litem_32=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value64=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 243, "list_item$1long"))));
                        come_call_finalizer3(right_value64,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_32, "./neo-c.h", 245, 425)), "./neo-c.h", 245, 426))->prev=((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 245, 427)), "./neo-c.h", 245, 428))->tail;
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_32, "./neo-c.h", 246, 429)), "./neo-c.h", 246, 430))->next=((void*)0);
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(litem_32, "./neo-c.h", 247, 431)), "./neo-c.h", 247, 432))->item=item;
                        ((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 249, 433)), "./neo-c.h", 249, 434))->tail, "./neo-c.h", 249, 435)), "./neo-c.h", 249, 436))->next=litem_32;
                        ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 250, 437)), "./neo-c.h", 250, 438))->tail=litem_32;
                    }
                }
                ((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 253, 439)), "./neo-c.h", 253, 440))->len++;
                __result34__ = __result_obj__ = self;
                return __result34__;
}

static void list_item$1longp_finalize(struct list_item$1long* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1longp_finalize(struct list$1long* self){
void* __result_obj__;
struct list_item$1long* it_33;
_Bool _while_condtional4;
struct list_item$1long* prev_it_34;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_33, 0, sizeof(struct list_item$1long*));
memset(&prev_it_34, 0, sizeof(struct list_item$1long*));
            it_33=((struct list$1long*)come_null_check(((struct list$1long*)come_null_check(self, "./neo-c.h", 120, 443)), "./neo-c.h", 120, 444))->head;
            while(_while_condtional4=it_33!=((void*)0),            _while_condtional4) {
                prev_it_34=it_33;
                it_33=((struct list_item$1long*)come_null_check(((struct list_item$1long*)come_null_check(it_33, "./neo-c.h", 123, 445)), "./neo-c.h", 123, 446))->next;
                come_call_finalizer3(prev_it_34,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__;
int i_35;
struct list$1float* __exception_result_var_b44;
struct list$1float* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_35, 0, sizeof(int));
        ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 109, 450)), "./neo-c.h", 109, 451))->head=((void*)0);
        ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 110, 452)), "./neo-c.h", 110, 453))->tail=((void*)0);
        ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 111, 454)), "./neo-c.h", 111, 455))->len=0;
        for(        i_35=0;        i_35<num_value;        i_35++        ){
            (come_push_stackframe("./neo-c.h", 114, 503),__exception_result_var_b44=list$1float_push_back(((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 114, 456)), "./neo-c.h", 114, 457)),((float*)come_null_check(values, "./neo-c.h", 114, 502))[i_35]), come_pop_stackframe(), __exception_result_var_b44);
        }
        __result38__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
        return __result38__;
        come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__;
_Bool _if_conditional15;
void* right_value67;
struct list_item$1float* litem_36;
_Bool _if_conditional16;
void* right_value68;
struct list_item$1float* litem_37;
void* right_value69;
struct list_item$1float* litem_38;
struct list$1float* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
right_value67 = (void*)0;
memset(&litem_36, 0, sizeof(struct list_item$1float*));
right_value68 = (void*)0;
memset(&litem_37, 0, sizeof(struct list_item$1float*));
right_value69 = (void*)0;
memset(&litem_38, 0, sizeof(struct list_item$1float*));
                if(_if_conditional15=((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 222, 458)), "./neo-c.h", 222, 459))->len==0,                _if_conditional15) {
                    litem_36=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value67=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 223, "list_item$1float"))));
                    come_call_finalizer3(right_value67,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_36, "./neo-c.h", 225, 460)), "./neo-c.h", 225, 461))->prev=((void*)0);
                    ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_36, "./neo-c.h", 226, 462)), "./neo-c.h", 226, 463))->next=((void*)0);
                    ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_36, "./neo-c.h", 227, 464)), "./neo-c.h", 227, 465))->item=item;
                    ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 229, 466)), "./neo-c.h", 229, 467))->tail=litem_36;
                    ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 230, 468)), "./neo-c.h", 230, 469))->head=litem_36;
                }
                else {
                    if(_if_conditional16=((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 232, 470)), "./neo-c.h", 232, 471))->len==1,                    _if_conditional16) {
                        litem_37=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value68=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 233, "list_item$1float"))));
                        come_call_finalizer3(right_value68,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_37, "./neo-c.h", 235, 472)), "./neo-c.h", 235, 473))->prev=((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 235, 474)), "./neo-c.h", 235, 475))->head;
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_37, "./neo-c.h", 236, 476)), "./neo-c.h", 236, 477))->next=((void*)0);
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_37, "./neo-c.h", 237, 478)), "./neo-c.h", 237, 479))->item=item;
                        ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 239, 480)), "./neo-c.h", 239, 481))->tail=litem_37;
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 240, 482)), "./neo-c.h", 240, 483))->head, "./neo-c.h", 240, 484)), "./neo-c.h", 240, 485))->next=litem_37;
                    }
                    else {
                        litem_38=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value69=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 243, "list_item$1float"))));
                        come_call_finalizer3(right_value69,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_38, "./neo-c.h", 245, 486)), "./neo-c.h", 245, 487))->prev=((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 245, 488)), "./neo-c.h", 245, 489))->tail;
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_38, "./neo-c.h", 246, 490)), "./neo-c.h", 246, 491))->next=((void*)0);
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(litem_38, "./neo-c.h", 247, 492)), "./neo-c.h", 247, 493))->item=item;
                        ((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 249, 494)), "./neo-c.h", 249, 495))->tail, "./neo-c.h", 249, 496)), "./neo-c.h", 249, 497))->next=litem_38;
                        ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 250, 498)), "./neo-c.h", 250, 499))->tail=litem_38;
                    }
                }
                ((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 253, 500)), "./neo-c.h", 253, 501))->len++;
                __result37__ = __result_obj__ = self;
                return __result37__;
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1floatp_finalize(struct list$1float* self){
void* __result_obj__;
struct list_item$1float* it_39;
_Bool _while_condtional5;
struct list_item$1float* prev_it_40;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_39, 0, sizeof(struct list_item$1float*));
memset(&prev_it_40, 0, sizeof(struct list_item$1float*));
            it_39=((struct list$1float*)come_null_check(((struct list$1float*)come_null_check(self, "./neo-c.h", 120, 504)), "./neo-c.h", 120, 505))->head;
            while(_while_condtional5=it_39!=((void*)0),            _while_condtional5) {
                prev_it_40=it_39;
                it_39=((struct list_item$1float*)come_null_check(((struct list_item$1float*)come_null_check(it_39, "./neo-c.h", 123, 506)), "./neo-c.h", 123, 507))->next;
                come_call_finalizer3(prev_it_40,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__;
int i_41;
struct list$1double* __exception_result_var_b46;
struct list$1double* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_41, 0, sizeof(int));
        ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 109, 511)), "./neo-c.h", 109, 512))->head=((void*)0);
        ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 110, 513)), "./neo-c.h", 110, 514))->tail=((void*)0);
        ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 111, 515)), "./neo-c.h", 111, 516))->len=0;
        for(        i_41=0;        i_41<num_value;        i_41++        ){
            (come_push_stackframe("./neo-c.h", 114, 564),__exception_result_var_b46=list$1double_push_back(((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 114, 517)), "./neo-c.h", 114, 518)),((double*)come_null_check(values, "./neo-c.h", 114, 563))[i_41]), come_pop_stackframe(), __exception_result_var_b46);
        }
        __result41__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
        return __result41__;
        come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__;
_Bool _if_conditional17;
void* right_value72;
struct list_item$1double* litem_42;
_Bool _if_conditional18;
void* right_value73;
struct list_item$1double* litem_43;
void* right_value74;
struct list_item$1double* litem_44;
struct list$1double* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
right_value72 = (void*)0;
memset(&litem_42, 0, sizeof(struct list_item$1double*));
right_value73 = (void*)0;
memset(&litem_43, 0, sizeof(struct list_item$1double*));
right_value74 = (void*)0;
memset(&litem_44, 0, sizeof(struct list_item$1double*));
                if(_if_conditional17=((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 222, 519)), "./neo-c.h", 222, 520))->len==0,                _if_conditional17) {
                    litem_42=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value72=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 223, "list_item$1double"))));
                    come_call_finalizer3(right_value72,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_42, "./neo-c.h", 225, 521)), "./neo-c.h", 225, 522))->prev=((void*)0);
                    ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_42, "./neo-c.h", 226, 523)), "./neo-c.h", 226, 524))->next=((void*)0);
                    ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_42, "./neo-c.h", 227, 525)), "./neo-c.h", 227, 526))->item=item;
                    ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 229, 527)), "./neo-c.h", 229, 528))->tail=litem_42;
                    ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 230, 529)), "./neo-c.h", 230, 530))->head=litem_42;
                }
                else {
                    if(_if_conditional18=((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 232, 531)), "./neo-c.h", 232, 532))->len==1,                    _if_conditional18) {
                        litem_43=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value73=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 233, "list_item$1double"))));
                        come_call_finalizer3(right_value73,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_43, "./neo-c.h", 235, 533)), "./neo-c.h", 235, 534))->prev=((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 235, 535)), "./neo-c.h", 235, 536))->head;
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_43, "./neo-c.h", 236, 537)), "./neo-c.h", 236, 538))->next=((void*)0);
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_43, "./neo-c.h", 237, 539)), "./neo-c.h", 237, 540))->item=item;
                        ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 239, 541)), "./neo-c.h", 239, 542))->tail=litem_43;
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 240, 543)), "./neo-c.h", 240, 544))->head, "./neo-c.h", 240, 545)), "./neo-c.h", 240, 546))->next=litem_43;
                    }
                    else {
                        litem_44=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value74=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 243, "list_item$1double"))));
                        come_call_finalizer3(right_value74,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_44, "./neo-c.h", 245, 547)), "./neo-c.h", 245, 548))->prev=((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 245, 549)), "./neo-c.h", 245, 550))->tail;
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_44, "./neo-c.h", 246, 551)), "./neo-c.h", 246, 552))->next=((void*)0);
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(litem_44, "./neo-c.h", 247, 553)), "./neo-c.h", 247, 554))->item=item;
                        ((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 249, 555)), "./neo-c.h", 249, 556))->tail, "./neo-c.h", 249, 557)), "./neo-c.h", 249, 558))->next=litem_44;
                        ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 250, 559)), "./neo-c.h", 250, 560))->tail=litem_44;
                    }
                }
                ((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 253, 561)), "./neo-c.h", 253, 562))->len++;
                __result40__ = __result_obj__ = self;
                return __result40__;
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1doublep_finalize(struct list$1double* self){
void* __result_obj__;
struct list_item$1double* it_45;
_Bool _while_condtional6;
struct list_item$1double* prev_it_46;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_45, 0, sizeof(struct list_item$1double*));
memset(&prev_it_46, 0, sizeof(struct list_item$1double*));
            it_45=((struct list$1double*)come_null_check(((struct list$1double*)come_null_check(self, "./neo-c.h", 120, 565)), "./neo-c.h", 120, 566))->head;
            while(_while_condtional6=it_45!=((void*)0),            _while_condtional6) {
                prev_it_46=it_45;
                it_45=((struct list_item$1double*)come_null_check(((struct list_item$1double*)come_null_check(it_45, "./neo-c.h", 123, 567)), "./neo-c.h", 123, 568))->next;
                come_call_finalizer3(prev_it_46,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
            }
}










struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value79;
struct sNodeBase* __exception_result_var_b51;
struct sNothingNode* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
    (come_push_stackframe("21obj.c", 7, 575),__exception_result_var_b51=((struct sNodeBase*)(right_value79=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sNothingNode*)come_null_check(((struct sNothingNode*)come_null_check(self, "21obj.c", 7, 573)), "21obj.c", 7, 574))),info))), come_pop_stackframe(), __exception_result_var_b51);
    come_call_finalizer3(right_value79,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result52__ = __result_obj__ = self;
    come_call_finalizer3(self,sNothingNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result52__;
    come_call_finalizer3(self,sNothingNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sNothingNode_kind(struct sNothingNode* self){
void* __result_obj__;
void* right_value80;
char* __exception_result_var_b52;
char* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
    __result53__ = __result_obj__ = (come_push_stackframe("21obj.c", 12, 584),__exception_result_var_b52=((char*)(right_value80=__builtin_string("sNothingNode"))), come_pop_stackframe(), __exception_result_var_b52);
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result53__;
}

_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __result54__;
memset(&__result_obj__, 0, sizeof(void*));
    __result54__ = (_Bool)1;
    return __result54__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
void* __result_obj__;
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional19=self!=((void*)0)&&((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 576)), "sNodeBase_finalize", 0, 577))->sname!=((void*)0),        _if_conditional19) {
            ((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 578)), "sNodeBase_finalize", 0, 579))->sname = come_decrement_ref_count2(((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 578)), "sNodeBase_finalize", 0, 579))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value81;
struct sNodeBase* __exception_result_var_b53;
struct sType* __exception_result_var_b77;
void* right_value117;
struct sType* __dec_obj35;
struct sNewNode* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
right_value117 = (void*)0;
    (come_push_stackframe("21obj.c", 25, 587),__exception_result_var_b53=((struct sNodeBase*)(right_value81=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sNewNode*)come_null_check(((struct sNewNode*)come_null_check(self, "21obj.c", 25, 585)), "21obj.c", 25, 586))),info))), come_pop_stackframe(), __exception_result_var_b53);
    come_call_finalizer3(right_value81,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj35=((struct sNewNode*)come_null_check(self, "21obj.c", 27, 588))->type;
    ((struct sNewNode*)come_null_check(self, "21obj.c", 27, 588))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value117=(come_push_stackframe("21obj.c", 27, 1178),__exception_result_var_b77=sType_clone(type), come_pop_stackframe(), __exception_result_var_b77))));
    come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value117,sType_finalize, 0, 1, 0, 0, __result_obj__);
    __result73__ = __result_obj__ = self;
    come_call_finalizer3(self,sNewNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result73__;
    come_call_finalizer3(self,sNewNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
}

char* sNewNode_kind(struct sNewNode* self){
void* __result_obj__;
void* right_value118;
char* __exception_result_var_b78;
char* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
    __result74__ = __result_obj__ = (come_push_stackframe("21obj.c", 32, 1187),__exception_result_var_b78=((char*)(right_value118=__builtin_string("sNewNode"))), come_pop_stackframe(), __exception_result_var_b78);
    right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result74__;
}

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_77;
void* right_value119;
struct CVALUE* come_value_78;
void* right_value120;
void* right_value121;
struct buffer* __exception_result_var_b79;
struct buffer* num_string_79;
struct buffer* __exception_result_var_b80;
struct list$1sNodeph* o2_saved_80;
struct sNode* __exception_result_var_b83;
struct sNode* it_83;
_Bool __exception_result_var_b84;
struct sNode* __exception_result_var_b87;
_Bool __exception_result_var_b88;
_Bool _if_conditional124;
_Bool __result82__;
void* right_value122;
struct CVALUE* __exception_result_var_b89;
struct CVALUE* cvalue_86;
void* right_value123;
char* __exception_result_var_b90;
struct buffer* __exception_result_var_b91;
void* right_value124;
struct sType* __exception_result_var_b92;
struct sType* type2_87;
struct list$1sNodeph* __exception_result_var_b93;
void* right_value125;
char* __exception_result_var_b94;
char* type_name_90;
void* right_value126;
char* __exception_result_var_b95;
char* type_name2_91;
void* right_value127;
char* __exception_result_var_b96;
void* right_value128;
char* __exception_result_var_b97;
char* __dec_obj36;
_Bool _if_conditional125;
void* right_value129;
char* __exception_result_var_b98;
char* __dec_obj37;
struct sType* __exception_result_var_b99;
void* right_value130;
struct sType* __dec_obj38;
struct list$1CVALUEph* __exception_result_var_b100;
_Bool __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_77, 0, sizeof(struct sType*));
right_value119 = (void*)0;
memset(&come_value_78, 0, sizeof(struct CVALUE*));
right_value120 = (void*)0;
right_value121 = (void*)0;
memset(&num_string_79, 0, sizeof(struct buffer*));
memset(&o2_saved_80, 0, sizeof(struct list$1sNodeph*));
memset(&it_83, 0, sizeof(struct sNode*));
right_value122 = (void*)0;
memset(&cvalue_86, 0, sizeof(struct CVALUE*));
right_value123 = (void*)0;
right_value124 = (void*)0;
memset(&type2_87, 0, sizeof(struct sType*));
right_value125 = (void*)0;
memset(&type_name_90, 0, sizeof(char*));
right_value126 = (void*)0;
memset(&type_name2_91, 0, sizeof(char*));
right_value127 = (void*)0;
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
    type_77=((struct sNewNode*)come_null_check(((struct sNewNode*)come_null_check(self, "21obj.c", 37, 1188)), "21obj.c", 37, 1189))->type;
    come_value_78=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value119=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 39, "CVALUE"))));
    come_call_finalizer3(right_value119,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    num_string_79=(struct buffer*)come_increment_ref_count((come_push_stackframe("21obj.c", 41, 1199),__exception_result_var_b79=((struct buffer*)(right_value121=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value120=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "21obj.c", 41, "buffer"))), "21obj.c", 41, 1198)))))), come_pop_stackframe(), __exception_result_var_b79));
    come_call_finalizer3(right_value120,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value121,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("21obj.c", 43, 1202),__exception_result_var_b80=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(num_string_79, "21obj.c", 43, 1200)), "21obj.c", 43, 1201)),"1"), come_pop_stackframe(), __exception_result_var_b80);
    for(    o2_saved_80=(struct list$1sNodeph*)come_increment_ref_count((((struct sType*)come_null_check(((struct sType*)come_null_check(type_77, "21obj.c", 45, 1203)), "21obj.c", 45, 1204))->mArrayNum)),it_83=(come_push_stackframe("21obj.c", 45, 1219),__exception_result_var_b83=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_80), "21obj.c", 45, 1205)), "21obj.c", 45, 1206))), come_pop_stackframe(), __exception_result_var_b83);    !(come_push_stackframe("21obj.c", 45, 1224),__exception_result_var_b84=list$1sNodeph_end(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_80), "21obj.c", 45, 1220)), "21obj.c", 45, 1221))), come_pop_stackframe(), __exception_result_var_b84);    it_83=(come_push_stackframe("21obj.c", 45, 1243),__exception_result_var_b87=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_80), "21obj.c", 45, 1225)), "21obj.c", 45, 1226))), come_pop_stackframe(), __exception_result_var_b87)    ){
        if(_if_conditional124=!(come_push_stackframe("21obj.c", 46, 1244),__exception_result_var_b88=node_compile(it_83,info), come_pop_stackframe(), __exception_result_var_b88),        _if_conditional124) {
            __result82__ = (_Bool)0;
            come_call_finalizer3(o2_saved_80,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_78,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(num_string_79,buffer_finalize, 0, 0, 0, 0, (void*)0);
            return __result82__;
        }
        cvalue_86=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("21obj.c", 50, 1245),__exception_result_var_b89=((struct CVALUE*)(right_value122=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b89));
        come_call_finalizer3(right_value122,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("21obj.c", 51,1246),dec_stack_ptr(1,info),come_pop_stackframe());
        (come_push_stackframe("21obj.c", 53, 1252),__exception_result_var_b91=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(num_string_79, "21obj.c", 53, 1247)), "21obj.c", 53, 1248)),(come_push_stackframe("21obj.c", 53, 1251),__exception_result_var_b90=((char*)(right_value123=xsprintf("*(%s)",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(cvalue_86, "21obj.c", 53, 1249)), "21obj.c", 53, 1250))->c_value))), come_pop_stackframe(), __exception_result_var_b90)), come_pop_stackframe(), __exception_result_var_b91);
        right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(cvalue_86,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_80,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    type2_87=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 56, 1255),__exception_result_var_b92=((struct sType*)(right_value124=solve_generics(type_77,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 56, 1253)), "21obj.c", 56, 1254))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b92));
    come_call_finalizer3(right_value124,sType_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("21obj.c", 63, 1270),__exception_result_var_b93=list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type2_87, "21obj.c", 63, 1256)), "21obj.c", 63, 1257))->mArrayNum, "21obj.c", 63, 1258)), "21obj.c", 63, 1259))), come_pop_stackframe(), __exception_result_var_b93);
    type_name_90=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 65, 1271),__exception_result_var_b94=((char*)(right_value125=make_type_name_string(type2_87,(_Bool)0,(_Bool)1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b94));
    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type_name2_91=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 67, 1272),__exception_result_var_b95=((char*)(right_value126=make_come_type_name_string(type2_87,info))), come_pop_stackframe(), __exception_result_var_b95));
    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj36=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_78, "21obj.c", 69, 1273)), "21obj.c", 69, 1274))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_78, "21obj.c", 69, 1273)), "21obj.c", 69, 1274))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 69, 1282),__exception_result_var_b97=((char*)(right_value128=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_90,type_name_90,(come_push_stackframe("21obj.c", 69, 1277),__exception_result_var_b96=((char*)(right_value127=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(num_string_79, "21obj.c", 69, 1275)), "21obj.c", 69, 1276))))), come_pop_stackframe(), __exception_result_var_b96),((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 69, 1278)), "21obj.c", 69, 1279))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 69, 1280)), "21obj.c", 69, 1281))->sline,type_name2_91))), come_pop_stackframe(), __exception_result_var_b97));
    __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(type2_87, "21obj.c", 71, 1283)), "21obj.c", 71, 1284))->mHeap=(_Bool)1;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(type2_87, "21obj.c", 72, 1285)), "21obj.c", 72, 1286))->mPointerNum++;
    if(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type2_87, "21obj.c", 74, 1287)), "21obj.c", 74, 1288))->mNoSolvedGenericsType, "21obj.c", 74, 1289)), "21obj.c", 74, 1290))->v1) {
        ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type2_87, "21obj.c", 75, 1291)), "21obj.c", 75, 1292))->mNoSolvedGenericsType, "21obj.c", 75, 1293)), "21obj.c", 75, 1294))->v1, "21obj.c", 75, 1295)), "21obj.c", 75, 1296))->mPointerNum++;
        ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type2_87, "21obj.c", 76, 1297)), "21obj.c", 76, 1298))->mNoSolvedGenericsType, "21obj.c", 76, 1299)), "21obj.c", 76, 1300))->v1, "21obj.c", 76, 1301)), "21obj.c", 76, 1302))->mHeap=(_Bool)1;
    }
    __dec_obj37=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_78, "21obj.c", 79, 1303)), "21obj.c", 79, 1304))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_78, "21obj.c", 79, 1303)), "21obj.c", 79, 1304))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 79, 1307),__exception_result_var_b98=((char*)(right_value129=append_object_to_right_values(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_78, "21obj.c", 79, 1305)), "21obj.c", 79, 1306))->c_value,(struct sType*)come_increment_ref_count(type2_87),info))), come_pop_stackframe(), __exception_result_var_b98));
    __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj38=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_78, "21obj.c", 80, 1308)), "21obj.c", 80, 1309))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_78, "21obj.c", 80, 1308)), "21obj.c", 80, 1309))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=(come_push_stackframe("21obj.c", 80, 1310),__exception_result_var_b99=sType_clone(type2_87), come_pop_stackframe(), __exception_result_var_b99))));
    come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value130,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_78, "21obj.c", 81, 1311)), "21obj.c", 81, 1312))->var=((void*)0);
    (come_push_stackframe("21obj.c", 83,1315),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_78, "21obj.c", 83, 1313)), "21obj.c", 83, 1314))->c_value),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 85, 1368),__exception_result_var_b100=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 85, 1316)), "21obj.c", 85, 1317))->stack, "21obj.c", 85, 1318)), "21obj.c", 85, 1319)),(struct CVALUE*)come_increment_ref_count(come_value_78)), come_pop_stackframe(), __exception_result_var_b100);
    __result85__ = (_Bool)1;
    come_call_finalizer3(come_value_78,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_79,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_87,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_90 = come_decrement_ref_count2(type_name_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_name2_91 = come_decrement_ref_count2(type_name2_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result85__;
    come_call_finalizer3(come_value_78,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_79,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_87,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_90 = come_decrement_ref_count2(type_name_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_name2_91 = come_decrement_ref_count2(type_name2_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional21;
struct sType* __result55__;
void* right_value82;
struct sType* result_47;
_Bool _if_conditional39;
_Bool _if_conditional40;
struct list$1sTypeph* __exception_result_var_b57;
void* right_value89;
struct list$1sTypeph* __dec_obj15;
_Bool _if_conditional44;
struct tuple1$1sTypeph* __exception_result_var_b59;
void* right_value92;
struct tuple1$1sTypeph* __dec_obj17;
_Bool _if_conditional48;
struct tuple1$1sTypeph* __exception_result_var_b60;
void* right_value93;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional49;
char* __exception_result_var_b61;
void* right_value94;
char* __dec_obj19;
_Bool _if_conditional50;
struct list$1sTypeph* __exception_result_var_b62;
void* right_value95;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional51;
struct list$1sNodeph* __exception_result_var_b66;
void* right_value103;
struct list$1sNodeph* __dec_obj24;
_Bool _if_conditional64;
_Bool _if_conditional65;
struct list$1sTypeph* __exception_result_var_b67;
void* right_value104;
struct list$1sTypeph* __dec_obj25;
_Bool _if_conditional66;
struct list$1charph* __exception_result_var_b71;
void* right_value111;
struct list$1charph* __dec_obj29;
_Bool _if_conditional70;
struct tuple1$1sTypeph* __exception_result_var_b72;
void* right_value112;
struct tuple1$1sTypeph* __dec_obj30;
_Bool _if_conditional71;
_Bool _if_conditional72;
struct sNode* __exception_result_var_b73;
void* right_value113;
struct sNode* __dec_obj31;
_Bool _if_conditional73;
_Bool _if_conditional74;
_Bool _if_conditional75;
_Bool _if_conditional76;
_Bool _if_conditional77;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional95;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
struct sNode* __exception_result_var_b74;
void* right_value114;
struct sNode* __dec_obj32;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
char* __exception_result_var_b75;
void* right_value115;
char* __dec_obj33;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
char* __exception_result_var_b76;
void* right_value116;
char* __dec_obj34;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
struct sType* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
memset(&result_47, 0, sizeof(struct sType*));
right_value89 = (void*)0;
right_value92 = (void*)0;
right_value93 = (void*)0;
right_value94 = (void*)0;
right_value95 = (void*)0;
right_value103 = (void*)0;
right_value104 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
        if(_if_conditional21=self==(void*)0,        _if_conditional21) {
            __result55__ = __result_obj__ = (void*)0;
            return __result55__;
        }
        result_47=(struct sType*)come_increment_ref_count(((struct sType*)(right_value82=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer3(right_value82,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional39=self!=((void*)0),        _if_conditional39) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 4, 669)), "sType_clone", 4, 670))->mClass=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 4, 671)), "sType_clone", 4, 672))->mClass;
        }
        if(_if_conditional40=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 5, 673)), "sType_clone", 5, 674))->mMultipleTypes!=((void*)0),        _if_conditional40) {
            __dec_obj15=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 5, 675)), "sType_clone", 5, 676))->mMultipleTypes;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 5, 675)), "sType_clone", 5, 676))->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value89=(come_push_stackframe("sType_clone", 5, 742),__exception_result_var_b57=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 5, 677)), "sType_clone", 5, 678))->mMultipleTypes), come_pop_stackframe(), __exception_result_var_b57))));
            come_call_finalizer3(__dec_obj15,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value89,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional44=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 6, 747)), "sType_clone", 6, 748))->mNoSolvedGenericsType!=((void*)0),        _if_conditional44) {
            __dec_obj17=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 6, 749)), "sType_clone", 6, 750))->mNoSolvedGenericsType;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 6, 749)), "sType_clone", 6, 750))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value92=(come_push_stackframe("sType_clone", 6, 764),__exception_result_var_b59=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 6, 751)), "sType_clone", 6, 752))->mNoSolvedGenericsType), come_pop_stackframe(), __exception_result_var_b59))));
            come_call_finalizer3(__dec_obj17,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value92,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional48=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 7, 765)), "sType_clone", 7, 766))->mOriginalLoadVarType!=((void*)0),        _if_conditional48) {
            __dec_obj18=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 7, 767)), "sType_clone", 7, 768))->mOriginalLoadVarType;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 7, 767)), "sType_clone", 7, 768))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value93=(come_push_stackframe("sType_clone", 7, 771),__exception_result_var_b60=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 7, 769)), "sType_clone", 7, 770))->mOriginalLoadVarType), come_pop_stackframe(), __exception_result_var_b60))));
            come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value93,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional49=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 8, 772)), "sType_clone", 8, 773))->mGenericsName!=((void*)0),        _if_conditional49) {
            __dec_obj19=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 8, 774)), "sType_clone", 8, 775))->mGenericsName;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 8, 774)), "sType_clone", 8, 775))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value94=(come_push_stackframe("sType_clone", 8, 778),__exception_result_var_b61=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 8, 776)), "sType_clone", 8, 777))->mGenericsName), come_pop_stackframe(), __exception_result_var_b61))));
            __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional50=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 9, 779)), "sType_clone", 9, 780))->mGenericsTypes!=((void*)0),        _if_conditional50) {
            __dec_obj20=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 9, 781)), "sType_clone", 9, 782))->mGenericsTypes;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 9, 781)), "sType_clone", 9, 782))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value95=(come_push_stackframe("sType_clone", 9, 785),__exception_result_var_b62=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 9, 783)), "sType_clone", 9, 784))->mGenericsTypes), come_pop_stackframe(), __exception_result_var_b62))));
            come_call_finalizer3(__dec_obj20,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value95,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional51=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 10, 786)), "sType_clone", 10, 787))->mArrayNum!=((void*)0),        _if_conditional51) {
            __dec_obj24=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 10, 788)), "sType_clone", 10, 789))->mArrayNum;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 10, 788)), "sType_clone", 10, 789))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value103=(come_push_stackframe("sType_clone", 10, 889),__exception_result_var_b66=list$1sNodephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 10, 790)), "sType_clone", 10, 791))->mArrayNum), come_pop_stackframe(), __exception_result_var_b66))));
            come_call_finalizer3(__dec_obj24,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value103,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional64=self!=((void*)0),        _if_conditional64) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 11, 894)), "sType_clone", 11, 895))->mOmitArrayNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 11, 896)), "sType_clone", 11, 897))->mOmitArrayNum;
        }
        if(_if_conditional65=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 12, 898)), "sType_clone", 12, 899))->mParamTypes!=((void*)0),        _if_conditional65) {
            __dec_obj25=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 12, 900)), "sType_clone", 12, 901))->mParamTypes;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 12, 900)), "sType_clone", 12, 901))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value104=(come_push_stackframe("sType_clone", 12, 904),__exception_result_var_b67=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 12, 902)), "sType_clone", 12, 903))->mParamTypes), come_pop_stackframe(), __exception_result_var_b67))));
            come_call_finalizer3(__dec_obj25,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value104,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional66=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 13, 905)), "sType_clone", 13, 906))->mParamNames!=((void*)0),        _if_conditional66) {
            __dec_obj29=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 13, 907)), "sType_clone", 13, 908))->mParamNames;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 13, 907)), "sType_clone", 13, 908))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value111=(come_push_stackframe("sType_clone", 13, 974),__exception_result_var_b71=list$1charphp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 13, 909)), "sType_clone", 13, 910))->mParamNames), come_pop_stackframe(), __exception_result_var_b71))));
            come_call_finalizer3(__dec_obj29,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value111,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional70=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 14, 979)), "sType_clone", 14, 980))->mResultType!=((void*)0),        _if_conditional70) {
            __dec_obj30=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 14, 981)), "sType_clone", 14, 982))->mResultType;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 14, 981)), "sType_clone", 14, 982))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value112=(come_push_stackframe("sType_clone", 14, 985),__exception_result_var_b72=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 14, 983)), "sType_clone", 14, 984))->mResultType), come_pop_stackframe(), __exception_result_var_b72))));
            come_call_finalizer3(__dec_obj30,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value112,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 15, 986)), "sType_clone", 15, 987))->mVarArgs=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 15, 988)), "sType_clone", 15, 989))->mVarArgs;
        }
        if(_if_conditional72=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 16, 990)), "sType_clone", 16, 991))->mAlignas!=((void*)0),        _if_conditional72) {
            __dec_obj31=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 16, 992)), "sType_clone", 16, 993))->mAlignas;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 16, 992)), "sType_clone", 16, 993))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value113=(come_push_stackframe("sType_clone", 16, 996),__exception_result_var_b73=sNode_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 16, 994)), "sType_clone", 16, 995))->mAlignas), come_pop_stackframe(), __exception_result_var_b73))));
            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value113) { right_value113 = come_decrement_ref_count2(right_value113, ((struct sNode*)right_value113)->finalize, ((struct sNode*)right_value113)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 17, 997)), "sType_clone", 17, 998))->mUnsigned=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 17, 999)), "sType_clone", 17, 1000))->mUnsigned;
        }
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 18, 1001)), "sType_clone", 18, 1002))->mShort=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 18, 1003)), "sType_clone", 18, 1004))->mShort;
        }
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 19, 1005)), "sType_clone", 19, 1006))->mLong=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 19, 1007)), "sType_clone", 19, 1008))->mLong;
        }
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 20, 1009)), "sType_clone", 20, 1010))->mLongLong=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 20, 1011)), "sType_clone", 20, 1012))->mLongLong;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 21, 1013)), "sType_clone", 21, 1014))->mConstant=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 21, 1015)), "sType_clone", 21, 1016))->mConstant;
        }
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 22, 1017)), "sType_clone", 22, 1018))->mRegister=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 22, 1019)), "sType_clone", 22, 1020))->mRegister;
        }
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 23, 1021)), "sType_clone", 23, 1022))->mVolatile=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 23, 1023)), "sType_clone", 23, 1024))->mVolatile;
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 24, 1025)), "sType_clone", 24, 1026))->mStatic=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 24, 1027)), "sType_clone", 24, 1028))->mStatic;
        }
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 25, 1029)), "sType_clone", 25, 1030))->mUniq=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 25, 1031)), "sType_clone", 25, 1032))->mUniq;
        }
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 26, 1033)), "sType_clone", 26, 1034))->mRecord=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 26, 1035)), "sType_clone", 26, 1036))->mRecord;
        }
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 27, 1037)), "sType_clone", 27, 1038))->mExtern=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 27, 1039)), "sType_clone", 27, 1040))->mExtern;
        }
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 28, 1041)), "sType_clone", 28, 1042))->mRestrict=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 28, 1043)), "sType_clone", 28, 1044))->mRestrict;
        }
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 29, 1045)), "sType_clone", 29, 1046))->mImmutable=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 29, 1047)), "sType_clone", 29, 1048))->mImmutable;
        }
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 30, 1049)), "sType_clone", 30, 1050))->mHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 30, 1051)), "sType_clone", 30, 1052))->mHeap;
        }
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 31, 1053)), "sType_clone", 31, 1054))->mDummyHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 31, 1055)), "sType_clone", 31, 1056))->mDummyHeap;
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 32, 1057)), "sType_clone", 32, 1058))->mDelegate=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 32, 1059)), "sType_clone", 32, 1060))->mDelegate;
        }
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 33, 1061)), "sType_clone", 33, 1062))->mShare=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 33, 1063)), "sType_clone", 33, 1064))->mShare;
        }
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 34, 1065)), "sType_clone", 34, 1066))->mClone=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 34, 1067)), "sType_clone", 34, 1068))->mClone;
        }
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 35, 1069)), "sType_clone", 35, 1070))->mNoHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 35, 1071)), "sType_clone", 35, 1072))->mNoHeap;
        }
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 36, 1073)), "sType_clone", 36, 1074))->mNoCallingDestructor=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 36, 1075)), "sType_clone", 36, 1076))->mNoCallingDestructor;
        }
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 37, 1077)), "sType_clone", 37, 1078))->mRefference=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 37, 1079)), "sType_clone", 37, 1080))->mRefference;
        }
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 38, 1081)), "sType_clone", 38, 1082))->mException=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 38, 1083)), "sType_clone", 38, 1084))->mException;
        }
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 39, 1085)), "sType_clone", 39, 1086))->mPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 39, 1087)), "sType_clone", 39, 1088))->mPointerNum;
        }
        if(_if_conditional96=self!=((void*)0),        _if_conditional96) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 40, 1089)), "sType_clone", 40, 1090))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 40, 1091)), "sType_clone", 40, 1092))->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional97=self!=((void*)0),        _if_conditional97) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 41, 1093)), "sType_clone", 41, 1094))->mNoArrayPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 41, 1095)), "sType_clone", 41, 1096))->mNoArrayPointerNum;
        }
        if(_if_conditional98=self!=((void*)0),        _if_conditional98) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 42, 1097)), "sType_clone", 42, 1098))->mTypedefOriginalPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 42, 1099)), "sType_clone", 42, 1100))->mTypedefOriginalPointerNum;
        }
        if(_if_conditional99=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 43, 1101)), "sType_clone", 43, 1102))->mSizeNum!=((void*)0),        _if_conditional99) {
            __dec_obj32=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 43, 1103)), "sType_clone", 43, 1104))->mSizeNum;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 43, 1103)), "sType_clone", 43, 1104))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value114=(come_push_stackframe("sType_clone", 43, 1107),__exception_result_var_b74=sNode_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 43, 1105)), "sType_clone", 43, 1106))->mSizeNum), come_pop_stackframe(), __exception_result_var_b74))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value114) { right_value114 = come_decrement_ref_count2(right_value114, ((struct sNode*)right_value114)->finalize, ((struct sNode*)right_value114)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional100=self!=((void*)0),        _if_conditional100) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 44, 1108)), "sType_clone", 44, 1109))->mDynamicArrayNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 44, 1110)), "sType_clone", 44, 1111))->mDynamicArrayNum;
        }
        if(_if_conditional101=self!=((void*)0),        _if_conditional101) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 45, 1112)), "sType_clone", 45, 1113))->mTypeOfExpression=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 45, 1114)), "sType_clone", 45, 1115))->mTypeOfExpression;
        }
        if(_if_conditional102=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 46, 1116)), "sType_clone", 46, 1117))->mOriginalTypeName!=((void*)0),        _if_conditional102) {
            __dec_obj33=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 46, 1118)), "sType_clone", 46, 1119))->mOriginalTypeName;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 46, 1118)), "sType_clone", 46, 1119))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value115=(come_push_stackframe("sType_clone", 46, 1122),__exception_result_var_b75=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 46, 1120)), "sType_clone", 46, 1121))->mOriginalTypeName), come_pop_stackframe(), __exception_result_var_b75))));
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional103=self!=((void*)0),        _if_conditional103) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 47, 1123)), "sType_clone", 47, 1124))->mOriginalPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 47, 1125)), "sType_clone", 47, 1126))->mOriginalPointerNum;
        }
        if(_if_conditional104=self!=((void*)0),        _if_conditional104) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 48, 1127)), "sType_clone", 48, 1128))->mFunctionParam=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 48, 1129)), "sType_clone", 48, 1130))->mFunctionParam;
        }
        if(_if_conditional105=self!=((void*)0),        _if_conditional105) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 49, 1131)), "sType_clone", 49, 1132))->mAllocaValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 49, 1133)), "sType_clone", 49, 1134))->mAllocaValue;
        }
        if(_if_conditional106=self!=((void*)0),        _if_conditional106) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 50, 1135)), "sType_clone", 50, 1136))->mGenericsStruct=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 50, 1137)), "sType_clone", 50, 1138))->mGenericsStruct;
        }
        if(_if_conditional107=self!=((void*)0),        _if_conditional107) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 51, 1139)), "sType_clone", 51, 1140))->mSolvedGenericsName=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 51, 1141)), "sType_clone", 51, 1142))->mSolvedGenericsName;
        }
        if(_if_conditional108=self!=((void*)0),        _if_conditional108) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 52, 1143)), "sType_clone", 52, 1144))->mComeMemCore=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 52, 1145)), "sType_clone", 52, 1146))->mComeMemCore;
        }
        if(_if_conditional109=self!=((void*)0),        _if_conditional109) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 53, 1147)), "sType_clone", 53, 1148))->mInline=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 53, 1149)), "sType_clone", 53, 1150))->mInline;
        }
        if(_if_conditional110=self!=((void*)0),        _if_conditional110) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 54, 1151)), "sType_clone", 54, 1152))->mNullValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 54, 1153)), "sType_clone", 54, 1154))->mNullValue;
        }
        if(_if_conditional111=self!=((void*)0),        _if_conditional111) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 55, 1155)), "sType_clone", 55, 1156))->mGuardValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 55, 1157)), "sType_clone", 55, 1158))->mGuardValue;
        }
        if(_if_conditional112=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 56, 1159)), "sType_clone", 56, 1160))->mAsmName!=((void*)0),        _if_conditional112) {
            __dec_obj34=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 56, 1161)), "sType_clone", 56, 1162))->mAsmName;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 56, 1161)), "sType_clone", 56, 1162))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value116=(come_push_stackframe("sType_clone", 56, 1165),__exception_result_var_b76=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 56, 1163)), "sType_clone", 56, 1164))->mAsmName), come_pop_stackframe(), __exception_result_var_b76))));
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional113=self!=((void*)0),        _if_conditional113) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 57, 1166)), "sType_clone", 57, 1167))->mArrayPointerType=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 57, 1168)), "sType_clone", 57, 1169))->mArrayPointerType;
        }
        if(_if_conditional114=self!=((void*)0),        _if_conditional114) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 58, 1170)), "sType_clone", 58, 1171))->mLambdaArray=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 58, 1172)), "sType_clone", 58, 1173))->mLambdaArray;
        }
        if(_if_conditional115=self!=((void*)0),        _if_conditional115) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 59, 1174)), "sType_clone", 59, 1175))->mNoNumberArray=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 59, 1176)), "sType_clone", 59, 1177))->mNoNumberArray;
        }
        __result72__ = __result_obj__ = result_47;
        come_call_finalizer3(result_47,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result72__;
        come_call_finalizer3(result_47,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional22;
_Bool _if_conditional24;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional22=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 0, 589)), "sType_finalize", 0, 590))->mMultipleTypes!=((void*)0),            _if_conditional22) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 0, 591)), "sType_finalize", 0, 592))->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional24=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 1, 601)), "sType_finalize", 1, 602))->mNoSolvedGenericsType!=((void*)0),            _if_conditional24) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 1, 603)), "sType_finalize", 1, 604))->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional26=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 2, 609)), "sType_finalize", 2, 610))->mOriginalLoadVarType!=((void*)0),            _if_conditional26) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 2, 611)), "sType_finalize", 2, 612))->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional27=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 613)), "sType_finalize", 3, 614))->mGenericsName!=((void*)0),            _if_conditional27) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 615)), "sType_finalize", 3, 616))->mGenericsName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 615)), "sType_finalize", 3, 616))->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional28=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 4, 617)), "sType_finalize", 4, 618))->mGenericsTypes!=((void*)0),            _if_conditional28) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 4, 619)), "sType_finalize", 4, 620))->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional29=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 5, 621)), "sType_finalize", 5, 622))->mArrayNum!=((void*)0),            _if_conditional29) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 5, 623)), "sType_finalize", 5, 624))->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional31=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 6, 633)), "sType_finalize", 6, 634))->mParamTypes!=((void*)0),            _if_conditional31) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 6, 635)), "sType_finalize", 6, 636))->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional32=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 7, 637)), "sType_finalize", 7, 638))->mParamNames!=((void*)0),            _if_conditional32) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 7, 639)), "sType_finalize", 7, 640))->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional34=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 8, 649)), "sType_finalize", 8, 650))->mResultType!=((void*)0),            _if_conditional34) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 8, 651)), "sType_finalize", 8, 652))->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional35=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 653)), "sType_finalize", 9, 654))->mAlignas!=((void*)0),            _if_conditional35) {
                if(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 655)), "sType_finalize", 9, 656))->mAlignas) { ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 655)), "sType_finalize", 9, 656))->mAlignas = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 655)), "sType_finalize", 9, 656))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 655)), "sType_finalize", 9, 656))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 655)), "sType_finalize", 9, 656))->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional36=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 657)), "sType_finalize", 10, 658))->mSizeNum!=((void*)0),            _if_conditional36) {
                if(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 659)), "sType_finalize", 10, 660))->mSizeNum) { ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 659)), "sType_finalize", 10, 660))->mSizeNum = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 659)), "sType_finalize", 10, 660))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 659)), "sType_finalize", 10, 660))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 659)), "sType_finalize", 10, 660))->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional37=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 661)), "sType_finalize", 11, 662))->mOriginalTypeName!=((void*)0),            _if_conditional37) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 663)), "sType_finalize", 11, 664))->mOriginalTypeName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 663)), "sType_finalize", 11, 664))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional38=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 665)), "sType_finalize", 12, 666))->mAsmName!=((void*)0),            _if_conditional38) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 667)), "sType_finalize", 12, 668))->mAsmName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 667)), "sType_finalize", 12, 668))->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_48;
_Bool _while_condtional7;
struct list_item$1sTypeph* prev_it_49;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_48, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_49, 0, sizeof(struct list_item$1sTypeph*));
                    it_48=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 120, 593)), "./neo-c.h", 120, 594))->head;
                    while(_while_condtional7=it_48!=((void*)0),                    _while_condtional7) {
                        prev_it_49=it_48;
                        it_48=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_48, "./neo-c.h", 123, 595)), "./neo-c.h", 123, 596))->next;
                        come_call_finalizer3(prev_it_49,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional23=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0, 597)), "list_item$1sTypephp_finalize", 0, 598))->item!=((void*)0),                            _if_conditional23) {
                                come_call_finalizer3(((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0, 599)), "list_item$1sTypephp_finalize", 0, 600))->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional25=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0, 605)), "tuple1$1sTypephp_finalize", 0, 606))->v1!=((void*)0),                    _if_conditional25) {
                        come_call_finalizer3(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0, 607)), "tuple1$1sTypephp_finalize", 0, 608))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_50;
_Bool _while_condtional8;
struct list_item$1sNodeph* prev_it_51;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_50, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_51, 0, sizeof(struct list_item$1sNodeph*));
                    it_50=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 120, 625)), "./neo-c.h", 120, 626))->head;
                    while(_while_condtional8=it_50!=((void*)0),                    _while_condtional8) {
                        prev_it_51=it_50;
                        it_50=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_50, "./neo-c.h", 123, 627)), "./neo-c.h", 123, 628))->next;
                        come_call_finalizer3(prev_it_51,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional30;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional30=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 629)), "list_item$1sNodephp_finalize", 0, 630))->item!=((void*)0),                            _if_conditional30) {
                                if(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 631)), "list_item$1sNodephp_finalize", 0, 632))->item) { ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 631)), "list_item$1sNodephp_finalize", 0, 632))->item = come_decrement_ref_count2(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 631)), "list_item$1sNodephp_finalize", 0, 632))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 631)), "list_item$1sNodephp_finalize", 0, 632))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 631)), "list_item$1sNodephp_finalize", 0, 632))->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_52;
_Bool _while_condtional9;
struct list_item$1charph* prev_it_53;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_52, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_53, 0, sizeof(struct list_item$1charph*));
                    it_52=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 120, 641)), "./neo-c.h", 120, 642))->head;
                    while(_while_condtional9=it_52!=((void*)0),                    _while_condtional9) {
                        prev_it_53=it_52;
                        it_52=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_52, "./neo-c.h", 123, 643)), "./neo-c.h", 123, 644))->next;
                        come_call_finalizer3(prev_it_53,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional33;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional33=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 645)), "list_item$1charphp_finalize", 0, 646))->item!=((void*)0),                            _if_conditional33) {
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 647)), "list_item$1charphp_finalize", 0, 648))->item = come_decrement_ref_count2(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 647)), "list_item$1charphp_finalize", 0, 648))->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional41;
struct list$1sTypeph* __result56__;
void* right_value83;
void* right_value84;
struct list$1sTypeph* __exception_result_var_b54;
struct list$1sTypeph* result_54;
struct list_item$1sTypeph* it_55;
_Bool _while_condtional10;
struct sType* __exception_result_var_b55;
void* right_value88;
struct list$1sTypeph* __exception_result_var_b56;
struct list$1sTypeph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value83 = (void*)0;
right_value84 = (void*)0;
memset(&result_54, 0, sizeof(struct list$1sTypeph*));
memset(&it_55, 0, sizeof(struct list_item$1sTypeph*));
right_value88 = (void*)0;
                if(_if_conditional41=self==((void*)0),                _if_conditional41) {
                    __result56__ = __result_obj__ = ((void*)0);
                    return __result56__;
                }
                result_54=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 687),__exception_result_var_b54=((struct list$1sTypeph*)(right_value84=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value83=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 139, "list$1sTypeph"))), "./neo-c.h", 139, 679)), "./neo-c.h", 139, 680)))))), come_pop_stackframe(), __exception_result_var_b54));
                come_call_finalizer3(right_value83,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value84,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_55=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 141, 688)), "./neo-c.h", 141, 689))->head;
                while(_while_condtional10=it_55!=((void*)0),                _while_condtional10) {
                    (come_push_stackframe("./neo-c.h", 143, 739),__exception_result_var_b56=list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(result_54, "./neo-c.h", 143, 690)), "./neo-c.h", 143, 691)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=(come_push_stackframe("./neo-c.h", 143, 738),__exception_result_var_b55=sType_clone(((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_55, "./neo-c.h", 143, 736)), "./neo-c.h", 143, 737))->item), come_pop_stackframe(), __exception_result_var_b55))))), come_pop_stackframe(), __exception_result_var_b56);
                    come_call_finalizer3(right_value88,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    it_55=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_55, "./neo-c.h", 145, 740)), "./neo-c.h", 145, 741))->next;
                }
                __result59__ = __result_obj__ = result_54;
                come_call_finalizer3(result_54,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result59__;
                come_call_finalizer3(result_54,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 101, 681)), "./neo-c.h", 101, 682))->head=((void*)0);
                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 102, 683)), "./neo-c.h", 102, 684))->tail=((void*)0);
                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 103, 685)), "./neo-c.h", 103, 686))->len=0;
                    __result57__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result57__;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional42;
void* right_value85;
struct list_item$1sTypeph* litem_56;
struct sType* __dec_obj12;
_Bool _if_conditional43;
void* right_value86;
struct list_item$1sTypeph* litem_57;
struct sType* __dec_obj13;
void* right_value87;
struct list_item$1sTypeph* litem_58;
struct sType* __dec_obj14;
struct list$1sTypeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value85 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1sTypeph*));
right_value86 = (void*)0;
memset(&litem_57, 0, sizeof(struct list_item$1sTypeph*));
right_value87 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional42=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 152, 692)), "./neo-c.h", 152, 693))->len==0,                        _if_conditional42) {
                            litem_56=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value85=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 153, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value85,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_56, "./neo-c.h", 155, 694)), "./neo-c.h", 155, 695))->prev=((void*)0);
                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_56, "./neo-c.h", 156, 696)), "./neo-c.h", 156, 697))->next=((void*)0);
                            __dec_obj12=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_56, "./neo-c.h", 157, 698)), "./neo-c.h", 157, 699))->item;
                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_56, "./neo-c.h", 157, 698)), "./neo-c.h", 157, 699))->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj12,sType_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 159, 700)), "./neo-c.h", 159, 701))->tail=litem_56;
                            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 160, 702)), "./neo-c.h", 160, 703))->head=litem_56;
                        }
                        else {
                            if(_if_conditional43=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 162, 704)), "./neo-c.h", 162, 705))->len==1,                            _if_conditional43) {
                                litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value86=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 163, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value86,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_57, "./neo-c.h", 165, 706)), "./neo-c.h", 165, 707))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 165, 708)), "./neo-c.h", 165, 709))->head;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_57, "./neo-c.h", 166, 710)), "./neo-c.h", 166, 711))->next=((void*)0);
                                __dec_obj13=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_57, "./neo-c.h", 167, 712)), "./neo-c.h", 167, 713))->item;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_57, "./neo-c.h", 167, 712)), "./neo-c.h", 167, 713))->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
                                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 169, 714)), "./neo-c.h", 169, 715))->tail=litem_57;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 170, 716)), "./neo-c.h", 170, 717))->head, "./neo-c.h", 170, 718)), "./neo-c.h", 170, 719))->next=litem_57;
                            }
                            else {
                                litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value87=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 173, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value87,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_58, "./neo-c.h", 175, 720)), "./neo-c.h", 175, 721))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 175, 722)), "./neo-c.h", 175, 723))->tail;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_58, "./neo-c.h", 176, 724)), "./neo-c.h", 176, 725))->next=((void*)0);
                                __dec_obj14=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_58, "./neo-c.h", 177, 726)), "./neo-c.h", 177, 727))->item;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_58, "./neo-c.h", 177, 726)), "./neo-c.h", 177, 727))->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 179, 728)), "./neo-c.h", 179, 729))->tail, "./neo-c.h", 179, 730)), "./neo-c.h", 179, 731))->next=litem_58;
                                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 180, 732)), "./neo-c.h", 180, 733))->tail=litem_58;
                            }
                        }
                        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 183, 734)), "./neo-c.h", 183, 735))->len++;
                        __result58__ = __result_obj__ = self;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result58__;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_59;
_Bool _while_condtional11;
struct list_item$1sTypeph* prev_it_60;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_59, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_60, 0, sizeof(struct list_item$1sTypeph*));
                it_59=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 120, 743)), "./neo-c.h", 120, 744))->head;
                while(_while_condtional11=it_59!=((void*)0),                _while_condtional11) {
                    prev_it_60=it_59;
                    it_59=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_59, "./neo-c.h", 123, 745)), "./neo-c.h", 123, 746))->next;
                    come_call_finalizer3(prev_it_60,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional45;
struct tuple1$1sTypeph* __result60__;
void* right_value90;
struct tuple1$1sTypeph* result_61;
_Bool _if_conditional47;
struct sType* __exception_result_var_b58;
void* right_value91;
struct sType* __dec_obj16;
struct tuple1$1sTypeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
memset(&result_61, 0, sizeof(struct tuple1$1sTypeph*));
right_value91 = (void*)0;
                if(_if_conditional45=self==(void*)0,                _if_conditional45) {
                    __result60__ = __result_obj__ = (void*)0;
                    return __result60__;
                }
                result_61=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value90=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer3(right_value90,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional47=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4, 757)), "tuple1$1sTypephp_clone", 4, 758))->v1!=((void*)0),                _if_conditional47) {
                    __dec_obj16=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(result_61, "tuple1$1sTypephp_clone", 4, 759)), "tuple1$1sTypephp_clone", 4, 760))->v1;
                    ((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(result_61, "tuple1$1sTypephp_clone", 4, 759)), "tuple1$1sTypephp_clone", 4, 760))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value91=(come_push_stackframe("tuple1$1sTypephp_clone", 4, 763),__exception_result_var_b58=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4, 761)), "tuple1$1sTypephp_clone", 4, 762))->v1), come_pop_stackframe(), __exception_result_var_b58))));
                    come_call_finalizer3(__dec_obj16,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value91,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                __result61__ = __result_obj__ = result_61;
                come_call_finalizer3(result_61,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result61__;
                come_call_finalizer3(result_61,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional46;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional46=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0, 753)), "tuple1$1sTypeph_finalize", 0, 754))->v1!=((void*)0),                    _if_conditional46) {
                        come_call_finalizer3(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0, 755)), "tuple1$1sTypeph_finalize", 0, 756))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional52;
struct list$1sNodeph* __result62__;
void* right_value96;
void* right_value97;
struct list$1sNodeph* __exception_result_var_b63;
struct list$1sNodeph* result_62;
struct list_item$1sNodeph* it_63;
_Bool _while_condtional12;
struct sNode* __exception_result_var_b64;
void* right_value102;
struct list$1sNodeph* __exception_result_var_b65;
struct list$1sNodeph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
right_value97 = (void*)0;
memset(&result_62, 0, sizeof(struct list$1sNodeph*));
memset(&it_63, 0, sizeof(struct list_item$1sNodeph*));
right_value102 = (void*)0;
                if(_if_conditional52=self==((void*)0),                _if_conditional52) {
                    __result62__ = __result_obj__ = ((void*)0);
                    return __result62__;
                }
                result_62=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 800),__exception_result_var_b63=((struct list$1sNodeph*)(right_value97=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value96=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 139, "list$1sNodeph"))), "./neo-c.h", 139, 792)), "./neo-c.h", 139, 793)))))), come_pop_stackframe(), __exception_result_var_b63));
                come_call_finalizer3(right_value96,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value97,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_63=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 141, 801)), "./neo-c.h", 141, 802))->head;
                while(_while_condtional12=it_63!=((void*)0),                _while_condtional12) {
                    (come_push_stackframe("./neo-c.h", 143, 886),__exception_result_var_b65=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(result_62, "./neo-c.h", 143, 803)), "./neo-c.h", 143, 804)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value102=(come_push_stackframe("./neo-c.h", 143, 885),__exception_result_var_b64=sNode_clone(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_63, "./neo-c.h", 143, 849)), "./neo-c.h", 143, 850))->item), come_pop_stackframe(), __exception_result_var_b64))))), come_pop_stackframe(), __exception_result_var_b65);
                    if(right_value102) { right_value102 = come_decrement_ref_count2(right_value102, ((struct sNode*)right_value102)->finalize, ((struct sNode*)right_value102)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_63=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_63, "./neo-c.h", 145, 887)), "./neo-c.h", 145, 888))->next;
                }
                __result67__ = __result_obj__ = result_62;
                come_call_finalizer3(result_62,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result67__;
                come_call_finalizer3(result_62,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 101, 794)), "./neo-c.h", 101, 795))->head=((void*)0);
                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 102, 796)), "./neo-c.h", 102, 797))->tail=((void*)0);
                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 103, 798)), "./neo-c.h", 103, 799))->len=0;
                    __result63__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result63__;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional53;
void* right_value98;
struct list_item$1sNodeph* litem_64;
struct sNode* __dec_obj21;
_Bool _if_conditional54;
void* right_value99;
struct list_item$1sNodeph* litem_65;
struct sNode* __dec_obj22;
void* right_value100;
struct list_item$1sNodeph* litem_66;
struct sNode* __dec_obj23;
struct list$1sNodeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value98 = (void*)0;
memset(&litem_64, 0, sizeof(struct list_item$1sNodeph*));
right_value99 = (void*)0;
memset(&litem_65, 0, sizeof(struct list_item$1sNodeph*));
right_value100 = (void*)0;
memset(&litem_66, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional53=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 152, 805)), "./neo-c.h", 152, 806))->len==0,                        _if_conditional53) {
                            litem_64=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value98=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 153, "list_item$1sNodeph"))));
                            come_call_finalizer3(right_value98,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_64, "./neo-c.h", 155, 807)), "./neo-c.h", 155, 808))->prev=((void*)0);
                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_64, "./neo-c.h", 156, 809)), "./neo-c.h", 156, 810))->next=((void*)0);
                            __dec_obj21=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_64, "./neo-c.h", 157, 811)), "./neo-c.h", 157, 812))->item;
                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_64, "./neo-c.h", 157, 811)), "./neo-c.h", 157, 812))->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 159, 813)), "./neo-c.h", 159, 814))->tail=litem_64;
                            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 160, 815)), "./neo-c.h", 160, 816))->head=litem_64;
                        }
                        else {
                            if(_if_conditional54=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 162, 817)), "./neo-c.h", 162, 818))->len==1,                            _if_conditional54) {
                                litem_65=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value99=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 163, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value99,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_65, "./neo-c.h", 165, 819)), "./neo-c.h", 165, 820))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 165, 821)), "./neo-c.h", 165, 822))->head;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_65, "./neo-c.h", 166, 823)), "./neo-c.h", 166, 824))->next=((void*)0);
                                __dec_obj22=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_65, "./neo-c.h", 167, 825)), "./neo-c.h", 167, 826))->item;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_65, "./neo-c.h", 167, 825)), "./neo-c.h", 167, 826))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 169, 827)), "./neo-c.h", 169, 828))->tail=litem_65;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 170, 829)), "./neo-c.h", 170, 830))->head, "./neo-c.h", 170, 831)), "./neo-c.h", 170, 832))->next=litem_65;
                            }
                            else {
                                litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value100=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 173, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value100,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_66, "./neo-c.h", 175, 833)), "./neo-c.h", 175, 834))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 175, 835)), "./neo-c.h", 175, 836))->tail;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_66, "./neo-c.h", 176, 837)), "./neo-c.h", 176, 838))->next=((void*)0);
                                __dec_obj23=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_66, "./neo-c.h", 177, 839)), "./neo-c.h", 177, 840))->item;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_66, "./neo-c.h", 177, 839)), "./neo-c.h", 177, 840))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 179, 841)), "./neo-c.h", 179, 842))->tail, "./neo-c.h", 179, 843)), "./neo-c.h", 179, 844))->next=litem_66;
                                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 180, 845)), "./neo-c.h", 180, 846))->tail=litem_66;
                            }
                        }
                        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 183, 847)), "./neo-c.h", 183, 848))->len++;
                        __result64__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result64__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional55;
struct sNode* __result65__;
void* right_value101;
struct sNode* result_67;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
struct sNode* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value101 = (void*)0;
memset(&result_67, 0, sizeof(struct sNode*));
                        if(_if_conditional55=self==(void*)0,                        _if_conditional55) {
                            __result65__ = __result_obj__ = (void*)0;
                            return __result65__;
                        }
                        result_67=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value101=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value101) { right_value101 = come_decrement_ref_count2(right_value101, ((struct sNode*)right_value101)->finalize, ((struct sNode*)right_value101)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(_if_conditional56=self!=((void*)0)&&((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 851)), "sNode_clone", 4, 852))->clone!=((void*)0),                        _if_conditional56) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_67, "sNode_clone", 4, 853)), "sNode_clone", 4, 854))->_protocol_obj=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 855)), "sNode_clone", 4, 856))->clone(((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 855)), "sNode_clone", 4, 856))->_protocol_obj);
                        }
                        if(_if_conditional57=self!=((void*)0),                        _if_conditional57) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_67, "sNode_clone", 5, 857)), "sNode_clone", 5, 858))->finalize=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 5, 859)), "sNode_clone", 5, 860))->finalize;
                        }
                        if(_if_conditional58=self!=((void*)0),                        _if_conditional58) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_67, "sNode_clone", 6, 861)), "sNode_clone", 6, 862))->clone=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 6, 863)), "sNode_clone", 6, 864))->clone;
                        }
                        if(_if_conditional59=self!=((void*)0),                        _if_conditional59) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_67, "sNode_clone", 7, 865)), "sNode_clone", 7, 866))->compile=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 7, 867)), "sNode_clone", 7, 868))->compile;
                        }
                        if(_if_conditional60=self!=((void*)0),                        _if_conditional60) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_67, "sNode_clone", 8, 869)), "sNode_clone", 8, 870))->sline=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 8, 871)), "sNode_clone", 8, 872))->sline;
                        }
                        if(_if_conditional61=self!=((void*)0),                        _if_conditional61) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_67, "sNode_clone", 9, 873)), "sNode_clone", 9, 874))->sname=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 9, 875)), "sNode_clone", 9, 876))->sname;
                        }
                        if(_if_conditional62=self!=((void*)0),                        _if_conditional62) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_67, "sNode_clone", 10, 877)), "sNode_clone", 10, 878))->terminated=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 10, 879)), "sNode_clone", 10, 880))->terminated;
                        }
                        if(_if_conditional63=self!=((void*)0),                        _if_conditional63) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_67, "sNode_clone", 11, 881)), "sNode_clone", 11, 882))->kind=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 11, 883)), "sNode_clone", 11, 884))->kind;
                        }
                        __result66__ = __result_obj__ = result_67;
                        if(result_67) { result_67 = come_decrement_ref_count2(result_67, ((struct sNode*)result_67)->finalize, ((struct sNode*)result_67)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result66__;
                        if(result_67) { result_67 = come_decrement_ref_count2(result_67, ((struct sNode*)result_67)->finalize, ((struct sNode*)result_67)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_68;
_Bool _while_condtional13;
struct list_item$1sNodeph* prev_it_69;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_68, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_69, 0, sizeof(struct list_item$1sNodeph*));
                it_68=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 120, 890)), "./neo-c.h", 120, 891))->head;
                while(_while_condtional13=it_68!=((void*)0),                _while_condtional13) {
                    prev_it_69=it_68;
                    it_68=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_68, "./neo-c.h", 123, 892)), "./neo-c.h", 123, 893))->next;
                    come_call_finalizer3(prev_it_69,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional67;
struct list$1charph* __result68__;
void* right_value105;
void* right_value106;
struct list$1charph* __exception_result_var_b68;
struct list$1charph* result_70;
struct list_item$1charph* it_71;
_Bool _while_condtional14;
char* __exception_result_var_b69;
void* right_value110;
struct list$1charph* __exception_result_var_b70;
struct list$1charph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value105 = (void*)0;
right_value106 = (void*)0;
memset(&result_70, 0, sizeof(struct list$1charph*));
memset(&it_71, 0, sizeof(struct list_item$1charph*));
right_value110 = (void*)0;
                if(_if_conditional67=self==((void*)0),                _if_conditional67) {
                    __result68__ = __result_obj__ = ((void*)0);
                    return __result68__;
                }
                result_70=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 919),__exception_result_var_b68=((struct list$1charph*)(right_value106=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value105=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 139, "list$1charph"))), "./neo-c.h", 139, 911)), "./neo-c.h", 139, 912)))))), come_pop_stackframe(), __exception_result_var_b68));
                come_call_finalizer3(right_value105,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value106,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                it_71=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 141, 920)), "./neo-c.h", 141, 921))->head;
                while(_while_condtional14=it_71!=((void*)0),                _while_condtional14) {
                    (come_push_stackframe("./neo-c.h", 143, 971),__exception_result_var_b70=list$1charph_add(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_70, "./neo-c.h", 143, 922)), "./neo-c.h", 143, 923)),(char*)come_increment_ref_count(((char*)(right_value110=(come_push_stackframe("./neo-c.h", 143, 970),__exception_result_var_b69=string_clone(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_71, "./neo-c.h", 143, 968)), "./neo-c.h", 143, 969))->item), come_pop_stackframe(), __exception_result_var_b69))))), come_pop_stackframe(), __exception_result_var_b70);
                    right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_71=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_71, "./neo-c.h", 145, 972)), "./neo-c.h", 145, 973))->next;
                }
                __result71__ = __result_obj__ = result_70;
                come_call_finalizer3(result_70,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result71__;
                come_call_finalizer3(result_70,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 101, 913)), "./neo-c.h", 101, 914))->head=((void*)0);
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 102, 915)), "./neo-c.h", 102, 916))->tail=((void*)0);
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 103, 917)), "./neo-c.h", 103, 918))->len=0;
                    __result69__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result69__;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional68;
void* right_value107;
struct list_item$1charph* litem_72;
char* __dec_obj26;
_Bool _if_conditional69;
void* right_value108;
struct list_item$1charph* litem_73;
char* __dec_obj27;
void* right_value109;
struct list_item$1charph* litem_74;
char* __dec_obj28;
struct list$1charph* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value107 = (void*)0;
memset(&litem_72, 0, sizeof(struct list_item$1charph*));
right_value108 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1charph*));
right_value109 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional68=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 152, 924)), "./neo-c.h", 152, 925))->len==0,                        _if_conditional68) {
                            litem_72=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value107=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 153, "list_item$1charph"))));
                            come_call_finalizer3(right_value107,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_72, "./neo-c.h", 155, 926)), "./neo-c.h", 155, 927))->prev=((void*)0);
                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_72, "./neo-c.h", 156, 928)), "./neo-c.h", 156, 929))->next=((void*)0);
                            __dec_obj26=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_72, "./neo-c.h", 157, 930)), "./neo-c.h", 157, 931))->item;
                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_72, "./neo-c.h", 157, 930)), "./neo-c.h", 157, 931))->item=(char*)come_increment_ref_count(item);
                            __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 159, 932)), "./neo-c.h", 159, 933))->tail=litem_72;
                            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 160, 934)), "./neo-c.h", 160, 935))->head=litem_72;
                        }
                        else {
                            if(_if_conditional69=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 162, 936)), "./neo-c.h", 162, 937))->len==1,                            _if_conditional69) {
                                litem_73=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value108=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 163, "list_item$1charph"))));
                                come_call_finalizer3(right_value108,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_73, "./neo-c.h", 165, 938)), "./neo-c.h", 165, 939))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 165, 940)), "./neo-c.h", 165, 941))->head;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_73, "./neo-c.h", 166, 942)), "./neo-c.h", 166, 943))->next=((void*)0);
                                __dec_obj27=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_73, "./neo-c.h", 167, 944)), "./neo-c.h", 167, 945))->item;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_73, "./neo-c.h", 167, 944)), "./neo-c.h", 167, 945))->item=(char*)come_increment_ref_count(item);
                                __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 169, 946)), "./neo-c.h", 169, 947))->tail=litem_73;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 170, 948)), "./neo-c.h", 170, 949))->head, "./neo-c.h", 170, 950)), "./neo-c.h", 170, 951))->next=litem_73;
                            }
                            else {
                                litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value109=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 173, "list_item$1charph"))));
                                come_call_finalizer3(right_value109,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_74, "./neo-c.h", 175, 952)), "./neo-c.h", 175, 953))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 175, 954)), "./neo-c.h", 175, 955))->tail;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_74, "./neo-c.h", 176, 956)), "./neo-c.h", 176, 957))->next=((void*)0);
                                __dec_obj28=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_74, "./neo-c.h", 177, 958)), "./neo-c.h", 177, 959))->item;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_74, "./neo-c.h", 177, 958)), "./neo-c.h", 177, 959))->item=(char*)come_increment_ref_count(item);
                                __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 179, 960)), "./neo-c.h", 179, 961))->tail, "./neo-c.h", 179, 962)), "./neo-c.h", 179, 963))->next=litem_74;
                                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 180, 964)), "./neo-c.h", 180, 965))->tail=litem_74;
                            }
                        }
                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 183, 966)), "./neo-c.h", 183, 967))->len++;
                        __result70__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result70__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_75;
_Bool _while_condtional15;
struct list_item$1charph* prev_it_76;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_75, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_76, 0, sizeof(struct list_item$1charph*));
                it_75=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 120, 975)), "./neo-c.h", 120, 976))->head;
                while(_while_condtional15=it_75!=((void*)0),                _while_condtional15) {
                    prev_it_76=it_75;
                    it_75=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_75, "./neo-c.h", 123, 977)), "./neo-c.h", 123, 978))->next;
                    come_call_finalizer3(prev_it_76,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional118;
_Bool _if_conditional119;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional118=self!=((void*)0)&&((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 1190)), "CVALUE_finalize", 0, 1191))->c_value!=((void*)0),        _if_conditional118) {
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 1192)), "CVALUE_finalize", 0, 1193))->c_value = come_decrement_ref_count2(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 1192)), "CVALUE_finalize", 0, 1193))->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional119=self!=((void*)0)&&((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1, 1194)), "CVALUE_finalize", 1, 1195))->type!=((void*)0),        _if_conditional119) {
            come_call_finalizer3(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1, 1196)), "CVALUE_finalize", 1, 1197))->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional120;
struct sNode* result_81;
void* __exception_result_var_b81;
struct sNode* __result75__;
_Bool _if_conditional121;
struct sNode* __result76__;
struct sNode* result_82;
void* __exception_result_var_b82;
struct sNode* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_81, 0, sizeof(struct sNode*));
memset(&result_82, 0, sizeof(struct sNode*));
        if(_if_conditional120=self==((void*)0),        _if_conditional120) {
            (come_push_stackframe("./neo-c.h", 284, 1207),__exception_result_var_b81=memset(&result_81,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b81);
            __result75__ = __result_obj__ = result_81;
            return __result75__;
        }
        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 287, 1208)), "./neo-c.h", 287, 1209))->it=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 287, 1210)), "./neo-c.h", 287, 1211))->head;
        if(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 289, 1212)), "./neo-c.h", 289, 1213))->it) {
            __result76__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 290, 1214)), "./neo-c.h", 290, 1215))->it, "./neo-c.h", 290, 1216)), "./neo-c.h", 290, 1217))->item;
            return __result76__;
        }
        (come_push_stackframe("./neo-c.h", 294, 1218),__exception_result_var_b82=memset(&result_82,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b82);
        __result77__ = __result_obj__ = result_82;
        return __result77__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
        __result78__ = self==((void*)0)||((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 317, 1222)), "./neo-c.h", 317, 1223))->it==((void*)0);
        return __result78__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional122;
struct sNode* result_84;
void* __exception_result_var_b85;
struct sNode* __result79__;
_Bool _if_conditional123;
struct sNode* __result80__;
struct sNode* result_85;
void* __exception_result_var_b86;
struct sNode* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_84, 0, sizeof(struct sNode*));
memset(&result_85, 0, sizeof(struct sNode*));
        if(_if_conditional122=self==((void*)0)||((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 299, 1227)), "./neo-c.h", 299, 1228))->it==((void*)0),        _if_conditional122) {
            (come_push_stackframe("./neo-c.h", 301, 1229),__exception_result_var_b85=memset(&result_84,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b85);
            __result79__ = __result_obj__ = result_84;
            return __result79__;
        }
        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 305, 1230)), "./neo-c.h", 305, 1231))->it=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 305, 1232)), "./neo-c.h", 305, 1233))->it, "./neo-c.h", 305, 1234)), "./neo-c.h", 305, 1235))->next;
        if(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 307, 1236)), "./neo-c.h", 307, 1237))->it) {
            __result80__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 308, 1238)), "./neo-c.h", 308, 1239))->it, "./neo-c.h", 308, 1240)), "./neo-c.h", 308, 1241))->item;
            return __result80__;
        }
        (come_push_stackframe("./neo-c.h", 312, 1242),__exception_result_var_b86=memset(&result_85,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b86);
        __result81__ = __result_obj__ = result_85;
        return __result81__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_88;
_Bool _while_condtional16;
struct list_item$1sNodeph* prev_it_89;
struct list$1sNodeph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_88, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_89, 0, sizeof(struct list_item$1sNodeph*));
        it_88=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 426, 1260)), "./neo-c.h", 426, 1261))->head;
        while(_while_condtional16=it_88!=((void*)0),        _while_condtional16) {
            prev_it_89=it_88;
            it_88=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_88, "./neo-c.h", 429, 1262)), "./neo-c.h", 429, 1263))->next;
            come_call_finalizer3(prev_it_89,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 433, 1264)), "./neo-c.h", 433, 1265))->head=((void*)0);
        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 434, 1266)), "./neo-c.h", 434, 1267))->tail=((void*)0);
        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 436, 1268)), "./neo-c.h", 436, 1269))->len=0;
        __result83__ = __result_obj__ = self;
        return __result83__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional126;
void* right_value131;
struct list_item$1CVALUEph* litem_92;
struct CVALUE* __dec_obj39;
_Bool _if_conditional128;
void* right_value132;
struct list_item$1CVALUEph* litem_93;
struct CVALUE* __dec_obj40;
void* right_value133;
struct list_item$1CVALUEph* litem_94;
struct CVALUE* __dec_obj41;
struct list$1CVALUEph* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value131 = (void*)0;
memset(&litem_92, 0, sizeof(struct list_item$1CVALUEph*));
right_value132 = (void*)0;
memset(&litem_93, 0, sizeof(struct list_item$1CVALUEph*));
right_value133 = (void*)0;
memset(&litem_94, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional126=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 222, 1320)), "./neo-c.h", 222, 1321))->len==0,        _if_conditional126) {
            litem_92=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value131=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 223, "list_item$1CVALUEph"))));
            come_call_finalizer3(right_value131,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_92, "./neo-c.h", 225, 1326)), "./neo-c.h", 225, 1327))->prev=((void*)0);
            ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_92, "./neo-c.h", 226, 1328)), "./neo-c.h", 226, 1329))->next=((void*)0);
            __dec_obj39=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_92, "./neo-c.h", 227, 1330)), "./neo-c.h", 227, 1331))->item;
            ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_92, "./neo-c.h", 227, 1330)), "./neo-c.h", 227, 1331))->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj39,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 229, 1332)), "./neo-c.h", 229, 1333))->tail=litem_92;
            ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 230, 1334)), "./neo-c.h", 230, 1335))->head=litem_92;
        }
        else {
            if(_if_conditional128=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 232, 1336)), "./neo-c.h", 232, 1337))->len==1,            _if_conditional128) {
                litem_93=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value132=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 233, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value132,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_93, "./neo-c.h", 235, 1338)), "./neo-c.h", 235, 1339))->prev=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 235, 1340)), "./neo-c.h", 235, 1341))->head;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_93, "./neo-c.h", 236, 1342)), "./neo-c.h", 236, 1343))->next=((void*)0);
                __dec_obj40=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_93, "./neo-c.h", 237, 1344)), "./neo-c.h", 237, 1345))->item;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_93, "./neo-c.h", 237, 1344)), "./neo-c.h", 237, 1345))->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj40,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 239, 1346)), "./neo-c.h", 239, 1347))->tail=litem_93;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 240, 1348)), "./neo-c.h", 240, 1349))->head, "./neo-c.h", 240, 1350)), "./neo-c.h", 240, 1351))->next=litem_93;
            }
            else {
                litem_94=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value133=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 243, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value133,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_94, "./neo-c.h", 245, 1352)), "./neo-c.h", 245, 1353))->prev=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 245, 1354)), "./neo-c.h", 245, 1355))->tail;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_94, "./neo-c.h", 246, 1356)), "./neo-c.h", 246, 1357))->next=((void*)0);
                __dec_obj41=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_94, "./neo-c.h", 247, 1358)), "./neo-c.h", 247, 1359))->item;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_94, "./neo-c.h", 247, 1358)), "./neo-c.h", 247, 1359))->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj41,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 249, 1360)), "./neo-c.h", 249, 1361))->tail, "./neo-c.h", 249, 1362)), "./neo-c.h", 249, 1363))->next=litem_94;
                ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 250, 1364)), "./neo-c.h", 250, 1365))->tail=litem_94;
            }
        }
        ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 253, 1366)), "./neo-c.h", 253, 1367))->len++;
        __result84__ = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result84__;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional127;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional127=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0, 1322)), "list_item$1CVALUEphp_finalize", 0, 1323))->item!=((void*)0),                _if_conditional127) {
                    come_call_finalizer3(((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0, 1324)), "list_item$1CVALUEphp_finalize", 0, 1325))->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
}

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info){
void* __result_obj__;
void* right_value134;
struct sNodeBase* __exception_result_var_b101;
struct sNode* __exception_result_var_b102;
void* right_value135;
struct sNode* __dec_obj42;
struct sType* __exception_result_var_b103;
void* right_value136;
struct sType* __dec_obj43;
struct sImplementsNode* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
    (come_push_stackframe("21obj.c", 95, 1371),__exception_result_var_b101=((struct sNodeBase*)(right_value134=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sImplementsNode*)come_null_check(((struct sImplementsNode*)come_null_check(self, "21obj.c", 95, 1369)), "21obj.c", 95, 1370))),info))), come_pop_stackframe(), __exception_result_var_b101);
    come_call_finalizer3(right_value134,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj42=((struct sImplementsNode*)come_null_check(self, "21obj.c", 97, 1372))->obj_exp;
    ((struct sImplementsNode*)come_null_check(self, "21obj.c", 97, 1372))->obj_exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value135=(come_push_stackframe("21obj.c", 97, 1373),__exception_result_var_b102=sNode_clone(obj_exp), come_pop_stackframe(), __exception_result_var_b102))));
    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count2(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value135) { right_value135 = come_decrement_ref_count2(right_value135, ((struct sNode*)right_value135)->finalize, ((struct sNode*)right_value135)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj43=((struct sImplementsNode*)come_null_check(self, "21obj.c", 98, 1374))->inf_type;
    ((struct sImplementsNode*)come_null_check(self, "21obj.c", 98, 1374))->inf_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=(come_push_stackframe("21obj.c", 98, 1375),__exception_result_var_b103=sType_clone(inf_type), come_pop_stackframe(), __exception_result_var_b103))));
    come_call_finalizer3(__dec_obj43,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value136,sType_finalize, 0, 1, 0, 0, __result_obj__);
    __result86__ = __result_obj__ = self;
    come_call_finalizer3(self,sImplementsNode_finalize, 0, 0, 1, 0, (void*)0);
    if(obj_exp) { obj_exp = come_decrement_ref_count2(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer3(inf_type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result86__;
    come_call_finalizer3(self,sImplementsNode_finalize, 0, 0, 1, 0, (void*)0);
    if(obj_exp) { obj_exp = come_decrement_ref_count2(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer3(inf_type,sType_finalize, 0, 0, 1, 0, (void*)0);
}

char* sImplementsNode_kind(struct sImplementsNode* self){
void* __result_obj__;
void* right_value137;
char* __exception_result_var_b104;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value137 = (void*)0;
    __result87__ = __result_obj__ = (come_push_stackframe("21obj.c", 103, 1388),__exception_result_var_b104=((char*)(right_value137=__builtin_string("sImplementsNode"))), come_pop_stackframe(), __exception_result_var_b104);
    right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result87__;
}

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* __exception_result_var_b105;
void* right_value138;
struct sNode* obj_exp_95;
struct sType* __exception_result_var_b106;
void* right_value139;
struct sType* inf_type_96;
_Bool __exception_result_var_b107;
_Bool _if_conditional132;
_Bool __result88__;
void* right_value140;
struct CVALUE* __exception_result_var_b108;
struct CVALUE* come_value_97;
struct sType* __exception_result_var_b109;
void* right_value141;
struct sType* type_98;
struct sClass* klass_99;
void* right_value142;
struct CVALUE* come_value2_100;
struct sType* __exception_result_var_b110;
void* right_value143;
struct sType* type2_101;
void* right_value144;
char* __exception_result_var_b111;
char* type_name_102;
void* right_value145;
char* __exception_result_var_b112;
char* type_name2_103;
void* right_value146;
char* __exception_result_var_b113;
char* buf_105;
void* right_value147;
char* __exception_result_var_b114;
char* buf2_106;
struct sType* __exception_result_var_b115;
void* right_value148;
struct sType* typeX_107;
void* right_value149;
struct tuple2$2sFunpcharph* __exception_result_var_b116;
void* right_value150;
struct tuple2$2sFunpcharph* __exception_result_var_b117;
int i_108;
int __exception_result_var_b118;
struct tuple2$2charphsTypeph* __exception_result_var_b120;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* name_112;
struct sType* field_type_113;
void* right_value151;
char* __exception_result_var_b121;
char* method_name_114;
struct sFun* __exception_result_var_b124;
struct sFun* fun_115;
_Bool _if_conditional158;
struct sClass* __exception_result_var_b128;
struct sClass* klass2_118;
struct sClass* __exception_result_var_b129;
_Bool _while_condtional21;
struct sClass* __exception_result_var_b130;
void* right_value152;
char* __exception_result_var_b131;
char* __dec_obj44;
struct sFun* __exception_result_var_b132;
_Bool _if_conditional168;
void* right_value153;
char* __exception_result_var_b133;
char* __dec_obj45;
struct sType* __exception_result_var_b134;
void* right_value154;
struct sType* type3_124;
struct sType* __exception_result_var_b135;
void* right_value155;
struct sType* __dec_obj46;
void* right_value156;
char* __exception_result_var_b136;
char* __dec_obj47;
struct list$1CVALUEph* __exception_result_var_b137;
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value138 = (void*)0;
memset(&obj_exp_95, 0, sizeof(struct sNode*));
right_value139 = (void*)0;
memset(&inf_type_96, 0, sizeof(struct sType*));
right_value140 = (void*)0;
memset(&come_value_97, 0, sizeof(struct CVALUE*));
right_value141 = (void*)0;
memset(&type_98, 0, sizeof(struct sType*));
memset(&klass_99, 0, sizeof(struct sClass*));
right_value142 = (void*)0;
memset(&come_value2_100, 0, sizeof(struct CVALUE*));
right_value143 = (void*)0;
memset(&type2_101, 0, sizeof(struct sType*));
right_value144 = (void*)0;
memset(&type_name_102, 0, sizeof(char*));
right_value145 = (void*)0;
memset(&type_name2_103, 0, sizeof(char*));
right_value146 = (void*)0;
memset(&buf_105, 0, sizeof(char*));
right_value147 = (void*)0;
memset(&buf2_106, 0, sizeof(char*));
right_value148 = (void*)0;
memset(&typeX_107, 0, sizeof(struct sType*));
right_value149 = (void*)0;
right_value150 = (void*)0;
memset(&i_108, 0, sizeof(int));
right_value151 = (void*)0;
memset(&method_name_114, 0, sizeof(char*));
memset(&fun_115, 0, sizeof(struct sFun*));
memset(&klass2_118, 0, sizeof(struct sClass*));
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
memset(&type3_124, 0, sizeof(struct sType*));
right_value155 = (void*)0;
right_value156 = (void*)0;
    obj_exp_95=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value138=(come_push_stackframe("21obj.c", 108, 1391),__exception_result_var_b105=sNode_clone(((struct sImplementsNode*)come_null_check(((struct sImplementsNode*)come_null_check(self, "21obj.c", 108, 1389)), "21obj.c", 108, 1390))->obj_exp), come_pop_stackframe(), __exception_result_var_b105))));
    if(right_value138) { right_value138 = come_decrement_ref_count2(right_value138, ((struct sNode*)right_value138)->finalize, ((struct sNode*)right_value138)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    inf_type_96=(struct sType*)come_increment_ref_count(((struct sType*)(right_value139=(come_push_stackframe("21obj.c", 109, 1394),__exception_result_var_b106=sType_clone(((struct sImplementsNode*)come_null_check(((struct sImplementsNode*)come_null_check(self, "21obj.c", 109, 1392)), "21obj.c", 109, 1393))->inf_type), come_pop_stackframe(), __exception_result_var_b106))));
    come_call_finalizer3(right_value139,sType_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional132=!(come_push_stackframe("21obj.c", 111, 1395),__exception_result_var_b107=node_compile(obj_exp_95,info), come_pop_stackframe(), __exception_result_var_b107),    _if_conditional132) {
        __result88__ = (_Bool)0;
        if(obj_exp_95) { obj_exp_95 = come_decrement_ref_count2(obj_exp_95, ((struct sNode*)obj_exp_95)->finalize, ((struct sNode*)obj_exp_95)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(inf_type_96,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result88__;
    }
    come_value_97=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("21obj.c", 115, 1396),__exception_result_var_b108=((struct CVALUE*)(right_value140=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b108));
    come_call_finalizer3(right_value140,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("21obj.c", 116,1397),dec_stack_ptr(1,info),come_pop_stackframe());
    type_98=(struct sType*)come_increment_ref_count(((struct sType*)(right_value141=(come_push_stackframe("21obj.c", 118, 1400),__exception_result_var_b109=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_97, "21obj.c", 118, 1398)), "21obj.c", 118, 1399))->type), come_pop_stackframe(), __exception_result_var_b109))));
    come_call_finalizer3(right_value141,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(type_98, "21obj.c", 119, 1401)), "21obj.c", 119, 1402))->mPointerNum--;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(type_98, "21obj.c", 120, 1403)), "21obj.c", 120, 1404))->mHeap=(_Bool)0;
    klass_99=((struct sType*)come_null_check(((struct sType*)come_null_check(inf_type_96, "21obj.c", 122, 1405)), "21obj.c", 122, 1406))->mClass;
    come_value2_100=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value142=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 124, "CVALUE"))));
    come_call_finalizer3(right_value142,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    type2_101=(struct sType*)come_increment_ref_count(((struct sType*)(right_value143=(come_push_stackframe("21obj.c", 126, 1407),__exception_result_var_b110=sType_clone(inf_type_96), come_pop_stackframe(), __exception_result_var_b110))));
    come_call_finalizer3(right_value143,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type_name_102=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 128, 1408),__exception_result_var_b111=((char*)(right_value144=make_type_name_string(inf_type_96,(_Bool)0,(_Bool)1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b111));
    right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type_name2_103=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 129, 1409),__exception_result_var_b112=((char*)(right_value145=make_type_name_string(type_98,(_Bool)0,(_Bool)1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b112));
    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    static int inf_num_104=0;
    buf_105=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 133, 1410),__exception_result_var_b113=((char*)(right_value146=xsprintf("%s* _inf_value%d;\n",type_name_102,++inf_num_104))), come_pop_stackframe(), __exception_result_var_b113));
    right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("21obj.c", 134,1411),add_come_code_at_function_head(info,buf_105),come_pop_stackframe());
    buf2_106=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 135, 1412),__exception_result_var_b114=((char*)(right_value147=xsprintf("%s* _inf_obj_value%d;\n",type_name2_103,inf_num_104))), come_pop_stackframe(), __exception_result_var_b114));
    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("21obj.c", 136,1413),add_come_code_at_function_head(info,buf2_106),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 138,1418),add_come_code(info,"_inf_value%d=(%s*)come_calloc(1, sizeof(%s), \"%s\", %d, \"%s\");\n",inf_num_104,type_name_102,type_name_102,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 138, 1414)), "21obj.c", 138, 1415))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 138, 1416)), "21obj.c", 138, 1417))->sline,type_name_102),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 139,1421),add_come_code(info,"_inf_obj_value%d=come_increment_ref_count(%s);\n",inf_num_104,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_97, "21obj.c", 139, 1419)), "21obj.c", 139, 1420))->c_value),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 140,1422),add_come_code(info,"_inf_value%d->_protocol_obj=_inf_obj_value%d;\n",inf_num_104,inf_num_104),come_pop_stackframe());
    typeX_107=(struct sType*)come_increment_ref_count(((struct sType*)(right_value148=(come_push_stackframe("21obj.c", 142, 1423),__exception_result_var_b115=sType_clone(type_98), come_pop_stackframe(), __exception_result_var_b115))));
    come_call_finalizer3(right_value148,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(typeX_107, "21obj.c", 143, 1424)), "21obj.c", 143, 1425))->mPointerNum++;
    (come_push_stackframe("21obj.c", 145, 1426),__exception_result_var_b116=((struct tuple2$2sFunpcharph*)(right_value149=create_finalizer_automatically(typeX_107,"finalize",info))), come_pop_stackframe(), __exception_result_var_b116);
    come_call_finalizer3(right_value149,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("21obj.c", 146, 1431),__exception_result_var_b117=((struct tuple2$2sFunpcharph*)(right_value150=create_cloner_automatically(typeX_107,"clone",info))), come_pop_stackframe(), __exception_result_var_b117);
    come_call_finalizer3(right_value150,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    for(    i_108=1;    i_108<(come_push_stackframe("21obj.c", 148, 1438),__exception_result_var_b118=list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_99, "21obj.c", 148, 1432)), "21obj.c", 148, 1433))->mFields, "21obj.c", 148, 1434)), "21obj.c", 148, 1435))), come_pop_stackframe(), __exception_result_var_b118);    i_108++    ){
        multiple_assign_var1=(come_push_stackframe("21obj.c", 149, 1460),__exception_result_var_b120=((struct tuple2$2charphsTypeph*)come_null_check(list$1tuple2$2charphsTypephphp_operator_load_element(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_99, "21obj.c", 149, 1439)), "21obj.c", 149, 1440))->mFields, "21obj.c", 149, 1441)),i_108), "21obj.c", 149, 1459)), come_pop_stackframe(), __exception_result_var_b120);
        name_112=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type_113=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        method_name_114=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 151, 1461),__exception_result_var_b121=((char*)(right_value151=create_method_name(type_98,(_Bool)0,name_112,info,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b121));
        right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_115=(come_push_stackframe("21obj.c", 153, 1545),__exception_result_var_b124=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 153, 1462)), "21obj.c", 153, 1463))->funcs, "21obj.c", 153, 1464)), "21obj.c", 153, 1465)),method_name_114,((void*)0)), come_pop_stackframe(), __exception_result_var_b124);
        if(_if_conditional158=fun_115==((void*)0),        _if_conditional158) {
            klass2_118=(come_push_stackframe("21obj.c", 156, 1598),__exception_result_var_b128=((struct sClass*)come_null_check(map$2charphsClassphp_operator_load_element(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 156, 1546)), "21obj.c", 156, 1547))->classes, "21obj.c", 156, 1548)),((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type_98, "21obj.c", 156, 1549)), "21obj.c", 156, 1550))->mClass, "21obj.c", 156, 1551)), "21obj.c", 156, 1552))->mName), "21obj.c", 156, 1597)), come_pop_stackframe(), __exception_result_var_b128);
            while(_while_condtional21=(come_push_stackframe("21obj.c", 157, 1603),__exception_result_var_b129=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 157, 1599)), "21obj.c", 157, 1600))->classes,((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass2_118, "21obj.c", 157, 1601)), "21obj.c", 157, 1602))->mParentClassName), come_pop_stackframe(), __exception_result_var_b129),            _while_condtional21) {
                klass2_118=(come_push_stackframe("21obj.c", 158, 1608),__exception_result_var_b130=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 158, 1604)), "21obj.c", 158, 1605))->classes,((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass2_118, "21obj.c", 158, 1606)), "21obj.c", 158, 1607))->mParentClassName), come_pop_stackframe(), __exception_result_var_b130);
                __dec_obj44=method_name_114;
                method_name_114=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 160, 1609),__exception_result_var_b131=((char*)(right_value152=create_method_name_using_class(klass2_118,(_Bool)0,name_112,info,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b131));
                __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                fun_115=(come_push_stackframe("21obj.c", 162, 1614),__exception_result_var_b132=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 162, 1610)), "21obj.c", 162, 1611))->funcs, "21obj.c", 162, 1612)), "21obj.c", 162, 1613)),method_name_114,((void*)0)), come_pop_stackframe(), __exception_result_var_b132);
                if(fun_115) {
                    break;
                }
            }
            (come_push_stackframe("21obj.c", 169,1615),add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_104,name_112,method_name_114),come_pop_stackframe());
        }
        else {
            (come_push_stackframe("21obj.c", 172,1616),add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_104,name_112,method_name_114),come_pop_stackframe());
        }
        name_112 = come_decrement_ref_count2(name_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_113,sType_finalize, 0, 0, 0, 0, (void*)0);
        method_name_114 = come_decrement_ref_count2(method_name_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj45=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_100, "21obj.c", 176, 1617)), "21obj.c", 176, 1618))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_100, "21obj.c", 176, 1617)), "21obj.c", 176, 1618))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 176, 1619),__exception_result_var_b133=((char*)(right_value153=xsprintf("_inf_value%d",inf_num_104))), come_pop_stackframe(), __exception_result_var_b133));
    __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type3_124=(struct sType*)come_increment_ref_count(((struct sType*)(right_value154=(come_push_stackframe("21obj.c", 177, 1620),__exception_result_var_b134=sType_clone(inf_type_96), come_pop_stackframe(), __exception_result_var_b134))));
    come_call_finalizer3(right_value154,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(type3_124, "21obj.c", 178, 1621)), "21obj.c", 178, 1622))->mPointerNum++;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(type3_124, "21obj.c", 179, 1623)), "21obj.c", 179, 1624))->mHeap=(_Bool)1;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(type2_101, "21obj.c", 180, 1625)), "21obj.c", 180, 1626))->mHeap=(_Bool)1;
    __dec_obj46=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_100, "21obj.c", 181, 1627)), "21obj.c", 181, 1628))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_100, "21obj.c", 181, 1627)), "21obj.c", 181, 1628))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value155=(come_push_stackframe("21obj.c", 181, 1629),__exception_result_var_b135=sType_clone(type2_101), come_pop_stackframe(), __exception_result_var_b135))));
    come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value155,sType_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj47=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_100, "21obj.c", 182, 1630)), "21obj.c", 182, 1631))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_100, "21obj.c", 182, 1630)), "21obj.c", 182, 1631))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 182, 1634),__exception_result_var_b136=((char*)(right_value156=append_object_to_right_values(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_100, "21obj.c", 182, 1632)), "21obj.c", 182, 1633))->c_value,(struct sType*)come_increment_ref_count(type3_124),info))), come_pop_stackframe(), __exception_result_var_b136));
    __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_100, "21obj.c", 183, 1635)), "21obj.c", 183, 1636))->type, "21obj.c", 183, 1637)), "21obj.c", 183, 1638))->mPointerNum++;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_100, "21obj.c", 184, 1639)), "21obj.c", 184, 1640))->var=((void*)0);
    (come_push_stackframe("21obj.c", 186,1643),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_100, "21obj.c", 186, 1641)), "21obj.c", 186, 1642))->c_value),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 188, 1648),__exception_result_var_b137=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 188, 1644)), "21obj.c", 188, 1645))->stack, "21obj.c", 188, 1646)), "21obj.c", 188, 1647)),(struct CVALUE*)come_increment_ref_count(come_value2_100)), come_pop_stackframe(), __exception_result_var_b137);
    __result101__ = (_Bool)1;
    if(obj_exp_95) { obj_exp_95 = come_decrement_ref_count2(obj_exp_95, ((struct sNode*)obj_exp_95)->finalize, ((struct sNode*)obj_exp_95)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(inf_type_96,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_97,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_98,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_100,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_101,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_102 = come_decrement_ref_count2(type_name_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_name2_103 = come_decrement_ref_count2(type_name2_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf_105 = come_decrement_ref_count2(buf_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf2_106 = come_decrement_ref_count2(buf2_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(typeX_107,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_124,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result101__;
    if(obj_exp_95) { obj_exp_95 = come_decrement_ref_count2(obj_exp_95, ((struct sNode*)obj_exp_95)->finalize, ((struct sNode*)obj_exp_95)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(inf_type_96,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_97,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_98,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_100,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_101,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_102 = come_decrement_ref_count2(type_name_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_name2_103 = come_decrement_ref_count2(type_name2_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf_105 = come_decrement_ref_count2(buf_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf2_106 = come_decrement_ref_count2(buf2_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(typeX_107,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_124,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool _if_conditional133;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional133=self!=((void*)0)&&((struct tuple2$2sFunpcharph*)come_null_check(((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0, 1427)), "tuple2$2sFunpcharphp_finalize", 0, 1428))->v2!=((void*)0),        _if_conditional133) {
            ((struct tuple2$2sFunpcharph*)come_null_check(((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0, 1429)), "tuple2$2sFunpcharphp_finalize", 0, 1430))->v2 = come_decrement_ref_count2(((struct tuple2$2sFunpcharph*)come_null_check(((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0, 1429)), "tuple2$2sFunpcharphp_finalize", 0, 1430))->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional134;
int __result89__;
int __result90__;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional134=self==((void*)0),        _if_conditional134) {
            __result89__ = 0;
            return __result89__;
        }
        __result90__ = ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 360, 1436)), "./neo-c.h", 360, 1437))->len;
        return __result90__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_operator_load_element(struct list$1tuple2$2charphsTypephph* self, int position){
void* __result_obj__;
_Bool _if_conditional135;
struct list_item$1tuple2$2charphsTypephph* it_109;
int i_110;
_Bool _while_condtional17;
_Bool _if_conditional136;
struct tuple2$2charphsTypeph* __result91__;
struct tuple2$2charphsTypeph* default_value_111;
void* __exception_result_var_b119;
struct tuple2$2charphsTypeph* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_109, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&i_110, 0, sizeof(int));
memset(&default_value_111, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional135=position<0,            _if_conditional135) {
                position+=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 676, 1442)), "./neo-c.h", 676, 1443))->len;
            }
            it_109=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 679, 1444)), "./neo-c.h", 679, 1445))->head;
            i_110=0;
            while(_while_condtional17=it_109!=((void*)0),            _while_condtional17) {
                if(_if_conditional136=position==i_110,                _if_conditional136) {
                    __result91__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_109, "./neo-c.h", 683, 1446)), "./neo-c.h", 683, 1447))->item;
                    return __result91__;
                }
                it_109=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_109, "./neo-c.h", 685, 1448)), "./neo-c.h", 685, 1449))->next;
                i_110++;
            }
            (come_push_stackframe("./neo-c.h", 690, 1450),__exception_result_var_b119=memset(&default_value_111,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b119);
            __result92__ = __result_obj__ = default_value_111;
            come_call_finalizer3(default_value_111,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result92__;
            come_call_finalizer3(default_value_111,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional137;
_Bool _if_conditional138;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional137=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 1451)), "tuple2$2charphsTypephp_finalize", 0, 1452))->v1!=((void*)0),                _if_conditional137) {
                    ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 1453)), "tuple2$2charphsTypephp_finalize", 0, 1454))->v1 = come_decrement_ref_count2(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 1453)), "tuple2$2charphsTypephp_finalize", 0, 1454))->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional138=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1, 1455)), "tuple2$2charphsTypephp_finalize", 1, 1456))->v2!=((void*)0),                _if_conditional138) {
                    come_call_finalizer3(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1, 1457)), "tuple2$2charphsTypephp_finalize", 1, 1458))->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int __exception_result_var_b122;
unsigned int hash_116;
unsigned int it_117;
_Bool _while_condtional18;
_Bool _if_conditional139;
_Bool __exception_result_var_b123;
_Bool _if_conditional140;
struct sFun* __result93__;
_Bool _if_conditional156;
_Bool _if_conditional157;
struct sFun* __result94__;
struct sFun* __result95__;
struct sFun* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_116, 0, sizeof(unsigned int));
memset(&it_117, 0, sizeof(unsigned int));
            hash_116=(come_push_stackframe("./neo-c.h", 1207, 1468),__exception_result_var_b122=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1207, 1466)), "./neo-c.h", 1207, 1467))), come_pop_stackframe(), __exception_result_var_b122)%((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1207, 1469)), "./neo-c.h", 1207, 1470))->size;
            it_117=hash_116;
            while(_while_condtional18=(_Bool)1,            _while_condtional18) {
                if(_if_conditional139=((_Bool*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1211, 1471)), "./neo-c.h", 1211, 1472))->item_existance, "./neo-c.h", 1211, 1473))[it_117],                _if_conditional139) {
                    if(_if_conditional140=(come_push_stackframe("./neo-c.h", 1213, 1479),__exception_result_var_b123=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1213, 1474)), "./neo-c.h", 1213, 1475))->keys, "./neo-c.h", 1213, 1476))[it_117], "./neo-c.h", 1213, 1477)), "./neo-c.h", 1213, 1478)),key), come_pop_stackframe(), __exception_result_var_b123),                    _if_conditional140) {
                        __result93__ = __result_obj__ = ((struct sFun**)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1215, 1480)), "./neo-c.h", 1215, 1481))->items, "./neo-c.h", 1215, 1482))[it_117];
                        come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result93__;
                    }
                    it_117++;
                    if(_if_conditional156=it_117>=((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1220, 1543)), "./neo-c.h", 1220, 1544))->size,                    _if_conditional156) {
                        it_117=0;
                    }
                    else {
                        if(_if_conditional157=it_117==hash_116,                        _if_conditional157) {
                            __result94__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result94__;
                        }
                    }
                }
                else {
                    __result95__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result95__;
                }
            }
            __result96__ = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result96__;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
_Bool _if_conditional155;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional141=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 0, 1483)), "sFun_finalize", 0, 1484))->mName!=((void*)0),                            _if_conditional141) {
                                ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 0, 1485)), "sFun_finalize", 0, 1486))->mName = come_decrement_ref_count2(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 0, 1485)), "sFun_finalize", 0, 1486))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional142=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 1, 1487)), "sFun_finalize", 1, 1488))->mResultType!=((void*)0),                            _if_conditional142) {
                                come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 1, 1489)), "sFun_finalize", 1, 1490))->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional143=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 2, 1491)), "sFun_finalize", 2, 1492))->mParamTypes!=((void*)0),                            _if_conditional143) {
                                come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 2, 1493)), "sFun_finalize", 2, 1494))->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional144=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 3, 1495)), "sFun_finalize", 3, 1496))->mParamNames!=((void*)0),                            _if_conditional144) {
                                come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 3, 1497)), "sFun_finalize", 3, 1498))->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional145=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 4, 1499)), "sFun_finalize", 4, 1500))->mParamDefaultParametors!=((void*)0),                            _if_conditional145) {
                                come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 4, 1501)), "sFun_finalize", 4, 1502))->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional146=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 5, 1503)), "sFun_finalize", 5, 1504))->mLambdaType!=((void*)0),                            _if_conditional146) {
                                come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 5, 1505)), "sFun_finalize", 5, 1506))->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional147=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 6, 1507)), "sFun_finalize", 6, 1508))->mBlock!=((void*)0),                            _if_conditional147) {
                                come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 6, 1509)), "sFun_finalize", 6, 1510))->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional150=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 7, 1519)), "sFun_finalize", 7, 1520))->mSource!=((void*)0),                            _if_conditional150) {
                                come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 7, 1521)), "sFun_finalize", 7, 1522))->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional151=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 8, 1523)), "sFun_finalize", 8, 1524))->mSourceHead!=((void*)0),                            _if_conditional151) {
                                come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 8, 1525)), "sFun_finalize", 8, 1526))->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional152=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 9, 1527)), "sFun_finalize", 9, 1528))->mSourceHead2!=((void*)0),                            _if_conditional152) {
                                come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 9, 1529)), "sFun_finalize", 9, 1530))->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional153=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 10, 1531)), "sFun_finalize", 10, 1532))->mSourceDefer!=((void*)0),                            _if_conditional153) {
                                come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 10, 1533)), "sFun_finalize", 10, 1534))->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional154=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 11, 1535)), "sFun_finalize", 11, 1536))->mComeHeader!=((void*)0),                            _if_conditional154) {
                                ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 11, 1537)), "sFun_finalize", 11, 1538))->mComeHeader = come_decrement_ref_count2(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 11, 1537)), "sFun_finalize", 11, 1538))->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional155=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 12, 1539)), "sFun_finalize", 12, 1540))->mDeclareSName!=((void*)0),                            _if_conditional155) {
                                ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 12, 1541)), "sFun_finalize", 12, 1542))->mDeclareSName = come_decrement_ref_count2(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 12, 1541)), "sFun_finalize", 12, 1542))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional148;
_Bool _if_conditional149;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional148=self!=((void*)0)&&((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0, 1511)), "sBlock_finalize", 0, 1512))->mNodes!=((void*)0),                                    _if_conditional148) {
                                        come_call_finalizer3(((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0, 1513)), "sBlock_finalize", 0, 1514))->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional149=self!=((void*)0)&&((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1, 1515)), "sBlock_finalize", 1, 1516))->mVarTable!=((void*)0),                                    _if_conditional149) {
                                        come_call_finalizer3(((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1, 1517)), "sBlock_finalize", 1, 1518))->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                    }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_119;
void* __exception_result_var_b125;
unsigned int __exception_result_var_b126;
unsigned int hash_120;
unsigned int it_121;
_Bool _while_condtional19;
_Bool _if_conditional159;
_Bool __exception_result_var_b127;
_Bool _if_conditional160;
struct sClass* __result97__;
_Bool _if_conditional166;
_Bool _if_conditional167;
struct sClass* __result98__;
struct sClass* __result99__;
struct sClass* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_119, 0, sizeof(struct sClass*));
memset(&hash_120, 0, sizeof(unsigned int));
memset(&it_121, 0, sizeof(unsigned int));
                (come_push_stackframe("./neo-c.h", 1526, 1553),__exception_result_var_b125=memset(&default_value_119,0,sizeof(struct sClass*)), come_pop_stackframe(), __exception_result_var_b125);
                hash_120=(come_push_stackframe("./neo-c.h", 1528, 1556),__exception_result_var_b126=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1528, 1554)), "./neo-c.h", 1528, 1555))), come_pop_stackframe(), __exception_result_var_b126)%((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1528, 1557)), "./neo-c.h", 1528, 1558))->size;
                it_121=hash_120;
                while(_while_condtional19=(_Bool)1,                _while_condtional19) {
                    if(_if_conditional159=((_Bool*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1532, 1559)), "./neo-c.h", 1532, 1560))->item_existance, "./neo-c.h", 1532, 1561))[it_121],                    _if_conditional159) {
                        if(_if_conditional160=(come_push_stackframe("./neo-c.h", 1534, 1567),__exception_result_var_b127=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1534, 1562)), "./neo-c.h", 1534, 1563))->keys, "./neo-c.h", 1534, 1564))[it_121], "./neo-c.h", 1534, 1565)), "./neo-c.h", 1534, 1566)),key), come_pop_stackframe(), __exception_result_var_b127),                        _if_conditional160) {
                            __result97__ = __result_obj__ = ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1536, 1568)), "./neo-c.h", 1536, 1569))->items, "./neo-c.h", 1536, 1570))[it_121];
                            come_call_finalizer3(default_value_119,sClass_finalize, 0, 0, 0, 0, (void*)0);
                            return __result97__;
                        }
                        it_121++;
                        if(_if_conditional166=it_121>=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1541, 1595)), "./neo-c.h", 1541, 1596))->size,                        _if_conditional166) {
                            it_121=0;
                        }
                        else {
                            if(_if_conditional167=it_121==hash_120,                            _if_conditional167) {
                                __result98__ = __result_obj__ = default_value_119;
                                come_call_finalizer3(default_value_119,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                return __result98__;
                            }
                        }
                    }
                    else {
                        __result99__ = __result_obj__ = default_value_119;
                        come_call_finalizer3(default_value_119,sClass_finalize, 0, 0, 1, 0, (void*)0);
                        return __result99__;
                    }
                }
                __result100__ = __result_obj__ = default_value_119;
                come_call_finalizer3(default_value_119,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result100__;
                come_call_finalizer3(default_value_119,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional164;
_Bool _if_conditional165;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional161=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 0, 1571)), "sClass_finalize", 0, 1572))->mName!=((void*)0),                                _if_conditional161) {
                                    ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 0, 1573)), "sClass_finalize", 0, 1574))->mName = come_decrement_ref_count2(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 0, 1573)), "sClass_finalize", 0, 1574))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional162=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 1, 1575)), "sClass_finalize", 1, 1576))->mFields!=((void*)0),                                _if_conditional162) {
                                    come_call_finalizer3(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 1, 1577)), "sClass_finalize", 1, 1578))->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional164=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 2, 1587)), "sClass_finalize", 2, 1588))->mDeclareSName!=((void*)0),                                _if_conditional164) {
                                    ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 2, 1589)), "sClass_finalize", 2, 1590))->mDeclareSName = come_decrement_ref_count2(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 2, 1589)), "sClass_finalize", 2, 1590))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional165=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 3, 1591)), "sClass_finalize", 3, 1592))->mParentClassName!=((void*)0),                                _if_conditional165) {
                                    ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 3, 1593)), "sClass_finalize", 3, 1594))->mParentClassName = come_decrement_ref_count2(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 3, 1593)), "sClass_finalize", 3, 1594))->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_122;
_Bool _while_condtional20;
struct list_item$1tuple2$2charphsTypephph* prev_it_123;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_122, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_123, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                        it_122=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 120, 1579)), "./neo-c.h", 120, 1580))->head;
                                        while(_while_condtional20=it_122!=((void*)0),                                        _while_condtional20) {
                                            prev_it_123=it_122;
                                            it_122=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_122, "./neo-c.h", 123, 1581)), "./neo-c.h", 123, 1582))->next;
                                            come_call_finalizer3(prev_it_123,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional163;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional163=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0, 1583)), "list_item$1tuple2$2charphsTypephphp_finalize", 0, 1584))->item!=((void*)0),                                                _if_conditional163) {
                                                    come_call_finalizer3(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0, 1585)), "list_item$1tuple2$2charphsTypephphp_finalize", 0, 1586))->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value157;
struct sNodeBase* __exception_result_var_b138;
struct sTrueNode* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value157 = (void*)0;
    (come_push_stackframe("21obj.c", 199, 1651),__exception_result_var_b138=((struct sNodeBase*)(right_value157=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sTrueNode*)come_null_check(((struct sTrueNode*)come_null_check(self, "21obj.c", 199, 1649)), "21obj.c", 199, 1650))),info))), come_pop_stackframe(), __exception_result_var_b138);
    come_call_finalizer3(right_value157,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result102__ = __result_obj__ = self;
    come_call_finalizer3(self,sTrueNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result102__;
    come_call_finalizer3(self,sTrueNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sTrueNode_kind(struct sTrueNode* self){
void* __result_obj__;
void* right_value158;
char* __exception_result_var_b139;
char* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
right_value158 = (void*)0;
    __result103__ = __result_obj__ = (come_push_stackframe("21obj.c", 204, 1656),__exception_result_var_b139=((char*)(right_value158=__builtin_string("sTrueNode"))), come_pop_stackframe(), __exception_result_var_b139);
    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result103__;
}

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value159;
struct CVALUE* come_value_125;
void* right_value160;
char* __exception_result_var_b140;
char* __dec_obj48;
void* right_value161;
void* right_value162;
struct sType* __exception_result_var_b141;
struct sType* __dec_obj49;
struct list$1CVALUEph* __exception_result_var_b142;
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
right_value159 = (void*)0;
memset(&come_value_125, 0, sizeof(struct CVALUE*));
right_value160 = (void*)0;
right_value161 = (void*)0;
right_value162 = (void*)0;
    come_value_125=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value159=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 209, "CVALUE"))));
    come_call_finalizer3(right_value159,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj48=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_125, "21obj.c", 211, 1657)), "21obj.c", 211, 1658))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_125, "21obj.c", 211, 1657)), "21obj.c", 211, 1658))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 211, 1659),__exception_result_var_b140=((char*)(right_value160=xsprintf("(_Bool)1"))), come_pop_stackframe(), __exception_result_var_b140));
    __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj49=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_125, "21obj.c", 212, 1660)), "21obj.c", 212, 1661))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_125, "21obj.c", 212, 1660)), "21obj.c", 212, 1661))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 212, 1663),__exception_result_var_b141=((struct sType*)(right_value162=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value161=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 212, "sType"))), "21obj.c", 212, 1662))),"bool",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b141));
    come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value161,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value162,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_125, "21obj.c", 213, 1664)), "21obj.c", 213, 1665))->var=((void*)0);
    (come_push_stackframe("21obj.c", 215,1668),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_125, "21obj.c", 215, 1666)), "21obj.c", 215, 1667))->c_value),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 217, 1673),__exception_result_var_b142=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 217, 1669)), "21obj.c", 217, 1670))->stack, "21obj.c", 217, 1671)), "21obj.c", 217, 1672)),(struct CVALUE*)come_increment_ref_count(come_value_125)), come_pop_stackframe(), __exception_result_var_b142);
    __result104__ = (_Bool)1;
    come_call_finalizer3(come_value_125,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result104__;
    come_call_finalizer3(come_value_125,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value163;
struct sNodeBase* __exception_result_var_b143;
struct sFalseNode* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value163 = (void*)0;
    (come_push_stackframe("21obj.c", 227, 1676),__exception_result_var_b143=((struct sNodeBase*)(right_value163=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sFalseNode*)come_null_check(((struct sFalseNode*)come_null_check(self, "21obj.c", 227, 1674)), "21obj.c", 227, 1675))),info))), come_pop_stackframe(), __exception_result_var_b143);
    come_call_finalizer3(right_value163,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result105__ = __result_obj__ = self;
    come_call_finalizer3(self,sFalseNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result105__;
    come_call_finalizer3(self,sFalseNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sFalseNode_kind(struct sFalseNode* self){
void* __result_obj__;
void* right_value164;
char* __exception_result_var_b144;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value164 = (void*)0;
    __result106__ = __result_obj__ = (come_push_stackframe("21obj.c", 232, 1681),__exception_result_var_b144=((char*)(right_value164=__builtin_string("sFalseNode"))), come_pop_stackframe(), __exception_result_var_b144);
    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result106__;
}

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value165;
struct CVALUE* come_value_126;
void* right_value166;
char* __exception_result_var_b145;
char* __dec_obj50;
void* right_value167;
void* right_value168;
struct sType* __exception_result_var_b146;
struct sType* __dec_obj51;
struct list$1CVALUEph* __exception_result_var_b147;
_Bool __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value165 = (void*)0;
memset(&come_value_126, 0, sizeof(struct CVALUE*));
right_value166 = (void*)0;
right_value167 = (void*)0;
right_value168 = (void*)0;
    come_value_126=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value165=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 237, "CVALUE"))));
    come_call_finalizer3(right_value165,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj50=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_126, "21obj.c", 239, 1682)), "21obj.c", 239, 1683))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_126, "21obj.c", 239, 1682)), "21obj.c", 239, 1683))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 239, 1684),__exception_result_var_b145=((char*)(right_value166=xsprintf("(_Bool)0"))), come_pop_stackframe(), __exception_result_var_b145));
    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj51=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_126, "21obj.c", 240, 1685)), "21obj.c", 240, 1686))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_126, "21obj.c", 240, 1685)), "21obj.c", 240, 1686))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 240, 1688),__exception_result_var_b146=((struct sType*)(right_value168=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value167=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 240, "sType"))), "21obj.c", 240, 1687))),"bool",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b146));
    come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value167,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value168,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_126, "21obj.c", 241, 1689)), "21obj.c", 241, 1690))->var=((void*)0);
    (come_push_stackframe("21obj.c", 243,1693),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_126, "21obj.c", 243, 1691)), "21obj.c", 243, 1692))->c_value),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 245, 1698),__exception_result_var_b147=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 245, 1694)), "21obj.c", 245, 1695))->stack, "21obj.c", 245, 1696)), "21obj.c", 245, 1697)),(struct CVALUE*)come_increment_ref_count(come_value_126)), come_pop_stackframe(), __exception_result_var_b147);
    __result107__ = (_Bool)1;
    come_call_finalizer3(come_value_126,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result107__;
    come_call_finalizer3(come_value_126,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value169;
struct sNodeBase* __exception_result_var_b148;
struct sType* __exception_result_var_b149;
void* right_value170;
struct sType* __dec_obj52;
struct sSizeOfNode* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value169 = (void*)0;
right_value170 = (void*)0;
    (come_push_stackframe("21obj.c", 255, 1701),__exception_result_var_b148=((struct sNodeBase*)(right_value169=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sSizeOfNode*)come_null_check(((struct sSizeOfNode*)come_null_check(self, "21obj.c", 255, 1699)), "21obj.c", 255, 1700))),info))), come_pop_stackframe(), __exception_result_var_b148);
    come_call_finalizer3(right_value169,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj52=((struct sSizeOfNode*)come_null_check(self, "21obj.c", 257, 1702))->type;
    ((struct sSizeOfNode*)come_null_check(self, "21obj.c", 257, 1702))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value170=(come_push_stackframe("21obj.c", 257, 1703),__exception_result_var_b149=sType_clone(type), come_pop_stackframe(), __exception_result_var_b149))));
    come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value170,sType_finalize, 0, 1, 0, 0, __result_obj__);
    __result108__ = __result_obj__ = self;
    come_call_finalizer3(self,sSizeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result108__;
    come_call_finalizer3(self,sSizeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
}

char* sSizeOfNode_kind(struct sSizeOfNode* self){
void* __result_obj__;
void* right_value171;
char* __exception_result_var_b150;
char* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value171 = (void*)0;
    __result109__ = __result_obj__ = (come_push_stackframe("21obj.c", 262, 1712),__exception_result_var_b150=((char*)(right_value171=__builtin_string("sSizeOfNode"))), come_pop_stackframe(), __exception_result_var_b150);
    right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result109__;
}

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_127;
void* right_value172;
struct CVALUE* come_value_128;
void* right_value173;
struct sType* __exception_result_var_b151;
struct sType* type2_129;
void* right_value174;
char* __exception_result_var_b152;
char* type_name_130;
void* right_value175;
char* __exception_result_var_b153;
char* __dec_obj53;
void* right_value176;
void* right_value177;
struct sType* __exception_result_var_b154;
struct sType* __dec_obj54;
struct list$1CVALUEph* __exception_result_var_b155;
_Bool __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_127, 0, sizeof(struct sType*));
right_value172 = (void*)0;
memset(&come_value_128, 0, sizeof(struct CVALUE*));
right_value173 = (void*)0;
memset(&type2_129, 0, sizeof(struct sType*));
right_value174 = (void*)0;
memset(&type_name_130, 0, sizeof(char*));
right_value175 = (void*)0;
right_value176 = (void*)0;
right_value177 = (void*)0;
    type_127=((struct sSizeOfNode*)come_null_check(((struct sSizeOfNode*)come_null_check(self, "21obj.c", 267, 1713)), "21obj.c", 267, 1714))->type;
    come_value_128=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value172=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 269, "CVALUE"))));
    come_call_finalizer3(right_value172,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    type2_129=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 271, 1717),__exception_result_var_b151=((struct sType*)(right_value173=solve_generics(type_127,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 271, 1715)), "21obj.c", 271, 1716))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b151));
    come_call_finalizer3(right_value173,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type_name_130=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 273, 1718),__exception_result_var_b152=((char*)(right_value174=make_type_name_string(type2_129,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b152));
    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj53=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_128, "21obj.c", 275, 1719)), "21obj.c", 275, 1720))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_128, "21obj.c", 275, 1719)), "21obj.c", 275, 1720))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 275, 1721),__exception_result_var_b153=((char*)(right_value175=xsprintf("sizeof(%s)",type_name_130))), come_pop_stackframe(), __exception_result_var_b153));
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj54=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_128, "21obj.c", 276, 1722)), "21obj.c", 276, 1723))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_128, "21obj.c", 276, 1722)), "21obj.c", 276, 1723))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 276, 1725),__exception_result_var_b154=((struct sType*)(right_value177=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value176=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 276, "sType"))), "21obj.c", 276, 1724))),"long",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b154));
    come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value176,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value177,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_128, "21obj.c", 277, 1726)), "21obj.c", 277, 1727))->type, "21obj.c", 277, 1728)), "21obj.c", 277, 1729))->mUnsigned=(_Bool)1;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_128, "21obj.c", 278, 1730)), "21obj.c", 278, 1731))->var=((void*)0);
    (come_push_stackframe("21obj.c", 280,1734),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_128, "21obj.c", 280, 1732)), "21obj.c", 280, 1733))->c_value),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 282, 1739),__exception_result_var_b155=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 282, 1735)), "21obj.c", 282, 1736))->stack, "21obj.c", 282, 1737)), "21obj.c", 282, 1738)),(struct CVALUE*)come_increment_ref_count(come_value_128)), come_pop_stackframe(), __exception_result_var_b155);
    __result110__ = (_Bool)1;
    come_call_finalizer3(come_value_128,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_129,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_130 = come_decrement_ref_count2(type_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result110__;
    come_call_finalizer3(come_value_128,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_129,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_130 = come_decrement_ref_count2(type_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value178;
struct sNodeBase* __exception_result_var_b156;
struct sNode* __exception_result_var_b157;
void* right_value179;
struct sNode* __dec_obj55;
struct sSizeOfExpNode* __result111__;
struct sSizeOfExpNode* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
right_value178 = (void*)0;
right_value179 = (void*)0;
    (come_push_stackframe("21obj.c", 292, 1742),__exception_result_var_b156=((struct sNodeBase*)(right_value178=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sSizeOfExpNode*)come_null_check(((struct sSizeOfExpNode*)come_null_check(self, "21obj.c", 292, 1740)), "21obj.c", 292, 1741))),info))), come_pop_stackframe(), __exception_result_var_b156);
    come_call_finalizer3(right_value178,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj55=((struct sSizeOfExpNode*)come_null_check(self, "21obj.c", 294, 1743))->exp;
    ((struct sSizeOfExpNode*)come_null_check(self, "21obj.c", 294, 1743))->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value179=(come_push_stackframe("21obj.c", 294, 1744),__exception_result_var_b157=sNode_clone(exp), come_pop_stackframe(), __exception_result_var_b157))));
    if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value179) { right_value179 = come_decrement_ref_count2(right_value179, ((struct sNode*)right_value179)->finalize, ((struct sNode*)right_value179)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result111__ = __result_obj__ = self;
    come_call_finalizer3(self,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result111__;
    __result112__ = __result_obj__ = self;
    come_call_finalizer3(self,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result112__;
    come_call_finalizer3(self,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sSizeOfExpNode_kind(struct sSizeOfExpNode* self){
void* __result_obj__;
void* right_value180;
char* __exception_result_var_b158;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value180 = (void*)0;
    __result113__ = __result_obj__ = (come_push_stackframe("21obj.c", 301, 1753),__exception_result_var_b158=((char*)(right_value180=__builtin_string("sSizeOfExpNode"))), come_pop_stackframe(), __exception_result_var_b158);
    right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result113__;
}

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_131;
_Bool __exception_result_var_b159;
_Bool _if_conditional175;
_Bool __result114__;
void* right_value181;
struct CVALUE* __exception_result_var_b160;
struct CVALUE* come_value_132;
void* right_value182;
struct CVALUE* come_value2_133;
void* right_value183;
char* __exception_result_var_b161;
char* __dec_obj56;
void* right_value184;
void* right_value185;
struct sType* __exception_result_var_b162;
struct sType* __dec_obj57;
struct list$1CVALUEph* __exception_result_var_b163;
_Bool __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_131, 0, sizeof(struct sNode*));
right_value181 = (void*)0;
memset(&come_value_132, 0, sizeof(struct CVALUE*));
right_value182 = (void*)0;
memset(&come_value2_133, 0, sizeof(struct CVALUE*));
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
    exp_131=(struct sNode*)come_increment_ref_count(((struct sSizeOfExpNode*)come_null_check(((struct sSizeOfExpNode*)come_null_check(self, "21obj.c", 306, 1754)), "21obj.c", 306, 1755))->exp);
    if(_if_conditional175=!(come_push_stackframe("21obj.c", 308, 1756),__exception_result_var_b159=node_compile(exp_131,info), come_pop_stackframe(), __exception_result_var_b159),    _if_conditional175) {
        __result114__ = (_Bool)0;
        if(exp_131) { exp_131 = come_decrement_ref_count2(exp_131, ((struct sNode*)exp_131)->finalize, ((struct sNode*)exp_131)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result114__;
    }
    come_value_132=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("21obj.c", 312, 1757),__exception_result_var_b160=((struct CVALUE*)(right_value181=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b160));
    come_call_finalizer3(right_value181,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("21obj.c", 313,1758),dec_stack_ptr(1,info),come_pop_stackframe());
    come_value2_133=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value182=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 315, "CVALUE"))));
    come_call_finalizer3(right_value182,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj56=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_133, "21obj.c", 317, 1759)), "21obj.c", 317, 1760))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_133, "21obj.c", 317, 1759)), "21obj.c", 317, 1760))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 317, 1763),__exception_result_var_b161=((char*)(right_value183=xsprintf("sizeof(%s)",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_132, "21obj.c", 317, 1761)), "21obj.c", 317, 1762))->c_value))), come_pop_stackframe(), __exception_result_var_b161));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj57=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_133, "21obj.c", 318, 1764)), "21obj.c", 318, 1765))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_133, "21obj.c", 318, 1764)), "21obj.c", 318, 1765))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 318, 1767),__exception_result_var_b162=((struct sType*)(right_value185=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value184=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 318, "sType"))), "21obj.c", 318, 1766))),"long",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b162));
    come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value184,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value185,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_133, "21obj.c", 319, 1768)), "21obj.c", 319, 1769))->type, "21obj.c", 319, 1770)), "21obj.c", 319, 1771))->mUnsigned=(_Bool)1;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_133, "21obj.c", 320, 1772)), "21obj.c", 320, 1773))->var=((void*)0);
    (come_push_stackframe("21obj.c", 322,1776),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_133, "21obj.c", 322, 1774)), "21obj.c", 322, 1775))->c_value),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 324, 1781),__exception_result_var_b163=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 324, 1777)), "21obj.c", 324, 1778))->stack, "21obj.c", 324, 1779)), "21obj.c", 324, 1780)),(struct CVALUE*)come_increment_ref_count(come_value2_133)), come_pop_stackframe(), __exception_result_var_b163);
    __result115__ = (_Bool)1;
    if(exp_131) { exp_131 = come_decrement_ref_count2(exp_131, ((struct sNode*)exp_131)->finalize, ((struct sNode*)exp_131)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_132,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_133,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result115__;
    if(exp_131) { exp_131 = come_decrement_ref_count2(exp_131, ((struct sNode*)exp_131)->finalize, ((struct sNode*)exp_131)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_132,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_133,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value186;
struct sNodeBase* __exception_result_var_b164;
struct sType* __exception_result_var_b165;
void* right_value187;
struct sType* __dec_obj58;
struct sTypeOfNode* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
right_value186 = (void*)0;
right_value187 = (void*)0;
    (come_push_stackframe("21obj.c", 334, 1784),__exception_result_var_b164=((struct sNodeBase*)(right_value186=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sTypeOfNode*)come_null_check(((struct sTypeOfNode*)come_null_check(self, "21obj.c", 334, 1782)), "21obj.c", 334, 1783))),info))), come_pop_stackframe(), __exception_result_var_b164);
    come_call_finalizer3(right_value186,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj58=((struct sTypeOfNode*)come_null_check(self, "21obj.c", 336, 1785))->type;
    ((struct sTypeOfNode*)come_null_check(self, "21obj.c", 336, 1785))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value187=(come_push_stackframe("21obj.c", 336, 1786),__exception_result_var_b165=sType_clone(type), come_pop_stackframe(), __exception_result_var_b165))));
    come_call_finalizer3(__dec_obj58,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value187,sType_finalize, 0, 1, 0, 0, __result_obj__);
    __result116__ = __result_obj__ = self;
    come_call_finalizer3(self,sTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result116__;
    come_call_finalizer3(self,sTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
}

char* sTypeOfNode_kind(struct sTypeOfNode* self){
void* __result_obj__;
void* right_value188;
char* __exception_result_var_b166;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value188 = (void*)0;
    __result117__ = __result_obj__ = (come_push_stackframe("21obj.c", 341, 1795),__exception_result_var_b166=((char*)(right_value188=__builtin_string("sTypeOfNode"))), come_pop_stackframe(), __exception_result_var_b166);
    right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result117__;
}

_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_134;
void* right_value189;
struct CVALUE* come_value_135;
void* right_value190;
struct sType* __exception_result_var_b167;
struct sType* type2_136;
void* right_value191;
char* __exception_result_var_b168;
char* type_name_137;
void* right_value192;
char* __exception_result_var_b169;
char* __dec_obj59;
void* right_value193;
void* right_value194;
struct sType* __exception_result_var_b170;
struct sType* __dec_obj60;
struct list$1CVALUEph* __exception_result_var_b171;
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_134, 0, sizeof(struct sType*));
right_value189 = (void*)0;
memset(&come_value_135, 0, sizeof(struct CVALUE*));
right_value190 = (void*)0;
memset(&type2_136, 0, sizeof(struct sType*));
right_value191 = (void*)0;
memset(&type_name_137, 0, sizeof(char*));
right_value192 = (void*)0;
right_value193 = (void*)0;
right_value194 = (void*)0;
    type_134=((struct sTypeOfNode*)come_null_check(((struct sTypeOfNode*)come_null_check(self, "21obj.c", 346, 1796)), "21obj.c", 346, 1797))->type;
    come_value_135=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value189=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 348, "CVALUE"))));
    come_call_finalizer3(right_value189,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    type2_136=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 350, 1800),__exception_result_var_b167=((struct sType*)(right_value190=solve_generics(type_134,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 350, 1798)), "21obj.c", 350, 1799))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b167));
    come_call_finalizer3(right_value190,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type_name_137=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 352, 1801),__exception_result_var_b168=((char*)(right_value191=make_type_name_string(type2_136,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b168));
    right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj59=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_135, "21obj.c", 354, 1802)), "21obj.c", 354, 1803))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_135, "21obj.c", 354, 1802)), "21obj.c", 354, 1803))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 354, 1804),__exception_result_var_b169=((char*)(right_value192=xsprintf("\"%s\"",type_name_137))), come_pop_stackframe(), __exception_result_var_b169));
    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj60=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_135, "21obj.c", 355, 1805)), "21obj.c", 355, 1806))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_135, "21obj.c", 355, 1805)), "21obj.c", 355, 1806))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 355, 1808),__exception_result_var_b170=((struct sType*)(right_value194=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value193=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 355, "sType"))), "21obj.c", 355, 1807))),"char*",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b170));
    come_call_finalizer3(__dec_obj60,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value193,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value194,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_135, "21obj.c", 356, 1809)), "21obj.c", 356, 1810))->var=((void*)0);
    (come_push_stackframe("21obj.c", 358,1813),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_135, "21obj.c", 358, 1811)), "21obj.c", 358, 1812))->c_value),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 360, 1818),__exception_result_var_b171=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 360, 1814)), "21obj.c", 360, 1815))->stack, "21obj.c", 360, 1816)), "21obj.c", 360, 1817)),(struct CVALUE*)come_increment_ref_count(come_value_135)), come_pop_stackframe(), __exception_result_var_b171);
    __result118__ = (_Bool)1;
    come_call_finalizer3(come_value_135,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_136,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_137 = come_decrement_ref_count2(type_name_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result118__;
    come_call_finalizer3(come_value_135,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_136,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_137 = come_decrement_ref_count2(type_name_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value195;
struct sNodeBase* __exception_result_var_b172;
struct sNode* __exception_result_var_b173;
void* right_value196;
struct sNode* __dec_obj61;
struct sTypeOfExpNode* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value195 = (void*)0;
right_value196 = (void*)0;
    (come_push_stackframe("21obj.c", 370, 1821),__exception_result_var_b172=((struct sNodeBase*)(right_value195=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sTypeOfExpNode*)come_null_check(((struct sTypeOfExpNode*)come_null_check(self, "21obj.c", 370, 1819)), "21obj.c", 370, 1820))),info))), come_pop_stackframe(), __exception_result_var_b172);
    come_call_finalizer3(right_value195,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj61=((struct sTypeOfExpNode*)come_null_check(self, "21obj.c", 372, 1822))->exp;
    ((struct sTypeOfExpNode*)come_null_check(self, "21obj.c", 372, 1822))->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value196=(come_push_stackframe("21obj.c", 372, 1823),__exception_result_var_b173=sNode_clone(exp), come_pop_stackframe(), __exception_result_var_b173))));
    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value196) { right_value196 = come_decrement_ref_count2(right_value196, ((struct sNode*)right_value196)->finalize, ((struct sNode*)right_value196)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result119__ = __result_obj__ = self;
    come_call_finalizer3(self,sTypeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result119__;
    come_call_finalizer3(self,sTypeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sTypeOfExpNode_kind(struct sTypeOfExpNode* self){
void* __result_obj__;
void* right_value197;
char* __exception_result_var_b174;
char* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
right_value197 = (void*)0;
    __result120__ = __result_obj__ = (come_push_stackframe("21obj.c", 377, 1832),__exception_result_var_b174=((char*)(right_value197=__builtin_string("sTypeOfExpNode"))), come_pop_stackframe(), __exception_result_var_b174);
    right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result120__;
}

_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_138;
_Bool __exception_result_var_b175;
_Bool _if_conditional180;
_Bool __result121__;
void* right_value198;
struct CVALUE* __exception_result_var_b176;
struct CVALUE* come_value_139;
struct sType* __exception_result_var_b177;
void* right_value199;
struct sType* type_140;
void* right_value200;
struct sType* __exception_result_var_b178;
struct sType* type2_141;
void* right_value201;
char* __exception_result_var_b179;
char* type_name_142;
void* right_value202;
char* __exception_result_var_b180;
char* __dec_obj62;
void* right_value203;
void* right_value204;
struct sType* __exception_result_var_b181;
struct sType* __dec_obj63;
struct list$1CVALUEph* __exception_result_var_b182;
_Bool __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_138, 0, sizeof(struct sNode*));
right_value198 = (void*)0;
memset(&come_value_139, 0, sizeof(struct CVALUE*));
right_value199 = (void*)0;
memset(&type_140, 0, sizeof(struct sType*));
right_value200 = (void*)0;
memset(&type2_141, 0, sizeof(struct sType*));
right_value201 = (void*)0;
memset(&type_name_142, 0, sizeof(char*));
right_value202 = (void*)0;
right_value203 = (void*)0;
right_value204 = (void*)0;
    exp_138=(struct sNode*)come_increment_ref_count(((struct sTypeOfExpNode*)come_null_check(((struct sTypeOfExpNode*)come_null_check(self, "21obj.c", 382, 1833)), "21obj.c", 382, 1834))->exp);
    if(_if_conditional180=!(come_push_stackframe("21obj.c", 384, 1835),__exception_result_var_b175=node_compile(exp_138,info), come_pop_stackframe(), __exception_result_var_b175),    _if_conditional180) {
        __result121__ = (_Bool)0;
        if(exp_138) { exp_138 = come_decrement_ref_count2(exp_138, ((struct sNode*)exp_138)->finalize, ((struct sNode*)exp_138)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result121__;
    }
    come_value_139=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("21obj.c", 388, 1836),__exception_result_var_b176=((struct CVALUE*)(right_value198=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b176));
    come_call_finalizer3(right_value198,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("21obj.c", 389,1837),dec_stack_ptr(1,info),come_pop_stackframe());
    type_140=(struct sType*)come_increment_ref_count(((struct sType*)(right_value199=(come_push_stackframe("21obj.c", 391, 1840),__exception_result_var_b177=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_139, "21obj.c", 391, 1838)), "21obj.c", 391, 1839))->type), come_pop_stackframe(), __exception_result_var_b177))));
    come_call_finalizer3(right_value199,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type2_141=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 393, 1843),__exception_result_var_b178=((struct sType*)(right_value200=solve_generics(type_140,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 393, 1841)), "21obj.c", 393, 1842))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b178));
    come_call_finalizer3(right_value200,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type_name_142=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 395, 1844),__exception_result_var_b179=((char*)(right_value201=make_type_name_string(type2_141,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b179));
    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj62=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_139, "21obj.c", 397, 1845)), "21obj.c", 397, 1846))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_139, "21obj.c", 397, 1845)), "21obj.c", 397, 1846))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 397, 1847),__exception_result_var_b180=((char*)(right_value202=xsprintf("\"%s\"",type_name_142))), come_pop_stackframe(), __exception_result_var_b180));
    __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj63=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_139, "21obj.c", 398, 1848)), "21obj.c", 398, 1849))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_139, "21obj.c", 398, 1848)), "21obj.c", 398, 1849))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 398, 1851),__exception_result_var_b181=((struct sType*)(right_value204=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value203=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 398, "sType"))), "21obj.c", 398, 1850))),"char*",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b181));
    come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value203,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value204,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_139, "21obj.c", 399, 1852)), "21obj.c", 399, 1853))->var=((void*)0);
    (come_push_stackframe("21obj.c", 401,1856),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_139, "21obj.c", 401, 1854)), "21obj.c", 401, 1855))->c_value),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 403, 1861),__exception_result_var_b182=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 403, 1857)), "21obj.c", 403, 1858))->stack, "21obj.c", 403, 1859)), "21obj.c", 403, 1860)),(struct CVALUE*)come_increment_ref_count(come_value_139)), come_pop_stackframe(), __exception_result_var_b182);
    __result122__ = (_Bool)1;
    if(exp_138) { exp_138 = come_decrement_ref_count2(exp_138, ((struct sNode*)exp_138)->finalize, ((struct sNode*)exp_138)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_139,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_140,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_141,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_142 = come_decrement_ref_count2(type_name_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result122__;
    if(exp_138) { exp_138 = come_decrement_ref_count2(exp_138, ((struct sNode*)exp_138)->finalize, ((struct sNode*)exp_138)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_139,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_140,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_141,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_142 = come_decrement_ref_count2(type_name_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sDynamicTypeOfNode* sDynamicTypeOfNode_initialize(struct sDynamicTypeOfNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value205;
struct sNodeBase* __exception_result_var_b183;
struct sNode* __exception_result_var_b184;
void* right_value206;
struct sNode* __dec_obj64;
struct sDynamicTypeOfNode* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value205 = (void*)0;
right_value206 = (void*)0;
    (come_push_stackframe("21obj.c", 413, 1864),__exception_result_var_b183=((struct sNodeBase*)(right_value205=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sDynamicTypeOfNode*)come_null_check(((struct sDynamicTypeOfNode*)come_null_check(self, "21obj.c", 413, 1862)), "21obj.c", 413, 1863))),info))), come_pop_stackframe(), __exception_result_var_b183);
    come_call_finalizer3(right_value205,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj64=((struct sDynamicTypeOfNode*)come_null_check(self, "21obj.c", 415, 1865))->exp;
    ((struct sDynamicTypeOfNode*)come_null_check(self, "21obj.c", 415, 1865))->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value206=(come_push_stackframe("21obj.c", 415, 1866),__exception_result_var_b184=sNode_clone(exp), come_pop_stackframe(), __exception_result_var_b184))));
    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value206) { right_value206 = come_decrement_ref_count2(right_value206, ((struct sNode*)right_value206)->finalize, ((struct sNode*)right_value206)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result123__ = __result_obj__ = self;
    come_call_finalizer3(self,sDynamicTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result123__;
    come_call_finalizer3(self,sDynamicTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sDynamicTypeOfNode_kind(struct sDynamicTypeOfNode* self){
void* __result_obj__;
void* right_value207;
char* __exception_result_var_b185;
char* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value207 = (void*)0;
    __result124__ = __result_obj__ = (come_push_stackframe("21obj.c", 420, 1875),__exception_result_var_b185=((char*)(right_value207=__builtin_string("sDynamicTypeOfNode"))), come_pop_stackframe(), __exception_result_var_b185);
    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result124__;
}

_Bool sDynamicTypeOfNode_compile(struct sDynamicTypeOfNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_143;
_Bool __exception_result_var_b186;
_Bool _if_conditional183;
_Bool __result125__;
void* right_value208;
struct CVALUE* __exception_result_var_b187;
struct CVALUE* come_value_144;
_Bool _if_conditional184;
struct sType* __exception_result_var_b188;
void* right_value209;
struct sType* type_145;
void* right_value210;
struct sType* __exception_result_var_b189;
struct sType* type2_146;
void* right_value211;
char* __exception_result_var_b190;
char* type_name_147;
void* right_value212;
char* __exception_result_var_b191;
char* __dec_obj65;
void* right_value213;
void* right_value214;
struct sType* __exception_result_var_b192;
struct sType* __dec_obj66;
struct list$1CVALUEph* __exception_result_var_b193;
_Bool __result126__;
void* right_value215;
struct CVALUE* come_value2_148;
void* right_value216;
char* __exception_result_var_b194;
char* __dec_obj67;
void* right_value217;
void* right_value218;
struct sType* __exception_result_var_b195;
struct sType* __dec_obj68;
struct list$1CVALUEph* __exception_result_var_b196;
_Bool __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_143, 0, sizeof(struct sNode*));
right_value208 = (void*)0;
memset(&come_value_144, 0, sizeof(struct CVALUE*));
right_value209 = (void*)0;
memset(&type_145, 0, sizeof(struct sType*));
right_value210 = (void*)0;
memset(&type2_146, 0, sizeof(struct sType*));
right_value211 = (void*)0;
memset(&type_name_147, 0, sizeof(char*));
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
memset(&come_value2_148, 0, sizeof(struct CVALUE*));
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
    exp_143=(struct sNode*)come_increment_ref_count(((struct sDynamicTypeOfNode*)come_null_check(((struct sDynamicTypeOfNode*)come_null_check(self, "21obj.c", 425, 1876)), "21obj.c", 425, 1877))->exp);
    if(_if_conditional183=!(come_push_stackframe("21obj.c", 427, 1878),__exception_result_var_b186=node_compile(exp_143,info), come_pop_stackframe(), __exception_result_var_b186),    _if_conditional183) {
        __result125__ = (_Bool)0;
        if(exp_143) { exp_143 = come_decrement_ref_count2(exp_143, ((struct sNode*)exp_143)->finalize, ((struct sNode*)exp_143)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result125__;
    }
    come_value_144=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("21obj.c", 431, 1879),__exception_result_var_b187=((struct CVALUE*)(right_value208=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b187));
    come_call_finalizer3(right_value208,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("21obj.c", 432,1880),dec_stack_ptr(1,info),come_pop_stackframe());
    if(_if_conditional184=!((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_144, "21obj.c", 434, 1881)), "21obj.c", 434, 1882))->type, "21obj.c", 434, 1883)), "21obj.c", 434, 1884))->mHeap,    _if_conditional184) {
        type_145=(struct sType*)come_increment_ref_count(((struct sType*)(right_value209=(come_push_stackframe("21obj.c", 435, 1887),__exception_result_var_b188=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_144, "21obj.c", 435, 1885)), "21obj.c", 435, 1886))->type), come_pop_stackframe(), __exception_result_var_b188))));
        come_call_finalizer3(right_value209,sType_finalize, 0, 1, 0, 0, __result_obj__);
        type2_146=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 437, 1890),__exception_result_var_b189=((struct sType*)(right_value210=solve_generics(type_145,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 437, 1888)), "21obj.c", 437, 1889))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b189));
        come_call_finalizer3(right_value210,sType_finalize, 0, 1, 0, 0, __result_obj__);
        type_name_147=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 439, 1891),__exception_result_var_b190=((char*)(right_value211=make_type_name_string(type2_146,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b190));
        right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj65=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_144, "21obj.c", 441, 1892)), "21obj.c", 441, 1893))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_144, "21obj.c", 441, 1892)), "21obj.c", 441, 1893))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 441, 1894),__exception_result_var_b191=((char*)(right_value212=xsprintf("\"%s\"",type_name_147))), come_pop_stackframe(), __exception_result_var_b191));
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj66=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_144, "21obj.c", 442, 1895)), "21obj.c", 442, 1896))->type;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_144, "21obj.c", 442, 1895)), "21obj.c", 442, 1896))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 442, 1898),__exception_result_var_b192=((struct sType*)(right_value214=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value213=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 442, "sType"))), "21obj.c", 442, 1897))),"char*",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b192));
        come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value213,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value214,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_144, "21obj.c", 443, 1899)), "21obj.c", 443, 1900))->var=((void*)0);
        (come_push_stackframe("21obj.c", 445,1903),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_144, "21obj.c", 445, 1901)), "21obj.c", 445, 1902))->c_value),come_pop_stackframe());
        (come_push_stackframe("21obj.c", 447, 1908),__exception_result_var_b193=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 447, 1904)), "21obj.c", 447, 1905))->stack, "21obj.c", 447, 1906)), "21obj.c", 447, 1907)),(struct CVALUE*)come_increment_ref_count(come_value_144)), come_pop_stackframe(), __exception_result_var_b193);
        __result126__ = (_Bool)1;
        come_call_finalizer3(type_145,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_146,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_name_147 = come_decrement_ref_count2(type_name_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(exp_143) { exp_143 = come_decrement_ref_count2(exp_143, ((struct sNode*)exp_143)->finalize, ((struct sNode*)exp_143)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_144,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result126__;
        come_call_finalizer3(type_145,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_146,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_name_147 = come_decrement_ref_count2(type_name_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        come_value2_148=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value215=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 452, "CVALUE"))));
        come_call_finalizer3(right_value215,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj67=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_148, "21obj.c", 454, 1909)), "21obj.c", 454, 1910))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_148, "21obj.c", 454, 1909)), "21obj.c", 454, 1910))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 454, 1913),__exception_result_var_b194=((char*)(right_value216=xsprintf("come_dynamic_typeof(%s)",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_144, "21obj.c", 454, 1911)), "21obj.c", 454, 1912))->c_value))), come_pop_stackframe(), __exception_result_var_b194));
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj68=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_148, "21obj.c", 455, 1914)), "21obj.c", 455, 1915))->type;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_148, "21obj.c", 455, 1914)), "21obj.c", 455, 1915))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 455, 1917),__exception_result_var_b195=((struct sType*)(right_value218=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value217=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 455, "sType"))), "21obj.c", 455, 1916))),"char*",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b195));
        come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value217,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value218,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_148, "21obj.c", 456, 1918)), "21obj.c", 456, 1919))->var=((void*)0);
        (come_push_stackframe("21obj.c", 458,1922),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_148, "21obj.c", 458, 1920)), "21obj.c", 458, 1921))->c_value),come_pop_stackframe());
        (come_push_stackframe("21obj.c", 460, 1927),__exception_result_var_b196=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 460, 1923)), "21obj.c", 460, 1924))->stack, "21obj.c", 460, 1925)), "21obj.c", 460, 1926)),(struct CVALUE*)come_increment_ref_count(come_value2_148)), come_pop_stackframe(), __exception_result_var_b196);
        come_call_finalizer3(come_value2_148,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result127__ = (_Bool)1;
    if(exp_143) { exp_143 = come_decrement_ref_count2(exp_143, ((struct sNode*)exp_143)->finalize, ((struct sNode*)exp_143)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_144,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result127__;
    if(exp_143) { exp_143 = come_decrement_ref_count2(exp_143, ((struct sNode*)exp_143)->finalize, ((struct sNode*)exp_143)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_144,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static void sDynamicTypeOfNode_finalize(struct sDynamicTypeOfNode* self){
void* __result_obj__;
_Bool _if_conditional181;
_Bool _if_conditional182;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional181=self!=((void*)0)&&((struct sDynamicTypeOfNode*)come_null_check(((struct sDynamicTypeOfNode*)come_null_check(self, "sDynamicTypeOfNode_finalize", 0, 1867)), "sDynamicTypeOfNode_finalize", 0, 1868))->sname!=((void*)0),        _if_conditional181) {
            ((struct sDynamicTypeOfNode*)come_null_check(((struct sDynamicTypeOfNode*)come_null_check(self, "sDynamicTypeOfNode_finalize", 0, 1869)), "sDynamicTypeOfNode_finalize", 0, 1870))->sname = come_decrement_ref_count2(((struct sDynamicTypeOfNode*)come_null_check(((struct sDynamicTypeOfNode*)come_null_check(self, "sDynamicTypeOfNode_finalize", 0, 1869)), "sDynamicTypeOfNode_finalize", 0, 1870))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional182=self!=((void*)0)&&((struct sDynamicTypeOfNode*)come_null_check(((struct sDynamicTypeOfNode*)come_null_check(self, "sDynamicTypeOfNode_finalize", 1, 1871)), "sDynamicTypeOfNode_finalize", 1, 1872))->exp!=((void*)0),        _if_conditional182) {
            if(((struct sDynamicTypeOfNode*)come_null_check(((struct sDynamicTypeOfNode*)come_null_check(self, "sDynamicTypeOfNode_finalize", 1, 1873)), "sDynamicTypeOfNode_finalize", 1, 1874))->exp) { ((struct sDynamicTypeOfNode*)come_null_check(((struct sDynamicTypeOfNode*)come_null_check(self, "sDynamicTypeOfNode_finalize", 1, 1873)), "sDynamicTypeOfNode_finalize", 1, 1874))->exp = come_decrement_ref_count2(((struct sDynamicTypeOfNode*)come_null_check(((struct sDynamicTypeOfNode*)come_null_check(self, "sDynamicTypeOfNode_finalize", 1, 1873)), "sDynamicTypeOfNode_finalize", 1, 1874))->exp, ((struct sNode*)((struct sDynamicTypeOfNode*)come_null_check(((struct sDynamicTypeOfNode*)come_null_check(self, "sDynamicTypeOfNode_finalize", 1, 1873)), "sDynamicTypeOfNode_finalize", 1, 1874))->exp)->finalize, ((struct sNode*)((struct sDynamicTypeOfNode*)come_null_check(((struct sDynamicTypeOfNode*)come_null_check(self, "sDynamicTypeOfNode_finalize", 1, 1873)), "sDynamicTypeOfNode_finalize", 1, 1874))->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
}

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value219;
struct sNodeBase* __exception_result_var_b197;
struct sType* __exception_result_var_b198;
void* right_value220;
struct sType* __dec_obj69;
struct sAlignOfNode* __result128__;
struct sAlignOfNode* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value219 = (void*)0;
right_value220 = (void*)0;
    (come_push_stackframe("21obj.c", 471, 1930),__exception_result_var_b197=((struct sNodeBase*)(right_value219=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sAlignOfNode*)come_null_check(((struct sAlignOfNode*)come_null_check(self, "21obj.c", 471, 1928)), "21obj.c", 471, 1929))),info))), come_pop_stackframe(), __exception_result_var_b197);
    come_call_finalizer3(right_value219,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj69=((struct sAlignOfNode*)come_null_check(self, "21obj.c", 473, 1931))->type;
    ((struct sAlignOfNode*)come_null_check(self, "21obj.c", 473, 1931))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value220=(come_push_stackframe("21obj.c", 473, 1932),__exception_result_var_b198=sType_clone(type), come_pop_stackframe(), __exception_result_var_b198))));
    come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value220,sType_finalize, 0, 1, 0, 0, __result_obj__);
    __result128__ = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result128__;
    __result129__ = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result129__;
    come_call_finalizer3(self,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
}

char* sAlignOfNode_kind(struct sAlignOfNode* self){
void* __result_obj__;
void* right_value221;
char* __exception_result_var_b199;
char* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value221 = (void*)0;
    __result130__ = __result_obj__ = (come_push_stackframe("21obj.c", 480, 1941),__exception_result_var_b199=((char*)(right_value221=__builtin_string("sAlignOfNode"))), come_pop_stackframe(), __exception_result_var_b199);
    right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result130__;
}

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_149;
void* right_value222;
struct CVALUE* come_value_150;
void* right_value223;
struct sType* __exception_result_var_b200;
struct sType* type2_151;
void* right_value224;
char* __exception_result_var_b201;
char* type_name_152;
void* right_value225;
char* __exception_result_var_b202;
char* __dec_obj70;
void* right_value226;
void* right_value227;
struct sType* __exception_result_var_b203;
struct sType* __dec_obj71;
struct list$1CVALUEph* __exception_result_var_b204;
_Bool __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_149, 0, sizeof(struct sType*));
right_value222 = (void*)0;
memset(&come_value_150, 0, sizeof(struct CVALUE*));
right_value223 = (void*)0;
memset(&type2_151, 0, sizeof(struct sType*));
right_value224 = (void*)0;
memset(&type_name_152, 0, sizeof(char*));
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
    type_149=((struct sAlignOfNode*)come_null_check(((struct sAlignOfNode*)come_null_check(self, "21obj.c", 485, 1942)), "21obj.c", 485, 1943))->type;
    come_value_150=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value222=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 487, "CVALUE"))));
    come_call_finalizer3(right_value222,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    type2_151=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 489, 1946),__exception_result_var_b200=((struct sType*)(right_value223=solve_generics(type_149,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 489, 1944)), "21obj.c", 489, 1945))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b200));
    come_call_finalizer3(right_value223,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type_name_152=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 491, 1947),__exception_result_var_b201=((char*)(right_value224=make_type_name_string(type2_151,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b201));
    right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj70=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_150, "21obj.c", 493, 1948)), "21obj.c", 493, 1949))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_150, "21obj.c", 493, 1948)), "21obj.c", 493, 1949))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 493, 1950),__exception_result_var_b202=((char*)(right_value225=xsprintf("_Alignof(%s)",type_name_152))), come_pop_stackframe(), __exception_result_var_b202));
    __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj71=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_150, "21obj.c", 494, 1951)), "21obj.c", 494, 1952))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_150, "21obj.c", 494, 1951)), "21obj.c", 494, 1952))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 494, 1954),__exception_result_var_b203=((struct sType*)(right_value227=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value226=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 494, "sType"))), "21obj.c", 494, 1953))),"long",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b203));
    come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value226,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value227,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_150, "21obj.c", 495, 1955)), "21obj.c", 495, 1956))->type, "21obj.c", 495, 1957)), "21obj.c", 495, 1958))->mUnsigned=(_Bool)1;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_150, "21obj.c", 496, 1959)), "21obj.c", 496, 1960))->var=((void*)0);
    (come_push_stackframe("21obj.c", 498,1963),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_150, "21obj.c", 498, 1961)), "21obj.c", 498, 1962))->c_value),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 500, 1968),__exception_result_var_b204=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 500, 1964)), "21obj.c", 500, 1965))->stack, "21obj.c", 500, 1966)), "21obj.c", 500, 1967)),(struct CVALUE*)come_increment_ref_count(come_value_150)), come_pop_stackframe(), __exception_result_var_b204);
    __result131__ = (_Bool)1;
    come_call_finalizer3(come_value_150,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_151,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_152 = come_decrement_ref_count2(type_name_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result131__;
    come_call_finalizer3(come_value_150,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_151,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_152 = come_decrement_ref_count2(type_name_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value228;
struct sNodeBase* __exception_result_var_b205;
struct sNode* __exception_result_var_b206;
void* right_value229;
struct sNode* __dec_obj72;
struct sAlignOfExpNode* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
right_value228 = (void*)0;
right_value229 = (void*)0;
    (come_push_stackframe("21obj.c", 510, 1971),__exception_result_var_b205=((struct sNodeBase*)(right_value228=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sAlignOfExpNode*)come_null_check(((struct sAlignOfExpNode*)come_null_check(self, "21obj.c", 510, 1969)), "21obj.c", 510, 1970))),info))), come_pop_stackframe(), __exception_result_var_b205);
    come_call_finalizer3(right_value228,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj72=((struct sAlignOfExpNode*)come_null_check(self, "21obj.c", 512, 1972))->exp;
    ((struct sAlignOfExpNode*)come_null_check(self, "21obj.c", 512, 1972))->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value229=(come_push_stackframe("21obj.c", 512, 1973),__exception_result_var_b206=sNode_clone(exp), come_pop_stackframe(), __exception_result_var_b206))));
    if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value229) { right_value229 = come_decrement_ref_count2(right_value229, ((struct sNode*)right_value229)->finalize, ((struct sNode*)right_value229)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result132__ = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result132__;
    come_call_finalizer3(self,sAlignOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sAlignOfExpNode_kind(struct sAlignOfExpNode* self){
void* __result_obj__;
void* right_value230;
char* __exception_result_var_b207;
char* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
right_value230 = (void*)0;
    __result133__ = __result_obj__ = (come_push_stackframe("21obj.c", 517, 1982),__exception_result_var_b207=((char*)(right_value230=__builtin_string("sAlignOfExpNode"))), come_pop_stackframe(), __exception_result_var_b207);
    right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result133__;
}

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_153;
_Bool __exception_result_var_b208;
_Bool _if_conditional189;
_Bool __result134__;
void* right_value231;
struct CVALUE* __exception_result_var_b209;
struct CVALUE* come_value_154;
void* right_value232;
struct CVALUE* come_value2_155;
void* right_value233;
char* __exception_result_var_b210;
char* __dec_obj73;
void* right_value234;
void* right_value235;
struct sType* __exception_result_var_b211;
struct sType* __dec_obj74;
struct list$1CVALUEph* __exception_result_var_b212;
_Bool __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_153, 0, sizeof(struct sNode*));
right_value231 = (void*)0;
memset(&come_value_154, 0, sizeof(struct CVALUE*));
right_value232 = (void*)0;
memset(&come_value2_155, 0, sizeof(struct CVALUE*));
right_value233 = (void*)0;
right_value234 = (void*)0;
right_value235 = (void*)0;
    exp_153=(struct sNode*)come_increment_ref_count(((struct sAlignOfExpNode*)come_null_check(((struct sAlignOfExpNode*)come_null_check(self, "21obj.c", 522, 1983)), "21obj.c", 522, 1984))->exp);
    if(_if_conditional189=!(come_push_stackframe("21obj.c", 524, 1985),__exception_result_var_b208=node_compile(exp_153,info), come_pop_stackframe(), __exception_result_var_b208),    _if_conditional189) {
        __result134__ = (_Bool)0;
        if(exp_153) { exp_153 = come_decrement_ref_count2(exp_153, ((struct sNode*)exp_153)->finalize, ((struct sNode*)exp_153)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result134__;
    }
    come_value_154=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("21obj.c", 528, 1986),__exception_result_var_b209=((struct CVALUE*)(right_value231=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b209));
    come_call_finalizer3(right_value231,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("21obj.c", 529,1987),dec_stack_ptr(1,info),come_pop_stackframe());
    come_value2_155=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value232=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 531, "CVALUE"))));
    come_call_finalizer3(right_value232,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj73=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_155, "21obj.c", 533, 1988)), "21obj.c", 533, 1989))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_155, "21obj.c", 533, 1988)), "21obj.c", 533, 1989))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 533, 1992),__exception_result_var_b210=((char*)(right_value233=xsprintf("_AlignOf(%s)",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_154, "21obj.c", 533, 1990)), "21obj.c", 533, 1991))->c_value))), come_pop_stackframe(), __exception_result_var_b210));
    __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj74=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_155, "21obj.c", 534, 1993)), "21obj.c", 534, 1994))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_155, "21obj.c", 534, 1993)), "21obj.c", 534, 1994))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 534, 1996),__exception_result_var_b211=((struct sType*)(right_value235=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value234=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 534, "sType"))), "21obj.c", 534, 1995))),"long",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b211));
    come_call_finalizer3(__dec_obj74,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value234,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value235,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_155, "21obj.c", 535, 1997)), "21obj.c", 535, 1998))->type, "21obj.c", 535, 1999)), "21obj.c", 535, 2000))->mUnsigned=(_Bool)1;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_155, "21obj.c", 536, 2001)), "21obj.c", 536, 2002))->var=((void*)0);
    (come_push_stackframe("21obj.c", 538,2005),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_155, "21obj.c", 538, 2003)), "21obj.c", 538, 2004))->c_value),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 540, 2010),__exception_result_var_b212=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 540, 2006)), "21obj.c", 540, 2007))->stack, "21obj.c", 540, 2008)), "21obj.c", 540, 2009)),(struct CVALUE*)come_increment_ref_count(come_value2_155)), come_pop_stackframe(), __exception_result_var_b212);
    __result135__ = (_Bool)1;
    if(exp_153) { exp_153 = come_decrement_ref_count2(exp_153, ((struct sNode*)exp_153)->finalize, ((struct sNode*)exp_153)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_154,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_155,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result135__;
    if(exp_153) { exp_153 = come_decrement_ref_count2(exp_153, ((struct sNode*)exp_153)->finalize, ((struct sNode*)exp_153)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_154,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_155,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value236;
struct sNodeBase* __exception_result_var_b213;
struct sType* __exception_result_var_b214;
void* right_value237;
struct sType* __dec_obj75;
struct sAlignOfNode2* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
right_value236 = (void*)0;
right_value237 = (void*)0;
    (come_push_stackframe("21obj.c", 550, 2013),__exception_result_var_b213=((struct sNodeBase*)(right_value236=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sAlignOfNode2*)come_null_check(((struct sAlignOfNode2*)come_null_check(self, "21obj.c", 550, 2011)), "21obj.c", 550, 2012))),info))), come_pop_stackframe(), __exception_result_var_b213);
    come_call_finalizer3(right_value236,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj75=((struct sAlignOfNode2*)come_null_check(self, "21obj.c", 552, 2014))->type;
    ((struct sAlignOfNode2*)come_null_check(self, "21obj.c", 552, 2014))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value237=(come_push_stackframe("21obj.c", 552, 2015),__exception_result_var_b214=sType_clone(type), come_pop_stackframe(), __exception_result_var_b214))));
    come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value237,sType_finalize, 0, 1, 0, 0, __result_obj__);
    __result136__ = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfNode2_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result136__;
    come_call_finalizer3(self,sAlignOfNode2_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
}

char* sAlignOfNode2_kind(struct sAlignOfNode2* self){
void* __result_obj__;
void* right_value238;
char* __exception_result_var_b215;
char* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
right_value238 = (void*)0;
    __result137__ = __result_obj__ = (come_push_stackframe("21obj.c", 557, 2024),__exception_result_var_b215=((char*)(right_value238=__builtin_string("sAlignOfNode2"))), come_pop_stackframe(), __exception_result_var_b215);
    right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result137__;
}

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_156;
void* right_value239;
struct CVALUE* come_value_157;
void* right_value240;
struct sType* __exception_result_var_b216;
struct sType* type2_158;
void* right_value241;
char* __exception_result_var_b217;
char* type_name_159;
void* right_value242;
char* __exception_result_var_b218;
char* __dec_obj76;
void* right_value243;
void* right_value244;
struct sType* __exception_result_var_b219;
struct sType* __dec_obj77;
struct list$1CVALUEph* __exception_result_var_b220;
_Bool __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_156, 0, sizeof(struct sType*));
right_value239 = (void*)0;
memset(&come_value_157, 0, sizeof(struct CVALUE*));
right_value240 = (void*)0;
memset(&type2_158, 0, sizeof(struct sType*));
right_value241 = (void*)0;
memset(&type_name_159, 0, sizeof(char*));
right_value242 = (void*)0;
right_value243 = (void*)0;
right_value244 = (void*)0;
    type_156=((struct sAlignOfNode2*)come_null_check(((struct sAlignOfNode2*)come_null_check(self, "21obj.c", 562, 2025)), "21obj.c", 562, 2026))->type;
    come_value_157=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value239=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 564, "CVALUE"))));
    come_call_finalizer3(right_value239,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    type2_158=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 566, 2029),__exception_result_var_b216=((struct sType*)(right_value240=solve_generics(type_156,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 566, 2027)), "21obj.c", 566, 2028))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b216));
    come_call_finalizer3(right_value240,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type_name_159=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 568, 2030),__exception_result_var_b217=((char*)(right_value241=make_type_name_string(type2_158,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b217));
    right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj76=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_157, "21obj.c", 570, 2031)), "21obj.c", 570, 2032))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_157, "21obj.c", 570, 2031)), "21obj.c", 570, 2032))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 570, 2033),__exception_result_var_b218=((char*)(right_value242=xsprintf("__alignof__(%s)",type_name_159))), come_pop_stackframe(), __exception_result_var_b218));
    __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj77=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_157, "21obj.c", 571, 2034)), "21obj.c", 571, 2035))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_157, "21obj.c", 571, 2034)), "21obj.c", 571, 2035))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 571, 2037),__exception_result_var_b219=((struct sType*)(right_value244=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value243=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 571, "sType"))), "21obj.c", 571, 2036))),"long",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b219));
    come_call_finalizer3(__dec_obj77,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value243,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value244,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_157, "21obj.c", 572, 2038)), "21obj.c", 572, 2039))->type, "21obj.c", 572, 2040)), "21obj.c", 572, 2041))->mUnsigned=(_Bool)1;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_157, "21obj.c", 573, 2042)), "21obj.c", 573, 2043))->var=((void*)0);
    (come_push_stackframe("21obj.c", 575,2046),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_157, "21obj.c", 575, 2044)), "21obj.c", 575, 2045))->c_value),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 577, 2051),__exception_result_var_b220=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 577, 2047)), "21obj.c", 577, 2048))->stack, "21obj.c", 577, 2049)), "21obj.c", 577, 2050)),(struct CVALUE*)come_increment_ref_count(come_value_157)), come_pop_stackframe(), __exception_result_var_b220);
    __result138__ = (_Bool)1;
    come_call_finalizer3(come_value_157,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_158,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_159 = come_decrement_ref_count2(type_name_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result138__;
    come_call_finalizer3(come_value_157,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_158,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_159 = come_decrement_ref_count2(type_name_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value245;
struct sNodeBase* __exception_result_var_b221;
struct sNode* __exception_result_var_b222;
void* right_value246;
struct sNode* __dec_obj78;
struct sAlignOfExpNode2* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
right_value245 = (void*)0;
right_value246 = (void*)0;
    (come_push_stackframe("21obj.c", 587, 2054),__exception_result_var_b221=((struct sNodeBase*)(right_value245=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sAlignOfExpNode2*)come_null_check(((struct sAlignOfExpNode2*)come_null_check(self, "21obj.c", 587, 2052)), "21obj.c", 587, 2053))),info))), come_pop_stackframe(), __exception_result_var_b221);
    come_call_finalizer3(right_value245,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj78=((struct sAlignOfExpNode2*)come_null_check(self, "21obj.c", 589, 2055))->exp;
    ((struct sAlignOfExpNode2*)come_null_check(self, "21obj.c", 589, 2055))->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value246=(come_push_stackframe("21obj.c", 589, 2056),__exception_result_var_b222=sNode_clone(exp), come_pop_stackframe(), __exception_result_var_b222))));
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value246) { right_value246 = come_decrement_ref_count2(right_value246, ((struct sNode*)right_value246)->finalize, ((struct sNode*)right_value246)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result139__ = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfExpNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result139__;
    come_call_finalizer3(self,sAlignOfExpNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self){
void* __result_obj__;
void* right_value247;
char* __exception_result_var_b223;
char* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
right_value247 = (void*)0;
    __result140__ = __result_obj__ = (come_push_stackframe("21obj.c", 594, 2065),__exception_result_var_b223=((char*)(right_value247=__builtin_string("sAlignOfExpNode2"))), come_pop_stackframe(), __exception_result_var_b223);
    right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result140__;
}

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_160;
_Bool __exception_result_var_b224;
_Bool _if_conditional194;
_Bool __result141__;
void* right_value248;
struct CVALUE* __exception_result_var_b225;
struct CVALUE* come_value_161;
void* right_value249;
struct CVALUE* come_value2_162;
void* right_value250;
char* __exception_result_var_b226;
char* __dec_obj79;
void* right_value251;
void* right_value252;
struct sType* __exception_result_var_b227;
struct sType* __dec_obj80;
struct list$1CVALUEph* __exception_result_var_b228;
_Bool __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_160, 0, sizeof(struct sNode*));
right_value248 = (void*)0;
memset(&come_value_161, 0, sizeof(struct CVALUE*));
right_value249 = (void*)0;
memset(&come_value2_162, 0, sizeof(struct CVALUE*));
right_value250 = (void*)0;
right_value251 = (void*)0;
right_value252 = (void*)0;
    exp_160=(struct sNode*)come_increment_ref_count(((struct sAlignOfExpNode2*)come_null_check(((struct sAlignOfExpNode2*)come_null_check(self, "21obj.c", 599, 2066)), "21obj.c", 599, 2067))->exp);
    if(_if_conditional194=!(come_push_stackframe("21obj.c", 601, 2068),__exception_result_var_b224=node_compile(exp_160,info), come_pop_stackframe(), __exception_result_var_b224),    _if_conditional194) {
        __result141__ = (_Bool)0;
        if(exp_160) { exp_160 = come_decrement_ref_count2(exp_160, ((struct sNode*)exp_160)->finalize, ((struct sNode*)exp_160)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result141__;
    }
    come_value_161=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("21obj.c", 605, 2069),__exception_result_var_b225=((struct CVALUE*)(right_value248=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b225));
    come_call_finalizer3(right_value248,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("21obj.c", 606,2070),dec_stack_ptr(1,info),come_pop_stackframe());
    come_value2_162=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value249=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 608, "CVALUE"))));
    come_call_finalizer3(right_value249,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj79=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_162, "21obj.c", 610, 2071)), "21obj.c", 610, 2072))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_162, "21obj.c", 610, 2071)), "21obj.c", 610, 2072))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 610, 2075),__exception_result_var_b226=((char*)(right_value250=xsprintf("__alignof__(%s)",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_161, "21obj.c", 610, 2073)), "21obj.c", 610, 2074))->c_value))), come_pop_stackframe(), __exception_result_var_b226));
    __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj80=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_162, "21obj.c", 611, 2076)), "21obj.c", 611, 2077))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_162, "21obj.c", 611, 2076)), "21obj.c", 611, 2077))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 611, 2079),__exception_result_var_b227=((struct sType*)(right_value252=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value251=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 611, "sType"))), "21obj.c", 611, 2078))),"long",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b227));
    come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value251,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value252,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_162, "21obj.c", 612, 2080)), "21obj.c", 612, 2081))->type, "21obj.c", 612, 2082)), "21obj.c", 612, 2083))->mUnsigned=(_Bool)1;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_162, "21obj.c", 613, 2084)), "21obj.c", 613, 2085))->var=((void*)0);
    (come_push_stackframe("21obj.c", 615,2088),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_162, "21obj.c", 615, 2086)), "21obj.c", 615, 2087))->c_value),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 617, 2093),__exception_result_var_b228=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 617, 2089)), "21obj.c", 617, 2090))->stack, "21obj.c", 617, 2091)), "21obj.c", 617, 2092)),(struct CVALUE*)come_increment_ref_count(come_value2_162)), come_pop_stackframe(), __exception_result_var_b228);
    __result142__ = (_Bool)1;
    if(exp_160) { exp_160 = come_decrement_ref_count2(exp_160, ((struct sNode*)exp_160)->finalize, ((struct sNode*)exp_160)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_161,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_162,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result142__;
    if(exp_160) { exp_160 = come_decrement_ref_count2(exp_160, ((struct sNode*)exp_160)->finalize, ((struct sNode*)exp_160)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_161,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_162,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value253;
struct sNodeBase* __exception_result_var_b229;
struct sType* __exception_result_var_b230;
void* right_value254;
struct sType* __dec_obj81;
struct sAlignAsNode* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
right_value253 = (void*)0;
right_value254 = (void*)0;
    (come_push_stackframe("21obj.c", 627, 2096),__exception_result_var_b229=((struct sNodeBase*)(right_value253=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sAlignAsNode*)come_null_check(((struct sAlignAsNode*)come_null_check(self, "21obj.c", 627, 2094)), "21obj.c", 627, 2095))),info))), come_pop_stackframe(), __exception_result_var_b229);
    come_call_finalizer3(right_value253,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj81=((struct sAlignAsNode*)come_null_check(self, "21obj.c", 629, 2097))->type;
    ((struct sAlignAsNode*)come_null_check(self, "21obj.c", 629, 2097))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value254=(come_push_stackframe("21obj.c", 629, 2098),__exception_result_var_b230=sType_clone(type), come_pop_stackframe(), __exception_result_var_b230))));
    come_call_finalizer3(__dec_obj81,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value254,sType_finalize, 0, 1, 0, 0, __result_obj__);
    __result143__ = __result_obj__ = self;
    come_call_finalizer3(self,sAlignAsNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result143__;
    come_call_finalizer3(self,sAlignAsNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
}

char* sAlignAsNode_kind(struct sAlignAsNode* self){
void* __result_obj__;
void* right_value255;
char* __exception_result_var_b231;
char* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
right_value255 = (void*)0;
    __result144__ = __result_obj__ = (come_push_stackframe("21obj.c", 634, 2107),__exception_result_var_b231=((char*)(right_value255=__builtin_string("sAlignAsNode"))), come_pop_stackframe(), __exception_result_var_b231);
    right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result144__;
}

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_163;
void* right_value256;
struct CVALUE* come_value_164;
void* right_value257;
struct sType* __exception_result_var_b232;
struct sType* type2_165;
void* right_value258;
char* __exception_result_var_b233;
char* type_name_166;
void* right_value259;
char* __exception_result_var_b234;
char* __dec_obj82;
void* right_value260;
void* right_value261;
struct sType* __exception_result_var_b235;
struct sType* __dec_obj83;
struct list$1CVALUEph* __exception_result_var_b236;
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_163, 0, sizeof(struct sType*));
right_value256 = (void*)0;
memset(&come_value_164, 0, sizeof(struct CVALUE*));
right_value257 = (void*)0;
memset(&type2_165, 0, sizeof(struct sType*));
right_value258 = (void*)0;
memset(&type_name_166, 0, sizeof(char*));
right_value259 = (void*)0;
right_value260 = (void*)0;
right_value261 = (void*)0;
    type_163=((struct sAlignAsNode*)come_null_check(((struct sAlignAsNode*)come_null_check(self, "21obj.c", 639, 2108)), "21obj.c", 639, 2109))->type;
    come_value_164=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value256=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 641, "CVALUE"))));
    come_call_finalizer3(right_value256,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    type2_165=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 643, 2112),__exception_result_var_b232=((struct sType*)(right_value257=solve_generics(type_163,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 643, 2110)), "21obj.c", 643, 2111))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b232));
    come_call_finalizer3(right_value257,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type_name_166=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 645, 2113),__exception_result_var_b233=((char*)(right_value258=make_type_name_string(type2_165,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b233));
    right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj82=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_164, "21obj.c", 647, 2114)), "21obj.c", 647, 2115))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_164, "21obj.c", 647, 2114)), "21obj.c", 647, 2115))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 647, 2116),__exception_result_var_b234=((char*)(right_value259=xsprintf("_Alignas(%s)",type_name_166))), come_pop_stackframe(), __exception_result_var_b234));
    __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj83=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_164, "21obj.c", 648, 2117)), "21obj.c", 648, 2118))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_164, "21obj.c", 648, 2117)), "21obj.c", 648, 2118))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 648, 2120),__exception_result_var_b235=((struct sType*)(right_value261=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value260=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 648, "sType"))), "21obj.c", 648, 2119))),"long",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b235));
    come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value260,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value261,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_164, "21obj.c", 649, 2121)), "21obj.c", 649, 2122))->type, "21obj.c", 649, 2123)), "21obj.c", 649, 2124))->mUnsigned=(_Bool)1;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_164, "21obj.c", 650, 2125)), "21obj.c", 650, 2126))->var=((void*)0);
    (come_push_stackframe("21obj.c", 652,2129),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_164, "21obj.c", 652, 2127)), "21obj.c", 652, 2128))->c_value),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 654, 2134),__exception_result_var_b236=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 654, 2130)), "21obj.c", 654, 2131))->stack, "21obj.c", 654, 2132)), "21obj.c", 654, 2133)),(struct CVALUE*)come_increment_ref_count(come_value_164)), come_pop_stackframe(), __exception_result_var_b236);
    __result145__ = (_Bool)1;
    come_call_finalizer3(come_value_164,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_165,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_166 = come_decrement_ref_count2(type_name_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result145__;
    come_call_finalizer3(come_value_164,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_165,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_166 = come_decrement_ref_count2(type_name_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value262;
struct sNodeBase* __exception_result_var_b237;
struct sNode* __exception_result_var_b238;
void* right_value263;
struct sNode* __dec_obj84;
struct sAlignAsExpNode* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
right_value262 = (void*)0;
right_value263 = (void*)0;
    (come_push_stackframe("21obj.c", 664, 2137),__exception_result_var_b237=((struct sNodeBase*)(right_value262=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sAlignAsExpNode*)come_null_check(((struct sAlignAsExpNode*)come_null_check(self, "21obj.c", 664, 2135)), "21obj.c", 664, 2136))),info))), come_pop_stackframe(), __exception_result_var_b237);
    come_call_finalizer3(right_value262,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj84=((struct sAlignAsExpNode*)come_null_check(self, "21obj.c", 666, 2138))->exp;
    ((struct sAlignAsExpNode*)come_null_check(self, "21obj.c", 666, 2138))->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value263=(come_push_stackframe("21obj.c", 666, 2139),__exception_result_var_b238=sNode_clone(exp), come_pop_stackframe(), __exception_result_var_b238))));
    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count2(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value263) { right_value263 = come_decrement_ref_count2(right_value263, ((struct sNode*)right_value263)->finalize, ((struct sNode*)right_value263)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result146__ = __result_obj__ = self;
    come_call_finalizer3(self,sAlignAsExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result146__;
    come_call_finalizer3(self,sAlignAsExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sAlignAsExpNode_kind(struct sAlignAsExpNode* self){
void* __result_obj__;
void* right_value264;
char* __exception_result_var_b239;
char* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
right_value264 = (void*)0;
    __result147__ = __result_obj__ = (come_push_stackframe("21obj.c", 671, 2148),__exception_result_var_b239=((char*)(right_value264=__builtin_string("sAlignAsExpNode"))), come_pop_stackframe(), __exception_result_var_b239);
    right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result147__;
}

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_167;
_Bool __exception_result_var_b240;
_Bool _if_conditional199;
_Bool __result148__;
void* right_value265;
struct CVALUE* __exception_result_var_b241;
struct CVALUE* come_value_168;
void* right_value266;
struct CVALUE* come_value2_169;
void* right_value267;
char* __exception_result_var_b242;
char* __dec_obj85;
void* right_value268;
void* right_value269;
struct sType* __exception_result_var_b243;
struct sType* __dec_obj86;
struct list$1CVALUEph* __exception_result_var_b244;
_Bool __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_167, 0, sizeof(struct sNode*));
right_value265 = (void*)0;
memset(&come_value_168, 0, sizeof(struct CVALUE*));
right_value266 = (void*)0;
memset(&come_value2_169, 0, sizeof(struct CVALUE*));
right_value267 = (void*)0;
right_value268 = (void*)0;
right_value269 = (void*)0;
    exp_167=(struct sNode*)come_increment_ref_count(((struct sAlignAsExpNode*)come_null_check(((struct sAlignAsExpNode*)come_null_check(self, "21obj.c", 676, 2149)), "21obj.c", 676, 2150))->exp);
    if(_if_conditional199=!(come_push_stackframe("21obj.c", 678, 2151),__exception_result_var_b240=node_compile(exp_167,info), come_pop_stackframe(), __exception_result_var_b240),    _if_conditional199) {
        __result148__ = (_Bool)0;
        if(exp_167) { exp_167 = come_decrement_ref_count2(exp_167, ((struct sNode*)exp_167)->finalize, ((struct sNode*)exp_167)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result148__;
    }
    come_value_168=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("21obj.c", 682, 2152),__exception_result_var_b241=((struct CVALUE*)(right_value265=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b241));
    come_call_finalizer3(right_value265,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("21obj.c", 683,2153),dec_stack_ptr(1,info),come_pop_stackframe());
    come_value2_169=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value266=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 685, "CVALUE"))));
    come_call_finalizer3(right_value266,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj85=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_169, "21obj.c", 687, 2154)), "21obj.c", 687, 2155))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_169, "21obj.c", 687, 2154)), "21obj.c", 687, 2155))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 687, 2158),__exception_result_var_b242=((char*)(right_value267=xsprintf("_Alignas(%s)",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_168, "21obj.c", 687, 2156)), "21obj.c", 687, 2157))->c_value))), come_pop_stackframe(), __exception_result_var_b242));
    __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj86=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_169, "21obj.c", 688, 2159)), "21obj.c", 688, 2160))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_169, "21obj.c", 688, 2159)), "21obj.c", 688, 2160))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 688, 2162),__exception_result_var_b243=((struct sType*)(right_value269=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value268=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 688, "sType"))), "21obj.c", 688, 2161))),"long",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b243));
    come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value268,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value269,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_169, "21obj.c", 689, 2163)), "21obj.c", 689, 2164))->type, "21obj.c", 689, 2165)), "21obj.c", 689, 2166))->mUnsigned=(_Bool)1;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_169, "21obj.c", 690, 2167)), "21obj.c", 690, 2168))->var=((void*)0);
    (come_push_stackframe("21obj.c", 692,2171),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_169, "21obj.c", 692, 2169)), "21obj.c", 692, 2170))->c_value),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 694, 2176),__exception_result_var_b244=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 694, 2172)), "21obj.c", 694, 2173))->stack, "21obj.c", 694, 2174)), "21obj.c", 694, 2175)),(struct CVALUE*)come_increment_ref_count(come_value2_169)), come_pop_stackframe(), __exception_result_var_b244);
    __result149__ = (_Bool)1;
    if(exp_167) { exp_167 = come_decrement_ref_count2(exp_167, ((struct sNode*)exp_167)->finalize, ((struct sNode*)exp_167)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_168,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_169,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result149__;
    if(exp_167) { exp_167 = come_decrement_ref_count2(exp_167, ((struct sNode*)exp_167)->finalize, ((struct sNode*)exp_167)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_168,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_169,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value270;
struct sNodeBase* __exception_result_var_b245;
struct sNode* __exception_result_var_b246;
void* right_value271;
struct sNode* __dec_obj87;
struct sDeleteNode* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
right_value270 = (void*)0;
right_value271 = (void*)0;
    (come_push_stackframe("21obj.c", 704, 2179),__exception_result_var_b245=((struct sNodeBase*)(right_value270=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sDeleteNode*)come_null_check(((struct sDeleteNode*)come_null_check(self, "21obj.c", 704, 2177)), "21obj.c", 704, 2178))),info))), come_pop_stackframe(), __exception_result_var_b245);
    come_call_finalizer3(right_value270,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj87=((struct sDeleteNode*)come_null_check(self, "21obj.c", 706, 2180))->node;
    ((struct sDeleteNode*)come_null_check(self, "21obj.c", 706, 2180))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value271=(come_push_stackframe("21obj.c", 706, 2181),__exception_result_var_b246=sNode_clone(node), come_pop_stackframe(), __exception_result_var_b246))));
    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count2(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value271) { right_value271 = come_decrement_ref_count2(right_value271, ((struct sNode*)right_value271)->finalize, ((struct sNode*)right_value271)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result150__ = __result_obj__ = self;
    come_call_finalizer3(self,sDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result150__;
    come_call_finalizer3(self,sDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sDeleteNode_kind(struct sDeleteNode* self){
void* __result_obj__;
void* right_value272;
char* __exception_result_var_b247;
char* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
right_value272 = (void*)0;
    __result151__ = __result_obj__ = (come_push_stackframe("21obj.c", 711, 2190),__exception_result_var_b247=((char*)(right_value272=__builtin_string("sDeleteNode"))), come_pop_stackframe(), __exception_result_var_b247);
    right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result151__;
}

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_170;
_Bool __exception_result_var_b248;
_Bool _if_conditional202;
_Bool __result152__;
void* right_value273;
struct CVALUE* __exception_result_var_b249;
struct CVALUE* come_value_171;
_Bool __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_170, 0, sizeof(struct sNode*));
right_value273 = (void*)0;
memset(&come_value_171, 0, sizeof(struct CVALUE*));
    node_170=((struct sDeleteNode*)come_null_check(((struct sDeleteNode*)come_null_check(self, "21obj.c", 716, 2191)), "21obj.c", 716, 2192))->node;
    if(_if_conditional202=!(come_push_stackframe("21obj.c", 718, 2193),__exception_result_var_b248=node_compile(node_170,info), come_pop_stackframe(), __exception_result_var_b248),    _if_conditional202) {
        __result152__ = (_Bool)0;
        return __result152__;
    }
    come_value_171=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("21obj.c", 722, 2194),__exception_result_var_b249=((struct CVALUE*)(right_value273=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b249));
    come_call_finalizer3(right_value273,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("21obj.c", 723,2195),dec_stack_ptr(1,info),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 725,2200),free_object(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_171, "21obj.c", 725, 2196)), "21obj.c", 725, 2197))->type,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_171, "21obj.c", 725, 2198)), "21obj.c", 725, 2199))->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0),come_pop_stackframe());
    __result153__ = (_Bool)1;
    come_call_finalizer3(come_value_171,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result153__;
    come_call_finalizer3(come_value_171,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sForceDeleteNode* sForceDeleteNode_initialize(struct sForceDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value274;
struct sNodeBase* __exception_result_var_b250;
struct sNode* __exception_result_var_b251;
void* right_value275;
struct sNode* __dec_obj88;
struct sForceDeleteNode* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
right_value274 = (void*)0;
right_value275 = (void*)0;
    (come_push_stackframe("21obj.c", 735, 2203),__exception_result_var_b250=((struct sNodeBase*)(right_value274=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sForceDeleteNode*)come_null_check(((struct sForceDeleteNode*)come_null_check(self, "21obj.c", 735, 2201)), "21obj.c", 735, 2202))),info))), come_pop_stackframe(), __exception_result_var_b250);
    come_call_finalizer3(right_value274,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj88=((struct sForceDeleteNode*)come_null_check(self, "21obj.c", 737, 2204))->node;
    ((struct sForceDeleteNode*)come_null_check(self, "21obj.c", 737, 2204))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value275=(come_push_stackframe("21obj.c", 737, 2205),__exception_result_var_b251=sNode_clone(node), come_pop_stackframe(), __exception_result_var_b251))));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count2(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value275) { right_value275 = come_decrement_ref_count2(right_value275, ((struct sNode*)right_value275)->finalize, ((struct sNode*)right_value275)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result154__ = __result_obj__ = self;
    come_call_finalizer3(self,sForceDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result154__;
    come_call_finalizer3(self,sForceDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sForceDeleteNode_kind(struct sForceDeleteNode* self){
void* __result_obj__;
void* right_value276;
char* __exception_result_var_b252;
char* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
right_value276 = (void*)0;
    __result155__ = __result_obj__ = (come_push_stackframe("21obj.c", 742, 2214),__exception_result_var_b252=((char*)(right_value276=__builtin_string("sForceDeleteNode"))), come_pop_stackframe(), __exception_result_var_b252);
    right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result155__;
}

_Bool sForceDeleteNode_compile(struct sForceDeleteNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_172;
_Bool __exception_result_var_b253;
_Bool _if_conditional205;
_Bool __result156__;
void* right_value277;
struct CVALUE* __exception_result_var_b254;
struct CVALUE* come_value_173;
_Bool __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_172, 0, sizeof(struct sNode*));
right_value277 = (void*)0;
memset(&come_value_173, 0, sizeof(struct CVALUE*));
    node_172=((struct sForceDeleteNode*)come_null_check(((struct sForceDeleteNode*)come_null_check(self, "21obj.c", 747, 2215)), "21obj.c", 747, 2216))->node;
    if(_if_conditional205=!(come_push_stackframe("21obj.c", 749, 2217),__exception_result_var_b253=node_compile(node_172,info), come_pop_stackframe(), __exception_result_var_b253),    _if_conditional205) {
        __result156__ = (_Bool)0;
        return __result156__;
    }
    come_value_173=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("21obj.c", 753, 2218),__exception_result_var_b254=((struct CVALUE*)(right_value277=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b254));
    come_call_finalizer3(right_value277,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("21obj.c", 754,2219),dec_stack_ptr(1,info),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 756,2224),free_object(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_173, "21obj.c", 756, 2220)), "21obj.c", 756, 2221))->type,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_173, "21obj.c", 756, 2222)), "21obj.c", 756, 2223))->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)1),come_pop_stackframe());
    __result157__ = (_Bool)1;
    come_call_finalizer3(come_value_173,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result157__;
    come_call_finalizer3(come_value_173,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sDelegateNode* sDelegateNode_initialize(struct sDelegateNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value278;
struct sNodeBase* __exception_result_var_b255;
struct sNode* __exception_result_var_b256;
void* right_value279;
struct sNode* __dec_obj89;
struct sDelegateNode* __result158__;
struct sDelegateNode* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
right_value278 = (void*)0;
right_value279 = (void*)0;
    (come_push_stackframe("21obj.c", 766, 2227),__exception_result_var_b255=((struct sNodeBase*)(right_value278=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sDelegateNode*)come_null_check(((struct sDelegateNode*)come_null_check(self, "21obj.c", 766, 2225)), "21obj.c", 766, 2226))),info))), come_pop_stackframe(), __exception_result_var_b255);
    come_call_finalizer3(right_value278,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj89=((struct sDelegateNode*)come_null_check(self, "21obj.c", 768, 2228))->node;
    ((struct sDelegateNode*)come_null_check(self, "21obj.c", 768, 2228))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value279=(come_push_stackframe("21obj.c", 768, 2229),__exception_result_var_b256=sNode_clone(node), come_pop_stackframe(), __exception_result_var_b256))));
    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count2(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value279) { right_value279 = come_decrement_ref_count2(right_value279, ((struct sNode*)right_value279)->finalize, ((struct sNode*)right_value279)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result158__ = __result_obj__ = self;
    come_call_finalizer3(self,sDelegateNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result158__;
    __result159__ = __result_obj__ = self;
    come_call_finalizer3(self,sDelegateNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result159__;
    come_call_finalizer3(self,sDelegateNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sDelegateNode_kind(struct sDelegateNode* self){
void* __result_obj__;
void* right_value280;
char* __exception_result_var_b257;
char* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
right_value280 = (void*)0;
    __result160__ = __result_obj__ = (come_push_stackframe("21obj.c", 775, 2238),__exception_result_var_b257=((char*)(right_value280=__builtin_string("sDelegateNode"))), come_pop_stackframe(), __exception_result_var_b257);
    right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result160__;
}

_Bool sDelegateNode_compile(struct sDelegateNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_174;
_Bool __exception_result_var_b258;
_Bool _if_conditional208;
_Bool __result161__;
void* right_value281;
struct CVALUE* __exception_result_var_b259;
struct CVALUE* come_value_175;
_Bool _if_conditional209;
struct list$1CVALUEph* __exception_result_var_b260;
_Bool __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_174, 0, sizeof(struct sNode*));
right_value281 = (void*)0;
memset(&come_value_175, 0, sizeof(struct CVALUE*));
    node_174=((struct sDelegateNode*)come_null_check(((struct sDelegateNode*)come_null_check(self, "21obj.c", 780, 2239)), "21obj.c", 780, 2240))->node;
    if(_if_conditional208=!(come_push_stackframe("21obj.c", 782, 2241),__exception_result_var_b258=node_compile(node_174,info), come_pop_stackframe(), __exception_result_var_b258),    _if_conditional208) {
        __result161__ = (_Bool)0;
        return __result161__;
    }
    come_value_175=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("21obj.c", 786, 2242),__exception_result_var_b259=((struct CVALUE*)(right_value281=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b259));
    come_call_finalizer3(right_value281,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("21obj.c", 787,2243),dec_stack_ptr(1,info),come_pop_stackframe());
    ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_175, "21obj.c", 789, 2244)), "21obj.c", 789, 2245))->type, "21obj.c", 789, 2246)), "21obj.c", 789, 2247))->mDelegate=(_Bool)1;
    if(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_175, "21obj.c", 791, 2248)), "21obj.c", 791, 2249))->var) {
        ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_175, "21obj.c", 792, 2250)), "21obj.c", 792, 2251))->var, "21obj.c", 792, 2252)), "21obj.c", 792, 2253))->mType, "21obj.c", 792, 2254)), "21obj.c", 792, 2255))->mDelegate=(_Bool)1;
    }
    (come_push_stackframe("21obj.c", 801, 2260),__exception_result_var_b260=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 801, 2256)), "21obj.c", 801, 2257))->stack, "21obj.c", 801, 2258)), "21obj.c", 801, 2259)),(struct CVALUE*)come_increment_ref_count(come_value_175)), come_pop_stackframe(), __exception_result_var_b260);
    __result162__ = (_Bool)1;
    come_call_finalizer3(come_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result162__;
    come_call_finalizer3(come_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sShareNode* sShareNode_initialize(struct sShareNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value282;
struct sNodeBase* __exception_result_var_b261;
struct sNode* __exception_result_var_b262;
void* right_value283;
struct sNode* __dec_obj90;
struct sShareNode* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
right_value282 = (void*)0;
right_value283 = (void*)0;
    (come_push_stackframe("21obj.c", 811, 2263),__exception_result_var_b261=((struct sNodeBase*)(right_value282=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sShareNode*)come_null_check(((struct sShareNode*)come_null_check(self, "21obj.c", 811, 2261)), "21obj.c", 811, 2262))),info))), come_pop_stackframe(), __exception_result_var_b261);
    come_call_finalizer3(right_value282,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj90=((struct sShareNode*)come_null_check(self, "21obj.c", 813, 2264))->node;
    ((struct sShareNode*)come_null_check(self, "21obj.c", 813, 2264))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value283=(come_push_stackframe("21obj.c", 813, 2265),__exception_result_var_b262=sNode_clone(node), come_pop_stackframe(), __exception_result_var_b262))));
    if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count2(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value283) { right_value283 = come_decrement_ref_count2(right_value283, ((struct sNode*)right_value283)->finalize, ((struct sNode*)right_value283)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result163__ = __result_obj__ = self;
    come_call_finalizer3(self,sShareNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result163__;
    come_call_finalizer3(self,sShareNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sShareNode_kind(struct sShareNode* self){
void* __result_obj__;
void* right_value284;
char* __exception_result_var_b263;
char* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
right_value284 = (void*)0;
    __result164__ = __result_obj__ = (come_push_stackframe("21obj.c", 818, 2274),__exception_result_var_b263=((char*)(right_value284=__builtin_string("sShareNode"))), come_pop_stackframe(), __exception_result_var_b263);
    right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result164__;
}

_Bool sShareNode_compile(struct sShareNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_176;
_Bool __exception_result_var_b264;
_Bool _if_conditional212;
_Bool __result165__;
void* right_value285;
struct CVALUE* __exception_result_var_b265;
struct CVALUE* come_value_177;
_Bool _if_conditional213;
struct list$1CVALUEph* __exception_result_var_b266;
_Bool __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_176, 0, sizeof(struct sNode*));
right_value285 = (void*)0;
memset(&come_value_177, 0, sizeof(struct CVALUE*));
    node_176=((struct sShareNode*)come_null_check(((struct sShareNode*)come_null_check(self, "21obj.c", 823, 2275)), "21obj.c", 823, 2276))->node;
    if(_if_conditional212=!(come_push_stackframe("21obj.c", 825, 2277),__exception_result_var_b264=node_compile(node_176,info), come_pop_stackframe(), __exception_result_var_b264),    _if_conditional212) {
        __result165__ = (_Bool)0;
        return __result165__;
    }
    come_value_177=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("21obj.c", 829, 2278),__exception_result_var_b265=((struct CVALUE*)(right_value285=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b265));
    come_call_finalizer3(right_value285,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("21obj.c", 830,2279),dec_stack_ptr(1,info),come_pop_stackframe());
    ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_177, "21obj.c", 832, 2280)), "21obj.c", 832, 2281))->type, "21obj.c", 832, 2282)), "21obj.c", 832, 2283))->mShare=(_Bool)1;
    if(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_177, "21obj.c", 834, 2284)), "21obj.c", 834, 2285))->var) {
        ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_177, "21obj.c", 835, 2286)), "21obj.c", 835, 2287))->var, "21obj.c", 835, 2288)), "21obj.c", 835, 2289))->mType, "21obj.c", 835, 2290)), "21obj.c", 835, 2291))->mShare=(_Bool)1;
    }
    (come_push_stackframe("21obj.c", 838, 2296),__exception_result_var_b266=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 838, 2292)), "21obj.c", 838, 2293))->stack, "21obj.c", 838, 2294)), "21obj.c", 838, 2295)),(struct CVALUE*)come_increment_ref_count(come_value_177)), come_pop_stackframe(), __exception_result_var_b266);
    __result166__ = (_Bool)1;
    come_call_finalizer3(come_value_177,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result166__;
    come_call_finalizer3(come_value_177,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value286;
struct sNodeBase* __exception_result_var_b267;
struct sNode* __exception_result_var_b268;
void* right_value287;
struct sNode* __dec_obj91;
struct sBorrowNode* __result167__;
struct sBorrowNode* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
right_value286 = (void*)0;
right_value287 = (void*)0;
    (come_push_stackframe("21obj.c", 848, 2299),__exception_result_var_b267=((struct sNodeBase*)(right_value286=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sBorrowNode*)come_null_check(((struct sBorrowNode*)come_null_check(self, "21obj.c", 848, 2297)), "21obj.c", 848, 2298))),info))), come_pop_stackframe(), __exception_result_var_b267);
    come_call_finalizer3(right_value286,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj91=((struct sBorrowNode*)come_null_check(self, "21obj.c", 850, 2300))->node;
    ((struct sBorrowNode*)come_null_check(self, "21obj.c", 850, 2300))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value287=(come_push_stackframe("21obj.c", 850, 2301),__exception_result_var_b268=sNode_clone(node), come_pop_stackframe(), __exception_result_var_b268))));
    if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count2(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value287) { right_value287 = come_decrement_ref_count2(right_value287, ((struct sNode*)right_value287)->finalize, ((struct sNode*)right_value287)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result167__ = __result_obj__ = self;
    come_call_finalizer3(self,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result167__;
    __result168__ = __result_obj__ = self;
    come_call_finalizer3(self,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result168__;
    come_call_finalizer3(self,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sBorrowNode_kind(struct sBorrowNode* self){
void* __result_obj__;
void* right_value288;
char* __exception_result_var_b269;
char* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
right_value288 = (void*)0;
    __result169__ = __result_obj__ = (come_push_stackframe("21obj.c", 857, 2310),__exception_result_var_b269=((char*)(right_value288=__builtin_string("sBorrowNode"))), come_pop_stackframe(), __exception_result_var_b269);
    right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result169__;
}

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_178;
_Bool __exception_result_var_b270;
_Bool _if_conditional216;
_Bool __result170__;
void* right_value289;
struct CVALUE* __exception_result_var_b271;
struct CVALUE* come_value_179;
int __exception_result_var_b272;
int right_value_id_180;
_Bool _if_conditional217;
struct list$1CVALUEph* __exception_result_var_b273;
_Bool __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_178, 0, sizeof(struct sNode*));
right_value289 = (void*)0;
memset(&come_value_179, 0, sizeof(struct CVALUE*));
memset(&right_value_id_180, 0, sizeof(int));
    node_178=((struct sBorrowNode*)come_null_check(((struct sBorrowNode*)come_null_check(self, "21obj.c", 862, 2311)), "21obj.c", 862, 2312))->node;
    if(_if_conditional216=!(come_push_stackframe("21obj.c", 864, 2313),__exception_result_var_b270=node_compile(node_178,info), come_pop_stackframe(), __exception_result_var_b270),    _if_conditional216) {
        __result170__ = (_Bool)0;
        return __result170__;
    }
    come_value_179=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("21obj.c", 868, 2314),__exception_result_var_b271=((struct CVALUE*)(right_value289=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b271));
    come_call_finalizer3(right_value289,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("21obj.c", 869,2315),dec_stack_ptr(1,info),come_pop_stackframe());
    ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_179, "21obj.c", 871, 2316)), "21obj.c", 871, 2317))->type, "21obj.c", 871, 2318)), "21obj.c", 871, 2319))->mHeap=(_Bool)0;
    right_value_id_180=(come_push_stackframe("21obj.c", 873, 2322),__exception_result_var_b272=get_right_value_id_from_obj((char*)come_increment_ref_count(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_179, "21obj.c", 873, 2320)), "21obj.c", 873, 2321))->c_value)), come_pop_stackframe(), __exception_result_var_b272);
    if(_if_conditional217=right_value_id_180!=-1,    _if_conditional217) {
        (come_push_stackframe("21obj.c", 876,2323),remove_object_from_right_values(right_value_id_180,info),come_pop_stackframe());
    }
    (come_push_stackframe("21obj.c", 879, 2328),__exception_result_var_b273=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 879, 2324)), "21obj.c", 879, 2325))->stack, "21obj.c", 879, 2326)), "21obj.c", 879, 2327)),(struct CVALUE*)come_increment_ref_count(come_value_179)), come_pop_stackframe(), __exception_result_var_b273);
    __result171__ = (_Bool)1;
    come_call_finalizer3(come_value_179,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result171__;
    come_call_finalizer3(come_value_179,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value290;
struct sNodeBase* __exception_result_var_b274;
struct sNode* __exception_result_var_b275;
void* right_value291;
struct sNode* __dec_obj92;
struct sCloneNode* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
right_value290 = (void*)0;
right_value291 = (void*)0;
    (come_push_stackframe("21obj.c", 889, 2331),__exception_result_var_b274=((struct sNodeBase*)(right_value290=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sCloneNode*)come_null_check(((struct sCloneNode*)come_null_check(self, "21obj.c", 889, 2329)), "21obj.c", 889, 2330))),info))), come_pop_stackframe(), __exception_result_var_b274);
    come_call_finalizer3(right_value290,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj92=((struct sCloneNode*)come_null_check(self, "21obj.c", 891, 2332))->node;
    ((struct sCloneNode*)come_null_check(self, "21obj.c", 891, 2332))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value291=(come_push_stackframe("21obj.c", 891, 2333),__exception_result_var_b275=sNode_clone(node), come_pop_stackframe(), __exception_result_var_b275))));
    if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count2(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value291) { right_value291 = come_decrement_ref_count2(right_value291, ((struct sNode*)right_value291)->finalize, ((struct sNode*)right_value291)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result172__ = __result_obj__ = self;
    come_call_finalizer3(self,sCloneNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result172__;
    come_call_finalizer3(self,sCloneNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sCloneNode_kind(struct sCloneNode* self){
void* __result_obj__;
void* right_value292;
char* __exception_result_var_b276;
char* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
right_value292 = (void*)0;
    __result173__ = __result_obj__ = (come_push_stackframe("21obj.c", 896, 2342),__exception_result_var_b276=((char*)(right_value292=__builtin_string("sCloneNode"))), come_pop_stackframe(), __exception_result_var_b276);
    right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result173__;
}

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_181;
_Bool __exception_result_var_b277;
_Bool _if_conditional220;
_Bool __result174__;
void* right_value293;
struct CVALUE* __exception_result_var_b278;
struct CVALUE* left_value_182;
struct sType* __exception_result_var_b279;
void* right_value294;
struct sType* left_type_183;
_Bool __exception_result_var_b280;
_Bool _if_conditional221;
struct list$1CVALUEph* __exception_result_var_b281;
_Bool _if_conditional222;
struct list$1CVALUEph* __exception_result_var_b282;
_Bool _if_conditional223;
void* right_value295;
struct CVALUE* come_value_184;
void* right_value296;
struct tuple2$2sTypephcharph* __exception_result_var_b283;
struct tuple2$2sTypephcharph* multiple_assign_var2;
struct sType* result_type_185;
char* c_value_186;
char* __dec_obj93;
struct sType* __exception_result_var_b284;
void* right_value297;
struct sType* __dec_obj94;
void* right_value298;
char* __exception_result_var_b285;
char* __dec_obj95;
struct list$1CVALUEph* __exception_result_var_b286;
_Bool __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_181, 0, sizeof(struct sNode*));
right_value293 = (void*)0;
memset(&left_value_182, 0, sizeof(struct CVALUE*));
right_value294 = (void*)0;
memset(&left_type_183, 0, sizeof(struct sType*));
right_value295 = (void*)0;
memset(&come_value_184, 0, sizeof(struct CVALUE*));
right_value296 = (void*)0;
right_value297 = (void*)0;
right_value298 = (void*)0;
    node_181=((struct sCloneNode*)come_null_check(((struct sCloneNode*)come_null_check(self, "21obj.c", 901, 2343)), "21obj.c", 901, 2344))->node;
    if(_if_conditional220=!(come_push_stackframe("21obj.c", 903, 2345),__exception_result_var_b277=node_compile(node_181,info), come_pop_stackframe(), __exception_result_var_b277),    _if_conditional220) {
        __result174__ = (_Bool)0;
        return __result174__;
    }
    left_value_182=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("21obj.c", 907, 2346),__exception_result_var_b278=((struct CVALUE*)(right_value293=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b278));
    come_call_finalizer3(right_value293,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("21obj.c", 908,2347),dec_stack_ptr(1,info),come_pop_stackframe());
    ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_182, "21obj.c", 910, 2348)), "21obj.c", 910, 2349))->type, "21obj.c", 910, 2350)), "21obj.c", 910, 2351))->mClone=(_Bool)1;
    left_type_183=(struct sType*)come_increment_ref_count(((struct sType*)(right_value294=(come_push_stackframe("21obj.c", 912, 2354),__exception_result_var_b279=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_182, "21obj.c", 912, 2352)), "21obj.c", 912, 2353))->type), come_pop_stackframe(), __exception_result_var_b279))));
    come_call_finalizer3(right_value294,sType_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional221=((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_183, "21obj.c", 914, 2355)), "21obj.c", 914, 2356))->mPointerNum==1&&(come_push_stackframe("21obj.c", 914, 2361),__exception_result_var_b280=string_operator_equals(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_183, "21obj.c", 914, 2357)), "21obj.c", 914, 2358))->mClass, "21obj.c", 914, 2359)), "21obj.c", 914, 2360))->mName,"void"), come_pop_stackframe(), __exception_result_var_b280)&&((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_183, "21obj.c", 914, 2362)), "21obj.c", 914, 2363))->mHeap==(_Bool)0,    _if_conditional221) {
        (come_push_stackframe("21obj.c", 915, 2368),__exception_result_var_b281=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 915, 2364)), "21obj.c", 915, 2365))->stack, "21obj.c", 915, 2366)), "21obj.c", 915, 2367)),(struct CVALUE*)come_increment_ref_count(left_value_182)), come_pop_stackframe(), __exception_result_var_b281);
    }
    else {
        if(_if_conditional222=((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_183, "21obj.c", 917, 2369)), "21obj.c", 917, 2370))->mPointerNum==0,        _if_conditional222) {
            (come_push_stackframe("21obj.c", 918, 2375),__exception_result_var_b282=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 918, 2371)), "21obj.c", 918, 2372))->stack, "21obj.c", 918, 2373)), "21obj.c", 918, 2374)),(struct CVALUE*)come_increment_ref_count(left_value_182)), come_pop_stackframe(), __exception_result_var_b282);
        }
        else {
            if(_if_conditional223=((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_183, "21obj.c", 920, 2376)), "21obj.c", 920, 2377))->mPointerNum>0,            _if_conditional223) {
                come_value_184=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value295=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 921, "CVALUE"))));
                come_call_finalizer3(right_value295,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                multiple_assign_var2=(come_push_stackframe("21obj.c", 923, 2380),__exception_result_var_b283=((struct tuple2$2sTypephcharph*)(right_value296=clone_object(left_type_183,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_182, "21obj.c", 923, 2378)), "21obj.c", 923, 2379))->c_value,info))), come_pop_stackframe(), __exception_result_var_b283);
                result_type_185=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
                c_value_186=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer3(right_value296,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                __dec_obj93=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_184, "21obj.c", 924, 2389)), "21obj.c", 924, 2390))->c_value;
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_184, "21obj.c", 924, 2389)), "21obj.c", 924, 2390))->c_value=(char*)come_increment_ref_count(c_value_186);
                __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj94=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_184, "21obj.c", 925, 2391)), "21obj.c", 925, 2392))->type;
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_184, "21obj.c", 925, 2391)), "21obj.c", 925, 2392))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value297=(come_push_stackframe("21obj.c", 925, 2393),__exception_result_var_b284=sType_clone(left_type_183), come_pop_stackframe(), __exception_result_var_b284))));
                come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value297,sType_finalize, 0, 1, 0, 0, __result_obj__);
                ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_184, "21obj.c", 926, 2394)), "21obj.c", 926, 2395))->type, "21obj.c", 926, 2396)), "21obj.c", 926, 2397))->mHeap=(_Bool)1;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_184, "21obj.c", 927, 2398)), "21obj.c", 927, 2399))->type, "21obj.c", 927, 2400)), "21obj.c", 927, 2401))->mClone=(_Bool)1;
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_184, "21obj.c", 928, 2402)), "21obj.c", 928, 2403))->var=((void*)0);
                __dec_obj95=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_184, "21obj.c", 930, 2404)), "21obj.c", 930, 2405))->c_value;
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_184, "21obj.c", 930, 2404)), "21obj.c", 930, 2405))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 930, 2408),__exception_result_var_b285=((char*)(right_value298=append_object_to_right_values(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_184, "21obj.c", 930, 2406)), "21obj.c", 930, 2407))->c_value,(struct sType*)come_increment_ref_count(left_type_183),info))), come_pop_stackframe(), __exception_result_var_b285));
                __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("21obj.c", 932, 2413),__exception_result_var_b286=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 932, 2409)), "21obj.c", 932, 2410))->stack, "21obj.c", 932, 2411)), "21obj.c", 932, 2412)),(struct CVALUE*)come_increment_ref_count(come_value_184)), come_pop_stackframe(), __exception_result_var_b286);
                come_call_finalizer3(come_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                c_value_186 = come_decrement_ref_count2(c_value_186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    __result175__ = (_Bool)1;
    come_call_finalizer3(left_value_182,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_183,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result175__;
    come_call_finalizer3(left_value_182,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_183,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional224;
_Bool _if_conditional225;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional224=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0, 2381)), "tuple2$2sTypephcharphp_finalize", 0, 2382))->v1!=((void*)0),                    _if_conditional224) {
                        come_call_finalizer3(((struct tuple2$2sTypephcharph*)come_null_check(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0, 2383)), "tuple2$2sTypephcharphp_finalize", 0, 2384))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional225=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1, 2385)), "tuple2$2sTypephcharphp_finalize", 1, 2386))->v2!=((void*)0),                    _if_conditional225) {
                        ((struct tuple2$2sTypephcharph*)come_null_check(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1, 2387)), "tuple2$2sTypephcharphp_finalize", 1, 2388))->v2 = come_decrement_ref_count2(((struct tuple2$2sTypephcharph*)come_null_check(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1, 2387)), "tuple2$2sTypephcharphp_finalize", 1, 2388))->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value299;
struct sNodeBase* __exception_result_var_b287;
struct sNode* __exception_result_var_b288;
void* right_value300;
struct sNode* __dec_obj96;
struct sDupeNode* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
right_value299 = (void*)0;
right_value300 = (void*)0;
    (come_push_stackframe("21obj.c", 943, 2416),__exception_result_var_b287=((struct sNodeBase*)(right_value299=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sDupeNode*)come_null_check(((struct sDupeNode*)come_null_check(self, "21obj.c", 943, 2414)), "21obj.c", 943, 2415))),info))), come_pop_stackframe(), __exception_result_var_b287);
    come_call_finalizer3(right_value299,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj96=((struct sDupeNode*)come_null_check(self, "21obj.c", 945, 2417))->node;
    ((struct sDupeNode*)come_null_check(self, "21obj.c", 945, 2417))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value300=(come_push_stackframe("21obj.c", 945, 2418),__exception_result_var_b288=sNode_clone(node), come_pop_stackframe(), __exception_result_var_b288))));
    if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count2(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value300) { right_value300 = come_decrement_ref_count2(right_value300, ((struct sNode*)right_value300)->finalize, ((struct sNode*)right_value300)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result176__ = __result_obj__ = self;
    come_call_finalizer3(self,sDupeNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result176__;
    come_call_finalizer3(self,sDupeNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sDupeNode_kind(struct sDupeNode* self){
void* __result_obj__;
void* right_value301;
char* __exception_result_var_b289;
char* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
right_value301 = (void*)0;
    __result177__ = __result_obj__ = (come_push_stackframe("21obj.c", 950, 2427),__exception_result_var_b289=((char*)(right_value301=__builtin_string("sDupeNode"))), come_pop_stackframe(), __exception_result_var_b289);
    right_value301 = come_decrement_ref_count2(right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result177__;
}

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_187;
_Bool __exception_result_var_b290;
_Bool _if_conditional228;
_Bool __result178__;
void* right_value302;
struct CVALUE* __exception_result_var_b291;
struct CVALUE* left_value_188;
struct sType* __exception_result_var_b292;
void* right_value303;
struct sType* left_type_189;
_Bool _if_conditional229;
struct list$1CVALUEph* __exception_result_var_b293;
_Bool _if_conditional230;
struct list$1CVALUEph* __exception_result_var_b294;
_Bool _if_conditional231;
void* right_value304;
struct CVALUE* come_value_190;
void* right_value305;
struct tuple2$2sTypephcharph* __exception_result_var_b295;
struct tuple2$2sTypephcharph* multiple_assign_var3;
struct sType* result_type_191;
char* c_value_192;
char* __dec_obj97;
struct sType* __exception_result_var_b296;
void* right_value306;
struct sType* __dec_obj98;
void* right_value307;
char* __exception_result_var_b297;
char* __dec_obj99;
struct list$1CVALUEph* __exception_result_var_b298;
_Bool __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_187, 0, sizeof(struct sNode*));
right_value302 = (void*)0;
memset(&left_value_188, 0, sizeof(struct CVALUE*));
right_value303 = (void*)0;
memset(&left_type_189, 0, sizeof(struct sType*));
right_value304 = (void*)0;
memset(&come_value_190, 0, sizeof(struct CVALUE*));
right_value305 = (void*)0;
right_value306 = (void*)0;
right_value307 = (void*)0;
    node_187=((struct sDupeNode*)come_null_check(((struct sDupeNode*)come_null_check(self, "21obj.c", 955, 2428)), "21obj.c", 955, 2429))->node;
    if(_if_conditional228=!(come_push_stackframe("21obj.c", 957, 2430),__exception_result_var_b290=node_compile(node_187,info), come_pop_stackframe(), __exception_result_var_b290),    _if_conditional228) {
        __result178__ = (_Bool)0;
        return __result178__;
    }
    left_value_188=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("21obj.c", 961, 2431),__exception_result_var_b291=((struct CVALUE*)(right_value302=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b291));
    come_call_finalizer3(right_value302,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("21obj.c", 962,2432),dec_stack_ptr(1,info),come_pop_stackframe());
    left_type_189=(struct sType*)come_increment_ref_count(((struct sType*)(right_value303=(come_push_stackframe("21obj.c", 964, 2435),__exception_result_var_b292=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_188, "21obj.c", 964, 2433)), "21obj.c", 964, 2434))->type), come_pop_stackframe(), __exception_result_var_b292))));
    come_call_finalizer3(right_value303,sType_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional229=((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_189, "21obj.c", 966, 2436)), "21obj.c", 966, 2437))->mPointerNum==0,    _if_conditional229) {
        (come_push_stackframe("21obj.c", 967, 2442),__exception_result_var_b293=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 967, 2438)), "21obj.c", 967, 2439))->stack, "21obj.c", 967, 2440)), "21obj.c", 967, 2441)),(struct CVALUE*)come_increment_ref_count(left_value_188)), come_pop_stackframe(), __exception_result_var_b293);
    }
    else {
        if(_if_conditional230=((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_189, "21obj.c", 969, 2443)), "21obj.c", 969, 2444))->mPointerNum>0&&((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_189, "21obj.c", 969, 2445)), "21obj.c", 969, 2446))->mHeap==(_Bool)0,        _if_conditional230) {
            (come_push_stackframe("21obj.c", 970, 2451),__exception_result_var_b294=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 970, 2447)), "21obj.c", 970, 2448))->stack, "21obj.c", 970, 2449)), "21obj.c", 970, 2450)),(struct CVALUE*)come_increment_ref_count(left_value_188)), come_pop_stackframe(), __exception_result_var_b294);
        }
        else {
            if(_if_conditional231=((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_189, "21obj.c", 972, 2452)), "21obj.c", 972, 2453))->mPointerNum>0,            _if_conditional231) {
                come_value_190=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value304=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 973, "CVALUE"))));
                come_call_finalizer3(right_value304,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                multiple_assign_var3=(come_push_stackframe("21obj.c", 975, 2456),__exception_result_var_b295=((struct tuple2$2sTypephcharph*)(right_value305=clone_object(left_type_189,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_188, "21obj.c", 975, 2454)), "21obj.c", 975, 2455))->c_value,info))), come_pop_stackframe(), __exception_result_var_b295);
                result_type_191=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
                c_value_192=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                come_call_finalizer3(right_value305,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                __dec_obj97=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_190, "21obj.c", 976, 2457)), "21obj.c", 976, 2458))->c_value;
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_190, "21obj.c", 976, 2457)), "21obj.c", 976, 2458))->c_value=(char*)come_increment_ref_count(c_value_192);
                __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj98=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_190, "21obj.c", 977, 2459)), "21obj.c", 977, 2460))->type;
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_190, "21obj.c", 977, 2459)), "21obj.c", 977, 2460))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value306=(come_push_stackframe("21obj.c", 977, 2461),__exception_result_var_b296=sType_clone(left_type_189), come_pop_stackframe(), __exception_result_var_b296))));
                come_call_finalizer3(__dec_obj98,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value306,sType_finalize, 0, 1, 0, 0, __result_obj__);
                ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_190, "21obj.c", 978, 2462)), "21obj.c", 978, 2463))->type, "21obj.c", 978, 2464)), "21obj.c", 978, 2465))->mHeap=(_Bool)1;
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_190, "21obj.c", 979, 2466)), "21obj.c", 979, 2467))->var=((void*)0);
                __dec_obj99=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_190, "21obj.c", 981, 2468)), "21obj.c", 981, 2469))->c_value;
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_190, "21obj.c", 981, 2468)), "21obj.c", 981, 2469))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 981, 2472),__exception_result_var_b297=((char*)(right_value307=append_object_to_right_values(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_190, "21obj.c", 981, 2470)), "21obj.c", 981, 2471))->c_value,(struct sType*)come_increment_ref_count(left_type_189),info))), come_pop_stackframe(), __exception_result_var_b297));
                __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value307 = come_decrement_ref_count2(right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("21obj.c", 983, 2477),__exception_result_var_b298=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 983, 2473)), "21obj.c", 983, 2474))->stack, "21obj.c", 983, 2475)), "21obj.c", 983, 2476)),(struct CVALUE*)come_increment_ref_count(come_value_190)), come_pop_stackframe(), __exception_result_var_b298);
                come_call_finalizer3(come_value_190,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_191,sType_finalize, 0, 0, 0, 0, (void*)0);
                c_value_192 = come_decrement_ref_count2(c_value_192, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    __result179__ = (_Bool)1;
    come_call_finalizer3(left_value_188,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_189,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result179__;
    come_call_finalizer3(left_value_188,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_189,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value308;
struct sNodeBase* __exception_result_var_b299;
struct sNode* __exception_result_var_b300;
void* right_value309;
struct sNode* __dec_obj100;
struct sDummyHeapNode* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
right_value308 = (void*)0;
right_value309 = (void*)0;
    (come_push_stackframe("21obj.c", 994, 2480),__exception_result_var_b299=((struct sNodeBase*)(right_value308=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sDummyHeapNode*)come_null_check(((struct sDummyHeapNode*)come_null_check(self, "21obj.c", 994, 2478)), "21obj.c", 994, 2479))),info))), come_pop_stackframe(), __exception_result_var_b299);
    come_call_finalizer3(right_value308,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj100=((struct sDummyHeapNode*)come_null_check(self, "21obj.c", 996, 2481))->node;
    ((struct sDummyHeapNode*)come_null_check(self, "21obj.c", 996, 2481))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value309=(come_push_stackframe("21obj.c", 996, 2482),__exception_result_var_b300=sNode_clone(node), come_pop_stackframe(), __exception_result_var_b300))));
    if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count2(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value309) { right_value309 = come_decrement_ref_count2(right_value309, ((struct sNode*)right_value309)->finalize, ((struct sNode*)right_value309)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result180__ = __result_obj__ = self;
    come_call_finalizer3(self,sDummyHeapNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result180__;
    come_call_finalizer3(self,sDummyHeapNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sDummyHeapNode_kind(struct sDummyHeapNode* self){
void* __result_obj__;
void* right_value310;
char* __exception_result_var_b301;
char* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
right_value310 = (void*)0;
    __result181__ = __result_obj__ = (come_push_stackframe("21obj.c", 1001, 2491),__exception_result_var_b301=((char*)(right_value310=__builtin_string("sDummyHeapNode"))), come_pop_stackframe(), __exception_result_var_b301);
    right_value310 = come_decrement_ref_count2(right_value310, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result181__;
}

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_193;
_Bool __exception_result_var_b302;
_Bool _if_conditional234;
_Bool __result182__;
void* right_value311;
struct CVALUE* __exception_result_var_b303;
struct CVALUE* come_value_194;
struct list$1CVALUEph* __exception_result_var_b304;
_Bool __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_193, 0, sizeof(struct sNode*));
right_value311 = (void*)0;
memset(&come_value_194, 0, sizeof(struct CVALUE*));
    node_193=((struct sDummyHeapNode*)come_null_check(((struct sDummyHeapNode*)come_null_check(self, "21obj.c", 1006, 2492)), "21obj.c", 1006, 2493))->node;
    if(_if_conditional234=!(come_push_stackframe("21obj.c", 1008, 2494),__exception_result_var_b302=node_compile(node_193,info), come_pop_stackframe(), __exception_result_var_b302),    _if_conditional234) {
        __result182__ = (_Bool)0;
        return __result182__;
    }
    come_value_194=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("21obj.c", 1012, 2495),__exception_result_var_b303=((struct CVALUE*)(right_value311=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b303));
    come_call_finalizer3(right_value311,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("21obj.c", 1013,2496),dec_stack_ptr(1,info),come_pop_stackframe());
    ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_194, "21obj.c", 1015, 2497)), "21obj.c", 1015, 2498))->type, "21obj.c", 1015, 2499)), "21obj.c", 1015, 2500))->mHeap=(_Bool)1;
    (come_push_stackframe("21obj.c", 1017, 2505),__exception_result_var_b304=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1017, 2501)), "21obj.c", 1017, 2502))->stack, "21obj.c", 1017, 2503)), "21obj.c", 1017, 2504)),(struct CVALUE*)come_increment_ref_count(come_value_194)), come_pop_stackframe(), __exception_result_var_b304);
    __result183__ = (_Bool)1;
    come_call_finalizer3(come_value_194,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result183__;
    come_call_finalizer3(come_value_194,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value312;
struct sNodeBase* __exception_result_var_b305;
struct sNode* __exception_result_var_b306;
void* right_value313;
struct sNode* __dec_obj101;
struct sGCIncNode* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
right_value312 = (void*)0;
right_value313 = (void*)0;
    (come_push_stackframe("21obj.c", 1027, 2508),__exception_result_var_b305=((struct sNodeBase*)(right_value312=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sGCIncNode*)come_null_check(((struct sGCIncNode*)come_null_check(self, "21obj.c", 1027, 2506)), "21obj.c", 1027, 2507))),info))), come_pop_stackframe(), __exception_result_var_b305);
    come_call_finalizer3(right_value312,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj101=((struct sGCIncNode*)come_null_check(self, "21obj.c", 1029, 2509))->node;
    ((struct sGCIncNode*)come_null_check(self, "21obj.c", 1029, 2509))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value313=(come_push_stackframe("21obj.c", 1029, 2510),__exception_result_var_b306=sNode_clone(node), come_pop_stackframe(), __exception_result_var_b306))));
    if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count2(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value313) { right_value313 = come_decrement_ref_count2(right_value313, ((struct sNode*)right_value313)->finalize, ((struct sNode*)right_value313)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result184__ = __result_obj__ = self;
    come_call_finalizer3(self,sGCIncNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result184__;
    come_call_finalizer3(self,sGCIncNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sGCIncNode_kind(struct sGCIncNode* self){
void* __result_obj__;
void* right_value314;
char* __exception_result_var_b307;
char* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
right_value314 = (void*)0;
    __result185__ = __result_obj__ = (come_push_stackframe("21obj.c", 1034, 2519),__exception_result_var_b307=((char*)(right_value314=__builtin_string("sGCIncNode"))), come_pop_stackframe(), __exception_result_var_b307);
    right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result185__;
}

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_195;
_Bool __exception_result_var_b308;
_Bool _if_conditional237;
_Bool __result186__;
void* right_value315;
struct CVALUE* __exception_result_var_b309;
struct CVALUE* come_value_196;
struct sType* type_197;
_Bool _if_conditional238;
void* right_value316;
char* __exception_result_var_b310;
char* type_name_198;
void* right_value317;
char* __exception_result_var_b311;
char* __dec_obj102;
struct list$1CVALUEph* __exception_result_var_b312;
_Bool __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_195, 0, sizeof(struct sNode*));
right_value315 = (void*)0;
memset(&come_value_196, 0, sizeof(struct CVALUE*));
memset(&type_197, 0, sizeof(struct sType*));
right_value316 = (void*)0;
memset(&type_name_198, 0, sizeof(char*));
right_value317 = (void*)0;
    node_195=((struct sGCIncNode*)come_null_check(((struct sGCIncNode*)come_null_check(self, "21obj.c", 1039, 2520)), "21obj.c", 1039, 2521))->node;
    if(_if_conditional237=!(come_push_stackframe("21obj.c", 1041, 2522),__exception_result_var_b308=node_compile(node_195,info), come_pop_stackframe(), __exception_result_var_b308),    _if_conditional237) {
        __result186__ = (_Bool)0;
        return __result186__;
    }
    come_value_196=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("21obj.c", 1045, 2523),__exception_result_var_b309=((struct CVALUE*)(right_value315=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b309));
    come_call_finalizer3(right_value315,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("21obj.c", 1046,2524),dec_stack_ptr(1,info),come_pop_stackframe());
    type_197=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_196, "21obj.c", 1048, 2525)), "21obj.c", 1048, 2526))->type;
    if(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_196, "21obj.c", 1050, 2527)), "21obj.c", 1050, 2528))->type, "21obj.c", 1050, 2529)), "21obj.c", 1050, 2530))->mHeap) {
        type_name_198=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 1051, 2531),__exception_result_var_b310=((char*)(right_value316=make_type_name_string(type_197,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b310));
        right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj102=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_196, "21obj.c", 1052, 2532)), "21obj.c", 1052, 2533))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_196, "21obj.c", 1052, 2532)), "21obj.c", 1052, 2533))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 1052, 2538),__exception_result_var_b311=((char*)(right_value317=increment_ref_count_object(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_196, "21obj.c", 1052, 2534)), "21obj.c", 1052, 2535))->type,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_196, "21obj.c", 1052, 2536)), "21obj.c", 1052, 2537))->c_value,info))), come_pop_stackframe(), __exception_result_var_b311));
        __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value317 = come_decrement_ref_count2(right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        type_name_198 = come_decrement_ref_count2(type_name_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    (come_push_stackframe("21obj.c", 1055, 2543),__exception_result_var_b312=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1055, 2539)), "21obj.c", 1055, 2540))->stack, "21obj.c", 1055, 2541)), "21obj.c", 1055, 2542)),(struct CVALUE*)come_increment_ref_count(come_value_196)), come_pop_stackframe(), __exception_result_var_b312);
    __result187__ = (_Bool)1;
    come_call_finalizer3(come_value_196,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result187__;
    come_call_finalizer3(come_value_196,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value318;
struct sNodeBase* __exception_result_var_b313;
struct sNode* __exception_result_var_b314;
void* right_value319;
struct sNode* __dec_obj103;
struct sGCDecNode* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
right_value318 = (void*)0;
right_value319 = (void*)0;
    (come_push_stackframe("21obj.c", 1065, 2546),__exception_result_var_b313=((struct sNodeBase*)(right_value318=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sGCDecNode*)come_null_check(((struct sGCDecNode*)come_null_check(self, "21obj.c", 1065, 2544)), "21obj.c", 1065, 2545))),info))), come_pop_stackframe(), __exception_result_var_b313);
    come_call_finalizer3(right_value318,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj103=((struct sGCDecNode*)come_null_check(self, "21obj.c", 1067, 2547))->node;
    ((struct sGCDecNode*)come_null_check(self, "21obj.c", 1067, 2547))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value319=(come_push_stackframe("21obj.c", 1067, 2548),__exception_result_var_b314=sNode_clone(node), come_pop_stackframe(), __exception_result_var_b314))));
    if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count2(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value319) { right_value319 = come_decrement_ref_count2(right_value319, ((struct sNode*)right_value319)->finalize, ((struct sNode*)right_value319)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result188__ = __result_obj__ = self;
    come_call_finalizer3(self,sGCDecNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result188__;
    come_call_finalizer3(self,sGCDecNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sGCDecNode_kind(struct sGCDecNode* self){
void* __result_obj__;
void* right_value320;
char* __exception_result_var_b315;
char* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
right_value320 = (void*)0;
    __result189__ = __result_obj__ = (come_push_stackframe("21obj.c", 1072, 2557),__exception_result_var_b315=((char*)(right_value320=__builtin_string("sGCDecNode"))), come_pop_stackframe(), __exception_result_var_b315);
    right_value320 = come_decrement_ref_count2(right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result189__;
}

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_199;
_Bool __exception_result_var_b316;
_Bool _if_conditional241;
_Bool __result190__;
void* right_value321;
struct CVALUE* __exception_result_var_b317;
struct CVALUE* come_value_200;
struct sType* type_201;
struct list$1CVALUEph* __exception_result_var_b318;
_Bool __result191__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_199, 0, sizeof(struct sNode*));
right_value321 = (void*)0;
memset(&come_value_200, 0, sizeof(struct CVALUE*));
memset(&type_201, 0, sizeof(struct sType*));
    node_199=((struct sGCDecNode*)come_null_check(((struct sGCDecNode*)come_null_check(self, "21obj.c", 1077, 2558)), "21obj.c", 1077, 2559))->node;
    if(_if_conditional241=!(come_push_stackframe("21obj.c", 1079, 2560),__exception_result_var_b316=node_compile(node_199,info), come_pop_stackframe(), __exception_result_var_b316),    _if_conditional241) {
        __result190__ = (_Bool)0;
        return __result190__;
    }
    come_value_200=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("21obj.c", 1083, 2561),__exception_result_var_b317=((struct CVALUE*)(right_value321=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b317));
    come_call_finalizer3(right_value321,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("21obj.c", 1084,2562),dec_stack_ptr(1,info),come_pop_stackframe());
    type_201=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_200, "21obj.c", 1086, 2563)), "21obj.c", 1086, 2564))->type;
    (come_push_stackframe("21obj.c", 1088,2567),decrement_ref_count_object(type_201,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_200, "21obj.c", 1088, 2565)), "21obj.c", 1088, 2566))->c_value,info,(_Bool)0),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 1090, 2572),__exception_result_var_b318=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1090, 2568)), "21obj.c", 1090, 2569))->stack, "21obj.c", 1090, 2570)), "21obj.c", 1090, 2571)),(struct CVALUE*)come_increment_ref_count(come_value_200)), come_pop_stackframe(), __exception_result_var_b318);
    __result191__ = (_Bool)1;
    come_call_finalizer3(come_value_200,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result191__;
    come_call_finalizer3(come_value_200,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value322;
struct sNodeBase* __exception_result_var_b319;
struct sType* __exception_result_var_b320;
void* right_value323;
struct sType* __dec_obj104;
struct sIsHeap* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
right_value322 = (void*)0;
right_value323 = (void*)0;
    (come_push_stackframe("21obj.c", 1100, 2575),__exception_result_var_b319=((struct sNodeBase*)(right_value322=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sIsHeap*)come_null_check(((struct sIsHeap*)come_null_check(self, "21obj.c", 1100, 2573)), "21obj.c", 1100, 2574))),info))), come_pop_stackframe(), __exception_result_var_b319);
    come_call_finalizer3(right_value322,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj104=((struct sIsHeap*)come_null_check(self, "21obj.c", 1102, 2576))->type;
    ((struct sIsHeap*)come_null_check(self, "21obj.c", 1102, 2576))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value323=(come_push_stackframe("21obj.c", 1102, 2577),__exception_result_var_b320=sType_clone(type), come_pop_stackframe(), __exception_result_var_b320))));
    come_call_finalizer3(__dec_obj104,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value323,sType_finalize, 0, 1, 0, 0, __result_obj__);
    __result192__ = __result_obj__ = self;
    come_call_finalizer3(self,sIsHeap_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result192__;
    come_call_finalizer3(self,sIsHeap_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
}

char* sIsHeap_kind(struct sIsHeap* self){
void* __result_obj__;
void* right_value324;
char* __exception_result_var_b321;
char* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
right_value324 = (void*)0;
    __result193__ = __result_obj__ = (come_push_stackframe("21obj.c", 1107, 2586),__exception_result_var_b321=((char*)(right_value324=__builtin_string("sIsHeap"))), come_pop_stackframe(), __exception_result_var_b321);
    right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result193__;
}

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info){
void* __result_obj__;
struct sType* node_202;
_Bool _if_conditional244;
void* right_value325;
struct CVALUE* come_value_203;
void* right_value326;
char* __exception_result_var_b322;
char* __dec_obj105;
void* right_value327;
void* right_value328;
struct sType* __exception_result_var_b323;
struct sType* __dec_obj106;
struct list$1CVALUEph* __exception_result_var_b324;
void* right_value329;
struct CVALUE* come_value_204;
void* right_value330;
char* __exception_result_var_b325;
char* __dec_obj107;
void* right_value331;
void* right_value332;
struct sType* __exception_result_var_b326;
struct sType* __dec_obj108;
struct list$1CVALUEph* __exception_result_var_b327;
_Bool __result194__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_202, 0, sizeof(struct sType*));
right_value325 = (void*)0;
memset(&come_value_203, 0, sizeof(struct CVALUE*));
right_value326 = (void*)0;
right_value327 = (void*)0;
right_value328 = (void*)0;
right_value329 = (void*)0;
memset(&come_value_204, 0, sizeof(struct CVALUE*));
right_value330 = (void*)0;
right_value331 = (void*)0;
right_value332 = (void*)0;
    node_202=((struct sIsHeap*)come_null_check(((struct sIsHeap*)come_null_check(self, "21obj.c", 1112, 2587)), "21obj.c", 1112, 2588))->type;
    if(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sIsHeap*)come_null_check(((struct sIsHeap*)come_null_check(self, "21obj.c", 1114, 2589)), "21obj.c", 1114, 2590))->type, "21obj.c", 1114, 2591)), "21obj.c", 1114, 2592))->mHeap) {
        come_value_203=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value325=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1115, "CVALUE"))));
        come_call_finalizer3(right_value325,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj105=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_203, "21obj.c", 1117, 2593)), "21obj.c", 1117, 2594))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_203, "21obj.c", 1117, 2593)), "21obj.c", 1117, 2594))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 1117, 2595),__exception_result_var_b322=((char*)(right_value326=xsprintf("1"))), come_pop_stackframe(), __exception_result_var_b322));
        __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value326 = come_decrement_ref_count2(right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj106=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_203, "21obj.c", 1118, 2596)), "21obj.c", 1118, 2597))->type;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_203, "21obj.c", 1118, 2596)), "21obj.c", 1118, 2597))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 1118, 2599),__exception_result_var_b323=((struct sType*)(right_value328=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value327=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1118, "sType"))), "21obj.c", 1118, 2598))),"int",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b323));
        come_call_finalizer3(__dec_obj106,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value327,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value328,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_203, "21obj.c", 1119, 2600)), "21obj.c", 1119, 2601))->var=((void*)0);
        (come_push_stackframe("21obj.c", 1121, 2606),__exception_result_var_b324=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1121, 2602)), "21obj.c", 1121, 2603))->stack, "21obj.c", 1121, 2604)), "21obj.c", 1121, 2605)),(struct CVALUE*)come_increment_ref_count(come_value_203)), come_pop_stackframe(), __exception_result_var_b324);
        (come_push_stackframe("21obj.c", 1123,2609),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_203, "21obj.c", 1123, 2607)), "21obj.c", 1123, 2608))->c_value),come_pop_stackframe());
        come_call_finalizer3(come_value_203,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_value_204=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value329=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1126, "CVALUE"))));
        come_call_finalizer3(right_value329,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj107=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_204, "21obj.c", 1128, 2610)), "21obj.c", 1128, 2611))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_204, "21obj.c", 1128, 2610)), "21obj.c", 1128, 2611))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 1128, 2612),__exception_result_var_b325=((char*)(right_value330=xsprintf("0"))), come_pop_stackframe(), __exception_result_var_b325));
        __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value330 = come_decrement_ref_count2(right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj108=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_204, "21obj.c", 1129, 2613)), "21obj.c", 1129, 2614))->type;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_204, "21obj.c", 1129, 2613)), "21obj.c", 1129, 2614))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 1129, 2616),__exception_result_var_b326=((struct sType*)(right_value332=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value331=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1129, "sType"))), "21obj.c", 1129, 2615))),"int",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b326));
        come_call_finalizer3(__dec_obj108,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value331,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value332,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_204, "21obj.c", 1130, 2617)), "21obj.c", 1130, 2618))->var=((void*)0);
        (come_push_stackframe("21obj.c", 1132, 2623),__exception_result_var_b327=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1132, 2619)), "21obj.c", 1132, 2620))->stack, "21obj.c", 1132, 2621)), "21obj.c", 1132, 2622)),(struct CVALUE*)come_increment_ref_count(come_value_204)), come_pop_stackframe(), __exception_result_var_b327);
        (come_push_stackframe("21obj.c", 1134,2626),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_204, "21obj.c", 1134, 2624)), "21obj.c", 1134, 2625))->c_value),come_pop_stackframe());
        come_call_finalizer3(come_value_204,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result194__ = (_Bool)1;
    return __result194__;
}

struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value333;
struct sNodeBase* __exception_result_var_b328;
struct sType* __exception_result_var_b329;
void* right_value334;
struct sType* __dec_obj109;
struct sIsPointer* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
right_value333 = (void*)0;
right_value334 = (void*)0;
    (come_push_stackframe("21obj.c", 1145, 2629),__exception_result_var_b328=((struct sNodeBase*)(right_value333=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sIsPointer*)come_null_check(((struct sIsPointer*)come_null_check(self, "21obj.c", 1145, 2627)), "21obj.c", 1145, 2628))),info))), come_pop_stackframe(), __exception_result_var_b328);
    come_call_finalizer3(right_value333,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj109=((struct sIsPointer*)come_null_check(self, "21obj.c", 1147, 2630))->type;
    ((struct sIsPointer*)come_null_check(self, "21obj.c", 1147, 2630))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value334=(come_push_stackframe("21obj.c", 1147, 2631),__exception_result_var_b329=sType_clone(type), come_pop_stackframe(), __exception_result_var_b329))));
    come_call_finalizer3(__dec_obj109,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value334,sType_finalize, 0, 1, 0, 0, __result_obj__);
    __result195__ = __result_obj__ = self;
    come_call_finalizer3(self,sIsPointer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result195__;
    come_call_finalizer3(self,sIsPointer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
}

char* sIsPointer_kind(struct sIsPointer* self){
void* __result_obj__;
void* right_value335;
char* __exception_result_var_b330;
char* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
right_value335 = (void*)0;
    __result196__ = __result_obj__ = (come_push_stackframe("21obj.c", 1152, 2640),__exception_result_var_b330=((char*)(right_value335=__builtin_string("sIsPointer"))), come_pop_stackframe(), __exception_result_var_b330);
    right_value335 = come_decrement_ref_count2(right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result196__;
}

_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo* info){
void* __result_obj__;
struct sType* node_205;
_Bool _if_conditional247;
void* right_value336;
struct CVALUE* come_value_206;
void* right_value337;
char* __exception_result_var_b331;
char* __dec_obj110;
void* right_value338;
void* right_value339;
struct sType* __exception_result_var_b332;
struct sType* __dec_obj111;
struct list$1CVALUEph* __exception_result_var_b333;
void* right_value340;
struct CVALUE* come_value_207;
void* right_value341;
char* __exception_result_var_b334;
char* __dec_obj112;
void* right_value342;
void* right_value343;
struct sType* __exception_result_var_b335;
struct sType* __dec_obj113;
struct list$1CVALUEph* __exception_result_var_b336;
_Bool __result197__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_205, 0, sizeof(struct sType*));
right_value336 = (void*)0;
memset(&come_value_206, 0, sizeof(struct CVALUE*));
right_value337 = (void*)0;
right_value338 = (void*)0;
right_value339 = (void*)0;
right_value340 = (void*)0;
memset(&come_value_207, 0, sizeof(struct CVALUE*));
right_value341 = (void*)0;
right_value342 = (void*)0;
right_value343 = (void*)0;
    node_205=((struct sIsPointer*)come_null_check(((struct sIsPointer*)come_null_check(self, "21obj.c", 1157, 2641)), "21obj.c", 1157, 2642))->type;
    if(_if_conditional247=((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sIsPointer*)come_null_check(((struct sIsPointer*)come_null_check(self, "21obj.c", 1159, 2643)), "21obj.c", 1159, 2644))->type, "21obj.c", 1159, 2645)), "21obj.c", 1159, 2646))->mPointerNum>0,    _if_conditional247) {
        come_value_206=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value336=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1160, "CVALUE"))));
        come_call_finalizer3(right_value336,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj110=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_206, "21obj.c", 1162, 2647)), "21obj.c", 1162, 2648))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_206, "21obj.c", 1162, 2647)), "21obj.c", 1162, 2648))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 1162, 2649),__exception_result_var_b331=((char*)(right_value337=xsprintf("1"))), come_pop_stackframe(), __exception_result_var_b331));
        __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value337 = come_decrement_ref_count2(right_value337, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj111=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_206, "21obj.c", 1163, 2650)), "21obj.c", 1163, 2651))->type;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_206, "21obj.c", 1163, 2650)), "21obj.c", 1163, 2651))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 1163, 2653),__exception_result_var_b332=((struct sType*)(right_value339=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value338=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1163, "sType"))), "21obj.c", 1163, 2652))),"int",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b332));
        come_call_finalizer3(__dec_obj111,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value338,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value339,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_206, "21obj.c", 1164, 2654)), "21obj.c", 1164, 2655))->var=((void*)0);
        (come_push_stackframe("21obj.c", 1166, 2660),__exception_result_var_b333=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1166, 2656)), "21obj.c", 1166, 2657))->stack, "21obj.c", 1166, 2658)), "21obj.c", 1166, 2659)),(struct CVALUE*)come_increment_ref_count(come_value_206)), come_pop_stackframe(), __exception_result_var_b333);
        (come_push_stackframe("21obj.c", 1168,2663),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_206, "21obj.c", 1168, 2661)), "21obj.c", 1168, 2662))->c_value),come_pop_stackframe());
        come_call_finalizer3(come_value_206,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_value_207=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value340=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1171, "CVALUE"))));
        come_call_finalizer3(right_value340,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj112=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_207, "21obj.c", 1173, 2664)), "21obj.c", 1173, 2665))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_207, "21obj.c", 1173, 2664)), "21obj.c", 1173, 2665))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 1173, 2666),__exception_result_var_b334=((char*)(right_value341=xsprintf("0"))), come_pop_stackframe(), __exception_result_var_b334));
        __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj113=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_207, "21obj.c", 1174, 2667)), "21obj.c", 1174, 2668))->type;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_207, "21obj.c", 1174, 2667)), "21obj.c", 1174, 2668))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 1174, 2670),__exception_result_var_b335=((struct sType*)(right_value343=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value342=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1174, "sType"))), "21obj.c", 1174, 2669))),"int",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b335));
        come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value342,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value343,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_207, "21obj.c", 1175, 2671)), "21obj.c", 1175, 2672))->var=((void*)0);
        (come_push_stackframe("21obj.c", 1177, 2677),__exception_result_var_b336=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1177, 2673)), "21obj.c", 1177, 2674))->stack, "21obj.c", 1177, 2675)), "21obj.c", 1177, 2676)),(struct CVALUE*)come_increment_ref_count(come_value_207)), come_pop_stackframe(), __exception_result_var_b336);
        (come_push_stackframe("21obj.c", 1179,2680),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_207, "21obj.c", 1179, 2678)), "21obj.c", 1179, 2679))->c_value),come_pop_stackframe());
        come_call_finalizer3(come_value_207,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result197__ = (_Bool)1;
    return __result197__;
}

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __exception_result_var_b337;
_Bool _if_conditional248;
void* right_value344;
struct tuple3$3sTypephcharphbool* __exception_result_var_b338;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* type_208;
char* name_209;
_Bool err_210;
_Bool _if_conditional251;
_Bool _if_conditional252;
_Bool _if_conditional253;
struct sType* __exception_result_var_b339;
void* right_value345;
struct sType* inf_type_211;
void* right_value346;
struct sNode* __exception_result_var_b340;
struct sNode* node_212;
int __exception_result_var_b341;
void* right_value347;
void* right_value348;
struct sImplementsNode* __exception_result_var_b342;
struct sNode* _inf_value1;
struct sImplementsNode* _inf_obj_value1;
void* right_value353;
struct sNode* __result200__;
void* right_value354;
void* right_value355;
struct sNewNode* __exception_result_var_b346;
struct sNode* _inf_value2;
struct sNewNode* _inf_obj_value2;
void* right_value359;
struct sNode* obj_214;
void* right_value360;
char* __exception_result_var_b349;
char* fun_name_216;
struct sNode* __exception_result_var_b350;
void* right_value361;
void* right_value362;
struct sNode* __exception_result_var_b351;
struct sNode* __result203__;
void* right_value363;
void* right_value364;
struct sNewNode* __exception_result_var_b352;
struct sNode* _inf_value3;
struct sNewNode* _inf_obj_value3;
void* right_value368;
struct sNode* __result206__;
_Bool __exception_result_var_b355;
_Bool _if_conditional274;
void* right_value369;
void* right_value370;
struct sTrueNode* __exception_result_var_b356;
struct sNode* _inf_value4;
struct sTrueNode* _inf_obj_value4;
void* right_value373;
struct sNode* __result209__;
_Bool __exception_result_var_b358;
_Bool _if_conditional279;
void* right_value374;
void* right_value375;
struct sFalseNode* __exception_result_var_b359;
struct sNode* _inf_value5;
struct sFalseNode* _inf_obj_value5;
void* right_value378;
struct sNode* __result212__;
_Bool __exception_result_var_b361;
_Bool _if_conditional284;
void* right_value379;
struct sNode* __exception_result_var_b362;
struct sNode* node_220;
void* right_value380;
void* right_value381;
struct sDeleteNode* __exception_result_var_b363;
struct sNode* _inf_value6;
struct sDeleteNode* _inf_obj_value6;
void* right_value385;
struct sNode* __result215__;
_Bool __exception_result_var_b366;
_Bool _if_conditional291;
void* right_value386;
struct sNode* __exception_result_var_b367;
struct sNode* node_222;
void* right_value387;
void* right_value388;
struct sForceDeleteNode* __exception_result_var_b368;
struct sNode* _inf_value7;
struct sForceDeleteNode* _inf_obj_value7;
void* right_value392;
struct sNode* __result218__;
_Bool __exception_result_var_b371;
_Bool _if_conditional298;
void* right_value393;
struct sNode* __exception_result_var_b372;
struct sNode* node_224;
void* right_value394;
void* right_value395;
struct sBorrowNode* __exception_result_var_b373;
struct sNode* _inf_value8;
struct sBorrowNode* _inf_obj_value8;
void* right_value399;
struct sNode* __result221__;
_Bool __exception_result_var_b376;
_Bool _if_conditional305;
void* right_value400;
struct sNode* __exception_result_var_b377;
struct sNode* node_226;
void* right_value401;
void* right_value402;
struct sDelegateNode* __exception_result_var_b378;
struct sNode* _inf_value9;
struct sDelegateNode* _inf_obj_value9;
void* right_value406;
struct sNode* __result224__;
_Bool __exception_result_var_b381;
_Bool _if_conditional312;
void* right_value407;
struct sNode* __exception_result_var_b382;
struct sNode* node_228;
void* right_value408;
void* right_value409;
struct sShareNode* __exception_result_var_b383;
struct sNode* _inf_value10;
struct sShareNode* _inf_obj_value10;
void* right_value413;
struct sNode* __result227__;
_Bool __exception_result_var_b386;
_Bool _if_conditional319;
void* right_value414;
struct sNode* __exception_result_var_b387;
struct sNode* node_230;
void* right_value415;
void* right_value416;
struct sCloneNode* __exception_result_var_b388;
struct sNode* _inf_value11;
struct sCloneNode* _inf_obj_value11;
void* right_value420;
struct sNode* __result230__;
_Bool __exception_result_var_b391;
_Bool _if_conditional326;
void* right_value421;
struct sNode* __exception_result_var_b392;
struct sNode* node_232;
void* right_value422;
void* right_value423;
struct sDupeNode* __exception_result_var_b393;
struct sNode* _inf_value12;
struct sDupeNode* _inf_obj_value12;
void* right_value427;
struct sNode* __result233__;
_Bool __exception_result_var_b396;
_Bool _if_conditional333;
void* right_value428;
struct sNode* __exception_result_var_b397;
struct sNode* node_234;
void* right_value429;
void* right_value430;
struct sDummyHeapNode* __exception_result_var_b398;
struct sNode* _inf_value13;
struct sDummyHeapNode* _inf_obj_value13;
void* right_value434;
struct sNode* __result236__;
_Bool __exception_result_var_b401;
_Bool _if_conditional340;
void* right_value435;
struct sNode* __exception_result_var_b402;
struct sNode* node_236;
int __exception_result_var_b403;
void* right_value436;
void* right_value437;
struct sGCIncNode* __exception_result_var_b404;
struct sNode* _inf_value14;
struct sGCIncNode* _inf_obj_value14;
void* right_value441;
struct sNode* __result239__;
_Bool __exception_result_var_b407;
_Bool _if_conditional347;
void* right_value442;
struct sNode* __exception_result_var_b408;
struct sNode* node_238;
int __exception_result_var_b409;
void* right_value443;
void* right_value444;
struct sGCDecNode* __exception_result_var_b410;
struct sNode* _inf_value15;
struct sGCDecNode* _inf_obj_value15;
void* right_value448;
struct sNode* __result242__;
_Bool __exception_result_var_b413;
_Bool _if_conditional354;
void* right_value449;
struct tuple3$3sTypephcharphbool* __exception_result_var_b414;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* param_type_240;
char* param_name_241;
_Bool err_242;
_Bool _if_conditional355;
void* right_value450;
struct sType* __exception_result_var_b415;
struct sType* type2_243;
int __exception_result_var_b416;
void* right_value451;
void* right_value452;
struct sIsHeap* __exception_result_var_b417;
struct sNode* _inf_value16;
struct sIsHeap* _inf_obj_value16;
void* right_value456;
struct sNode* __result245__;
_Bool __exception_result_var_b420;
_Bool _if_conditional362;
void* right_value457;
struct tuple3$3sTypephcharphbool* __exception_result_var_b421;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* param_type_245;
char* param_name_246;
_Bool err_247;
_Bool _if_conditional363;
void* right_value458;
struct sType* __exception_result_var_b422;
struct sType* type2_248;
int __exception_result_var_b423;
void* right_value459;
void* right_value460;
struct sIsPointer* __exception_result_var_b424;
struct sNode* _inf_value17;
struct sIsPointer* _inf_obj_value17;
void* right_value464;
struct sNode* __result248__;
_Bool __exception_result_var_b427;
_Bool _if_conditional370;
_Bool __exception_result_var_b428;
_Bool _if_conditional371;
unsigned long int __exception_result_var_b429;
void* right_value465;
void* right_value466;
struct sNothingNode* __exception_result_var_b430;
struct sNode* _inf_value18;
struct sNothingNode* _inf_obj_value18;
void* right_value469;
struct sNode* __result251__;
_Bool __exception_result_var_b432;
_Bool __exception_result_var_b433;
_Bool _if_conditional376;
unsigned long int __exception_result_var_b434;
_Bool _if_conditional377;
void* right_value470;
struct sNode* __exception_result_var_b435;
struct sNode* node_251;
struct sNode* __result252__;
void* right_value471;
void* right_value472;
struct sNothingNode* __exception_result_var_b436;
struct sNode* _inf_value19;
struct sNothingNode* _inf_obj_value19;
void* right_value475;
struct sNode* __result255__;
_Bool __exception_result_var_b438;
_Bool _if_conditional382;
unsigned long int __exception_result_var_b439;
void* right_value476;
void* right_value477;
struct sNothingNode* __exception_result_var_b440;
struct sNode* _inf_value20;
struct sNothingNode* _inf_obj_value20;
void* right_value480;
struct sNode* __result258__;
_Bool __exception_result_var_b442;
_Bool _if_conditional387;
unsigned long int __exception_result_var_b443;
void* right_value481;
void* right_value482;
struct sNothingNode* __exception_result_var_b444;
struct sNode* _inf_value21;
struct sNothingNode* _inf_obj_value21;
void* right_value485;
struct sNode* __result261__;
_Bool __exception_result_var_b446;
_Bool _if_conditional392;
unsigned long int __exception_result_var_b447;
void* right_value486;
void* right_value487;
struct sNothingNode* __exception_result_var_b448;
struct sNode* _inf_value22;
struct sNothingNode* _inf_obj_value22;
void* right_value490;
struct sNode* __result264__;
_Bool __exception_result_var_b450;
_Bool _if_conditional397;
unsigned long int __exception_result_var_b451;
void* right_value491;
void* right_value492;
struct sNothingNode* __exception_result_var_b452;
struct sNode* _inf_value23;
struct sNothingNode* _inf_obj_value23;
void* right_value495;
struct sNode* __result267__;
_Bool __exception_result_var_b454;
_Bool _if_conditional402;
_Bool paren_257;
_Bool _if_conditional403;
_Bool is_type_name_flag_258;
char* p_259;
int sline_260;
_Bool __exception_result_var_b455;
_Bool _if_conditional404;
void* right_value496;
char* __exception_result_var_b456;
char* word_261;
_Bool __exception_result_var_b457;
_Bool _if_conditional405;
_Bool _if_conditional406;
void* right_value497;
struct tuple3$3sTypephcharphbool* __exception_result_var_b458;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* type_262;
char* name_263;
_Bool err_264;
_Bool _if_conditional407;
_Bool _if_conditional408;
void* right_value498;
void* right_value499;
struct sSizeOfNode* __exception_result_var_b459;
struct sNode* _inf_value24;
struct sSizeOfNode* _inf_obj_value24;
void* right_value503;
struct sNode* __result270__;
void* right_value504;
struct sNode* __exception_result_var_b462;
struct sNode* exp_266;
_Bool _if_conditional415;
void* right_value505;
void* right_value506;
struct sSizeOfExpNode* __exception_result_var_b463;
struct sNode* _inf_value25;
struct sSizeOfExpNode* _inf_obj_value25;
void* right_value510;
struct sNode* __result273__;
_Bool __exception_result_var_b466;
_Bool _if_conditional422;
_Bool paren_268;
_Bool _if_conditional423;
_Bool is_type_name_flag_269;
char* p_270;
int sline_271;
_Bool __exception_result_var_b467;
_Bool _if_conditional424;
void* right_value511;
char* __exception_result_var_b468;
char* word_272;
_Bool __exception_result_var_b469;
_Bool _if_conditional425;
_Bool _if_conditional426;
void* right_value512;
struct tuple3$3sTypephcharphbool* __exception_result_var_b470;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* type_273;
char* name_274;
_Bool err_275;
_Bool _if_conditional427;
_Bool _if_conditional428;
void* right_value513;
void* right_value514;
struct sTypeOfNode* __exception_result_var_b471;
struct sNode* _inf_value26;
struct sTypeOfNode* _inf_obj_value26;
void* right_value518;
struct sNode* __result276__;
void* right_value519;
struct sNode* __exception_result_var_b474;
struct sNode* exp_277;
_Bool _if_conditional435;
void* right_value520;
void* right_value521;
struct sTypeOfExpNode* __exception_result_var_b475;
struct sNode* _inf_value27;
struct sTypeOfExpNode* _inf_obj_value27;
void* right_value525;
struct sNode* __result279__;
_Bool __exception_result_var_b478;
_Bool _if_conditional442;
int __exception_result_var_b479;
_Bool is_type_name_flag_279;
char* p_280;
int sline_281;
_Bool __exception_result_var_b480;
_Bool _if_conditional443;
void* right_value526;
char* __exception_result_var_b481;
char* word_282;
_Bool __exception_result_var_b482;
_Bool _if_conditional444;
_Bool _if_conditional445;
void* right_value527;
struct tuple3$3sTypephcharphbool* __exception_result_var_b483;
struct tuple3$3sTypephcharphbool* multiple_assign_var9;
struct sType* type_283;
char* name_284;
_Bool err_285;
_Bool _if_conditional446;
int __exception_result_var_b484;
void* right_value528;
void* right_value529;
struct sAlignOfNode* __exception_result_var_b485;
struct sNode* _inf_value28;
struct sAlignOfNode* _inf_obj_value28;
void* right_value533;
struct sNode* __result282__;
void* right_value534;
struct sNode* __exception_result_var_b488;
struct sNode* exp_287;
int __exception_result_var_b489;
void* right_value535;
void* right_value536;
struct sAlignOfExpNode* __exception_result_var_b490;
struct sNode* _inf_value29;
struct sAlignOfExpNode* _inf_obj_value29;
void* right_value540;
struct sNode* __result285__;
_Bool __exception_result_var_b493;
_Bool _if_conditional459;
int __exception_result_var_b494;
_Bool is_type_name_flag_289;
char* p_290;
int sline_291;
_Bool __exception_result_var_b495;
_Bool _if_conditional460;
void* right_value541;
char* __exception_result_var_b496;
char* word_292;
_Bool __exception_result_var_b497;
_Bool _if_conditional461;
_Bool _if_conditional462;
void* right_value542;
struct tuple3$3sTypephcharphbool* __exception_result_var_b498;
struct tuple3$3sTypephcharphbool* multiple_assign_var10;
struct sType* type_293;
char* name_294;
_Bool err_295;
_Bool _if_conditional463;
int __exception_result_var_b499;
void* right_value543;
void* right_value544;
struct sAlignOfNode2* __exception_result_var_b500;
struct sNode* _inf_value30;
struct sAlignOfNode2* _inf_obj_value30;
void* right_value548;
struct sNode* __result288__;
void* right_value549;
struct sNode* __exception_result_var_b503;
struct sNode* exp_297;
int __exception_result_var_b504;
void* right_value550;
void* right_value551;
struct sAlignOfExpNode2* __exception_result_var_b505;
struct sNode* _inf_value31;
struct sAlignOfExpNode2* _inf_obj_value31;
void* right_value555;
struct sNode* __result291__;
_Bool __exception_result_var_b508;
_Bool _if_conditional476;
int __exception_result_var_b509;
_Bool is_type_name_flag_299;
char* p_300;
int sline_301;
_Bool __exception_result_var_b510;
_Bool _if_conditional477;
void* right_value556;
char* __exception_result_var_b511;
char* word_302;
_Bool __exception_result_var_b512;
_Bool _if_conditional478;
_Bool _if_conditional479;
void* right_value557;
struct tuple3$3sTypephcharphbool* __exception_result_var_b513;
struct tuple3$3sTypephcharphbool* multiple_assign_var11;
struct sType* type_303;
char* name_304;
_Bool err_305;
_Bool _if_conditional480;
int __exception_result_var_b514;
void* right_value558;
void* right_value559;
struct sAlignAsNode* __exception_result_var_b515;
struct sNode* _inf_value32;
struct sAlignAsNode* _inf_obj_value32;
void* right_value563;
struct sNode* __result294__;
void* right_value564;
struct sNode* __exception_result_var_b518;
struct sNode* exp_307;
int __exception_result_var_b519;
void* right_value565;
void* right_value566;
struct sAlignAsExpNode* __exception_result_var_b520;
struct sNode* _inf_value33;
struct sAlignAsExpNode* _inf_obj_value33;
void* right_value570;
struct sNode* __result297__;
void* right_value571;
struct sNode* __exception_result_var_b523;
struct sNode* __result298__;
memset(&__result_obj__, 0, sizeof(void*));
right_value344 = (void*)0;
right_value345 = (void*)0;
memset(&inf_type_211, 0, sizeof(struct sType*));
right_value346 = (void*)0;
memset(&node_212, 0, sizeof(struct sNode*));
right_value347 = (void*)0;
right_value348 = (void*)0;
right_value353 = (void*)0;
right_value354 = (void*)0;
right_value355 = (void*)0;
right_value359 = (void*)0;
memset(&obj_214, 0, sizeof(struct sNode*));
right_value360 = (void*)0;
memset(&fun_name_216, 0, sizeof(char*));
right_value361 = (void*)0;
right_value362 = (void*)0;
right_value363 = (void*)0;
right_value364 = (void*)0;
right_value368 = (void*)0;
right_value369 = (void*)0;
right_value370 = (void*)0;
right_value373 = (void*)0;
right_value374 = (void*)0;
right_value375 = (void*)0;
right_value378 = (void*)0;
right_value379 = (void*)0;
memset(&node_220, 0, sizeof(struct sNode*));
right_value380 = (void*)0;
right_value381 = (void*)0;
right_value385 = (void*)0;
right_value386 = (void*)0;
memset(&node_222, 0, sizeof(struct sNode*));
right_value387 = (void*)0;
right_value388 = (void*)0;
right_value392 = (void*)0;
right_value393 = (void*)0;
memset(&node_224, 0, sizeof(struct sNode*));
right_value394 = (void*)0;
right_value395 = (void*)0;
right_value399 = (void*)0;
right_value400 = (void*)0;
memset(&node_226, 0, sizeof(struct sNode*));
right_value401 = (void*)0;
right_value402 = (void*)0;
right_value406 = (void*)0;
right_value407 = (void*)0;
memset(&node_228, 0, sizeof(struct sNode*));
right_value408 = (void*)0;
right_value409 = (void*)0;
right_value413 = (void*)0;
right_value414 = (void*)0;
memset(&node_230, 0, sizeof(struct sNode*));
right_value415 = (void*)0;
right_value416 = (void*)0;
right_value420 = (void*)0;
right_value421 = (void*)0;
memset(&node_232, 0, sizeof(struct sNode*));
right_value422 = (void*)0;
right_value423 = (void*)0;
right_value427 = (void*)0;
right_value428 = (void*)0;
memset(&node_234, 0, sizeof(struct sNode*));
right_value429 = (void*)0;
right_value430 = (void*)0;
right_value434 = (void*)0;
right_value435 = (void*)0;
memset(&node_236, 0, sizeof(struct sNode*));
right_value436 = (void*)0;
right_value437 = (void*)0;
right_value441 = (void*)0;
right_value442 = (void*)0;
memset(&node_238, 0, sizeof(struct sNode*));
right_value443 = (void*)0;
right_value444 = (void*)0;
right_value448 = (void*)0;
right_value449 = (void*)0;
right_value450 = (void*)0;
memset(&type2_243, 0, sizeof(struct sType*));
right_value451 = (void*)0;
right_value452 = (void*)0;
right_value456 = (void*)0;
right_value457 = (void*)0;
right_value458 = (void*)0;
memset(&type2_248, 0, sizeof(struct sType*));
right_value459 = (void*)0;
right_value460 = (void*)0;
right_value464 = (void*)0;
right_value465 = (void*)0;
right_value466 = (void*)0;
right_value469 = (void*)0;
right_value470 = (void*)0;
memset(&node_251, 0, sizeof(struct sNode*));
right_value471 = (void*)0;
right_value472 = (void*)0;
right_value475 = (void*)0;
right_value476 = (void*)0;
right_value477 = (void*)0;
right_value480 = (void*)0;
right_value481 = (void*)0;
right_value482 = (void*)0;
right_value485 = (void*)0;
right_value486 = (void*)0;
right_value487 = (void*)0;
right_value490 = (void*)0;
right_value491 = (void*)0;
right_value492 = (void*)0;
right_value495 = (void*)0;
memset(&paren_257, 0, sizeof(_Bool));
memset(&is_type_name_flag_258, 0, sizeof(_Bool));
memset(&p_259, 0, sizeof(char*));
memset(&sline_260, 0, sizeof(int));
right_value496 = (void*)0;
memset(&word_261, 0, sizeof(char*));
right_value497 = (void*)0;
right_value498 = (void*)0;
right_value499 = (void*)0;
right_value503 = (void*)0;
right_value504 = (void*)0;
memset(&exp_266, 0, sizeof(struct sNode*));
right_value505 = (void*)0;
right_value506 = (void*)0;
right_value510 = (void*)0;
memset(&paren_268, 0, sizeof(_Bool));
memset(&is_type_name_flag_269, 0, sizeof(_Bool));
memset(&p_270, 0, sizeof(char*));
memset(&sline_271, 0, sizeof(int));
right_value511 = (void*)0;
memset(&word_272, 0, sizeof(char*));
right_value512 = (void*)0;
right_value513 = (void*)0;
right_value514 = (void*)0;
right_value518 = (void*)0;
right_value519 = (void*)0;
memset(&exp_277, 0, sizeof(struct sNode*));
right_value520 = (void*)0;
right_value521 = (void*)0;
right_value525 = (void*)0;
memset(&is_type_name_flag_279, 0, sizeof(_Bool));
memset(&p_280, 0, sizeof(char*));
memset(&sline_281, 0, sizeof(int));
right_value526 = (void*)0;
memset(&word_282, 0, sizeof(char*));
right_value527 = (void*)0;
right_value528 = (void*)0;
right_value529 = (void*)0;
right_value533 = (void*)0;
right_value534 = (void*)0;
memset(&exp_287, 0, sizeof(struct sNode*));
right_value535 = (void*)0;
right_value536 = (void*)0;
right_value540 = (void*)0;
memset(&is_type_name_flag_289, 0, sizeof(_Bool));
memset(&p_290, 0, sizeof(char*));
memset(&sline_291, 0, sizeof(int));
right_value541 = (void*)0;
memset(&word_292, 0, sizeof(char*));
right_value542 = (void*)0;
right_value543 = (void*)0;
right_value544 = (void*)0;
right_value548 = (void*)0;
right_value549 = (void*)0;
memset(&exp_297, 0, sizeof(struct sNode*));
right_value550 = (void*)0;
right_value551 = (void*)0;
right_value555 = (void*)0;
memset(&is_type_name_flag_299, 0, sizeof(_Bool));
memset(&p_300, 0, sizeof(char*));
memset(&sline_301, 0, sizeof(int));
right_value556 = (void*)0;
memset(&word_302, 0, sizeof(char*));
right_value557 = (void*)0;
right_value558 = (void*)0;
right_value559 = (void*)0;
right_value563 = (void*)0;
right_value564 = (void*)0;
memset(&exp_307, 0, sizeof(struct sNode*));
right_value565 = (void*)0;
right_value566 = (void*)0;
right_value570 = (void*)0;
right_value571 = (void*)0;
    if(_if_conditional248=(come_push_stackframe("21obj.c", 1188, 2681),__exception_result_var_b337=charp_operator_equals(buf,"new"), come_pop_stackframe(), __exception_result_var_b337),    _if_conditional248) {
        multiple_assign_var4=(come_push_stackframe("21obj.c", 1189, 2682),__exception_result_var_b338=((struct tuple3$3sTypephcharphbool*)(right_value344=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b338);
        type_208=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        name_209=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_210=multiple_assign_var4->v3;
        come_call_finalizer3(right_value344,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional251=!err_210,        _if_conditional251) {
            (come_push_stackframe("21obj.c", 1191,2691),err_msg(info,"parse_type failed"),come_pop_stackframe());
            (come_push_stackframe("21obj.c", 1192,2692),exit(2),come_pop_stackframe());
        }
        if(_if_conditional252=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1195, 2693)), "21obj.c", 1195, 2694))->p, "21obj.c", 1195, 2695))==40,        _if_conditional252) {
            if(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type_208, "21obj.c", 1196, 2696)), "21obj.c", 1196, 2697))->mClass, "21obj.c", 1196, 2698)), "21obj.c", 1196, 2699))->mProtocol) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1197, 2700)), "21obj.c", 1197, 2701))->p++;
                (come_push_stackframe("21obj.c", 1198,2702),skip_spaces_and_lf(info),come_pop_stackframe());
                inf_type_211=(struct sType*)come_increment_ref_count(((struct sType*)(right_value345=(come_push_stackframe("21obj.c", 1200, 2703),__exception_result_var_b339=sType_clone(type_208), come_pop_stackframe(), __exception_result_var_b339))));
                come_call_finalizer3(right_value345,sType_finalize, 0, 1, 0, 0, __result_obj__);
                node_212=(struct sNode*)come_increment_ref_count((come_push_stackframe("21obj.c", 1202, 2704),__exception_result_var_b340=((struct sNode*)(right_value346=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b340));
                if(right_value346) { right_value346 = come_decrement_ref_count2(right_value346, ((struct sNode*)right_value346)->finalize, ((struct sNode*)right_value346)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                (come_push_stackframe("21obj.c", 1204, 2705),__exception_result_var_b341=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b341);
                _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1206, "struct sNode");
                _inf_obj_value1=come_increment_ref_count((come_push_stackframe("21obj.c", 1206, 2707),__exception_result_var_b342=((struct sImplementsNode*)(right_value348=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)come_null_check(((struct sImplementsNode*)(right_value347=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1206, "sImplementsNode"))), "21obj.c", 1206, 2706))),(struct sNode*)come_increment_ref_count(node_212),(struct sType*)come_increment_ref_count(inf_type_211),info))), come_pop_stackframe(), __exception_result_var_b342));
                _inf_value1->_protocol_obj=_inf_obj_value1;
                _inf_value1->finalize=(void*)sImplementsNode_finalize;
                _inf_value1->clone=(void*)sImplementsNode_clone;
                _inf_value1->compile=(void*)sImplementsNode_compile;
                _inf_value1->sline=(void*)sNodeBase_sline;
                _inf_value1->sname=(void*)sNodeBase_sname;
                _inf_value1->terminated=(void*)sNodeBase_terminated;
                _inf_value1->kind=(void*)sImplementsNode_kind;
                __result200__ = __result_obj__ = ((struct sNode*)(right_value353=_inf_value1));
                come_call_finalizer3(inf_type_211,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(node_212) { node_212 = come_decrement_ref_count2(node_212, ((struct sNode*)node_212)->finalize, ((struct sNode*)node_212)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(type_208,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_209 = come_decrement_ref_count2(name_209, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value347,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value348,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value353) { right_value353 = come_decrement_ref_count2(right_value353, ((struct sNode*)right_value353)->finalize, ((struct sNode*)right_value353)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result200__;
                come_call_finalizer3(inf_type_211,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(node_212) { node_212 = come_decrement_ref_count2(node_212, ((struct sNode*)node_212)->finalize, ((struct sNode*)node_212)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1209, "struct sNode");
                _inf_obj_value2=come_increment_ref_count((come_push_stackframe("21obj.c", 1209, 2746),__exception_result_var_b346=((struct sNewNode*)(right_value355=sNewNode_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)come_null_check(((struct sNewNode*)(right_value354=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1209, "sNewNode"))), "21obj.c", 1209, 2745))),(struct sType*)come_increment_ref_count(type_208),info))), come_pop_stackframe(), __exception_result_var_b346));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sNewNode_finalize;
                _inf_value2->clone=(void*)sNewNode_clone;
                _inf_value2->compile=(void*)sNewNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sNewNode_kind;
                obj_214=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value359=_inf_value2)));
                come_call_finalizer3(right_value354,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value355,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value359) { right_value359 = come_decrement_ref_count2(right_value359, ((struct sNode*)right_value359)->finalize, ((struct sNode*)right_value359)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                fun_name_216=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 1210, 2773),__exception_result_var_b349=((char*)(right_value360=__builtin_string("initialize"))), come_pop_stackframe(), __exception_result_var_b349));
                right_value360 = come_decrement_ref_count2(right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __result203__ = __result_obj__ = (come_push_stackframe("21obj.c", 1212, 2775),__exception_result_var_b351=((struct sNode*)(right_value362=parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value361=(come_push_stackframe("21obj.c", 1212, 2774),__exception_result_var_b350=sNode_clone(obj_214), come_pop_stackframe(), __exception_result_var_b350)))),(char*)come_increment_ref_count(fun_name_216),info))), come_pop_stackframe(), __exception_result_var_b351);
                if(obj_214) { obj_214 = come_decrement_ref_count2(obj_214, ((struct sNode*)obj_214)->finalize, ((struct sNode*)obj_214)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_216 = come_decrement_ref_count2(fun_name_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_208,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_209 = come_decrement_ref_count2(name_209, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(right_value361) { right_value361 = come_decrement_ref_count2(right_value361, ((struct sNode*)right_value361)->finalize, ((struct sNode*)right_value361)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                if(right_value362) { right_value362 = come_decrement_ref_count2(right_value362, ((struct sNode*)right_value362)->finalize, ((struct sNode*)right_value362)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result203__;
                if(obj_214) { obj_214 = come_decrement_ref_count2(obj_214, ((struct sNode*)obj_214)->finalize, ((struct sNode*)obj_214)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_216 = come_decrement_ref_count2(fun_name_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1216, "struct sNode");
            _inf_obj_value3=come_increment_ref_count((come_push_stackframe("21obj.c", 1216, 2777),__exception_result_var_b352=((struct sNewNode*)(right_value364=sNewNode_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)come_null_check(((struct sNewNode*)(right_value363=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1216, "sNewNode"))), "21obj.c", 1216, 2776))),(struct sType*)come_increment_ref_count(type_208),info))), come_pop_stackframe(), __exception_result_var_b352));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sNewNode_finalize;
            _inf_value3->clone=(void*)sNewNode_clone;
            _inf_value3->compile=(void*)sNewNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sNewNode_kind;
            __result206__ = __result_obj__ = ((struct sNode*)(right_value368=_inf_value3));
            come_call_finalizer3(type_208,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_209 = come_decrement_ref_count2(name_209, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value363,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value364,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value368) { right_value368 = come_decrement_ref_count2(right_value368, ((struct sNode*)right_value368)->finalize, ((struct sNode*)right_value368)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result206__;
        }
        come_call_finalizer3(type_208,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_209 = come_decrement_ref_count2(name_209, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional274=(come_push_stackframe("21obj.c", 1219, 2804),__exception_result_var_b355=charp_operator_equals(buf,"true"), come_pop_stackframe(), __exception_result_var_b355),        _if_conditional274) {
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1220, "struct sNode");
            _inf_obj_value4=come_increment_ref_count((come_push_stackframe("21obj.c", 1220, 2806),__exception_result_var_b356=((struct sTrueNode*)(right_value370=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)come_null_check(((struct sTrueNode*)(right_value369=(struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 1220, "sTrueNode"))), "21obj.c", 1220, 2805))),info))), come_pop_stackframe(), __exception_result_var_b356));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sTrueNode_finalize;
            _inf_value4->clone=(void*)sTrueNode_clone;
            _inf_value4->compile=(void*)sTrueNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sTrueNode_kind;
            __result209__ = __result_obj__ = ((struct sNode*)(right_value373=_inf_value4));
            come_call_finalizer3(right_value369,sTrueNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value370,sTrueNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value373) { right_value373 = come_decrement_ref_count2(right_value373, ((struct sNode*)right_value373)->finalize, ((struct sNode*)right_value373)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result209__;
        }
        else {
            if(_if_conditional279=(come_push_stackframe("21obj.c", 1222, 2822),__exception_result_var_b358=charp_operator_equals(buf,"false"), come_pop_stackframe(), __exception_result_var_b358),            _if_conditional279) {
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1223, "struct sNode");
                _inf_obj_value5=come_increment_ref_count((come_push_stackframe("21obj.c", 1223, 2824),__exception_result_var_b359=((struct sFalseNode*)(right_value375=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)come_null_check(((struct sFalseNode*)(right_value374=(struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 1223, "sFalseNode"))), "21obj.c", 1223, 2823))),info))), come_pop_stackframe(), __exception_result_var_b359));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sFalseNode_finalize;
                _inf_value5->clone=(void*)sFalseNode_clone;
                _inf_value5->compile=(void*)sFalseNode_compile;
                _inf_value5->sline=(void*)sNodeBase_sline;
                _inf_value5->sname=(void*)sNodeBase_sname;
                _inf_value5->terminated=(void*)sNodeBase_terminated;
                _inf_value5->kind=(void*)sFalseNode_kind;
                __result212__ = __result_obj__ = ((struct sNode*)(right_value378=_inf_value5));
                come_call_finalizer3(right_value374,sFalseNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value375,sFalseNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value378) { right_value378 = come_decrement_ref_count2(right_value378, ((struct sNode*)right_value378)->finalize, ((struct sNode*)right_value378)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result212__;
            }
            else {
                if(_if_conditional284=(come_push_stackframe("21obj.c", 1225, 2840),__exception_result_var_b361=charp_operator_equals(buf,"delete"), come_pop_stackframe(), __exception_result_var_b361),                _if_conditional284) {
                    node_220=(struct sNode*)come_increment_ref_count((come_push_stackframe("21obj.c", 1226, 2841),__exception_result_var_b362=((struct sNode*)(right_value379=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b362));
                    if(right_value379) { right_value379 = come_decrement_ref_count2(right_value379, ((struct sNode*)right_value379)->finalize, ((struct sNode*)right_value379)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1228, "struct sNode");
                    _inf_obj_value6=come_increment_ref_count((come_push_stackframe("21obj.c", 1228, 2843),__exception_result_var_b363=((struct sDeleteNode*)(right_value381=sDeleteNode_initialize((struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)come_null_check(((struct sDeleteNode*)(right_value380=(struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "21obj.c", 1228, "sDeleteNode"))), "21obj.c", 1228, 2842))),(struct sNode*)come_increment_ref_count(node_220),info))), come_pop_stackframe(), __exception_result_var_b363));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sDeleteNode_finalize;
                    _inf_value6->clone=(void*)sDeleteNode_clone;
                    _inf_value6->compile=(void*)sDeleteNode_compile;
                    _inf_value6->sline=(void*)sNodeBase_sline;
                    _inf_value6->sname=(void*)sNodeBase_sname;
                    _inf_value6->terminated=(void*)sNodeBase_terminated;
                    _inf_value6->kind=(void*)sDeleteNode_kind;
                    __result215__ = __result_obj__ = ((struct sNode*)(right_value385=_inf_value6));
                    if(node_220) { node_220 = come_decrement_ref_count2(node_220, ((struct sNode*)node_220)->finalize, ((struct sNode*)node_220)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(right_value380,sDeleteNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value381,sDeleteNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value385) { right_value385 = come_decrement_ref_count2(right_value385, ((struct sNode*)right_value385)->finalize, ((struct sNode*)right_value385)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result215__;
                    if(node_220) { node_220 = come_decrement_ref_count2(node_220, ((struct sNode*)node_220)->finalize, ((struct sNode*)node_220)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional291=(come_push_stackframe("21obj.c", 1230, 2870),__exception_result_var_b366=charp_operator_equals(buf,"force_delete"), come_pop_stackframe(), __exception_result_var_b366),                    _if_conditional291) {
                        node_222=(struct sNode*)come_increment_ref_count((come_push_stackframe("21obj.c", 1231, 2871),__exception_result_var_b367=((struct sNode*)(right_value386=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b367));
                        if(right_value386) { right_value386 = come_decrement_ref_count2(right_value386, ((struct sNode*)right_value386)->finalize, ((struct sNode*)right_value386)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1233, "struct sNode");
                        _inf_obj_value7=come_increment_ref_count((come_push_stackframe("21obj.c", 1233, 2873),__exception_result_var_b368=((struct sForceDeleteNode*)(right_value388=sForceDeleteNode_initialize((struct sForceDeleteNode*)come_increment_ref_count(((struct sForceDeleteNode*)come_null_check(((struct sForceDeleteNode*)(right_value387=(struct sForceDeleteNode*)come_calloc(1, sizeof(struct sForceDeleteNode)*(1), "21obj.c", 1233, "sForceDeleteNode"))), "21obj.c", 1233, 2872))),(struct sNode*)come_increment_ref_count(node_222),info))), come_pop_stackframe(), __exception_result_var_b368));
                        _inf_value7->_protocol_obj=_inf_obj_value7;
                        _inf_value7->finalize=(void*)sForceDeleteNode_finalize;
                        _inf_value7->clone=(void*)sForceDeleteNode_clone;
                        _inf_value7->compile=(void*)sForceDeleteNode_compile;
                        _inf_value7->sline=(void*)sNodeBase_sline;
                        _inf_value7->sname=(void*)sNodeBase_sname;
                        _inf_value7->terminated=(void*)sNodeBase_terminated;
                        _inf_value7->kind=(void*)sForceDeleteNode_kind;
                        __result218__ = __result_obj__ = ((struct sNode*)(right_value392=_inf_value7));
                        if(node_222) { node_222 = come_decrement_ref_count2(node_222, ((struct sNode*)node_222)->finalize, ((struct sNode*)node_222)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(right_value387,sForceDeleteNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value388,sForceDeleteNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value392) { right_value392 = come_decrement_ref_count2(right_value392, ((struct sNode*)right_value392)->finalize, ((struct sNode*)right_value392)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result218__;
                        if(node_222) { node_222 = come_decrement_ref_count2(node_222, ((struct sNode*)node_222)->finalize, ((struct sNode*)node_222)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(_if_conditional298=(come_push_stackframe("21obj.c", 1236, 2900),__exception_result_var_b371=charp_operator_equals(buf,"borrow"), come_pop_stackframe(), __exception_result_var_b371),                        _if_conditional298) {
                            node_224=(struct sNode*)come_increment_ref_count((come_push_stackframe("21obj.c", 1237, 2901),__exception_result_var_b372=((struct sNode*)(right_value393=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b372));
                            if(right_value393) { right_value393 = come_decrement_ref_count2(right_value393, ((struct sNode*)right_value393)->finalize, ((struct sNode*)right_value393)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1239, "struct sNode");
                            _inf_obj_value8=come_increment_ref_count((come_push_stackframe("21obj.c", 1239, 2903),__exception_result_var_b373=((struct sBorrowNode*)(right_value395=sBorrowNode_initialize((struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)come_null_check(((struct sBorrowNode*)(right_value394=(struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "21obj.c", 1239, "sBorrowNode"))), "21obj.c", 1239, 2902))),(struct sNode*)come_increment_ref_count(node_224),info))), come_pop_stackframe(), __exception_result_var_b373));
                            _inf_value8->_protocol_obj=_inf_obj_value8;
                            _inf_value8->finalize=(void*)sBorrowNode_finalize;
                            _inf_value8->clone=(void*)sBorrowNode_clone;
                            _inf_value8->compile=(void*)sBorrowNode_compile;
                            _inf_value8->sline=(void*)sNodeBase_sline;
                            _inf_value8->sname=(void*)sNodeBase_sname;
                            _inf_value8->terminated=(void*)sNodeBase_terminated;
                            _inf_value8->kind=(void*)sBorrowNode_kind;
                            __result221__ = __result_obj__ = ((struct sNode*)(right_value399=_inf_value8));
                            if(node_224) { node_224 = come_decrement_ref_count2(node_224, ((struct sNode*)node_224)->finalize, ((struct sNode*)node_224)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(right_value394,sBorrowNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value395,sBorrowNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value399) { right_value399 = come_decrement_ref_count2(right_value399, ((struct sNode*)right_value399)->finalize, ((struct sNode*)right_value399)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result221__;
                            if(node_224) { node_224 = come_decrement_ref_count2(node_224, ((struct sNode*)node_224)->finalize, ((struct sNode*)node_224)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(_if_conditional305=(come_push_stackframe("21obj.c", 1241, 2930),__exception_result_var_b376=charp_operator_equals(buf,"delegate"), come_pop_stackframe(), __exception_result_var_b376),                            _if_conditional305) {
                                node_226=(struct sNode*)come_increment_ref_count((come_push_stackframe("21obj.c", 1242, 2931),__exception_result_var_b377=((struct sNode*)(right_value400=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b377));
                                if(right_value400) { right_value400 = come_decrement_ref_count2(right_value400, ((struct sNode*)right_value400)->finalize, ((struct sNode*)right_value400)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1244, "struct sNode");
                                _inf_obj_value9=come_increment_ref_count((come_push_stackframe("21obj.c", 1244, 2933),__exception_result_var_b378=((struct sDelegateNode*)(right_value402=sDelegateNode_initialize((struct sDelegateNode*)come_increment_ref_count(((struct sDelegateNode*)come_null_check(((struct sDelegateNode*)(right_value401=(struct sDelegateNode*)come_calloc(1, sizeof(struct sDelegateNode)*(1), "21obj.c", 1244, "sDelegateNode"))), "21obj.c", 1244, 2932))),(struct sNode*)come_increment_ref_count(node_226),info))), come_pop_stackframe(), __exception_result_var_b378));
                                _inf_value9->_protocol_obj=_inf_obj_value9;
                                _inf_value9->finalize=(void*)sDelegateNode_finalize;
                                _inf_value9->clone=(void*)sDelegateNode_clone;
                                _inf_value9->compile=(void*)sDelegateNode_compile;
                                _inf_value9->sline=(void*)sNodeBase_sline;
                                _inf_value9->sname=(void*)sNodeBase_sname;
                                _inf_value9->terminated=(void*)sNodeBase_terminated;
                                _inf_value9->kind=(void*)sDelegateNode_kind;
                                __result224__ = __result_obj__ = ((struct sNode*)(right_value406=_inf_value9));
                                if(node_226) { node_226 = come_decrement_ref_count2(node_226, ((struct sNode*)node_226)->finalize, ((struct sNode*)node_226)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(right_value401,sDelegateNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value402,sDelegateNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value406) { right_value406 = come_decrement_ref_count2(right_value406, ((struct sNode*)right_value406)->finalize, ((struct sNode*)right_value406)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result224__;
                                if(node_226) { node_226 = come_decrement_ref_count2(node_226, ((struct sNode*)node_226)->finalize, ((struct sNode*)node_226)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(_if_conditional312=(come_push_stackframe("21obj.c", 1246, 2960),__exception_result_var_b381=charp_operator_equals(buf,"share"), come_pop_stackframe(), __exception_result_var_b381),                                _if_conditional312) {
                                    node_228=(struct sNode*)come_increment_ref_count((come_push_stackframe("21obj.c", 1247, 2961),__exception_result_var_b382=((struct sNode*)(right_value407=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b382));
                                    if(right_value407) { right_value407 = come_decrement_ref_count2(right_value407, ((struct sNode*)right_value407)->finalize, ((struct sNode*)right_value407)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1249, "struct sNode");
                                    _inf_obj_value10=come_increment_ref_count((come_push_stackframe("21obj.c", 1249, 2963),__exception_result_var_b383=((struct sShareNode*)(right_value409=sShareNode_initialize((struct sShareNode*)come_increment_ref_count(((struct sShareNode*)come_null_check(((struct sShareNode*)(right_value408=(struct sShareNode*)come_calloc(1, sizeof(struct sShareNode)*(1), "21obj.c", 1249, "sShareNode"))), "21obj.c", 1249, 2962))),(struct sNode*)come_increment_ref_count(node_228),info))), come_pop_stackframe(), __exception_result_var_b383));
                                    _inf_value10->_protocol_obj=_inf_obj_value10;
                                    _inf_value10->finalize=(void*)sShareNode_finalize;
                                    _inf_value10->clone=(void*)sShareNode_clone;
                                    _inf_value10->compile=(void*)sShareNode_compile;
                                    _inf_value10->sline=(void*)sNodeBase_sline;
                                    _inf_value10->sname=(void*)sNodeBase_sname;
                                    _inf_value10->terminated=(void*)sNodeBase_terminated;
                                    _inf_value10->kind=(void*)sShareNode_kind;
                                    __result227__ = __result_obj__ = ((struct sNode*)(right_value413=_inf_value10));
                                    if(node_228) { node_228 = come_decrement_ref_count2(node_228, ((struct sNode*)node_228)->finalize, ((struct sNode*)node_228)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer3(right_value408,sShareNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value409,sShareNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(right_value413) { right_value413 = come_decrement_ref_count2(right_value413, ((struct sNode*)right_value413)->finalize, ((struct sNode*)right_value413)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result227__;
                                    if(node_228) { node_228 = come_decrement_ref_count2(node_228, ((struct sNode*)node_228)->finalize, ((struct sNode*)node_228)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(_if_conditional319=(come_push_stackframe("21obj.c", 1251, 2990),__exception_result_var_b386=charp_operator_equals(buf,"clone"), come_pop_stackframe(), __exception_result_var_b386),                                    _if_conditional319) {
                                        node_230=(struct sNode*)come_increment_ref_count((come_push_stackframe("21obj.c", 1252, 2991),__exception_result_var_b387=((struct sNode*)(right_value414=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b387));
                                        if(right_value414) { right_value414 = come_decrement_ref_count2(right_value414, ((struct sNode*)right_value414)->finalize, ((struct sNode*)right_value414)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1254, "struct sNode");
                                        _inf_obj_value11=come_increment_ref_count((come_push_stackframe("21obj.c", 1254, 2993),__exception_result_var_b388=((struct sCloneNode*)(right_value416=sCloneNode_initialize((struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)come_null_check(((struct sCloneNode*)(right_value415=(struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "21obj.c", 1254, "sCloneNode"))), "21obj.c", 1254, 2992))),(struct sNode*)come_increment_ref_count(node_230),info))), come_pop_stackframe(), __exception_result_var_b388));
                                        _inf_value11->_protocol_obj=_inf_obj_value11;
                                        _inf_value11->finalize=(void*)sCloneNode_finalize;
                                        _inf_value11->clone=(void*)sCloneNode_clone;
                                        _inf_value11->compile=(void*)sCloneNode_compile;
                                        _inf_value11->sline=(void*)sNodeBase_sline;
                                        _inf_value11->sname=(void*)sNodeBase_sname;
                                        _inf_value11->terminated=(void*)sNodeBase_terminated;
                                        _inf_value11->kind=(void*)sCloneNode_kind;
                                        __result230__ = __result_obj__ = ((struct sNode*)(right_value420=_inf_value11));
                                        if(node_230) { node_230 = come_decrement_ref_count2(node_230, ((struct sNode*)node_230)->finalize, ((struct sNode*)node_230)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer3(right_value415,sCloneNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value416,sCloneNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(right_value420) { right_value420 = come_decrement_ref_count2(right_value420, ((struct sNode*)right_value420)->finalize, ((struct sNode*)right_value420)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result230__;
                                        if(node_230) { node_230 = come_decrement_ref_count2(node_230, ((struct sNode*)node_230)->finalize, ((struct sNode*)node_230)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        if(_if_conditional326=(come_push_stackframe("21obj.c", 1256, 3020),__exception_result_var_b391=charp_operator_equals(buf,"dupe"), come_pop_stackframe(), __exception_result_var_b391),                                        _if_conditional326) {
                                            node_232=(struct sNode*)come_increment_ref_count((come_push_stackframe("21obj.c", 1257, 3021),__exception_result_var_b392=((struct sNode*)(right_value421=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b392));
                                            if(right_value421) { right_value421 = come_decrement_ref_count2(right_value421, ((struct sNode*)right_value421)->finalize, ((struct sNode*)right_value421)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1259, "struct sNode");
                                            _inf_obj_value12=come_increment_ref_count((come_push_stackframe("21obj.c", 1259, 3023),__exception_result_var_b393=((struct sDupeNode*)(right_value423=sDupeNode_initialize((struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)come_null_check(((struct sDupeNode*)(right_value422=(struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "21obj.c", 1259, "sDupeNode"))), "21obj.c", 1259, 3022))),(struct sNode*)come_increment_ref_count(node_232),info))), come_pop_stackframe(), __exception_result_var_b393));
                                            _inf_value12->_protocol_obj=_inf_obj_value12;
                                            _inf_value12->finalize=(void*)sDupeNode_finalize;
                                            _inf_value12->clone=(void*)sDupeNode_clone;
                                            _inf_value12->compile=(void*)sDupeNode_compile;
                                            _inf_value12->sline=(void*)sNodeBase_sline;
                                            _inf_value12->sname=(void*)sNodeBase_sname;
                                            _inf_value12->terminated=(void*)sNodeBase_terminated;
                                            _inf_value12->kind=(void*)sDupeNode_kind;
                                            __result233__ = __result_obj__ = ((struct sNode*)(right_value427=_inf_value12));
                                            if(node_232) { node_232 = come_decrement_ref_count2(node_232, ((struct sNode*)node_232)->finalize, ((struct sNode*)node_232)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer3(right_value422,sDupeNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value423,sDupeNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(right_value427) { right_value427 = come_decrement_ref_count2(right_value427, ((struct sNode*)right_value427)->finalize, ((struct sNode*)right_value427)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result233__;
                                            if(node_232) { node_232 = come_decrement_ref_count2(node_232, ((struct sNode*)node_232)->finalize, ((struct sNode*)node_232)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        else {
                                            if(_if_conditional333=(come_push_stackframe("21obj.c", 1261, 3050),__exception_result_var_b396=charp_operator_equals(buf,"dummy_heap"), come_pop_stackframe(), __exception_result_var_b396),                                            _if_conditional333) {
                                                node_234=(struct sNode*)come_increment_ref_count((come_push_stackframe("21obj.c", 1262, 3051),__exception_result_var_b397=((struct sNode*)(right_value428=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b397));
                                                if(right_value428) { right_value428 = come_decrement_ref_count2(right_value428, ((struct sNode*)right_value428)->finalize, ((struct sNode*)right_value428)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1264, "struct sNode");
                                                _inf_obj_value13=come_increment_ref_count((come_push_stackframe("21obj.c", 1264, 3053),__exception_result_var_b398=((struct sDummyHeapNode*)(right_value430=sDummyHeapNode_initialize((struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)come_null_check(((struct sDummyHeapNode*)(right_value429=(struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "21obj.c", 1264, "sDummyHeapNode"))), "21obj.c", 1264, 3052))),(struct sNode*)come_increment_ref_count(node_234),info))), come_pop_stackframe(), __exception_result_var_b398));
                                                _inf_value13->_protocol_obj=_inf_obj_value13;
                                                _inf_value13->finalize=(void*)sDummyHeapNode_finalize;
                                                _inf_value13->clone=(void*)sDummyHeapNode_clone;
                                                _inf_value13->compile=(void*)sDummyHeapNode_compile;
                                                _inf_value13->sline=(void*)sNodeBase_sline;
                                                _inf_value13->sname=(void*)sNodeBase_sname;
                                                _inf_value13->terminated=(void*)sNodeBase_terminated;
                                                _inf_value13->kind=(void*)sDummyHeapNode_kind;
                                                __result236__ = __result_obj__ = ((struct sNode*)(right_value434=_inf_value13));
                                                if(node_234) { node_234 = come_decrement_ref_count2(node_234, ((struct sNode*)node_234)->finalize, ((struct sNode*)node_234)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                come_call_finalizer3(right_value429,sDummyHeapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                come_call_finalizer3(right_value430,sDummyHeapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                if(right_value434) { right_value434 = come_decrement_ref_count2(right_value434, ((struct sNode*)right_value434)->finalize, ((struct sNode*)right_value434)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                return __result236__;
                                                if(node_234) { node_234 = come_decrement_ref_count2(node_234, ((struct sNode*)node_234)->finalize, ((struct sNode*)node_234)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            else {
                                                if(_if_conditional340=(come_push_stackframe("21obj.c", 1266, 3080),__exception_result_var_b401=charp_operator_equals(buf,"gc_inc"), come_pop_stackframe(), __exception_result_var_b401)&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1266, 3081)), "21obj.c", 1266, 3082))->p, "21obj.c", 1266, 3083))==40,                                                _if_conditional340) {
                                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1267, 3084)), "21obj.c", 1267, 3085))->p++;
                                                    (come_push_stackframe("21obj.c", 1268,3086),skip_spaces_and_lf(info),come_pop_stackframe());
                                                    node_236=(struct sNode*)come_increment_ref_count((come_push_stackframe("21obj.c", 1270, 3087),__exception_result_var_b402=((struct sNode*)(right_value435=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b402));
                                                    if(right_value435) { right_value435 = come_decrement_ref_count2(right_value435, ((struct sNode*)right_value435)->finalize, ((struct sNode*)right_value435)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    (come_push_stackframe("21obj.c", 1272, 3088),__exception_result_var_b403=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b403);
                                                    _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1274, "struct sNode");
                                                    _inf_obj_value14=come_increment_ref_count((come_push_stackframe("21obj.c", 1274, 3090),__exception_result_var_b404=((struct sGCIncNode*)(right_value437=sGCIncNode_initialize((struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)come_null_check(((struct sGCIncNode*)(right_value436=(struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "21obj.c", 1274, "sGCIncNode"))), "21obj.c", 1274, 3089))),(struct sNode*)come_increment_ref_count(node_236),info))), come_pop_stackframe(), __exception_result_var_b404));
                                                    _inf_value14->_protocol_obj=_inf_obj_value14;
                                                    _inf_value14->finalize=(void*)sGCIncNode_finalize;
                                                    _inf_value14->clone=(void*)sGCIncNode_clone;
                                                    _inf_value14->compile=(void*)sGCIncNode_compile;
                                                    _inf_value14->sline=(void*)sNodeBase_sline;
                                                    _inf_value14->sname=(void*)sNodeBase_sname;
                                                    _inf_value14->terminated=(void*)sNodeBase_terminated;
                                                    _inf_value14->kind=(void*)sGCIncNode_kind;
                                                    __result239__ = __result_obj__ = ((struct sNode*)(right_value441=_inf_value14));
                                                    if(node_236) { node_236 = come_decrement_ref_count2(node_236, ((struct sNode*)node_236)->finalize, ((struct sNode*)node_236)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    come_call_finalizer3(right_value436,sGCIncNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer3(right_value437,sGCIncNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    if(right_value441) { right_value441 = come_decrement_ref_count2(right_value441, ((struct sNode*)right_value441)->finalize, ((struct sNode*)right_value441)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    return __result239__;
                                                    if(node_236) { node_236 = come_decrement_ref_count2(node_236, ((struct sNode*)node_236)->finalize, ((struct sNode*)node_236)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                else {
                                                    if(_if_conditional347=(come_push_stackframe("21obj.c", 1276, 3117),__exception_result_var_b407=charp_operator_equals(buf,"gc_dec"), come_pop_stackframe(), __exception_result_var_b407)&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1276, 3118)), "21obj.c", 1276, 3119))->p, "21obj.c", 1276, 3120))==40,                                                    _if_conditional347) {
                                                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1277, 3121)), "21obj.c", 1277, 3122))->p++;
                                                        (come_push_stackframe("21obj.c", 1278,3123),skip_spaces_and_lf(info),come_pop_stackframe());
                                                        node_238=(struct sNode*)come_increment_ref_count((come_push_stackframe("21obj.c", 1280, 3124),__exception_result_var_b408=((struct sNode*)(right_value442=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b408));
                                                        if(right_value442) { right_value442 = come_decrement_ref_count2(right_value442, ((struct sNode*)right_value442)->finalize, ((struct sNode*)right_value442)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        (come_push_stackframe("21obj.c", 1282, 3125),__exception_result_var_b409=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b409);
                                                        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1284, "struct sNode");
                                                        _inf_obj_value15=come_increment_ref_count((come_push_stackframe("21obj.c", 1284, 3127),__exception_result_var_b410=((struct sGCDecNode*)(right_value444=sGCDecNode_initialize((struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)come_null_check(((struct sGCDecNode*)(right_value443=(struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "21obj.c", 1284, "sGCDecNode"))), "21obj.c", 1284, 3126))),(struct sNode*)come_increment_ref_count(node_238),info))), come_pop_stackframe(), __exception_result_var_b410));
                                                        _inf_value15->_protocol_obj=_inf_obj_value15;
                                                        _inf_value15->finalize=(void*)sGCDecNode_finalize;
                                                        _inf_value15->clone=(void*)sGCDecNode_clone;
                                                        _inf_value15->compile=(void*)sGCDecNode_compile;
                                                        _inf_value15->sline=(void*)sNodeBase_sline;
                                                        _inf_value15->sname=(void*)sNodeBase_sname;
                                                        _inf_value15->terminated=(void*)sNodeBase_terminated;
                                                        _inf_value15->kind=(void*)sGCDecNode_kind;
                                                        __result242__ = __result_obj__ = ((struct sNode*)(right_value448=_inf_value15));
                                                        if(node_238) { node_238 = come_decrement_ref_count2(node_238, ((struct sNode*)node_238)->finalize, ((struct sNode*)node_238)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        come_call_finalizer3(right_value443,sGCDecNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer3(right_value444,sGCDecNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                        if(right_value448) { right_value448 = come_decrement_ref_count2(right_value448, ((struct sNode*)right_value448)->finalize, ((struct sNode*)right_value448)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        return __result242__;
                                                        if(node_238) { node_238 = come_decrement_ref_count2(node_238, ((struct sNode*)node_238)->finalize, ((struct sNode*)node_238)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    else {
                                                        if(_if_conditional354=(come_push_stackframe("21obj.c", 1286, 3154),__exception_result_var_b413=charp_operator_equals(buf,"isheap"), come_pop_stackframe(), __exception_result_var_b413)&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1286, 3155)), "21obj.c", 1286, 3156))->p, "21obj.c", 1286, 3157))==40,                                                        _if_conditional354) {
                                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1287, 3158)), "21obj.c", 1287, 3159))->p++;
                                                            (come_push_stackframe("21obj.c", 1288,3160),skip_spaces_and_lf(info),come_pop_stackframe());
                                                            multiple_assign_var5=(come_push_stackframe("21obj.c", 1290, 3161),__exception_result_var_b414=((struct tuple3$3sTypephcharphbool*)(right_value449=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b414);
                                                            param_type_240=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                                                            param_name_241=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                                                            err_242=multiple_assign_var5->v3;
                                                            come_call_finalizer3(right_value449,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            if(_if_conditional355=!err_242,                                                            _if_conditional355) {
                                                                (come_push_stackframe("21obj.c", 1292,3162),err_msg(info,"parse_type failed"),come_pop_stackframe());
                                                                (come_push_stackframe("21obj.c", 1293,3163),exit(2),come_pop_stackframe());
                                                            }
                                                            type2_243=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 1296, 3166),__exception_result_var_b415=((struct sType*)(right_value450=solve_generics(param_type_240,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1296, 3164)), "21obj.c", 1296, 3165))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b415));
                                                            come_call_finalizer3(right_value450,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                            (come_push_stackframe("21obj.c", 1298, 3167),__exception_result_var_b416=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b416);
                                                            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1300, "struct sNode");
                                                            _inf_obj_value16=come_increment_ref_count((come_push_stackframe("21obj.c", 1300, 3169),__exception_result_var_b417=((struct sIsHeap*)(right_value452=sIsHeap_initialize((struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)come_null_check(((struct sIsHeap*)(right_value451=(struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "21obj.c", 1300, "sIsHeap"))), "21obj.c", 1300, 3168))),(struct sType*)come_increment_ref_count(type2_243),info))), come_pop_stackframe(), __exception_result_var_b417));
                                                            _inf_value16->_protocol_obj=_inf_obj_value16;
                                                            _inf_value16->finalize=(void*)sIsHeap_finalize;
                                                            _inf_value16->clone=(void*)sIsHeap_clone;
                                                            _inf_value16->compile=(void*)sIsHeap_compile;
                                                            _inf_value16->sline=(void*)sNodeBase_sline;
                                                            _inf_value16->sname=(void*)sNodeBase_sname;
                                                            _inf_value16->terminated=(void*)sNodeBase_terminated;
                                                            _inf_value16->kind=(void*)sIsHeap_kind;
                                                            __result245__ = __result_obj__ = ((struct sNode*)(right_value456=_inf_value16));
                                                            come_call_finalizer3(param_type_240,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            param_name_241 = come_decrement_ref_count2(param_name_241, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer3(type2_243,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer3(right_value451,sIsHeap_finalize, 0, 1, 0, 0, __result_obj__);
                                                            come_call_finalizer3(right_value452,sIsHeap_finalize, 0, 1, 0, 0, __result_obj__);
                                                            if(right_value456) { right_value456 = come_decrement_ref_count2(right_value456, ((struct sNode*)right_value456)->finalize, ((struct sNode*)right_value456)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            return __result245__;
                                                            come_call_finalizer3(param_type_240,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            param_name_241 = come_decrement_ref_count2(param_name_241, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer3(type2_243,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        }
                                                        else {
                                                            if(_if_conditional362=(come_push_stackframe("21obj.c", 1302, 3196),__exception_result_var_b420=charp_operator_equals(buf,"ispointer"), come_pop_stackframe(), __exception_result_var_b420)&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1302, 3197)), "21obj.c", 1302, 3198))->p, "21obj.c", 1302, 3199))==40,                                                            _if_conditional362) {
                                                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1303, 3200)), "21obj.c", 1303, 3201))->p++;
                                                                (come_push_stackframe("21obj.c", 1304,3202),skip_spaces_and_lf(info),come_pop_stackframe());
                                                                multiple_assign_var6=(come_push_stackframe("21obj.c", 1306, 3203),__exception_result_var_b421=((struct tuple3$3sTypephcharphbool*)(right_value457=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b421);
                                                                param_type_245=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                                                                param_name_246=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                                                                err_247=multiple_assign_var6->v3;
                                                                come_call_finalizer3(right_value457,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                if(_if_conditional363=!err_247,                                                                _if_conditional363) {
                                                                    (come_push_stackframe("21obj.c", 1308,3204),err_msg(info,"parse_type failed"),come_pop_stackframe());
                                                                    (come_push_stackframe("21obj.c", 1309,3205),exit(2),come_pop_stackframe());
                                                                }
                                                                type2_248=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 1312, 3208),__exception_result_var_b422=((struct sType*)(right_value458=solve_generics(param_type_245,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1312, 3206)), "21obj.c", 1312, 3207))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b422));
                                                                come_call_finalizer3(right_value458,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                                (come_push_stackframe("21obj.c", 1314, 3209),__exception_result_var_b423=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b423);
                                                                _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1316, "struct sNode");
                                                                _inf_obj_value17=come_increment_ref_count((come_push_stackframe("21obj.c", 1316, 3211),__exception_result_var_b424=((struct sIsPointer*)(right_value460=sIsPointer_initialize((struct sIsPointer*)come_increment_ref_count(((struct sIsPointer*)come_null_check(((struct sIsPointer*)(right_value459=(struct sIsPointer*)come_calloc(1, sizeof(struct sIsPointer)*(1), "21obj.c", 1316, "sIsPointer"))), "21obj.c", 1316, 3210))),(struct sType*)come_increment_ref_count(type2_248),info))), come_pop_stackframe(), __exception_result_var_b424));
                                                                _inf_value17->_protocol_obj=_inf_obj_value17;
                                                                _inf_value17->finalize=(void*)sIsPointer_finalize;
                                                                _inf_value17->clone=(void*)sIsPointer_clone;
                                                                _inf_value17->compile=(void*)sIsPointer_compile;
                                                                _inf_value17->sline=(void*)sNodeBase_sline;
                                                                _inf_value17->sname=(void*)sNodeBase_sname;
                                                                _inf_value17->terminated=(void*)sNodeBase_terminated;
                                                                _inf_value17->kind=(void*)sIsPointer_kind;
                                                                __result248__ = __result_obj__ = ((struct sNode*)(right_value464=_inf_value17));
                                                                come_call_finalizer3(param_type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                param_name_246 = come_decrement_ref_count2(param_name_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer3(type2_248,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer3(right_value459,sIsPointer_finalize, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer3(right_value460,sIsPointer_finalize, 0, 1, 0, 0, __result_obj__);
                                                                if(right_value464) { right_value464 = come_decrement_ref_count2(right_value464, ((struct sNode*)right_value464)->finalize, ((struct sNode*)right_value464)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                return __result248__;
                                                                come_call_finalizer3(param_type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                param_name_246 = come_decrement_ref_count2(param_name_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer3(type2_248,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            }
                                                            else {
                                                                if(_if_conditional370=(come_push_stackframe("21obj.c", 1318, 3238),__exception_result_var_b427=charp_operator_equals(buf,"using"), come_pop_stackframe(), __exception_result_var_b427),                                                                _if_conditional370) {
                                                                    if(_if_conditional371=(come_push_stackframe("21obj.c", 1319, 3239),__exception_result_var_b428=parsecmp("neo-c",info), come_pop_stackframe(), __exception_result_var_b428),                                                                    _if_conditional371) {
                                                                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1320, 3240)), "21obj.c", 1320, 3241))->p+=(come_push_stackframe("21obj.c", 1320, 3242),__exception_result_var_b429=strlen("neo-c"), come_pop_stackframe(), __exception_result_var_b429);
                                                                        (come_push_stackframe("21obj.c", 1321,3243),skip_spaces_and_lf(info),come_pop_stackframe());
                                                                        gComeC=(_Bool)0;
                                                                        _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1325, "struct sNode");
                                                                        _inf_obj_value18=come_increment_ref_count((come_push_stackframe("21obj.c", 1325, 3245),__exception_result_var_b430=((struct sNothingNode*)(right_value466=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)come_null_check(((struct sNothingNode*)(right_value465=(struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1325, "sNothingNode"))), "21obj.c", 1325, 3244))),info))), come_pop_stackframe(), __exception_result_var_b430));
                                                                        _inf_value18->_protocol_obj=_inf_obj_value18;
                                                                        _inf_value18->finalize=(void*)sNothingNode_finalize;
                                                                        _inf_value18->clone=(void*)sNothingNode_clone;
                                                                        _inf_value18->compile=(void*)sNothingNode_compile;
                                                                        _inf_value18->sline=(void*)sNodeBase_sline;
                                                                        _inf_value18->sname=(void*)sNodeBase_sname;
                                                                        _inf_value18->terminated=(void*)sNodeBase_terminated;
                                                                        _inf_value18->kind=(void*)sNothingNode_kind;
                                                                        __result251__ = __result_obj__ = ((struct sNode*)(right_value469=_inf_value18));
                                                                        come_call_finalizer3(right_value465,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                        come_call_finalizer3(right_value466,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                        if(right_value469) { right_value469 = come_decrement_ref_count2(right_value469, ((struct sNode*)right_value469)->finalize, ((struct sNode*)right_value469)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                        return __result251__;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional376=(come_push_stackframe("21obj.c", 1327, 3261),__exception_result_var_b432=parsecmp("c",info), come_pop_stackframe(), __exception_result_var_b432)||(come_push_stackframe("21obj.c", 1327, 3262),__exception_result_var_b433=parsecmp("C",info), come_pop_stackframe(), __exception_result_var_b433),                                                                        _if_conditional376) {
                                                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1328, 3263)), "21obj.c", 1328, 3264))->p+=(come_push_stackframe("21obj.c", 1328, 3265),__exception_result_var_b434=strlen("c"), come_pop_stackframe(), __exception_result_var_b434);
                                                                            (come_push_stackframe("21obj.c", 1329,3266),skip_spaces_and_lf(info),come_pop_stackframe());
                                                                            gComeC=(_Bool)1;
                                                                            if(_if_conditional377=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1333, 3267)), "21obj.c", 1333, 3268))->p, "21obj.c", 1333, 3269))==123,                                                                            _if_conditional377) {
                                                                                node_251=(struct sNode*)come_increment_ref_count((come_push_stackframe("21obj.c", 1334, 3270),__exception_result_var_b435=((struct sNode*)(right_value470=parse_normal_block(info))), come_pop_stackframe(), __exception_result_var_b435));
                                                                                if(right_value470) { right_value470 = come_decrement_ref_count2(right_value470, ((struct sNode*)right_value470)->finalize, ((struct sNode*)right_value470)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                gComeC=(_Bool)0;
                                                                                __result252__ = __result_obj__ = node_251;
                                                                                if(node_251) { node_251 = come_decrement_ref_count2(node_251, ((struct sNode*)node_251)->finalize, ((struct sNode*)node_251)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                return __result252__;
                                                                                if(node_251) { node_251 = come_decrement_ref_count2(node_251, ((struct sNode*)node_251)->finalize, ((struct sNode*)node_251)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                            }
                                                                            else {
                                                                                _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1341, "struct sNode");
                                                                                _inf_obj_value19=come_increment_ref_count((come_push_stackframe("21obj.c", 1341, 3272),__exception_result_var_b436=((struct sNothingNode*)(right_value472=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)come_null_check(((struct sNothingNode*)(right_value471=(struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1341, "sNothingNode"))), "21obj.c", 1341, 3271))),info))), come_pop_stackframe(), __exception_result_var_b436));
                                                                                _inf_value19->_protocol_obj=_inf_obj_value19;
                                                                                _inf_value19->finalize=(void*)sNothingNode_finalize;
                                                                                _inf_value19->clone=(void*)sNothingNode_clone;
                                                                                _inf_value19->compile=(void*)sNothingNode_compile;
                                                                                _inf_value19->sline=(void*)sNodeBase_sline;
                                                                                _inf_value19->sname=(void*)sNodeBase_sname;
                                                                                _inf_value19->terminated=(void*)sNodeBase_terminated;
                                                                                _inf_value19->kind=(void*)sNothingNode_kind;
                                                                                __result255__ = __result_obj__ = ((struct sNode*)(right_value475=_inf_value19));
                                                                                come_call_finalizer3(right_value471,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                come_call_finalizer3(right_value472,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                if(right_value475) { right_value475 = come_decrement_ref_count2(right_value475, ((struct sNode*)right_value475)->finalize, ((struct sNode*)right_value475)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result255__;
                                                                            }
                                                                        }
                                                                        else {
                                                                            if(_if_conditional382=(come_push_stackframe("21obj.c", 1344, 3288),__exception_result_var_b438=parsecmp("gc",info), come_pop_stackframe(), __exception_result_var_b438),                                                                            _if_conditional382) {
                                                                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1345, 3289)), "21obj.c", 1345, 3290))->p+=(come_push_stackframe("21obj.c", 1345, 3291),__exception_result_var_b439=strlen("gc"), come_pop_stackframe(), __exception_result_var_b439);
                                                                                (come_push_stackframe("21obj.c", 1346,3292),skip_spaces_and_lf(info),come_pop_stackframe());
                                                                                _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1348, "struct sNode");
                                                                                _inf_obj_value20=come_increment_ref_count((come_push_stackframe("21obj.c", 1348, 3294),__exception_result_var_b440=((struct sNothingNode*)(right_value477=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)come_null_check(((struct sNothingNode*)(right_value476=(struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1348, "sNothingNode"))), "21obj.c", 1348, 3293))),info))), come_pop_stackframe(), __exception_result_var_b440));
                                                                                _inf_value20->_protocol_obj=_inf_obj_value20;
                                                                                _inf_value20->finalize=(void*)sNothingNode_finalize;
                                                                                _inf_value20->clone=(void*)sNothingNode_clone;
                                                                                _inf_value20->compile=(void*)sNothingNode_compile;
                                                                                _inf_value20->sline=(void*)sNodeBase_sline;
                                                                                _inf_value20->sname=(void*)sNodeBase_sname;
                                                                                _inf_value20->terminated=(void*)sNodeBase_terminated;
                                                                                _inf_value20->kind=(void*)sNothingNode_kind;
                                                                                __result258__ = __result_obj__ = ((struct sNode*)(right_value480=_inf_value20));
                                                                                come_call_finalizer3(right_value476,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                come_call_finalizer3(right_value477,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                if(right_value480) { right_value480 = come_decrement_ref_count2(right_value480, ((struct sNode*)right_value480)->finalize, ((struct sNode*)right_value480)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result258__;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional387=(come_push_stackframe("21obj.c", 1350, 3310),__exception_result_var_b442=parsecmp("no-gc",info), come_pop_stackframe(), __exception_result_var_b442),                                                                                _if_conditional387) {
                                                                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1351, 3311)), "21obj.c", 1351, 3312))->p+=(come_push_stackframe("21obj.c", 1351, 3313),__exception_result_var_b443=strlen("no-gc"), come_pop_stackframe(), __exception_result_var_b443);
                                                                                    (come_push_stackframe("21obj.c", 1352,3314),skip_spaces_and_lf(info),come_pop_stackframe());
                                                                                    _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1355, "struct sNode");
                                                                                    _inf_obj_value21=come_increment_ref_count((come_push_stackframe("21obj.c", 1355, 3316),__exception_result_var_b444=((struct sNothingNode*)(right_value482=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)come_null_check(((struct sNothingNode*)(right_value481=(struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1355, "sNothingNode"))), "21obj.c", 1355, 3315))),info))), come_pop_stackframe(), __exception_result_var_b444));
                                                                                    _inf_value21->_protocol_obj=_inf_obj_value21;
                                                                                    _inf_value21->finalize=(void*)sNothingNode_finalize;
                                                                                    _inf_value21->clone=(void*)sNothingNode_clone;
                                                                                    _inf_value21->compile=(void*)sNothingNode_compile;
                                                                                    _inf_value21->sline=(void*)sNodeBase_sline;
                                                                                    _inf_value21->sname=(void*)sNodeBase_sname;
                                                                                    _inf_value21->terminated=(void*)sNodeBase_terminated;
                                                                                    _inf_value21->kind=(void*)sNothingNode_kind;
                                                                                    __result261__ = __result_obj__ = ((struct sNode*)(right_value485=_inf_value21));
                                                                                    come_call_finalizer3(right_value481,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    come_call_finalizer3(right_value482,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    if(right_value485) { right_value485 = come_decrement_ref_count2(right_value485, ((struct sNode*)right_value485)->finalize, ((struct sNode*)right_value485)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    return __result261__;
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional392=(come_push_stackframe("21obj.c", 1357, 3332),__exception_result_var_b446=parsecmp("unsafe",info), come_pop_stackframe(), __exception_result_var_b446),                                                                                    _if_conditional392) {
                                                                                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1358, 3333)), "21obj.c", 1358, 3334))->p+=(come_push_stackframe("21obj.c", 1358, 3335),__exception_result_var_b447=strlen("unsafe"), come_pop_stackframe(), __exception_result_var_b447);
                                                                                        (come_push_stackframe("21obj.c", 1359,3336),skip_spaces_and_lf(info),come_pop_stackframe());
                                                                                        _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1361, "struct sNode");
                                                                                        _inf_obj_value22=come_increment_ref_count((come_push_stackframe("21obj.c", 1361, 3338),__exception_result_var_b448=((struct sNothingNode*)(right_value487=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)come_null_check(((struct sNothingNode*)(right_value486=(struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1361, "sNothingNode"))), "21obj.c", 1361, 3337))),info))), come_pop_stackframe(), __exception_result_var_b448));
                                                                                        _inf_value22->_protocol_obj=_inf_obj_value22;
                                                                                        _inf_value22->finalize=(void*)sNothingNode_finalize;
                                                                                        _inf_value22->clone=(void*)sNothingNode_clone;
                                                                                        _inf_value22->compile=(void*)sNothingNode_compile;
                                                                                        _inf_value22->sline=(void*)sNodeBase_sline;
                                                                                        _inf_value22->sname=(void*)sNodeBase_sname;
                                                                                        _inf_value22->terminated=(void*)sNodeBase_terminated;
                                                                                        _inf_value22->kind=(void*)sNothingNode_kind;
                                                                                        __result264__ = __result_obj__ = ((struct sNode*)(right_value490=_inf_value22));
                                                                                        come_call_finalizer3(right_value486,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer3(right_value487,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value490) { right_value490 = come_decrement_ref_count2(right_value490, ((struct sNode*)right_value490)->finalize, ((struct sNode*)right_value490)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        return __result264__;
                                                                                    }
                                                                                    else {
                                                                                        if(_if_conditional397=(come_push_stackframe("21obj.c", 1363, 3354),__exception_result_var_b450=parsecmp("no-null-check",info), come_pop_stackframe(), __exception_result_var_b450),                                                                                        _if_conditional397) {
                                                                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1364, 3355)), "21obj.c", 1364, 3356))->p+=(come_push_stackframe("21obj.c", 1364, 3357),__exception_result_var_b451=strlen("no-null-check"), come_pop_stackframe(), __exception_result_var_b451);
                                                                                            (come_push_stackframe("21obj.c", 1365,3358),skip_spaces_and_lf(info),come_pop_stackframe());
                                                                                            _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1367, "struct sNode");
                                                                                            _inf_obj_value23=come_increment_ref_count((come_push_stackframe("21obj.c", 1367, 3360),__exception_result_var_b452=((struct sNothingNode*)(right_value492=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)come_null_check(((struct sNothingNode*)(right_value491=(struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1367, "sNothingNode"))), "21obj.c", 1367, 3359))),info))), come_pop_stackframe(), __exception_result_var_b452));
                                                                                            _inf_value23->_protocol_obj=_inf_obj_value23;
                                                                                            _inf_value23->finalize=(void*)sNothingNode_finalize;
                                                                                            _inf_value23->clone=(void*)sNothingNode_clone;
                                                                                            _inf_value23->compile=(void*)sNothingNode_compile;
                                                                                            _inf_value23->sline=(void*)sNodeBase_sline;
                                                                                            _inf_value23->sname=(void*)sNodeBase_sname;
                                                                                            _inf_value23->terminated=(void*)sNodeBase_terminated;
                                                                                            _inf_value23->kind=(void*)sNothingNode_kind;
                                                                                            __result267__ = __result_obj__ = ((struct sNode*)(right_value495=_inf_value23));
                                                                                            come_call_finalizer3(right_value491,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            come_call_finalizer3(right_value492,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            if(right_value495) { right_value495 = come_decrement_ref_count2(right_value495, ((struct sNode*)right_value495)->finalize, ((struct sNode*)right_value495)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            return __result267__;
                                                                                        }
                                                                                        else {
                                                                                            (come_push_stackframe("21obj.c", 1370,3376),err_msg(info,"invalid using"),come_pop_stackframe());
                                                                                            (come_push_stackframe("21obj.c", 1371,3377),exit(2),come_pop_stackframe());
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    if(_if_conditional402=(come_push_stackframe("21obj.c", 1374, 3378),__exception_result_var_b454=charp_operator_equals(buf,"sizeof"), come_pop_stackframe(), __exception_result_var_b454),                                                                    _if_conditional402) {
                                                                        paren_257=(_Bool)0;
                                                                        if(_if_conditional403=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1376, 3379)), "21obj.c", 1376, 3380))->p, "21obj.c", 1376, 3381))==40,                                                                        _if_conditional403) {
                                                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1377, 3382)), "21obj.c", 1377, 3383))->p++;
                                                                            (come_push_stackframe("21obj.c", 1378,3384),skip_spaces_and_lf(info),come_pop_stackframe());
                                                                            paren_257=(_Bool)1;
                                                                        }
                                                                        is_type_name_flag_258=(_Bool)0;
                                                                        {
                                                                            p_259=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1386, 3385)), "21obj.c", 1386, 3386))->p;
                                                                            sline_260=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1387, 3387)), "21obj.c", 1387, 3388))->sline;
                                                                            if(_if_conditional404=(come_push_stackframe("21obj.c", 1389, 3392),__exception_result_var_b455=xisalpha(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1389, 3389)), "21obj.c", 1389, 3390))->p, "21obj.c", 1389, 3391))), come_pop_stackframe(), __exception_result_var_b455)||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1389, 3393)), "21obj.c", 1389, 3394))->p, "21obj.c", 1389, 3395))==95,                                                                            _if_conditional404) {
                                                                                word_261=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 1390, 3396),__exception_result_var_b456=((char*)(right_value496=parse_word(info))), come_pop_stackframe(), __exception_result_var_b456));
                                                                                right_value496 = come_decrement_ref_count2(right_value496, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                if(_if_conditional405=(come_push_stackframe("21obj.c", 1392, 3397),__exception_result_var_b457=is_type_name(word_261,info), come_pop_stackframe(), __exception_result_var_b457),                                                                                _if_conditional405) {
                                                                                    is_type_name_flag_258=(_Bool)1;
                                                                                }
                                                                                word_261 = come_decrement_ref_count2(word_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1397, 3398)), "21obj.c", 1397, 3399))->p=p_259;
                                                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1398, 3400)), "21obj.c", 1398, 3401))->sline=sline_260;
                                                                        }
                                                                        if(is_type_name_flag_258) {
                                                                            multiple_assign_var7=(come_push_stackframe("21obj.c", 1402, 3402),__exception_result_var_b458=((struct tuple3$3sTypephcharphbool*)(right_value497=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b458);
                                                                            type_262=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                                                                            name_263=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                                                                            err_264=multiple_assign_var7->v3;
                                                                            come_call_finalizer3(right_value497,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                            if(_if_conditional407=!err_264,                                                                            _if_conditional407) {
                                                                                (come_push_stackframe("21obj.c", 1404,3403),err_msg(info,"parse type"),come_pop_stackframe());
                                                                                (come_push_stackframe("21obj.c", 1405,3404),exit(2),come_pop_stackframe());
                                                                            }
                                                                            if(_if_conditional408=paren_257&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1408, 3405)), "21obj.c", 1408, 3406))->p, "21obj.c", 1408, 3407))==41,                                                                            _if_conditional408) {
                                                                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1409, 3408)), "21obj.c", 1409, 3409))->p++;
                                                                                (come_push_stackframe("21obj.c", 1410,3410),skip_spaces_and_lf(info),come_pop_stackframe());
                                                                            }
                                                                            _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1415, "struct sNode");
                                                                            _inf_obj_value24=come_increment_ref_count((come_push_stackframe("21obj.c", 1415, 3412),__exception_result_var_b459=((struct sSizeOfNode*)(right_value499=sSizeOfNode_initialize((struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)come_null_check(((struct sSizeOfNode*)(right_value498=(struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "21obj.c", 1415, "sSizeOfNode"))), "21obj.c", 1415, 3411))),(struct sType*)come_increment_ref_count(type_262),info))), come_pop_stackframe(), __exception_result_var_b459));
                                                                            _inf_value24->_protocol_obj=_inf_obj_value24;
                                                                            _inf_value24->finalize=(void*)sSizeOfNode_finalize;
                                                                            _inf_value24->clone=(void*)sSizeOfNode_clone;
                                                                            _inf_value24->compile=(void*)sSizeOfNode_compile;
                                                                            _inf_value24->sline=(void*)sNodeBase_sline;
                                                                            _inf_value24->sname=(void*)sNodeBase_sname;
                                                                            _inf_value24->terminated=(void*)sNodeBase_terminated;
                                                                            _inf_value24->kind=(void*)sSizeOfNode_kind;
                                                                            __result270__ = __result_obj__ = ((struct sNode*)(right_value503=_inf_value24));
                                                                            come_call_finalizer3(type_262,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                            name_263 = come_decrement_ref_count2(name_263, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            come_call_finalizer3(right_value498,sSizeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                            come_call_finalizer3(right_value499,sSizeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                            if(right_value503) { right_value503 = come_decrement_ref_count2(right_value503, ((struct sNode*)right_value503)->finalize, ((struct sNode*)right_value503)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            return __result270__;
                                                                            come_call_finalizer3(type_262,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                            name_263 = come_decrement_ref_count2(name_263, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        else {
                                                                            exp_266=(struct sNode*)come_increment_ref_count((come_push_stackframe("21obj.c", 1418, 3439),__exception_result_var_b462=((struct sNode*)(right_value504=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b462));
                                                                            if(right_value504) { right_value504 = come_decrement_ref_count2(right_value504, ((struct sNode*)right_value504)->finalize, ((struct sNode*)right_value504)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            if(_if_conditional415=paren_257&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1420, 3440)), "21obj.c", 1420, 3441))->p, "21obj.c", 1420, 3442))==41,                                                                            _if_conditional415) {
                                                                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1421, 3443)), "21obj.c", 1421, 3444))->p++;
                                                                                (come_push_stackframe("21obj.c", 1422,3445),skip_spaces_and_lf(info),come_pop_stackframe());
                                                                            }
                                                                            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1427, "struct sNode");
                                                                            _inf_obj_value25=come_increment_ref_count((come_push_stackframe("21obj.c", 1427, 3447),__exception_result_var_b463=((struct sSizeOfExpNode*)(right_value506=sSizeOfExpNode_initialize((struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)come_null_check(((struct sSizeOfExpNode*)(right_value505=(struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "21obj.c", 1427, "sSizeOfExpNode"))), "21obj.c", 1427, 3446))),(struct sNode*)come_increment_ref_count(exp_266),info))), come_pop_stackframe(), __exception_result_var_b463));
                                                                            _inf_value25->_protocol_obj=_inf_obj_value25;
                                                                            _inf_value25->finalize=(void*)sSizeOfExpNode_finalize;
                                                                            _inf_value25->clone=(void*)sSizeOfExpNode_clone;
                                                                            _inf_value25->compile=(void*)sSizeOfExpNode_compile;
                                                                            _inf_value25->sline=(void*)sNodeBase_sline;
                                                                            _inf_value25->sname=(void*)sNodeBase_sname;
                                                                            _inf_value25->terminated=(void*)sNodeBase_terminated;
                                                                            _inf_value25->kind=(void*)sSizeOfExpNode_kind;
                                                                            __result273__ = __result_obj__ = ((struct sNode*)(right_value510=_inf_value25));
                                                                            if(exp_266) { exp_266 = come_decrement_ref_count2(exp_266, ((struct sNode*)exp_266)->finalize, ((struct sNode*)exp_266)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                            come_call_finalizer3(right_value505,sSizeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                            come_call_finalizer3(right_value506,sSizeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                            if(right_value510) { right_value510 = come_decrement_ref_count2(right_value510, ((struct sNode*)right_value510)->finalize, ((struct sNode*)right_value510)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            return __result273__;
                                                                            if(exp_266) { exp_266 = come_decrement_ref_count2(exp_266, ((struct sNode*)exp_266)->finalize, ((struct sNode*)exp_266)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(_if_conditional422=(come_push_stackframe("21obj.c", 1430, 3474),__exception_result_var_b466=charp_operator_equals(buf,"typeof"), come_pop_stackframe(), __exception_result_var_b466),                                                                        _if_conditional422) {
                                                                            paren_268=(_Bool)0;
                                                                            if(_if_conditional423=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1434, 3475)), "21obj.c", 1434, 3476))->p, "21obj.c", 1434, 3477))==40,                                                                            _if_conditional423) {
                                                                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1435, 3478)), "21obj.c", 1435, 3479))->p++;
                                                                                (come_push_stackframe("21obj.c", 1436,3480),skip_spaces_and_lf(info),come_pop_stackframe());
                                                                                paren_268=(_Bool)1;
                                                                            }
                                                                            is_type_name_flag_269=(_Bool)0;
                                                                            {
                                                                                p_270=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1443, 3481)), "21obj.c", 1443, 3482))->p;
                                                                                sline_271=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1444, 3483)), "21obj.c", 1444, 3484))->sline;
                                                                                if(_if_conditional424=(come_push_stackframe("21obj.c", 1446, 3488),__exception_result_var_b467=xisalpha(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1446, 3485)), "21obj.c", 1446, 3486))->p, "21obj.c", 1446, 3487))), come_pop_stackframe(), __exception_result_var_b467)||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1446, 3489)), "21obj.c", 1446, 3490))->p, "21obj.c", 1446, 3491))==95,                                                                                _if_conditional424) {
                                                                                    word_272=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 1447, 3492),__exception_result_var_b468=((char*)(right_value511=parse_word(info))), come_pop_stackframe(), __exception_result_var_b468));
                                                                                    right_value511 = come_decrement_ref_count2(right_value511, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    if(_if_conditional425=(come_push_stackframe("21obj.c", 1449, 3493),__exception_result_var_b469=is_type_name(word_272,info), come_pop_stackframe(), __exception_result_var_b469),                                                                                    _if_conditional425) {
                                                                                        is_type_name_flag_269=(_Bool)1;
                                                                                    }
                                                                                    word_272 = come_decrement_ref_count2(word_272, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1454, 3494)), "21obj.c", 1454, 3495))->p=p_270;
                                                                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1455, 3496)), "21obj.c", 1455, 3497))->sline=sline_271;
                                                                            }
                                                                            if(is_type_name_flag_269) {
                                                                                multiple_assign_var8=(come_push_stackframe("21obj.c", 1459, 3498),__exception_result_var_b470=((struct tuple3$3sTypephcharphbool*)(right_value512=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b470);
                                                                                type_273=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                                                                                name_274=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                                                                                err_275=multiple_assign_var8->v3;
                                                                                come_call_finalizer3(right_value512,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                if(_if_conditional427=!err_275,                                                                                _if_conditional427) {
                                                                                    (come_push_stackframe("21obj.c", 1461,3499),err_msg(info,"parse type"),come_pop_stackframe());
                                                                                    (come_push_stackframe("21obj.c", 1462,3500),exit(2),come_pop_stackframe());
                                                                                }
                                                                                if(_if_conditional428=paren_268&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1467, 3501)), "21obj.c", 1467, 3502))->p, "21obj.c", 1467, 3503))==41,                                                                                _if_conditional428) {
                                                                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1468, 3504)), "21obj.c", 1468, 3505))->p++;
                                                                                    (come_push_stackframe("21obj.c", 1469,3506),skip_spaces_and_lf(info),come_pop_stackframe());
                                                                                }
                                                                                _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1472, "struct sNode");
                                                                                _inf_obj_value26=come_increment_ref_count((come_push_stackframe("21obj.c", 1472, 3508),__exception_result_var_b471=((struct sTypeOfNode*)(right_value514=sTypeOfNode_initialize((struct sTypeOfNode*)come_increment_ref_count(((struct sTypeOfNode*)come_null_check(((struct sTypeOfNode*)(right_value513=(struct sTypeOfNode*)come_calloc(1, sizeof(struct sTypeOfNode)*(1), "21obj.c", 1472, "sTypeOfNode"))), "21obj.c", 1472, 3507))),(struct sType*)come_increment_ref_count(type_273),info))), come_pop_stackframe(), __exception_result_var_b471));
                                                                                _inf_value26->_protocol_obj=_inf_obj_value26;
                                                                                _inf_value26->finalize=(void*)sTypeOfNode_finalize;
                                                                                _inf_value26->clone=(void*)sTypeOfNode_clone;
                                                                                _inf_value26->compile=(void*)sTypeOfNode_compile;
                                                                                _inf_value26->sline=(void*)sNodeBase_sline;
                                                                                _inf_value26->sname=(void*)sNodeBase_sname;
                                                                                _inf_value26->terminated=(void*)sNodeBase_terminated;
                                                                                _inf_value26->kind=(void*)sTypeOfNode_kind;
                                                                                __result276__ = __result_obj__ = ((struct sNode*)(right_value518=_inf_value26));
                                                                                come_call_finalizer3(type_273,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                name_274 = come_decrement_ref_count2(name_274, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                come_call_finalizer3(right_value513,sTypeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                come_call_finalizer3(right_value514,sTypeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                if(right_value518) { right_value518 = come_decrement_ref_count2(right_value518, ((struct sNode*)right_value518)->finalize, ((struct sNode*)right_value518)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result276__;
                                                                                come_call_finalizer3(type_273,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                name_274 = come_decrement_ref_count2(name_274, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            else {
                                                                                exp_277=(struct sNode*)come_increment_ref_count((come_push_stackframe("21obj.c", 1475, 3535),__exception_result_var_b474=((struct sNode*)(right_value519=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b474));
                                                                                if(right_value519) { right_value519 = come_decrement_ref_count2(right_value519, ((struct sNode*)right_value519)->finalize, ((struct sNode*)right_value519)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                if(_if_conditional435=paren_268&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1479, 3536)), "21obj.c", 1479, 3537))->p, "21obj.c", 1479, 3538))==41,                                                                                _if_conditional435) {
                                                                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1480, 3539)), "21obj.c", 1480, 3540))->p++;
                                                                                    (come_push_stackframe("21obj.c", 1481,3541),skip_spaces_and_lf(info),come_pop_stackframe());
                                                                                }
                                                                                _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1484, "struct sNode");
                                                                                _inf_obj_value27=come_increment_ref_count((come_push_stackframe("21obj.c", 1484, 3543),__exception_result_var_b475=((struct sTypeOfExpNode*)(right_value521=sTypeOfExpNode_initialize((struct sTypeOfExpNode*)come_increment_ref_count(((struct sTypeOfExpNode*)come_null_check(((struct sTypeOfExpNode*)(right_value520=(struct sTypeOfExpNode*)come_calloc(1, sizeof(struct sTypeOfExpNode)*(1), "21obj.c", 1484, "sTypeOfExpNode"))), "21obj.c", 1484, 3542))),(struct sNode*)come_increment_ref_count(exp_277),info))), come_pop_stackframe(), __exception_result_var_b475));
                                                                                _inf_value27->_protocol_obj=_inf_obj_value27;
                                                                                _inf_value27->finalize=(void*)sTypeOfExpNode_finalize;
                                                                                _inf_value27->clone=(void*)sTypeOfExpNode_clone;
                                                                                _inf_value27->compile=(void*)sTypeOfExpNode_compile;
                                                                                _inf_value27->sline=(void*)sNodeBase_sline;
                                                                                _inf_value27->sname=(void*)sNodeBase_sname;
                                                                                _inf_value27->terminated=(void*)sNodeBase_terminated;
                                                                                _inf_value27->kind=(void*)sTypeOfExpNode_kind;
                                                                                __result279__ = __result_obj__ = ((struct sNode*)(right_value525=_inf_value27));
                                                                                if(exp_277) { exp_277 = come_decrement_ref_count2(exp_277, ((struct sNode*)exp_277)->finalize, ((struct sNode*)exp_277)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                come_call_finalizer3(right_value520,sTypeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                come_call_finalizer3(right_value521,sTypeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                if(right_value525) { right_value525 = come_decrement_ref_count2(right_value525, ((struct sNode*)right_value525)->finalize, ((struct sNode*)right_value525)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result279__;
                                                                                if(exp_277) { exp_277 = come_decrement_ref_count2(exp_277, ((struct sNode*)exp_277)->finalize, ((struct sNode*)exp_277)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                            }
                                                                        }
                                                                        else {
                                                                            if(_if_conditional442=(come_push_stackframe("21obj.c", 1498, 3570),__exception_result_var_b478=charp_operator_equals(buf,"_Alignof"), come_pop_stackframe(), __exception_result_var_b478),                                                                            _if_conditional442) {
                                                                                (come_push_stackframe("21obj.c", 1499, 3571),__exception_result_var_b479=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b479);
                                                                                is_type_name_flag_279=(_Bool)0;
                                                                                {
                                                                                    p_280=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1504, 3572)), "21obj.c", 1504, 3573))->p;
                                                                                    sline_281=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1505, 3574)), "21obj.c", 1505, 3575))->sline;
                                                                                    if(_if_conditional443=(come_push_stackframe("21obj.c", 1507, 3579),__exception_result_var_b480=xisalpha(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1507, 3576)), "21obj.c", 1507, 3577))->p, "21obj.c", 1507, 3578))), come_pop_stackframe(), __exception_result_var_b480)||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1507, 3580)), "21obj.c", 1507, 3581))->p, "21obj.c", 1507, 3582))==95,                                                                                    _if_conditional443) {
                                                                                        word_282=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 1508, 3583),__exception_result_var_b481=((char*)(right_value526=parse_word(info))), come_pop_stackframe(), __exception_result_var_b481));
                                                                                        right_value526 = come_decrement_ref_count2(right_value526, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                        if(_if_conditional444=(come_push_stackframe("21obj.c", 1510, 3584),__exception_result_var_b482=is_type_name(word_282,info), come_pop_stackframe(), __exception_result_var_b482),                                                                                        _if_conditional444) {
                                                                                            is_type_name_flag_279=(_Bool)1;
                                                                                        }
                                                                                        word_282 = come_decrement_ref_count2(word_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    }
                                                                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1515, 3585)), "21obj.c", 1515, 3586))->p=p_280;
                                                                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1516, 3587)), "21obj.c", 1516, 3588))->sline=sline_281;
                                                                                }
                                                                                if(is_type_name_flag_279) {
                                                                                    multiple_assign_var9=(come_push_stackframe("21obj.c", 1520, 3589),__exception_result_var_b483=((struct tuple3$3sTypephcharphbool*)(right_value527=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b483);
                                                                                    type_283=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                                                                                    name_284=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                                                                                    err_285=multiple_assign_var9->v3;
                                                                                    come_call_finalizer3(right_value527,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    if(_if_conditional446=!err_285,                                                                                    _if_conditional446) {
                                                                                        (come_push_stackframe("21obj.c", 1522,3590),err_msg(info,"parse type"),come_pop_stackframe());
                                                                                        (come_push_stackframe("21obj.c", 1523,3591),exit(2),come_pop_stackframe());
                                                                                    }
                                                                                    (come_push_stackframe("21obj.c", 1526, 3592),__exception_result_var_b484=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b484);
                                                                                    _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1528, "struct sNode");
                                                                                    _inf_obj_value28=come_increment_ref_count((come_push_stackframe("21obj.c", 1528, 3594),__exception_result_var_b485=((struct sAlignOfNode*)(right_value529=sAlignOfNode_initialize((struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)come_null_check(((struct sAlignOfNode*)(right_value528=(struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "21obj.c", 1528, "sAlignOfNode"))), "21obj.c", 1528, 3593))),(struct sType*)come_increment_ref_count(type_283),info))), come_pop_stackframe(), __exception_result_var_b485));
                                                                                    _inf_value28->_protocol_obj=_inf_obj_value28;
                                                                                    _inf_value28->finalize=(void*)sAlignOfNode_finalize;
                                                                                    _inf_value28->clone=(void*)sAlignOfNode_clone;
                                                                                    _inf_value28->compile=(void*)sAlignOfNode_compile;
                                                                                    _inf_value28->sline=(void*)sNodeBase_sline;
                                                                                    _inf_value28->sname=(void*)sNodeBase_sname;
                                                                                    _inf_value28->terminated=(void*)sNodeBase_terminated;
                                                                                    _inf_value28->kind=(void*)sAlignOfNode_kind;
                                                                                    __result282__ = __result_obj__ = ((struct sNode*)(right_value533=_inf_value28));
                                                                                    come_call_finalizer3(type_283,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    name_284 = come_decrement_ref_count2(name_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    come_call_finalizer3(right_value528,sAlignOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    come_call_finalizer3(right_value529,sAlignOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    if(right_value533) { right_value533 = come_decrement_ref_count2(right_value533, ((struct sNode*)right_value533)->finalize, ((struct sNode*)right_value533)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    return __result282__;
                                                                                    come_call_finalizer3(type_283,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    name_284 = come_decrement_ref_count2(name_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                else {
                                                                                    exp_287=(struct sNode*)come_increment_ref_count((come_push_stackframe("21obj.c", 1531, 3621),__exception_result_var_b488=((struct sNode*)(right_value534=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b488));
                                                                                    if(right_value534) { right_value534 = come_decrement_ref_count2(right_value534, ((struct sNode*)right_value534)->finalize, ((struct sNode*)right_value534)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    (come_push_stackframe("21obj.c", 1533, 3622),__exception_result_var_b489=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b489);
                                                                                    _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1535, "struct sNode");
                                                                                    _inf_obj_value29=come_increment_ref_count((come_push_stackframe("21obj.c", 1535, 3624),__exception_result_var_b490=((struct sAlignOfExpNode*)(right_value536=sAlignOfExpNode_initialize((struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)come_null_check(((struct sAlignOfExpNode*)(right_value535=(struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "21obj.c", 1535, "sAlignOfExpNode"))), "21obj.c", 1535, 3623))),(struct sNode*)come_increment_ref_count(exp_287),info))), come_pop_stackframe(), __exception_result_var_b490));
                                                                                    _inf_value29->_protocol_obj=_inf_obj_value29;
                                                                                    _inf_value29->finalize=(void*)sAlignOfExpNode_finalize;
                                                                                    _inf_value29->clone=(void*)sAlignOfExpNode_clone;
                                                                                    _inf_value29->compile=(void*)sAlignOfExpNode_compile;
                                                                                    _inf_value29->sline=(void*)sNodeBase_sline;
                                                                                    _inf_value29->sname=(void*)sNodeBase_sname;
                                                                                    _inf_value29->terminated=(void*)sNodeBase_terminated;
                                                                                    _inf_value29->kind=(void*)sAlignOfExpNode_kind;
                                                                                    __result285__ = __result_obj__ = ((struct sNode*)(right_value540=_inf_value29));
                                                                                    if(exp_287) { exp_287 = come_decrement_ref_count2(exp_287, ((struct sNode*)exp_287)->finalize, ((struct sNode*)exp_287)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    come_call_finalizer3(right_value535,sAlignOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    come_call_finalizer3(right_value536,sAlignOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    if(right_value540) { right_value540 = come_decrement_ref_count2(right_value540, ((struct sNode*)right_value540)->finalize, ((struct sNode*)right_value540)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    return __result285__;
                                                                                    if(exp_287) { exp_287 = come_decrement_ref_count2(exp_287, ((struct sNode*)exp_287)->finalize, ((struct sNode*)exp_287)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                }
                                                                            }
                                                                            else {
                                                                                if(_if_conditional459=(come_push_stackframe("21obj.c", 1538, 3651),__exception_result_var_b493=charp_operator_equals(buf,"__alignof__"), come_pop_stackframe(), __exception_result_var_b493),                                                                                _if_conditional459) {
                                                                                    (come_push_stackframe("21obj.c", 1539, 3652),__exception_result_var_b494=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b494);
                                                                                    is_type_name_flag_289=(_Bool)0;
                                                                                    {
                                                                                        p_290=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1544, 3653)), "21obj.c", 1544, 3654))->p;
                                                                                        sline_291=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1545, 3655)), "21obj.c", 1545, 3656))->sline;
                                                                                        if(_if_conditional460=(come_push_stackframe("21obj.c", 1547, 3660),__exception_result_var_b495=xisalpha(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1547, 3657)), "21obj.c", 1547, 3658))->p, "21obj.c", 1547, 3659))), come_pop_stackframe(), __exception_result_var_b495)||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1547, 3661)), "21obj.c", 1547, 3662))->p, "21obj.c", 1547, 3663))==95,                                                                                        _if_conditional460) {
                                                                                            word_292=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 1548, 3664),__exception_result_var_b496=((char*)(right_value541=parse_word(info))), come_pop_stackframe(), __exception_result_var_b496));
                                                                                            right_value541 = come_decrement_ref_count2(right_value541, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            if(_if_conditional461=(come_push_stackframe("21obj.c", 1550, 3665),__exception_result_var_b497=is_type_name(word_292,info), come_pop_stackframe(), __exception_result_var_b497),                                                                                            _if_conditional461) {
                                                                                                is_type_name_flag_289=(_Bool)1;
                                                                                            }
                                                                                            word_292 = come_decrement_ref_count2(word_292, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1555, 3666)), "21obj.c", 1555, 3667))->p=p_290;
                                                                                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1556, 3668)), "21obj.c", 1556, 3669))->sline=sline_291;
                                                                                    }
                                                                                    if(is_type_name_flag_289) {
                                                                                        multiple_assign_var10=(come_push_stackframe("21obj.c", 1560, 3670),__exception_result_var_b498=((struct tuple3$3sTypephcharphbool*)(right_value542=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b498);
                                                                                        type_293=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                                                                                        name_294=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                                                                                        err_295=multiple_assign_var10->v3;
                                                                                        come_call_finalizer3(right_value542,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        if(_if_conditional463=!err_295,                                                                                        _if_conditional463) {
                                                                                            (come_push_stackframe("21obj.c", 1562,3671),err_msg(info,"parse type"),come_pop_stackframe());
                                                                                            (come_push_stackframe("21obj.c", 1563,3672),exit(2),come_pop_stackframe());
                                                                                        }
                                                                                        (come_push_stackframe("21obj.c", 1566, 3673),__exception_result_var_b499=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b499);
                                                                                        _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1568, "struct sNode");
                                                                                        _inf_obj_value30=come_increment_ref_count((come_push_stackframe("21obj.c", 1568, 3675),__exception_result_var_b500=((struct sAlignOfNode2*)(right_value544=sAlignOfNode2_initialize((struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)come_null_check(((struct sAlignOfNode2*)(right_value543=(struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "21obj.c", 1568, "sAlignOfNode2"))), "21obj.c", 1568, 3674))),(struct sType*)come_increment_ref_count(type_293),info))), come_pop_stackframe(), __exception_result_var_b500));
                                                                                        _inf_value30->_protocol_obj=_inf_obj_value30;
                                                                                        _inf_value30->finalize=(void*)sAlignOfNode2_finalize;
                                                                                        _inf_value30->clone=(void*)sAlignOfNode2_clone;
                                                                                        _inf_value30->compile=(void*)sAlignOfNode2_compile;
                                                                                        _inf_value30->sline=(void*)sNodeBase_sline;
                                                                                        _inf_value30->sname=(void*)sNodeBase_sname;
                                                                                        _inf_value30->terminated=(void*)sNodeBase_terminated;
                                                                                        _inf_value30->kind=(void*)sAlignOfNode2_kind;
                                                                                        __result288__ = __result_obj__ = ((struct sNode*)(right_value548=_inf_value30));
                                                                                        come_call_finalizer3(type_293,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                        name_294 = come_decrement_ref_count2(name_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        come_call_finalizer3(right_value543,sAlignOfNode2_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer3(right_value544,sAlignOfNode2_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value548) { right_value548 = come_decrement_ref_count2(right_value548, ((struct sNode*)right_value548)->finalize, ((struct sNode*)right_value548)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        return __result288__;
                                                                                        come_call_finalizer3(type_293,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                        name_294 = come_decrement_ref_count2(name_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    }
                                                                                    else {
                                                                                        exp_297=(struct sNode*)come_increment_ref_count((come_push_stackframe("21obj.c", 1571, 3702),__exception_result_var_b503=((struct sNode*)(right_value549=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b503));
                                                                                        if(right_value549) { right_value549 = come_decrement_ref_count2(right_value549, ((struct sNode*)right_value549)->finalize, ((struct sNode*)right_value549)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        (come_push_stackframe("21obj.c", 1573, 3703),__exception_result_var_b504=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b504);
                                                                                        _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1575, "struct sNode");
                                                                                        _inf_obj_value31=come_increment_ref_count((come_push_stackframe("21obj.c", 1575, 3705),__exception_result_var_b505=((struct sAlignOfExpNode2*)(right_value551=sAlignOfExpNode2_initialize((struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)come_null_check(((struct sAlignOfExpNode2*)(right_value550=(struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "21obj.c", 1575, "sAlignOfExpNode2"))), "21obj.c", 1575, 3704))),(struct sNode*)come_increment_ref_count(exp_297),info))), come_pop_stackframe(), __exception_result_var_b505));
                                                                                        _inf_value31->_protocol_obj=_inf_obj_value31;
                                                                                        _inf_value31->finalize=(void*)sAlignOfExpNode2_finalize;
                                                                                        _inf_value31->clone=(void*)sAlignOfExpNode2_clone;
                                                                                        _inf_value31->compile=(void*)sAlignOfExpNode2_compile;
                                                                                        _inf_value31->sline=(void*)sNodeBase_sline;
                                                                                        _inf_value31->sname=(void*)sNodeBase_sname;
                                                                                        _inf_value31->terminated=(void*)sNodeBase_terminated;
                                                                                        _inf_value31->kind=(void*)sAlignOfExpNode2_kind;
                                                                                        __result291__ = __result_obj__ = ((struct sNode*)(right_value555=_inf_value31));
                                                                                        if(exp_297) { exp_297 = come_decrement_ref_count2(exp_297, ((struct sNode*)exp_297)->finalize, ((struct sNode*)exp_297)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                        come_call_finalizer3(right_value550,sAlignOfExpNode2_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer3(right_value551,sAlignOfExpNode2_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value555) { right_value555 = come_decrement_ref_count2(right_value555, ((struct sNode*)right_value555)->finalize, ((struct sNode*)right_value555)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        return __result291__;
                                                                                        if(exp_297) { exp_297 = come_decrement_ref_count2(exp_297, ((struct sNode*)exp_297)->finalize, ((struct sNode*)exp_297)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    }
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional476=(come_push_stackframe("21obj.c", 1578, 3732),__exception_result_var_b508=charp_operator_equals(buf,"_Alignas"), come_pop_stackframe(), __exception_result_var_b508),                                                                                    _if_conditional476) {
                                                                                        (come_push_stackframe("21obj.c", 1579, 3733),__exception_result_var_b509=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b509);
                                                                                        is_type_name_flag_299=(_Bool)0;
                                                                                        {
                                                                                            p_300=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1584, 3734)), "21obj.c", 1584, 3735))->p;
                                                                                            sline_301=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1585, 3736)), "21obj.c", 1585, 3737))->sline;
                                                                                            if(_if_conditional477=(come_push_stackframe("21obj.c", 1587, 3741),__exception_result_var_b510=xisalpha(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1587, 3738)), "21obj.c", 1587, 3739))->p, "21obj.c", 1587, 3740))), come_pop_stackframe(), __exception_result_var_b510)||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1587, 3742)), "21obj.c", 1587, 3743))->p, "21obj.c", 1587, 3744))==95,                                                                                            _if_conditional477) {
                                                                                                word_302=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 1588, 3745),__exception_result_var_b511=((char*)(right_value556=parse_word(info))), come_pop_stackframe(), __exception_result_var_b511));
                                                                                                right_value556 = come_decrement_ref_count2(right_value556, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                if(_if_conditional478=(come_push_stackframe("21obj.c", 1590, 3746),__exception_result_var_b512=is_type_name(word_302,info), come_pop_stackframe(), __exception_result_var_b512),                                                                                                _if_conditional478) {
                                                                                                    is_type_name_flag_299=(_Bool)1;
                                                                                                }
                                                                                                word_302 = come_decrement_ref_count2(word_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
                                                                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1595, 3747)), "21obj.c", 1595, 3748))->p=p_300;
                                                                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1596, 3749)), "21obj.c", 1596, 3750))->sline=sline_301;
                                                                                        }
                                                                                        if(is_type_name_flag_299) {
                                                                                            multiple_assign_var11=(come_push_stackframe("21obj.c", 1600, 3751),__exception_result_var_b513=((struct tuple3$3sTypephcharphbool*)(right_value557=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b513);
                                                                                            type_303=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
                                                                                            name_304=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                                                                                            err_305=multiple_assign_var11->v3;
                                                                                            come_call_finalizer3(right_value557,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            if(_if_conditional480=!err_305,                                                                                            _if_conditional480) {
                                                                                                (come_push_stackframe("21obj.c", 1602,3752),err_msg(info,"parse type"),come_pop_stackframe());
                                                                                                (come_push_stackframe("21obj.c", 1603,3753),exit(2),come_pop_stackframe());
                                                                                            }
                                                                                            (come_push_stackframe("21obj.c", 1606, 3754),__exception_result_var_b514=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b514);
                                                                                            _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1608, "struct sNode");
                                                                                            _inf_obj_value32=come_increment_ref_count((come_push_stackframe("21obj.c", 1608, 3756),__exception_result_var_b515=((struct sAlignAsNode*)(right_value559=sAlignAsNode_initialize((struct sAlignAsNode*)come_increment_ref_count(((struct sAlignAsNode*)come_null_check(((struct sAlignAsNode*)(right_value558=(struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "21obj.c", 1608, "sAlignAsNode"))), "21obj.c", 1608, 3755))),(struct sType*)come_increment_ref_count(type_303),info))), come_pop_stackframe(), __exception_result_var_b515));
                                                                                            _inf_value32->_protocol_obj=_inf_obj_value32;
                                                                                            _inf_value32->finalize=(void*)sAlignAsNode_finalize;
                                                                                            _inf_value32->clone=(void*)sAlignAsNode_clone;
                                                                                            _inf_value32->compile=(void*)sAlignAsNode_compile;
                                                                                            _inf_value32->sline=(void*)sNodeBase_sline;
                                                                                            _inf_value32->sname=(void*)sNodeBase_sname;
                                                                                            _inf_value32->terminated=(void*)sNodeBase_terminated;
                                                                                            _inf_value32->kind=(void*)sAlignAsNode_kind;
                                                                                            __result294__ = __result_obj__ = ((struct sNode*)(right_value563=_inf_value32));
                                                                                            come_call_finalizer3(type_303,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                            name_304 = come_decrement_ref_count2(name_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            come_call_finalizer3(right_value558,sAlignAsNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            come_call_finalizer3(right_value559,sAlignAsNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            if(right_value563) { right_value563 = come_decrement_ref_count2(right_value563, ((struct sNode*)right_value563)->finalize, ((struct sNode*)right_value563)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            return __result294__;
                                                                                            come_call_finalizer3(type_303,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                            name_304 = come_decrement_ref_count2(name_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        else {
                                                                                            exp_307=(struct sNode*)come_increment_ref_count((come_push_stackframe("21obj.c", 1611, 3783),__exception_result_var_b518=((struct sNode*)(right_value564=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b518));
                                                                                            if(right_value564) { right_value564 = come_decrement_ref_count2(right_value564, ((struct sNode*)right_value564)->finalize, ((struct sNode*)right_value564)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            (come_push_stackframe("21obj.c", 1613, 3784),__exception_result_var_b519=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b519);
                                                                                            _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1615, "struct sNode");
                                                                                            _inf_obj_value33=come_increment_ref_count((come_push_stackframe("21obj.c", 1615, 3786),__exception_result_var_b520=((struct sAlignAsExpNode*)(right_value566=sAlignAsExpNode_initialize((struct sAlignAsExpNode*)come_increment_ref_count(((struct sAlignAsExpNode*)come_null_check(((struct sAlignAsExpNode*)(right_value565=(struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "21obj.c", 1615, "sAlignAsExpNode"))), "21obj.c", 1615, 3785))),(struct sNode*)come_increment_ref_count(exp_307),info))), come_pop_stackframe(), __exception_result_var_b520));
                                                                                            _inf_value33->_protocol_obj=_inf_obj_value33;
                                                                                            _inf_value33->finalize=(void*)sAlignAsExpNode_finalize;
                                                                                            _inf_value33->clone=(void*)sAlignAsExpNode_clone;
                                                                                            _inf_value33->compile=(void*)sAlignAsExpNode_compile;
                                                                                            _inf_value33->sline=(void*)sNodeBase_sline;
                                                                                            _inf_value33->sname=(void*)sNodeBase_sname;
                                                                                            _inf_value33->terminated=(void*)sNodeBase_terminated;
                                                                                            _inf_value33->kind=(void*)sAlignAsExpNode_kind;
                                                                                            __result297__ = __result_obj__ = ((struct sNode*)(right_value570=_inf_value33));
                                                                                            if(exp_307) { exp_307 = come_decrement_ref_count2(exp_307, ((struct sNode*)exp_307)->finalize, ((struct sNode*)exp_307)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                            come_call_finalizer3(right_value565,sAlignAsExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            come_call_finalizer3(right_value566,sAlignAsExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            if(right_value570) { right_value570 = come_decrement_ref_count2(right_value570, ((struct sNode*)right_value570)->finalize, ((struct sNode*)right_value570)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            return __result297__;
                                                                                            if(exp_307) { exp_307 = come_decrement_ref_count2(exp_307, ((struct sNode*)exp_307)->finalize, ((struct sNode*)exp_307)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __result298__ = __result_obj__ = (come_push_stackframe("21obj.c", 1619, 3813),__exception_result_var_b523=((struct sNode*)(right_value571=string_node_v20(buf,head,head_sline,info))), come_pop_stackframe(), __exception_result_var_b523);
    if(right_value571) { right_value571 = come_decrement_ref_count2(right_value571, ((struct sNode*)right_value571)->finalize, ((struct sNode*)right_value571)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result298__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional249;
_Bool _if_conditional250;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional249=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0, 2683)), "tuple3$3sTypephcharphboolp_finalize", 0, 2684))->v1!=((void*)0),            _if_conditional249) {
                come_call_finalizer3(((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0, 2685)), "tuple3$3sTypephcharphboolp_finalize", 0, 2686))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional250=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1, 2687)), "tuple3$3sTypephcharphboolp_finalize", 1, 2688))->v2!=((void*)0),            _if_conditional250) {
                ((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1, 2689)), "tuple3$3sTypephcharphboolp_finalize", 1, 2690))->v2 = come_decrement_ref_count2(((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1, 2689)), "tuple3$3sTypephcharphboolp_finalize", 1, 2690))->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static void sNewNode_finalize(struct sNewNode* self){
void* __result_obj__;
_Bool _if_conditional268;
_Bool _if_conditional269;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional268=self!=((void*)0)&&((struct sNewNode*)come_null_check(((struct sNewNode*)come_null_check(self, "sNewNode_finalize", 0, 2778)), "sNewNode_finalize", 0, 2779))->sname!=((void*)0),                _if_conditional268) {
                    ((struct sNewNode*)come_null_check(((struct sNewNode*)come_null_check(self, "sNewNode_finalize", 0, 2780)), "sNewNode_finalize", 0, 2781))->sname = come_decrement_ref_count2(((struct sNewNode*)come_null_check(((struct sNewNode*)come_null_check(self, "sNewNode_finalize", 0, 2780)), "sNewNode_finalize", 0, 2781))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional269=self!=((void*)0)&&((struct sNewNode*)come_null_check(((struct sNewNode*)come_null_check(self, "sNewNode_finalize", 1, 2782)), "sNewNode_finalize", 1, 2783))->type!=((void*)0),                _if_conditional269) {
                    come_call_finalizer3(((struct sNewNode*)come_null_check(((struct sNewNode*)come_null_check(self, "sNewNode_finalize", 1, 2784)), "sNewNode_finalize", 1, 2785))->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct sNewNode* sNewNode_clone(struct sNewNode* self){
void* __result_obj__;
_Bool _if_conditional270;
struct sNewNode* __result204__;
void* right_value365;
struct sNewNode* result_217;
_Bool _if_conditional271;
_Bool _if_conditional272;
char* __exception_result_var_b353;
void* right_value366;
char* __dec_obj119;
_Bool _if_conditional273;
struct sType* __exception_result_var_b354;
void* right_value367;
struct sType* __dec_obj120;
struct sNewNode* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
right_value365 = (void*)0;
memset(&result_217, 0, sizeof(struct sNewNode*));
right_value366 = (void*)0;
right_value367 = (void*)0;
                if(_if_conditional270=self==(void*)0,                _if_conditional270) {
                    __result204__ = __result_obj__ = (void*)0;
                    return __result204__;
                }
                result_217=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value365=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "sNewNode_clone", 3, "sNewNode"))));
                come_call_finalizer3(right_value365,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional271=self!=((void*)0),                _if_conditional271) {
                    ((struct sNewNode*)come_null_check(((struct sNewNode*)come_null_check(result_217, "sNewNode_clone", 4, 2786)), "sNewNode_clone", 4, 2787))->sline=((struct sNewNode*)come_null_check(((struct sNewNode*)come_null_check(self, "sNewNode_clone", 4, 2788)), "sNewNode_clone", 4, 2789))->sline;
                }
                if(_if_conditional272=self!=((void*)0)&&((struct sNewNode*)come_null_check(((struct sNewNode*)come_null_check(self, "sNewNode_clone", 5, 2790)), "sNewNode_clone", 5, 2791))->sname!=((void*)0),                _if_conditional272) {
                    __dec_obj119=((struct sNewNode*)come_null_check(((struct sNewNode*)come_null_check(result_217, "sNewNode_clone", 5, 2792)), "sNewNode_clone", 5, 2793))->sname;
                    ((struct sNewNode*)come_null_check(((struct sNewNode*)come_null_check(result_217, "sNewNode_clone", 5, 2792)), "sNewNode_clone", 5, 2793))->sname=(char*)come_increment_ref_count(((char*)(right_value366=(come_push_stackframe("sNewNode_clone", 5, 2796),__exception_result_var_b353=string_clone(((struct sNewNode*)come_null_check(((struct sNewNode*)come_null_check(self, "sNewNode_clone", 5, 2794)), "sNewNode_clone", 5, 2795))->sname), come_pop_stackframe(), __exception_result_var_b353))));
                    __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value366 = come_decrement_ref_count2(right_value366, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional273=self!=((void*)0)&&((struct sNewNode*)come_null_check(((struct sNewNode*)come_null_check(self, "sNewNode_clone", 6, 2797)), "sNewNode_clone", 6, 2798))->type!=((void*)0),                _if_conditional273) {
                    __dec_obj120=((struct sNewNode*)come_null_check(((struct sNewNode*)come_null_check(result_217, "sNewNode_clone", 6, 2799)), "sNewNode_clone", 6, 2800))->type;
                    ((struct sNewNode*)come_null_check(((struct sNewNode*)come_null_check(result_217, "sNewNode_clone", 6, 2799)), "sNewNode_clone", 6, 2800))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value367=(come_push_stackframe("sNewNode_clone", 6, 2803),__exception_result_var_b354=sType_clone(((struct sNewNode*)come_null_check(((struct sNewNode*)come_null_check(self, "sNewNode_clone", 6, 2801)), "sNewNode_clone", 6, 2802))->type), come_pop_stackframe(), __exception_result_var_b354))));
                    come_call_finalizer3(__dec_obj120,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value367,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                __result205__ = __result_obj__ = result_217;
                come_call_finalizer3(result_217,sNewNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result205__;
                come_call_finalizer3(result_217,sNewNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sTrueNode_finalize(struct sTrueNode* self){
void* __result_obj__;
_Bool _if_conditional275;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional275=self!=((void*)0)&&((struct sTrueNode*)come_null_check(((struct sTrueNode*)come_null_check(self, "sTrueNode_finalize", 0, 2807)), "sTrueNode_finalize", 0, 2808))->sname!=((void*)0),                _if_conditional275) {
                    ((struct sTrueNode*)come_null_check(((struct sTrueNode*)come_null_check(self, "sTrueNode_finalize", 0, 2809)), "sTrueNode_finalize", 0, 2810))->sname = come_decrement_ref_count2(((struct sTrueNode*)come_null_check(((struct sTrueNode*)come_null_check(self, "sTrueNode_finalize", 0, 2809)), "sTrueNode_finalize", 0, 2810))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self){
void* __result_obj__;
_Bool _if_conditional276;
struct sTrueNode* __result207__;
void* right_value371;
struct sTrueNode* result_218;
_Bool _if_conditional277;
_Bool _if_conditional278;
char* __exception_result_var_b357;
void* right_value372;
char* __dec_obj121;
struct sTrueNode* __result208__;
memset(&__result_obj__, 0, sizeof(void*));
right_value371 = (void*)0;
memset(&result_218, 0, sizeof(struct sTrueNode*));
right_value372 = (void*)0;
                if(_if_conditional276=self==(void*)0,                _if_conditional276) {
                    __result207__ = __result_obj__ = (void*)0;
                    return __result207__;
                }
                result_218=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(right_value371=(struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "sTrueNode_clone", 3, "sTrueNode"))));
                come_call_finalizer3(right_value371,sTrueNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional277=self!=((void*)0),                _if_conditional277) {
                    ((struct sTrueNode*)come_null_check(((struct sTrueNode*)come_null_check(result_218, "sTrueNode_clone", 4, 2811)), "sTrueNode_clone", 4, 2812))->sline=((struct sTrueNode*)come_null_check(((struct sTrueNode*)come_null_check(self, "sTrueNode_clone", 4, 2813)), "sTrueNode_clone", 4, 2814))->sline;
                }
                if(_if_conditional278=self!=((void*)0)&&((struct sTrueNode*)come_null_check(((struct sTrueNode*)come_null_check(self, "sTrueNode_clone", 5, 2815)), "sTrueNode_clone", 5, 2816))->sname!=((void*)0),                _if_conditional278) {
                    __dec_obj121=((struct sTrueNode*)come_null_check(((struct sTrueNode*)come_null_check(result_218, "sTrueNode_clone", 5, 2817)), "sTrueNode_clone", 5, 2818))->sname;
                    ((struct sTrueNode*)come_null_check(((struct sTrueNode*)come_null_check(result_218, "sTrueNode_clone", 5, 2817)), "sTrueNode_clone", 5, 2818))->sname=(char*)come_increment_ref_count(((char*)(right_value372=(come_push_stackframe("sTrueNode_clone", 5, 2821),__exception_result_var_b357=string_clone(((struct sTrueNode*)come_null_check(((struct sTrueNode*)come_null_check(self, "sTrueNode_clone", 5, 2819)), "sTrueNode_clone", 5, 2820))->sname), come_pop_stackframe(), __exception_result_var_b357))));
                    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value372 = come_decrement_ref_count2(right_value372, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result208__ = __result_obj__ = result_218;
                come_call_finalizer3(result_218,sTrueNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result208__;
                come_call_finalizer3(result_218,sTrueNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sFalseNode_finalize(struct sFalseNode* self){
void* __result_obj__;
_Bool _if_conditional280;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional280=self!=((void*)0)&&((struct sFalseNode*)come_null_check(((struct sFalseNode*)come_null_check(self, "sFalseNode_finalize", 0, 2825)), "sFalseNode_finalize", 0, 2826))->sname!=((void*)0),                    _if_conditional280) {
                        ((struct sFalseNode*)come_null_check(((struct sFalseNode*)come_null_check(self, "sFalseNode_finalize", 0, 2827)), "sFalseNode_finalize", 0, 2828))->sname = come_decrement_ref_count2(((struct sFalseNode*)come_null_check(((struct sFalseNode*)come_null_check(self, "sFalseNode_finalize", 0, 2827)), "sFalseNode_finalize", 0, 2828))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self){
void* __result_obj__;
_Bool _if_conditional281;
struct sFalseNode* __result210__;
void* right_value376;
struct sFalseNode* result_219;
_Bool _if_conditional282;
_Bool _if_conditional283;
char* __exception_result_var_b360;
void* right_value377;
char* __dec_obj122;
struct sFalseNode* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
right_value376 = (void*)0;
memset(&result_219, 0, sizeof(struct sFalseNode*));
right_value377 = (void*)0;
                    if(_if_conditional281=self==(void*)0,                    _if_conditional281) {
                        __result210__ = __result_obj__ = (void*)0;
                        return __result210__;
                    }
                    result_219=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(right_value376=(struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "sFalseNode_clone", 3, "sFalseNode"))));
                    come_call_finalizer3(right_value376,sFalseNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional282=self!=((void*)0),                    _if_conditional282) {
                        ((struct sFalseNode*)come_null_check(((struct sFalseNode*)come_null_check(result_219, "sFalseNode_clone", 4, 2829)), "sFalseNode_clone", 4, 2830))->sline=((struct sFalseNode*)come_null_check(((struct sFalseNode*)come_null_check(self, "sFalseNode_clone", 4, 2831)), "sFalseNode_clone", 4, 2832))->sline;
                    }
                    if(_if_conditional283=self!=((void*)0)&&((struct sFalseNode*)come_null_check(((struct sFalseNode*)come_null_check(self, "sFalseNode_clone", 5, 2833)), "sFalseNode_clone", 5, 2834))->sname!=((void*)0),                    _if_conditional283) {
                        __dec_obj122=((struct sFalseNode*)come_null_check(((struct sFalseNode*)come_null_check(result_219, "sFalseNode_clone", 5, 2835)), "sFalseNode_clone", 5, 2836))->sname;
                        ((struct sFalseNode*)come_null_check(((struct sFalseNode*)come_null_check(result_219, "sFalseNode_clone", 5, 2835)), "sFalseNode_clone", 5, 2836))->sname=(char*)come_increment_ref_count(((char*)(right_value377=(come_push_stackframe("sFalseNode_clone", 5, 2839),__exception_result_var_b360=string_clone(((struct sFalseNode*)come_null_check(((struct sFalseNode*)come_null_check(self, "sFalseNode_clone", 5, 2837)), "sFalseNode_clone", 5, 2838))->sname), come_pop_stackframe(), __exception_result_var_b360))));
                        __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value377 = come_decrement_ref_count2(right_value377, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    __result211__ = __result_obj__ = result_219;
                    come_call_finalizer3(result_219,sFalseNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result211__;
                    come_call_finalizer3(result_219,sFalseNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sDeleteNode_finalize(struct sDeleteNode* self){
void* __result_obj__;
_Bool _if_conditional285;
_Bool _if_conditional286;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional285=self!=((void*)0)&&((struct sDeleteNode*)come_null_check(((struct sDeleteNode*)come_null_check(self, "sDeleteNode_finalize", 0, 2844)), "sDeleteNode_finalize", 0, 2845))->sname!=((void*)0),                        _if_conditional285) {
                            ((struct sDeleteNode*)come_null_check(((struct sDeleteNode*)come_null_check(self, "sDeleteNode_finalize", 0, 2846)), "sDeleteNode_finalize", 0, 2847))->sname = come_decrement_ref_count2(((struct sDeleteNode*)come_null_check(((struct sDeleteNode*)come_null_check(self, "sDeleteNode_finalize", 0, 2846)), "sDeleteNode_finalize", 0, 2847))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional286=self!=((void*)0)&&((struct sDeleteNode*)come_null_check(((struct sDeleteNode*)come_null_check(self, "sDeleteNode_finalize", 1, 2848)), "sDeleteNode_finalize", 1, 2849))->node!=((void*)0),                        _if_conditional286) {
                            if(((struct sDeleteNode*)come_null_check(((struct sDeleteNode*)come_null_check(self, "sDeleteNode_finalize", 1, 2850)), "sDeleteNode_finalize", 1, 2851))->node) { ((struct sDeleteNode*)come_null_check(((struct sDeleteNode*)come_null_check(self, "sDeleteNode_finalize", 1, 2850)), "sDeleteNode_finalize", 1, 2851))->node = come_decrement_ref_count2(((struct sDeleteNode*)come_null_check(((struct sDeleteNode*)come_null_check(self, "sDeleteNode_finalize", 1, 2850)), "sDeleteNode_finalize", 1, 2851))->node, ((struct sNode*)((struct sDeleteNode*)come_null_check(((struct sDeleteNode*)come_null_check(self, "sDeleteNode_finalize", 1, 2850)), "sDeleteNode_finalize", 1, 2851))->node)->finalize, ((struct sNode*)((struct sDeleteNode*)come_null_check(((struct sDeleteNode*)come_null_check(self, "sDeleteNode_finalize", 1, 2850)), "sDeleteNode_finalize", 1, 2851))->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self){
void* __result_obj__;
_Bool _if_conditional287;
struct sDeleteNode* __result213__;
void* right_value382;
struct sDeleteNode* result_221;
_Bool _if_conditional288;
_Bool _if_conditional289;
char* __exception_result_var_b364;
void* right_value383;
char* __dec_obj123;
_Bool _if_conditional290;
struct sNode* __exception_result_var_b365;
void* right_value384;
struct sNode* __dec_obj124;
struct sDeleteNode* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
right_value382 = (void*)0;
memset(&result_221, 0, sizeof(struct sDeleteNode*));
right_value383 = (void*)0;
right_value384 = (void*)0;
                        if(_if_conditional287=self==(void*)0,                        _if_conditional287) {
                            __result213__ = __result_obj__ = (void*)0;
                            return __result213__;
                        }
                        result_221=(struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(right_value382=(struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "sDeleteNode_clone", 3, "sDeleteNode"))));
                        come_call_finalizer3(right_value382,sDeleteNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional288=self!=((void*)0),                        _if_conditional288) {
                            ((struct sDeleteNode*)come_null_check(((struct sDeleteNode*)come_null_check(result_221, "sDeleteNode_clone", 4, 2852)), "sDeleteNode_clone", 4, 2853))->sline=((struct sDeleteNode*)come_null_check(((struct sDeleteNode*)come_null_check(self, "sDeleteNode_clone", 4, 2854)), "sDeleteNode_clone", 4, 2855))->sline;
                        }
                        if(_if_conditional289=self!=((void*)0)&&((struct sDeleteNode*)come_null_check(((struct sDeleteNode*)come_null_check(self, "sDeleteNode_clone", 5, 2856)), "sDeleteNode_clone", 5, 2857))->sname!=((void*)0),                        _if_conditional289) {
                            __dec_obj123=((struct sDeleteNode*)come_null_check(((struct sDeleteNode*)come_null_check(result_221, "sDeleteNode_clone", 5, 2858)), "sDeleteNode_clone", 5, 2859))->sname;
                            ((struct sDeleteNode*)come_null_check(((struct sDeleteNode*)come_null_check(result_221, "sDeleteNode_clone", 5, 2858)), "sDeleteNode_clone", 5, 2859))->sname=(char*)come_increment_ref_count(((char*)(right_value383=(come_push_stackframe("sDeleteNode_clone", 5, 2862),__exception_result_var_b364=string_clone(((struct sDeleteNode*)come_null_check(((struct sDeleteNode*)come_null_check(self, "sDeleteNode_clone", 5, 2860)), "sDeleteNode_clone", 5, 2861))->sname), come_pop_stackframe(), __exception_result_var_b364))));
                            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value383 = come_decrement_ref_count2(right_value383, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional290=self!=((void*)0)&&((struct sDeleteNode*)come_null_check(((struct sDeleteNode*)come_null_check(self, "sDeleteNode_clone", 6, 2863)), "sDeleteNode_clone", 6, 2864))->node!=((void*)0),                        _if_conditional290) {
                            __dec_obj124=((struct sDeleteNode*)come_null_check(((struct sDeleteNode*)come_null_check(result_221, "sDeleteNode_clone", 6, 2865)), "sDeleteNode_clone", 6, 2866))->node;
                            ((struct sDeleteNode*)come_null_check(((struct sDeleteNode*)come_null_check(result_221, "sDeleteNode_clone", 6, 2865)), "sDeleteNode_clone", 6, 2866))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value384=(come_push_stackframe("sDeleteNode_clone", 6, 2869),__exception_result_var_b365=sNode_clone(((struct sDeleteNode*)come_null_check(((struct sDeleteNode*)come_null_check(self, "sDeleteNode_clone", 6, 2867)), "sDeleteNode_clone", 6, 2868))->node), come_pop_stackframe(), __exception_result_var_b365))));
                            if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count2(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value384) { right_value384 = come_decrement_ref_count2(right_value384, ((struct sNode*)right_value384)->finalize, ((struct sNode*)right_value384)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        __result214__ = __result_obj__ = result_221;
                        come_call_finalizer3(result_221,sDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
                        return __result214__;
                        come_call_finalizer3(result_221,sDeleteNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sForceDeleteNode_finalize(struct sForceDeleteNode* self){
void* __result_obj__;
_Bool _if_conditional292;
_Bool _if_conditional293;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional292=self!=((void*)0)&&((struct sForceDeleteNode*)come_null_check(((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_finalize", 0, 2874)), "sForceDeleteNode_finalize", 0, 2875))->sname!=((void*)0),                            _if_conditional292) {
                                ((struct sForceDeleteNode*)come_null_check(((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_finalize", 0, 2876)), "sForceDeleteNode_finalize", 0, 2877))->sname = come_decrement_ref_count2(((struct sForceDeleteNode*)come_null_check(((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_finalize", 0, 2876)), "sForceDeleteNode_finalize", 0, 2877))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional293=self!=((void*)0)&&((struct sForceDeleteNode*)come_null_check(((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_finalize", 1, 2878)), "sForceDeleteNode_finalize", 1, 2879))->node!=((void*)0),                            _if_conditional293) {
                                if(((struct sForceDeleteNode*)come_null_check(((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_finalize", 1, 2880)), "sForceDeleteNode_finalize", 1, 2881))->node) { ((struct sForceDeleteNode*)come_null_check(((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_finalize", 1, 2880)), "sForceDeleteNode_finalize", 1, 2881))->node = come_decrement_ref_count2(((struct sForceDeleteNode*)come_null_check(((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_finalize", 1, 2880)), "sForceDeleteNode_finalize", 1, 2881))->node, ((struct sNode*)((struct sForceDeleteNode*)come_null_check(((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_finalize", 1, 2880)), "sForceDeleteNode_finalize", 1, 2881))->node)->finalize, ((struct sNode*)((struct sForceDeleteNode*)come_null_check(((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_finalize", 1, 2880)), "sForceDeleteNode_finalize", 1, 2881))->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct sForceDeleteNode* sForceDeleteNode_clone(struct sForceDeleteNode* self){
void* __result_obj__;
_Bool _if_conditional294;
struct sForceDeleteNode* __result216__;
void* right_value389;
struct sForceDeleteNode* result_223;
_Bool _if_conditional295;
_Bool _if_conditional296;
char* __exception_result_var_b369;
void* right_value390;
char* __dec_obj125;
_Bool _if_conditional297;
struct sNode* __exception_result_var_b370;
void* right_value391;
struct sNode* __dec_obj126;
struct sForceDeleteNode* __result217__;
memset(&__result_obj__, 0, sizeof(void*));
right_value389 = (void*)0;
memset(&result_223, 0, sizeof(struct sForceDeleteNode*));
right_value390 = (void*)0;
right_value391 = (void*)0;
                            if(_if_conditional294=self==(void*)0,                            _if_conditional294) {
                                __result216__ = __result_obj__ = (void*)0;
                                return __result216__;
                            }
                            result_223=(struct sForceDeleteNode*)come_increment_ref_count(((struct sForceDeleteNode*)(right_value389=(struct sForceDeleteNode*)come_calloc(1, sizeof(struct sForceDeleteNode)*(1), "sForceDeleteNode_clone", 3, "sForceDeleteNode"))));
                            come_call_finalizer3(right_value389,sForceDeleteNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional295=self!=((void*)0),                            _if_conditional295) {
                                ((struct sForceDeleteNode*)come_null_check(((struct sForceDeleteNode*)come_null_check(result_223, "sForceDeleteNode_clone", 4, 2882)), "sForceDeleteNode_clone", 4, 2883))->sline=((struct sForceDeleteNode*)come_null_check(((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_clone", 4, 2884)), "sForceDeleteNode_clone", 4, 2885))->sline;
                            }
                            if(_if_conditional296=self!=((void*)0)&&((struct sForceDeleteNode*)come_null_check(((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_clone", 5, 2886)), "sForceDeleteNode_clone", 5, 2887))->sname!=((void*)0),                            _if_conditional296) {
                                __dec_obj125=((struct sForceDeleteNode*)come_null_check(((struct sForceDeleteNode*)come_null_check(result_223, "sForceDeleteNode_clone", 5, 2888)), "sForceDeleteNode_clone", 5, 2889))->sname;
                                ((struct sForceDeleteNode*)come_null_check(((struct sForceDeleteNode*)come_null_check(result_223, "sForceDeleteNode_clone", 5, 2888)), "sForceDeleteNode_clone", 5, 2889))->sname=(char*)come_increment_ref_count(((char*)(right_value390=(come_push_stackframe("sForceDeleteNode_clone", 5, 2892),__exception_result_var_b369=string_clone(((struct sForceDeleteNode*)come_null_check(((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_clone", 5, 2890)), "sForceDeleteNode_clone", 5, 2891))->sname), come_pop_stackframe(), __exception_result_var_b369))));
                                __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value390 = come_decrement_ref_count2(right_value390, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional297=self!=((void*)0)&&((struct sForceDeleteNode*)come_null_check(((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_clone", 6, 2893)), "sForceDeleteNode_clone", 6, 2894))->node!=((void*)0),                            _if_conditional297) {
                                __dec_obj126=((struct sForceDeleteNode*)come_null_check(((struct sForceDeleteNode*)come_null_check(result_223, "sForceDeleteNode_clone", 6, 2895)), "sForceDeleteNode_clone", 6, 2896))->node;
                                ((struct sForceDeleteNode*)come_null_check(((struct sForceDeleteNode*)come_null_check(result_223, "sForceDeleteNode_clone", 6, 2895)), "sForceDeleteNode_clone", 6, 2896))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value391=(come_push_stackframe("sForceDeleteNode_clone", 6, 2899),__exception_result_var_b370=sNode_clone(((struct sForceDeleteNode*)come_null_check(((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_clone", 6, 2897)), "sForceDeleteNode_clone", 6, 2898))->node), come_pop_stackframe(), __exception_result_var_b370))));
                                if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count2(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value391) { right_value391 = come_decrement_ref_count2(right_value391, ((struct sNode*)right_value391)->finalize, ((struct sNode*)right_value391)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            __result217__ = __result_obj__ = result_223;
                            come_call_finalizer3(result_223,sForceDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result217__;
                            come_call_finalizer3(result_223,sForceDeleteNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sBorrowNode_finalize(struct sBorrowNode* self){
void* __result_obj__;
_Bool _if_conditional299;
_Bool _if_conditional300;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional299=self!=((void*)0)&&((struct sBorrowNode*)come_null_check(((struct sBorrowNode*)come_null_check(self, "sBorrowNode_finalize", 0, 2904)), "sBorrowNode_finalize", 0, 2905))->sname!=((void*)0),                                _if_conditional299) {
                                    ((struct sBorrowNode*)come_null_check(((struct sBorrowNode*)come_null_check(self, "sBorrowNode_finalize", 0, 2906)), "sBorrowNode_finalize", 0, 2907))->sname = come_decrement_ref_count2(((struct sBorrowNode*)come_null_check(((struct sBorrowNode*)come_null_check(self, "sBorrowNode_finalize", 0, 2906)), "sBorrowNode_finalize", 0, 2907))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional300=self!=((void*)0)&&((struct sBorrowNode*)come_null_check(((struct sBorrowNode*)come_null_check(self, "sBorrowNode_finalize", 1, 2908)), "sBorrowNode_finalize", 1, 2909))->node!=((void*)0),                                _if_conditional300) {
                                    if(((struct sBorrowNode*)come_null_check(((struct sBorrowNode*)come_null_check(self, "sBorrowNode_finalize", 1, 2910)), "sBorrowNode_finalize", 1, 2911))->node) { ((struct sBorrowNode*)come_null_check(((struct sBorrowNode*)come_null_check(self, "sBorrowNode_finalize", 1, 2910)), "sBorrowNode_finalize", 1, 2911))->node = come_decrement_ref_count2(((struct sBorrowNode*)come_null_check(((struct sBorrowNode*)come_null_check(self, "sBorrowNode_finalize", 1, 2910)), "sBorrowNode_finalize", 1, 2911))->node, ((struct sNode*)((struct sBorrowNode*)come_null_check(((struct sBorrowNode*)come_null_check(self, "sBorrowNode_finalize", 1, 2910)), "sBorrowNode_finalize", 1, 2911))->node)->finalize, ((struct sNode*)((struct sBorrowNode*)come_null_check(((struct sBorrowNode*)come_null_check(self, "sBorrowNode_finalize", 1, 2910)), "sBorrowNode_finalize", 1, 2911))->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self){
void* __result_obj__;
_Bool _if_conditional301;
struct sBorrowNode* __result219__;
void* right_value396;
struct sBorrowNode* result_225;
_Bool _if_conditional302;
_Bool _if_conditional303;
char* __exception_result_var_b374;
void* right_value397;
char* __dec_obj127;
_Bool _if_conditional304;
struct sNode* __exception_result_var_b375;
void* right_value398;
struct sNode* __dec_obj128;
struct sBorrowNode* __result220__;
memset(&__result_obj__, 0, sizeof(void*));
right_value396 = (void*)0;
memset(&result_225, 0, sizeof(struct sBorrowNode*));
right_value397 = (void*)0;
right_value398 = (void*)0;
                                if(_if_conditional301=self==(void*)0,                                _if_conditional301) {
                                    __result219__ = __result_obj__ = (void*)0;
                                    return __result219__;
                                }
                                result_225=(struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(right_value396=(struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "sBorrowNode_clone", 3, "sBorrowNode"))));
                                come_call_finalizer3(right_value396,sBorrowNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional302=self!=((void*)0),                                _if_conditional302) {
                                    ((struct sBorrowNode*)come_null_check(((struct sBorrowNode*)come_null_check(result_225, "sBorrowNode_clone", 4, 2912)), "sBorrowNode_clone", 4, 2913))->sline=((struct sBorrowNode*)come_null_check(((struct sBorrowNode*)come_null_check(self, "sBorrowNode_clone", 4, 2914)), "sBorrowNode_clone", 4, 2915))->sline;
                                }
                                if(_if_conditional303=self!=((void*)0)&&((struct sBorrowNode*)come_null_check(((struct sBorrowNode*)come_null_check(self, "sBorrowNode_clone", 5, 2916)), "sBorrowNode_clone", 5, 2917))->sname!=((void*)0),                                _if_conditional303) {
                                    __dec_obj127=((struct sBorrowNode*)come_null_check(((struct sBorrowNode*)come_null_check(result_225, "sBorrowNode_clone", 5, 2918)), "sBorrowNode_clone", 5, 2919))->sname;
                                    ((struct sBorrowNode*)come_null_check(((struct sBorrowNode*)come_null_check(result_225, "sBorrowNode_clone", 5, 2918)), "sBorrowNode_clone", 5, 2919))->sname=(char*)come_increment_ref_count(((char*)(right_value397=(come_push_stackframe("sBorrowNode_clone", 5, 2922),__exception_result_var_b374=string_clone(((struct sBorrowNode*)come_null_check(((struct sBorrowNode*)come_null_check(self, "sBorrowNode_clone", 5, 2920)), "sBorrowNode_clone", 5, 2921))->sname), come_pop_stackframe(), __exception_result_var_b374))));
                                    __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value397 = come_decrement_ref_count2(right_value397, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional304=self!=((void*)0)&&((struct sBorrowNode*)come_null_check(((struct sBorrowNode*)come_null_check(self, "sBorrowNode_clone", 6, 2923)), "sBorrowNode_clone", 6, 2924))->node!=((void*)0),                                _if_conditional304) {
                                    __dec_obj128=((struct sBorrowNode*)come_null_check(((struct sBorrowNode*)come_null_check(result_225, "sBorrowNode_clone", 6, 2925)), "sBorrowNode_clone", 6, 2926))->node;
                                    ((struct sBorrowNode*)come_null_check(((struct sBorrowNode*)come_null_check(result_225, "sBorrowNode_clone", 6, 2925)), "sBorrowNode_clone", 6, 2926))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value398=(come_push_stackframe("sBorrowNode_clone", 6, 2929),__exception_result_var_b375=sNode_clone(((struct sBorrowNode*)come_null_check(((struct sBorrowNode*)come_null_check(self, "sBorrowNode_clone", 6, 2927)), "sBorrowNode_clone", 6, 2928))->node), come_pop_stackframe(), __exception_result_var_b375))));
                                    if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count2(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value398) { right_value398 = come_decrement_ref_count2(right_value398, ((struct sNode*)right_value398)->finalize, ((struct sNode*)right_value398)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                __result220__ = __result_obj__ = result_225;
                                come_call_finalizer3(result_225,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
                                return __result220__;
                                come_call_finalizer3(result_225,sBorrowNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sDelegateNode_finalize(struct sDelegateNode* self){
void* __result_obj__;
_Bool _if_conditional306;
_Bool _if_conditional307;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional306=self!=((void*)0)&&((struct sDelegateNode*)come_null_check(((struct sDelegateNode*)come_null_check(self, "sDelegateNode_finalize", 0, 2934)), "sDelegateNode_finalize", 0, 2935))->sname!=((void*)0),                                    _if_conditional306) {
                                        ((struct sDelegateNode*)come_null_check(((struct sDelegateNode*)come_null_check(self, "sDelegateNode_finalize", 0, 2936)), "sDelegateNode_finalize", 0, 2937))->sname = come_decrement_ref_count2(((struct sDelegateNode*)come_null_check(((struct sDelegateNode*)come_null_check(self, "sDelegateNode_finalize", 0, 2936)), "sDelegateNode_finalize", 0, 2937))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional307=self!=((void*)0)&&((struct sDelegateNode*)come_null_check(((struct sDelegateNode*)come_null_check(self, "sDelegateNode_finalize", 1, 2938)), "sDelegateNode_finalize", 1, 2939))->node!=((void*)0),                                    _if_conditional307) {
                                        if(((struct sDelegateNode*)come_null_check(((struct sDelegateNode*)come_null_check(self, "sDelegateNode_finalize", 1, 2940)), "sDelegateNode_finalize", 1, 2941))->node) { ((struct sDelegateNode*)come_null_check(((struct sDelegateNode*)come_null_check(self, "sDelegateNode_finalize", 1, 2940)), "sDelegateNode_finalize", 1, 2941))->node = come_decrement_ref_count2(((struct sDelegateNode*)come_null_check(((struct sDelegateNode*)come_null_check(self, "sDelegateNode_finalize", 1, 2940)), "sDelegateNode_finalize", 1, 2941))->node, ((struct sNode*)((struct sDelegateNode*)come_null_check(((struct sDelegateNode*)come_null_check(self, "sDelegateNode_finalize", 1, 2940)), "sDelegateNode_finalize", 1, 2941))->node)->finalize, ((struct sNode*)((struct sDelegateNode*)come_null_check(((struct sDelegateNode*)come_null_check(self, "sDelegateNode_finalize", 1, 2940)), "sDelegateNode_finalize", 1, 2941))->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static struct sDelegateNode* sDelegateNode_clone(struct sDelegateNode* self){
void* __result_obj__;
_Bool _if_conditional308;
struct sDelegateNode* __result222__;
void* right_value403;
struct sDelegateNode* result_227;
_Bool _if_conditional309;
_Bool _if_conditional310;
char* __exception_result_var_b379;
void* right_value404;
char* __dec_obj129;
_Bool _if_conditional311;
struct sNode* __exception_result_var_b380;
void* right_value405;
struct sNode* __dec_obj130;
struct sDelegateNode* __result223__;
memset(&__result_obj__, 0, sizeof(void*));
right_value403 = (void*)0;
memset(&result_227, 0, sizeof(struct sDelegateNode*));
right_value404 = (void*)0;
right_value405 = (void*)0;
                                    if(_if_conditional308=self==(void*)0,                                    _if_conditional308) {
                                        __result222__ = __result_obj__ = (void*)0;
                                        return __result222__;
                                    }
                                    result_227=(struct sDelegateNode*)come_increment_ref_count(((struct sDelegateNode*)(right_value403=(struct sDelegateNode*)come_calloc(1, sizeof(struct sDelegateNode)*(1), "sDelegateNode_clone", 3, "sDelegateNode"))));
                                    come_call_finalizer3(right_value403,sDelegateNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional309=self!=((void*)0),                                    _if_conditional309) {
                                        ((struct sDelegateNode*)come_null_check(((struct sDelegateNode*)come_null_check(result_227, "sDelegateNode_clone", 4, 2942)), "sDelegateNode_clone", 4, 2943))->sline=((struct sDelegateNode*)come_null_check(((struct sDelegateNode*)come_null_check(self, "sDelegateNode_clone", 4, 2944)), "sDelegateNode_clone", 4, 2945))->sline;
                                    }
                                    if(_if_conditional310=self!=((void*)0)&&((struct sDelegateNode*)come_null_check(((struct sDelegateNode*)come_null_check(self, "sDelegateNode_clone", 5, 2946)), "sDelegateNode_clone", 5, 2947))->sname!=((void*)0),                                    _if_conditional310) {
                                        __dec_obj129=((struct sDelegateNode*)come_null_check(((struct sDelegateNode*)come_null_check(result_227, "sDelegateNode_clone", 5, 2948)), "sDelegateNode_clone", 5, 2949))->sname;
                                        ((struct sDelegateNode*)come_null_check(((struct sDelegateNode*)come_null_check(result_227, "sDelegateNode_clone", 5, 2948)), "sDelegateNode_clone", 5, 2949))->sname=(char*)come_increment_ref_count(((char*)(right_value404=(come_push_stackframe("sDelegateNode_clone", 5, 2952),__exception_result_var_b379=string_clone(((struct sDelegateNode*)come_null_check(((struct sDelegateNode*)come_null_check(self, "sDelegateNode_clone", 5, 2950)), "sDelegateNode_clone", 5, 2951))->sname), come_pop_stackframe(), __exception_result_var_b379))));
                                        __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value404 = come_decrement_ref_count2(right_value404, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional311=self!=((void*)0)&&((struct sDelegateNode*)come_null_check(((struct sDelegateNode*)come_null_check(self, "sDelegateNode_clone", 6, 2953)), "sDelegateNode_clone", 6, 2954))->node!=((void*)0),                                    _if_conditional311) {
                                        __dec_obj130=((struct sDelegateNode*)come_null_check(((struct sDelegateNode*)come_null_check(result_227, "sDelegateNode_clone", 6, 2955)), "sDelegateNode_clone", 6, 2956))->node;
                                        ((struct sDelegateNode*)come_null_check(((struct sDelegateNode*)come_null_check(result_227, "sDelegateNode_clone", 6, 2955)), "sDelegateNode_clone", 6, 2956))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value405=(come_push_stackframe("sDelegateNode_clone", 6, 2959),__exception_result_var_b380=sNode_clone(((struct sDelegateNode*)come_null_check(((struct sDelegateNode*)come_null_check(self, "sDelegateNode_clone", 6, 2957)), "sDelegateNode_clone", 6, 2958))->node), come_pop_stackframe(), __exception_result_var_b380))));
                                        if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count2(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value405) { right_value405 = come_decrement_ref_count2(right_value405, ((struct sNode*)right_value405)->finalize, ((struct sNode*)right_value405)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    __result223__ = __result_obj__ = result_227;
                                    come_call_finalizer3(result_227,sDelegateNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result223__;
                                    come_call_finalizer3(result_227,sDelegateNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sShareNode_finalize(struct sShareNode* self){
void* __result_obj__;
_Bool _if_conditional313;
_Bool _if_conditional314;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional313=self!=((void*)0)&&((struct sShareNode*)come_null_check(((struct sShareNode*)come_null_check(self, "sShareNode_finalize", 0, 2964)), "sShareNode_finalize", 0, 2965))->sname!=((void*)0),                                        _if_conditional313) {
                                            ((struct sShareNode*)come_null_check(((struct sShareNode*)come_null_check(self, "sShareNode_finalize", 0, 2966)), "sShareNode_finalize", 0, 2967))->sname = come_decrement_ref_count2(((struct sShareNode*)come_null_check(((struct sShareNode*)come_null_check(self, "sShareNode_finalize", 0, 2966)), "sShareNode_finalize", 0, 2967))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional314=self!=((void*)0)&&((struct sShareNode*)come_null_check(((struct sShareNode*)come_null_check(self, "sShareNode_finalize", 1, 2968)), "sShareNode_finalize", 1, 2969))->node!=((void*)0),                                        _if_conditional314) {
                                            if(((struct sShareNode*)come_null_check(((struct sShareNode*)come_null_check(self, "sShareNode_finalize", 1, 2970)), "sShareNode_finalize", 1, 2971))->node) { ((struct sShareNode*)come_null_check(((struct sShareNode*)come_null_check(self, "sShareNode_finalize", 1, 2970)), "sShareNode_finalize", 1, 2971))->node = come_decrement_ref_count2(((struct sShareNode*)come_null_check(((struct sShareNode*)come_null_check(self, "sShareNode_finalize", 1, 2970)), "sShareNode_finalize", 1, 2971))->node, ((struct sNode*)((struct sShareNode*)come_null_check(((struct sShareNode*)come_null_check(self, "sShareNode_finalize", 1, 2970)), "sShareNode_finalize", 1, 2971))->node)->finalize, ((struct sNode*)((struct sShareNode*)come_null_check(((struct sShareNode*)come_null_check(self, "sShareNode_finalize", 1, 2970)), "sShareNode_finalize", 1, 2971))->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
}

static struct sShareNode* sShareNode_clone(struct sShareNode* self){
void* __result_obj__;
_Bool _if_conditional315;
struct sShareNode* __result225__;
void* right_value410;
struct sShareNode* result_229;
_Bool _if_conditional316;
_Bool _if_conditional317;
char* __exception_result_var_b384;
void* right_value411;
char* __dec_obj131;
_Bool _if_conditional318;
struct sNode* __exception_result_var_b385;
void* right_value412;
struct sNode* __dec_obj132;
struct sShareNode* __result226__;
memset(&__result_obj__, 0, sizeof(void*));
right_value410 = (void*)0;
memset(&result_229, 0, sizeof(struct sShareNode*));
right_value411 = (void*)0;
right_value412 = (void*)0;
                                        if(_if_conditional315=self==(void*)0,                                        _if_conditional315) {
                                            __result225__ = __result_obj__ = (void*)0;
                                            return __result225__;
                                        }
                                        result_229=(struct sShareNode*)come_increment_ref_count(((struct sShareNode*)(right_value410=(struct sShareNode*)come_calloc(1, sizeof(struct sShareNode)*(1), "sShareNode_clone", 3, "sShareNode"))));
                                        come_call_finalizer3(right_value410,sShareNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional316=self!=((void*)0),                                        _if_conditional316) {
                                            ((struct sShareNode*)come_null_check(((struct sShareNode*)come_null_check(result_229, "sShareNode_clone", 4, 2972)), "sShareNode_clone", 4, 2973))->sline=((struct sShareNode*)come_null_check(((struct sShareNode*)come_null_check(self, "sShareNode_clone", 4, 2974)), "sShareNode_clone", 4, 2975))->sline;
                                        }
                                        if(_if_conditional317=self!=((void*)0)&&((struct sShareNode*)come_null_check(((struct sShareNode*)come_null_check(self, "sShareNode_clone", 5, 2976)), "sShareNode_clone", 5, 2977))->sname!=((void*)0),                                        _if_conditional317) {
                                            __dec_obj131=((struct sShareNode*)come_null_check(((struct sShareNode*)come_null_check(result_229, "sShareNode_clone", 5, 2978)), "sShareNode_clone", 5, 2979))->sname;
                                            ((struct sShareNode*)come_null_check(((struct sShareNode*)come_null_check(result_229, "sShareNode_clone", 5, 2978)), "sShareNode_clone", 5, 2979))->sname=(char*)come_increment_ref_count(((char*)(right_value411=(come_push_stackframe("sShareNode_clone", 5, 2982),__exception_result_var_b384=string_clone(((struct sShareNode*)come_null_check(((struct sShareNode*)come_null_check(self, "sShareNode_clone", 5, 2980)), "sShareNode_clone", 5, 2981))->sname), come_pop_stackframe(), __exception_result_var_b384))));
                                            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value411 = come_decrement_ref_count2(right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional318=self!=((void*)0)&&((struct sShareNode*)come_null_check(((struct sShareNode*)come_null_check(self, "sShareNode_clone", 6, 2983)), "sShareNode_clone", 6, 2984))->node!=((void*)0),                                        _if_conditional318) {
                                            __dec_obj132=((struct sShareNode*)come_null_check(((struct sShareNode*)come_null_check(result_229, "sShareNode_clone", 6, 2985)), "sShareNode_clone", 6, 2986))->node;
                                            ((struct sShareNode*)come_null_check(((struct sShareNode*)come_null_check(result_229, "sShareNode_clone", 6, 2985)), "sShareNode_clone", 6, 2986))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value412=(come_push_stackframe("sShareNode_clone", 6, 2989),__exception_result_var_b385=sNode_clone(((struct sShareNode*)come_null_check(((struct sShareNode*)come_null_check(self, "sShareNode_clone", 6, 2987)), "sShareNode_clone", 6, 2988))->node), come_pop_stackframe(), __exception_result_var_b385))));
                                            if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count2(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value412) { right_value412 = come_decrement_ref_count2(right_value412, ((struct sNode*)right_value412)->finalize, ((struct sNode*)right_value412)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        __result226__ = __result_obj__ = result_229;
                                        come_call_finalizer3(result_229,sShareNode_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result226__;
                                        come_call_finalizer3(result_229,sShareNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sCloneNode_finalize(struct sCloneNode* self){
void* __result_obj__;
_Bool _if_conditional320;
_Bool _if_conditional321;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional320=self!=((void*)0)&&((struct sCloneNode*)come_null_check(((struct sCloneNode*)come_null_check(self, "sCloneNode_finalize", 0, 2994)), "sCloneNode_finalize", 0, 2995))->sname!=((void*)0),                                            _if_conditional320) {
                                                ((struct sCloneNode*)come_null_check(((struct sCloneNode*)come_null_check(self, "sCloneNode_finalize", 0, 2996)), "sCloneNode_finalize", 0, 2997))->sname = come_decrement_ref_count2(((struct sCloneNode*)come_null_check(((struct sCloneNode*)come_null_check(self, "sCloneNode_finalize", 0, 2996)), "sCloneNode_finalize", 0, 2997))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional321=self!=((void*)0)&&((struct sCloneNode*)come_null_check(((struct sCloneNode*)come_null_check(self, "sCloneNode_finalize", 1, 2998)), "sCloneNode_finalize", 1, 2999))->node!=((void*)0),                                            _if_conditional321) {
                                                if(((struct sCloneNode*)come_null_check(((struct sCloneNode*)come_null_check(self, "sCloneNode_finalize", 1, 3000)), "sCloneNode_finalize", 1, 3001))->node) { ((struct sCloneNode*)come_null_check(((struct sCloneNode*)come_null_check(self, "sCloneNode_finalize", 1, 3000)), "sCloneNode_finalize", 1, 3001))->node = come_decrement_ref_count2(((struct sCloneNode*)come_null_check(((struct sCloneNode*)come_null_check(self, "sCloneNode_finalize", 1, 3000)), "sCloneNode_finalize", 1, 3001))->node, ((struct sNode*)((struct sCloneNode*)come_null_check(((struct sCloneNode*)come_null_check(self, "sCloneNode_finalize", 1, 3000)), "sCloneNode_finalize", 1, 3001))->node)->finalize, ((struct sNode*)((struct sCloneNode*)come_null_check(((struct sCloneNode*)come_null_check(self, "sCloneNode_finalize", 1, 3000)), "sCloneNode_finalize", 1, 3001))->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
}

static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self){
void* __result_obj__;
_Bool _if_conditional322;
struct sCloneNode* __result228__;
void* right_value417;
struct sCloneNode* result_231;
_Bool _if_conditional323;
_Bool _if_conditional324;
char* __exception_result_var_b389;
void* right_value418;
char* __dec_obj133;
_Bool _if_conditional325;
struct sNode* __exception_result_var_b390;
void* right_value419;
struct sNode* __dec_obj134;
struct sCloneNode* __result229__;
memset(&__result_obj__, 0, sizeof(void*));
right_value417 = (void*)0;
memset(&result_231, 0, sizeof(struct sCloneNode*));
right_value418 = (void*)0;
right_value419 = (void*)0;
                                            if(_if_conditional322=self==(void*)0,                                            _if_conditional322) {
                                                __result228__ = __result_obj__ = (void*)0;
                                                return __result228__;
                                            }
                                            result_231=(struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(right_value417=(struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "sCloneNode_clone", 3, "sCloneNode"))));
                                            come_call_finalizer3(right_value417,sCloneNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional323=self!=((void*)0),                                            _if_conditional323) {
                                                ((struct sCloneNode*)come_null_check(((struct sCloneNode*)come_null_check(result_231, "sCloneNode_clone", 4, 3002)), "sCloneNode_clone", 4, 3003))->sline=((struct sCloneNode*)come_null_check(((struct sCloneNode*)come_null_check(self, "sCloneNode_clone", 4, 3004)), "sCloneNode_clone", 4, 3005))->sline;
                                            }
                                            if(_if_conditional324=self!=((void*)0)&&((struct sCloneNode*)come_null_check(((struct sCloneNode*)come_null_check(self, "sCloneNode_clone", 5, 3006)), "sCloneNode_clone", 5, 3007))->sname!=((void*)0),                                            _if_conditional324) {
                                                __dec_obj133=((struct sCloneNode*)come_null_check(((struct sCloneNode*)come_null_check(result_231, "sCloneNode_clone", 5, 3008)), "sCloneNode_clone", 5, 3009))->sname;
                                                ((struct sCloneNode*)come_null_check(((struct sCloneNode*)come_null_check(result_231, "sCloneNode_clone", 5, 3008)), "sCloneNode_clone", 5, 3009))->sname=(char*)come_increment_ref_count(((char*)(right_value418=(come_push_stackframe("sCloneNode_clone", 5, 3012),__exception_result_var_b389=string_clone(((struct sCloneNode*)come_null_check(((struct sCloneNode*)come_null_check(self, "sCloneNode_clone", 5, 3010)), "sCloneNode_clone", 5, 3011))->sname), come_pop_stackframe(), __exception_result_var_b389))));
                                                __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value418 = come_decrement_ref_count2(right_value418, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            if(_if_conditional325=self!=((void*)0)&&((struct sCloneNode*)come_null_check(((struct sCloneNode*)come_null_check(self, "sCloneNode_clone", 6, 3013)), "sCloneNode_clone", 6, 3014))->node!=((void*)0),                                            _if_conditional325) {
                                                __dec_obj134=((struct sCloneNode*)come_null_check(((struct sCloneNode*)come_null_check(result_231, "sCloneNode_clone", 6, 3015)), "sCloneNode_clone", 6, 3016))->node;
                                                ((struct sCloneNode*)come_null_check(((struct sCloneNode*)come_null_check(result_231, "sCloneNode_clone", 6, 3015)), "sCloneNode_clone", 6, 3016))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value419=(come_push_stackframe("sCloneNode_clone", 6, 3019),__exception_result_var_b390=sNode_clone(((struct sCloneNode*)come_null_check(((struct sCloneNode*)come_null_check(self, "sCloneNode_clone", 6, 3017)), "sCloneNode_clone", 6, 3018))->node), come_pop_stackframe(), __exception_result_var_b390))));
                                                if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value419) { right_value419 = come_decrement_ref_count2(right_value419, ((struct sNode*)right_value419)->finalize, ((struct sNode*)right_value419)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            __result229__ = __result_obj__ = result_231;
                                            come_call_finalizer3(result_231,sCloneNode_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result229__;
                                            come_call_finalizer3(result_231,sCloneNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sDupeNode_finalize(struct sDupeNode* self){
void* __result_obj__;
_Bool _if_conditional327;
_Bool _if_conditional328;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional327=self!=((void*)0)&&((struct sDupeNode*)come_null_check(((struct sDupeNode*)come_null_check(self, "sDupeNode_finalize", 0, 3024)), "sDupeNode_finalize", 0, 3025))->sname!=((void*)0),                                                _if_conditional327) {
                                                    ((struct sDupeNode*)come_null_check(((struct sDupeNode*)come_null_check(self, "sDupeNode_finalize", 0, 3026)), "sDupeNode_finalize", 0, 3027))->sname = come_decrement_ref_count2(((struct sDupeNode*)come_null_check(((struct sDupeNode*)come_null_check(self, "sDupeNode_finalize", 0, 3026)), "sDupeNode_finalize", 0, 3027))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional328=self!=((void*)0)&&((struct sDupeNode*)come_null_check(((struct sDupeNode*)come_null_check(self, "sDupeNode_finalize", 1, 3028)), "sDupeNode_finalize", 1, 3029))->node!=((void*)0),                                                _if_conditional328) {
                                                    if(((struct sDupeNode*)come_null_check(((struct sDupeNode*)come_null_check(self, "sDupeNode_finalize", 1, 3030)), "sDupeNode_finalize", 1, 3031))->node) { ((struct sDupeNode*)come_null_check(((struct sDupeNode*)come_null_check(self, "sDupeNode_finalize", 1, 3030)), "sDupeNode_finalize", 1, 3031))->node = come_decrement_ref_count2(((struct sDupeNode*)come_null_check(((struct sDupeNode*)come_null_check(self, "sDupeNode_finalize", 1, 3030)), "sDupeNode_finalize", 1, 3031))->node, ((struct sNode*)((struct sDupeNode*)come_null_check(((struct sDupeNode*)come_null_check(self, "sDupeNode_finalize", 1, 3030)), "sDupeNode_finalize", 1, 3031))->node)->finalize, ((struct sNode*)((struct sDupeNode*)come_null_check(((struct sDupeNode*)come_null_check(self, "sDupeNode_finalize", 1, 3030)), "sDupeNode_finalize", 1, 3031))->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
}

static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self){
void* __result_obj__;
_Bool _if_conditional329;
struct sDupeNode* __result231__;
void* right_value424;
struct sDupeNode* result_233;
_Bool _if_conditional330;
_Bool _if_conditional331;
char* __exception_result_var_b394;
void* right_value425;
char* __dec_obj135;
_Bool _if_conditional332;
struct sNode* __exception_result_var_b395;
void* right_value426;
struct sNode* __dec_obj136;
struct sDupeNode* __result232__;
memset(&__result_obj__, 0, sizeof(void*));
right_value424 = (void*)0;
memset(&result_233, 0, sizeof(struct sDupeNode*));
right_value425 = (void*)0;
right_value426 = (void*)0;
                                                if(_if_conditional329=self==(void*)0,                                                _if_conditional329) {
                                                    __result231__ = __result_obj__ = (void*)0;
                                                    return __result231__;
                                                }
                                                result_233=(struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(right_value424=(struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "sDupeNode_clone", 3, "sDupeNode"))));
                                                come_call_finalizer3(right_value424,sDupeNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                if(_if_conditional330=self!=((void*)0),                                                _if_conditional330) {
                                                    ((struct sDupeNode*)come_null_check(((struct sDupeNode*)come_null_check(result_233, "sDupeNode_clone", 4, 3032)), "sDupeNode_clone", 4, 3033))->sline=((struct sDupeNode*)come_null_check(((struct sDupeNode*)come_null_check(self, "sDupeNode_clone", 4, 3034)), "sDupeNode_clone", 4, 3035))->sline;
                                                }
                                                if(_if_conditional331=self!=((void*)0)&&((struct sDupeNode*)come_null_check(((struct sDupeNode*)come_null_check(self, "sDupeNode_clone", 5, 3036)), "sDupeNode_clone", 5, 3037))->sname!=((void*)0),                                                _if_conditional331) {
                                                    __dec_obj135=((struct sDupeNode*)come_null_check(((struct sDupeNode*)come_null_check(result_233, "sDupeNode_clone", 5, 3038)), "sDupeNode_clone", 5, 3039))->sname;
                                                    ((struct sDupeNode*)come_null_check(((struct sDupeNode*)come_null_check(result_233, "sDupeNode_clone", 5, 3038)), "sDupeNode_clone", 5, 3039))->sname=(char*)come_increment_ref_count(((char*)(right_value425=(come_push_stackframe("sDupeNode_clone", 5, 3042),__exception_result_var_b394=string_clone(((struct sDupeNode*)come_null_check(((struct sDupeNode*)come_null_check(self, "sDupeNode_clone", 5, 3040)), "sDupeNode_clone", 5, 3041))->sname), come_pop_stackframe(), __exception_result_var_b394))));
                                                    __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value425 = come_decrement_ref_count2(right_value425, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                if(_if_conditional332=self!=((void*)0)&&((struct sDupeNode*)come_null_check(((struct sDupeNode*)come_null_check(self, "sDupeNode_clone", 6, 3043)), "sDupeNode_clone", 6, 3044))->node!=((void*)0),                                                _if_conditional332) {
                                                    __dec_obj136=((struct sDupeNode*)come_null_check(((struct sDupeNode*)come_null_check(result_233, "sDupeNode_clone", 6, 3045)), "sDupeNode_clone", 6, 3046))->node;
                                                    ((struct sDupeNode*)come_null_check(((struct sDupeNode*)come_null_check(result_233, "sDupeNode_clone", 6, 3045)), "sDupeNode_clone", 6, 3046))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value426=(come_push_stackframe("sDupeNode_clone", 6, 3049),__exception_result_var_b395=sNode_clone(((struct sDupeNode*)come_null_check(((struct sDupeNode*)come_null_check(self, "sDupeNode_clone", 6, 3047)), "sDupeNode_clone", 6, 3048))->node), come_pop_stackframe(), __exception_result_var_b395))));
                                                    if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count2(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0,0, (void*)0); }
                                                    if(right_value426) { right_value426 = come_decrement_ref_count2(right_value426, ((struct sNode*)right_value426)->finalize, ((struct sNode*)right_value426)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                }
                                                __result232__ = __result_obj__ = result_233;
                                                come_call_finalizer3(result_233,sDupeNode_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result232__;
                                                come_call_finalizer3(result_233,sDupeNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sDummyHeapNode_finalize(struct sDummyHeapNode* self){
void* __result_obj__;
_Bool _if_conditional334;
_Bool _if_conditional335;
memset(&__result_obj__, 0, sizeof(void*));
                                                    if(_if_conditional334=self!=((void*)0)&&((struct sDummyHeapNode*)come_null_check(((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_finalize", 0, 3054)), "sDummyHeapNode_finalize", 0, 3055))->sname!=((void*)0),                                                    _if_conditional334) {
                                                        ((struct sDummyHeapNode*)come_null_check(((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_finalize", 0, 3056)), "sDummyHeapNode_finalize", 0, 3057))->sname = come_decrement_ref_count2(((struct sDummyHeapNode*)come_null_check(((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_finalize", 0, 3056)), "sDummyHeapNode_finalize", 0, 3057))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional335=self!=((void*)0)&&((struct sDummyHeapNode*)come_null_check(((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_finalize", 1, 3058)), "sDummyHeapNode_finalize", 1, 3059))->node!=((void*)0),                                                    _if_conditional335) {
                                                        if(((struct sDummyHeapNode*)come_null_check(((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_finalize", 1, 3060)), "sDummyHeapNode_finalize", 1, 3061))->node) { ((struct sDummyHeapNode*)come_null_check(((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_finalize", 1, 3060)), "sDummyHeapNode_finalize", 1, 3061))->node = come_decrement_ref_count2(((struct sDummyHeapNode*)come_null_check(((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_finalize", 1, 3060)), "sDummyHeapNode_finalize", 1, 3061))->node, ((struct sNode*)((struct sDummyHeapNode*)come_null_check(((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_finalize", 1, 3060)), "sDummyHeapNode_finalize", 1, 3061))->node)->finalize, ((struct sNode*)((struct sDummyHeapNode*)come_null_check(((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_finalize", 1, 3060)), "sDummyHeapNode_finalize", 1, 3061))->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
}

static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self){
void* __result_obj__;
_Bool _if_conditional336;
struct sDummyHeapNode* __result234__;
void* right_value431;
struct sDummyHeapNode* result_235;
_Bool _if_conditional337;
_Bool _if_conditional338;
char* __exception_result_var_b399;
void* right_value432;
char* __dec_obj137;
_Bool _if_conditional339;
struct sNode* __exception_result_var_b400;
void* right_value433;
struct sNode* __dec_obj138;
struct sDummyHeapNode* __result235__;
memset(&__result_obj__, 0, sizeof(void*));
right_value431 = (void*)0;
memset(&result_235, 0, sizeof(struct sDummyHeapNode*));
right_value432 = (void*)0;
right_value433 = (void*)0;
                                                    if(_if_conditional336=self==(void*)0,                                                    _if_conditional336) {
                                                        __result234__ = __result_obj__ = (void*)0;
                                                        return __result234__;
                                                    }
                                                    result_235=(struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(right_value431=(struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "sDummyHeapNode_clone", 3, "sDummyHeapNode"))));
                                                    come_call_finalizer3(right_value431,sDummyHeapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    if(_if_conditional337=self!=((void*)0),                                                    _if_conditional337) {
                                                        ((struct sDummyHeapNode*)come_null_check(((struct sDummyHeapNode*)come_null_check(result_235, "sDummyHeapNode_clone", 4, 3062)), "sDummyHeapNode_clone", 4, 3063))->sline=((struct sDummyHeapNode*)come_null_check(((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_clone", 4, 3064)), "sDummyHeapNode_clone", 4, 3065))->sline;
                                                    }
                                                    if(_if_conditional338=self!=((void*)0)&&((struct sDummyHeapNode*)come_null_check(((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_clone", 5, 3066)), "sDummyHeapNode_clone", 5, 3067))->sname!=((void*)0),                                                    _if_conditional338) {
                                                        __dec_obj137=((struct sDummyHeapNode*)come_null_check(((struct sDummyHeapNode*)come_null_check(result_235, "sDummyHeapNode_clone", 5, 3068)), "sDummyHeapNode_clone", 5, 3069))->sname;
                                                        ((struct sDummyHeapNode*)come_null_check(((struct sDummyHeapNode*)come_null_check(result_235, "sDummyHeapNode_clone", 5, 3068)), "sDummyHeapNode_clone", 5, 3069))->sname=(char*)come_increment_ref_count(((char*)(right_value432=(come_push_stackframe("sDummyHeapNode_clone", 5, 3072),__exception_result_var_b399=string_clone(((struct sDummyHeapNode*)come_null_check(((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_clone", 5, 3070)), "sDummyHeapNode_clone", 5, 3071))->sname), come_pop_stackframe(), __exception_result_var_b399))));
                                                        __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        right_value432 = come_decrement_ref_count2(right_value432, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    }
                                                    if(_if_conditional339=self!=((void*)0)&&((struct sDummyHeapNode*)come_null_check(((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_clone", 6, 3073)), "sDummyHeapNode_clone", 6, 3074))->node!=((void*)0),                                                    _if_conditional339) {
                                                        __dec_obj138=((struct sDummyHeapNode*)come_null_check(((struct sDummyHeapNode*)come_null_check(result_235, "sDummyHeapNode_clone", 6, 3075)), "sDummyHeapNode_clone", 6, 3076))->node;
                                                        ((struct sDummyHeapNode*)come_null_check(((struct sDummyHeapNode*)come_null_check(result_235, "sDummyHeapNode_clone", 6, 3075)), "sDummyHeapNode_clone", 6, 3076))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value433=(come_push_stackframe("sDummyHeapNode_clone", 6, 3079),__exception_result_var_b400=sNode_clone(((struct sDummyHeapNode*)come_null_check(((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_clone", 6, 3077)), "sDummyHeapNode_clone", 6, 3078))->node), come_pop_stackframe(), __exception_result_var_b400))));
                                                        if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); }
                                                        if(right_value433) { right_value433 = come_decrement_ref_count2(right_value433, ((struct sNode*)right_value433)->finalize, ((struct sNode*)right_value433)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    }
                                                    __result235__ = __result_obj__ = result_235;
                                                    come_call_finalizer3(result_235,sDummyHeapNode_finalize, 0, 0, 1, 0, (void*)0);
                                                    return __result235__;
                                                    come_call_finalizer3(result_235,sDummyHeapNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sGCIncNode_finalize(struct sGCIncNode* self){
void* __result_obj__;
_Bool _if_conditional341;
_Bool _if_conditional342;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional341=self!=((void*)0)&&((struct sGCIncNode*)come_null_check(((struct sGCIncNode*)come_null_check(self, "sGCIncNode_finalize", 0, 3091)), "sGCIncNode_finalize", 0, 3092))->sname!=((void*)0),                                                        _if_conditional341) {
                                                            ((struct sGCIncNode*)come_null_check(((struct sGCIncNode*)come_null_check(self, "sGCIncNode_finalize", 0, 3093)), "sGCIncNode_finalize", 0, 3094))->sname = come_decrement_ref_count2(((struct sGCIncNode*)come_null_check(((struct sGCIncNode*)come_null_check(self, "sGCIncNode_finalize", 0, 3093)), "sGCIncNode_finalize", 0, 3094))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
                                                        if(_if_conditional342=self!=((void*)0)&&((struct sGCIncNode*)come_null_check(((struct sGCIncNode*)come_null_check(self, "sGCIncNode_finalize", 1, 3095)), "sGCIncNode_finalize", 1, 3096))->node!=((void*)0),                                                        _if_conditional342) {
                                                            if(((struct sGCIncNode*)come_null_check(((struct sGCIncNode*)come_null_check(self, "sGCIncNode_finalize", 1, 3097)), "sGCIncNode_finalize", 1, 3098))->node) { ((struct sGCIncNode*)come_null_check(((struct sGCIncNode*)come_null_check(self, "sGCIncNode_finalize", 1, 3097)), "sGCIncNode_finalize", 1, 3098))->node = come_decrement_ref_count2(((struct sGCIncNode*)come_null_check(((struct sGCIncNode*)come_null_check(self, "sGCIncNode_finalize", 1, 3097)), "sGCIncNode_finalize", 1, 3098))->node, ((struct sNode*)((struct sGCIncNode*)come_null_check(((struct sGCIncNode*)come_null_check(self, "sGCIncNode_finalize", 1, 3097)), "sGCIncNode_finalize", 1, 3098))->node)->finalize, ((struct sNode*)((struct sGCIncNode*)come_null_check(((struct sGCIncNode*)come_null_check(self, "sGCIncNode_finalize", 1, 3097)), "sGCIncNode_finalize", 1, 3098))->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
}

static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self){
void* __result_obj__;
_Bool _if_conditional343;
struct sGCIncNode* __result237__;
void* right_value438;
struct sGCIncNode* result_237;
_Bool _if_conditional344;
_Bool _if_conditional345;
char* __exception_result_var_b405;
void* right_value439;
char* __dec_obj139;
_Bool _if_conditional346;
struct sNode* __exception_result_var_b406;
void* right_value440;
struct sNode* __dec_obj140;
struct sGCIncNode* __result238__;
memset(&__result_obj__, 0, sizeof(void*));
right_value438 = (void*)0;
memset(&result_237, 0, sizeof(struct sGCIncNode*));
right_value439 = (void*)0;
right_value440 = (void*)0;
                                                        if(_if_conditional343=self==(void*)0,                                                        _if_conditional343) {
                                                            __result237__ = __result_obj__ = (void*)0;
                                                            return __result237__;
                                                        }
                                                        result_237=(struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(right_value438=(struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "sGCIncNode_clone", 3, "sGCIncNode"))));
                                                        come_call_finalizer3(right_value438,sGCIncNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                        if(_if_conditional344=self!=((void*)0),                                                        _if_conditional344) {
                                                            ((struct sGCIncNode*)come_null_check(((struct sGCIncNode*)come_null_check(result_237, "sGCIncNode_clone", 4, 3099)), "sGCIncNode_clone", 4, 3100))->sline=((struct sGCIncNode*)come_null_check(((struct sGCIncNode*)come_null_check(self, "sGCIncNode_clone", 4, 3101)), "sGCIncNode_clone", 4, 3102))->sline;
                                                        }
                                                        if(_if_conditional345=self!=((void*)0)&&((struct sGCIncNode*)come_null_check(((struct sGCIncNode*)come_null_check(self, "sGCIncNode_clone", 5, 3103)), "sGCIncNode_clone", 5, 3104))->sname!=((void*)0),                                                        _if_conditional345) {
                                                            __dec_obj139=((struct sGCIncNode*)come_null_check(((struct sGCIncNode*)come_null_check(result_237, "sGCIncNode_clone", 5, 3105)), "sGCIncNode_clone", 5, 3106))->sname;
                                                            ((struct sGCIncNode*)come_null_check(((struct sGCIncNode*)come_null_check(result_237, "sGCIncNode_clone", 5, 3105)), "sGCIncNode_clone", 5, 3106))->sname=(char*)come_increment_ref_count(((char*)(right_value439=(come_push_stackframe("sGCIncNode_clone", 5, 3109),__exception_result_var_b405=string_clone(((struct sGCIncNode*)come_null_check(((struct sGCIncNode*)come_null_check(self, "sGCIncNode_clone", 5, 3107)), "sGCIncNode_clone", 5, 3108))->sname), come_pop_stackframe(), __exception_result_var_b405))));
                                                            __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            right_value439 = come_decrement_ref_count2(right_value439, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        if(_if_conditional346=self!=((void*)0)&&((struct sGCIncNode*)come_null_check(((struct sGCIncNode*)come_null_check(self, "sGCIncNode_clone", 6, 3110)), "sGCIncNode_clone", 6, 3111))->node!=((void*)0),                                                        _if_conditional346) {
                                                            __dec_obj140=((struct sGCIncNode*)come_null_check(((struct sGCIncNode*)come_null_check(result_237, "sGCIncNode_clone", 6, 3112)), "sGCIncNode_clone", 6, 3113))->node;
                                                            ((struct sGCIncNode*)come_null_check(((struct sGCIncNode*)come_null_check(result_237, "sGCIncNode_clone", 6, 3112)), "sGCIncNode_clone", 6, 3113))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value440=(come_push_stackframe("sGCIncNode_clone", 6, 3116),__exception_result_var_b406=sNode_clone(((struct sGCIncNode*)come_null_check(((struct sGCIncNode*)come_null_check(self, "sGCIncNode_clone", 6, 3114)), "sGCIncNode_clone", 6, 3115))->node), come_pop_stackframe(), __exception_result_var_b406))));
                                                            if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count2(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0, (void*)0); }
                                                            if(right_value440) { right_value440 = come_decrement_ref_count2(right_value440, ((struct sNode*)right_value440)->finalize, ((struct sNode*)right_value440)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        }
                                                        __result238__ = __result_obj__ = result_237;
                                                        come_call_finalizer3(result_237,sGCIncNode_finalize, 0, 0, 1, 0, (void*)0);
                                                        return __result238__;
                                                        come_call_finalizer3(result_237,sGCIncNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sGCDecNode_finalize(struct sGCDecNode* self){
void* __result_obj__;
_Bool _if_conditional348;
_Bool _if_conditional349;
memset(&__result_obj__, 0, sizeof(void*));
                                                            if(_if_conditional348=self!=((void*)0)&&((struct sGCDecNode*)come_null_check(((struct sGCDecNode*)come_null_check(self, "sGCDecNode_finalize", 0, 3128)), "sGCDecNode_finalize", 0, 3129))->sname!=((void*)0),                                                            _if_conditional348) {
                                                                ((struct sGCDecNode*)come_null_check(((struct sGCDecNode*)come_null_check(self, "sGCDecNode_finalize", 0, 3130)), "sGCDecNode_finalize", 0, 3131))->sname = come_decrement_ref_count2(((struct sGCDecNode*)come_null_check(((struct sGCDecNode*)come_null_check(self, "sGCDecNode_finalize", 0, 3130)), "sGCDecNode_finalize", 0, 3131))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
                                                            if(_if_conditional349=self!=((void*)0)&&((struct sGCDecNode*)come_null_check(((struct sGCDecNode*)come_null_check(self, "sGCDecNode_finalize", 1, 3132)), "sGCDecNode_finalize", 1, 3133))->node!=((void*)0),                                                            _if_conditional349) {
                                                                if(((struct sGCDecNode*)come_null_check(((struct sGCDecNode*)come_null_check(self, "sGCDecNode_finalize", 1, 3134)), "sGCDecNode_finalize", 1, 3135))->node) { ((struct sGCDecNode*)come_null_check(((struct sGCDecNode*)come_null_check(self, "sGCDecNode_finalize", 1, 3134)), "sGCDecNode_finalize", 1, 3135))->node = come_decrement_ref_count2(((struct sGCDecNode*)come_null_check(((struct sGCDecNode*)come_null_check(self, "sGCDecNode_finalize", 1, 3134)), "sGCDecNode_finalize", 1, 3135))->node, ((struct sNode*)((struct sGCDecNode*)come_null_check(((struct sGCDecNode*)come_null_check(self, "sGCDecNode_finalize", 1, 3134)), "sGCDecNode_finalize", 1, 3135))->node)->finalize, ((struct sNode*)((struct sGCDecNode*)come_null_check(((struct sGCDecNode*)come_null_check(self, "sGCDecNode_finalize", 1, 3134)), "sGCDecNode_finalize", 1, 3135))->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
}

static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self){
void* __result_obj__;
_Bool _if_conditional350;
struct sGCDecNode* __result240__;
void* right_value445;
struct sGCDecNode* result_239;
_Bool _if_conditional351;
_Bool _if_conditional352;
char* __exception_result_var_b411;
void* right_value446;
char* __dec_obj141;
_Bool _if_conditional353;
struct sNode* __exception_result_var_b412;
void* right_value447;
struct sNode* __dec_obj142;
struct sGCDecNode* __result241__;
memset(&__result_obj__, 0, sizeof(void*));
right_value445 = (void*)0;
memset(&result_239, 0, sizeof(struct sGCDecNode*));
right_value446 = (void*)0;
right_value447 = (void*)0;
                                                            if(_if_conditional350=self==(void*)0,                                                            _if_conditional350) {
                                                                __result240__ = __result_obj__ = (void*)0;
                                                                return __result240__;
                                                            }
                                                            result_239=(struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(right_value445=(struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "sGCDecNode_clone", 3, "sGCDecNode"))));
                                                            come_call_finalizer3(right_value445,sGCDecNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                            if(_if_conditional351=self!=((void*)0),                                                            _if_conditional351) {
                                                                ((struct sGCDecNode*)come_null_check(((struct sGCDecNode*)come_null_check(result_239, "sGCDecNode_clone", 4, 3136)), "sGCDecNode_clone", 4, 3137))->sline=((struct sGCDecNode*)come_null_check(((struct sGCDecNode*)come_null_check(self, "sGCDecNode_clone", 4, 3138)), "sGCDecNode_clone", 4, 3139))->sline;
                                                            }
                                                            if(_if_conditional352=self!=((void*)0)&&((struct sGCDecNode*)come_null_check(((struct sGCDecNode*)come_null_check(self, "sGCDecNode_clone", 5, 3140)), "sGCDecNode_clone", 5, 3141))->sname!=((void*)0),                                                            _if_conditional352) {
                                                                __dec_obj141=((struct sGCDecNode*)come_null_check(((struct sGCDecNode*)come_null_check(result_239, "sGCDecNode_clone", 5, 3142)), "sGCDecNode_clone", 5, 3143))->sname;
                                                                ((struct sGCDecNode*)come_null_check(((struct sGCDecNode*)come_null_check(result_239, "sGCDecNode_clone", 5, 3142)), "sGCDecNode_clone", 5, 3143))->sname=(char*)come_increment_ref_count(((char*)(right_value446=(come_push_stackframe("sGCDecNode_clone", 5, 3146),__exception_result_var_b411=string_clone(((struct sGCDecNode*)come_null_check(((struct sGCDecNode*)come_null_check(self, "sGCDecNode_clone", 5, 3144)), "sGCDecNode_clone", 5, 3145))->sname), come_pop_stackframe(), __exception_result_var_b411))));
                                                                __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value446 = come_decrement_ref_count2(right_value446, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            if(_if_conditional353=self!=((void*)0)&&((struct sGCDecNode*)come_null_check(((struct sGCDecNode*)come_null_check(self, "sGCDecNode_clone", 6, 3147)), "sGCDecNode_clone", 6, 3148))->node!=((void*)0),                                                            _if_conditional353) {
                                                                __dec_obj142=((struct sGCDecNode*)come_null_check(((struct sGCDecNode*)come_null_check(result_239, "sGCDecNode_clone", 6, 3149)), "sGCDecNode_clone", 6, 3150))->node;
                                                                ((struct sGCDecNode*)come_null_check(((struct sGCDecNode*)come_null_check(result_239, "sGCDecNode_clone", 6, 3149)), "sGCDecNode_clone", 6, 3150))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value447=(come_push_stackframe("sGCDecNode_clone", 6, 3153),__exception_result_var_b412=sNode_clone(((struct sGCDecNode*)come_null_check(((struct sGCDecNode*)come_null_check(self, "sGCDecNode_clone", 6, 3151)), "sGCDecNode_clone", 6, 3152))->node), come_pop_stackframe(), __exception_result_var_b412))));
                                                                if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count2(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0, (void*)0); }
                                                                if(right_value447) { right_value447 = come_decrement_ref_count2(right_value447, ((struct sNode*)right_value447)->finalize, ((struct sNode*)right_value447)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            }
                                                            __result241__ = __result_obj__ = result_239;
                                                            come_call_finalizer3(result_239,sGCDecNode_finalize, 0, 0, 1, 0, (void*)0);
                                                            return __result241__;
                                                            come_call_finalizer3(result_239,sGCDecNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sIsHeap_finalize(struct sIsHeap* self){
void* __result_obj__;
_Bool _if_conditional356;
_Bool _if_conditional357;
memset(&__result_obj__, 0, sizeof(void*));
                                                                if(_if_conditional356=self!=((void*)0)&&((struct sIsHeap*)come_null_check(((struct sIsHeap*)come_null_check(self, "sIsHeap_finalize", 0, 3170)), "sIsHeap_finalize", 0, 3171))->sname!=((void*)0),                                                                _if_conditional356) {
                                                                    ((struct sIsHeap*)come_null_check(((struct sIsHeap*)come_null_check(self, "sIsHeap_finalize", 0, 3172)), "sIsHeap_finalize", 0, 3173))->sname = come_decrement_ref_count2(((struct sIsHeap*)come_null_check(((struct sIsHeap*)come_null_check(self, "sIsHeap_finalize", 0, 3172)), "sIsHeap_finalize", 0, 3173))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                }
                                                                if(_if_conditional357=self!=((void*)0)&&((struct sIsHeap*)come_null_check(((struct sIsHeap*)come_null_check(self, "sIsHeap_finalize", 1, 3174)), "sIsHeap_finalize", 1, 3175))->type!=((void*)0),                                                                _if_conditional357) {
                                                                    come_call_finalizer3(((struct sIsHeap*)come_null_check(((struct sIsHeap*)come_null_check(self, "sIsHeap_finalize", 1, 3176)), "sIsHeap_finalize", 1, 3177))->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                }
}

static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self){
void* __result_obj__;
_Bool _if_conditional358;
struct sIsHeap* __result243__;
void* right_value453;
struct sIsHeap* result_244;
_Bool _if_conditional359;
_Bool _if_conditional360;
char* __exception_result_var_b418;
void* right_value454;
char* __dec_obj143;
_Bool _if_conditional361;
struct sType* __exception_result_var_b419;
void* right_value455;
struct sType* __dec_obj144;
struct sIsHeap* __result244__;
memset(&__result_obj__, 0, sizeof(void*));
right_value453 = (void*)0;
memset(&result_244, 0, sizeof(struct sIsHeap*));
right_value454 = (void*)0;
right_value455 = (void*)0;
                                                                if(_if_conditional358=self==(void*)0,                                                                _if_conditional358) {
                                                                    __result243__ = __result_obj__ = (void*)0;
                                                                    return __result243__;
                                                                }
                                                                result_244=(struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(right_value453=(struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "sIsHeap_clone", 3, "sIsHeap"))));
                                                                come_call_finalizer3(right_value453,sIsHeap_finalize, 0, 1, 0, 0, __result_obj__);
                                                                if(_if_conditional359=self!=((void*)0),                                                                _if_conditional359) {
                                                                    ((struct sIsHeap*)come_null_check(((struct sIsHeap*)come_null_check(result_244, "sIsHeap_clone", 4, 3178)), "sIsHeap_clone", 4, 3179))->sline=((struct sIsHeap*)come_null_check(((struct sIsHeap*)come_null_check(self, "sIsHeap_clone", 4, 3180)), "sIsHeap_clone", 4, 3181))->sline;
                                                                }
                                                                if(_if_conditional360=self!=((void*)0)&&((struct sIsHeap*)come_null_check(((struct sIsHeap*)come_null_check(self, "sIsHeap_clone", 5, 3182)), "sIsHeap_clone", 5, 3183))->sname!=((void*)0),                                                                _if_conditional360) {
                                                                    __dec_obj143=((struct sIsHeap*)come_null_check(((struct sIsHeap*)come_null_check(result_244, "sIsHeap_clone", 5, 3184)), "sIsHeap_clone", 5, 3185))->sname;
                                                                    ((struct sIsHeap*)come_null_check(((struct sIsHeap*)come_null_check(result_244, "sIsHeap_clone", 5, 3184)), "sIsHeap_clone", 5, 3185))->sname=(char*)come_increment_ref_count(((char*)(right_value454=(come_push_stackframe("sIsHeap_clone", 5, 3188),__exception_result_var_b418=string_clone(((struct sIsHeap*)come_null_check(((struct sIsHeap*)come_null_check(self, "sIsHeap_clone", 5, 3186)), "sIsHeap_clone", 5, 3187))->sname), come_pop_stackframe(), __exception_result_var_b418))));
                                                                    __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value454 = come_decrement_ref_count2(right_value454, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                }
                                                                if(_if_conditional361=self!=((void*)0)&&((struct sIsHeap*)come_null_check(((struct sIsHeap*)come_null_check(self, "sIsHeap_clone", 6, 3189)), "sIsHeap_clone", 6, 3190))->type!=((void*)0),                                                                _if_conditional361) {
                                                                    __dec_obj144=((struct sIsHeap*)come_null_check(((struct sIsHeap*)come_null_check(result_244, "sIsHeap_clone", 6, 3191)), "sIsHeap_clone", 6, 3192))->type;
                                                                    ((struct sIsHeap*)come_null_check(((struct sIsHeap*)come_null_check(result_244, "sIsHeap_clone", 6, 3191)), "sIsHeap_clone", 6, 3192))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value455=(come_push_stackframe("sIsHeap_clone", 6, 3195),__exception_result_var_b419=sType_clone(((struct sIsHeap*)come_null_check(((struct sIsHeap*)come_null_check(self, "sIsHeap_clone", 6, 3193)), "sIsHeap_clone", 6, 3194))->type), come_pop_stackframe(), __exception_result_var_b419))));
                                                                    come_call_finalizer3(__dec_obj144,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                    come_call_finalizer3(right_value455,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                                }
                                                                __result244__ = __result_obj__ = result_244;
                                                                come_call_finalizer3(result_244,sIsHeap_finalize, 0, 0, 1, 0, (void*)0);
                                                                return __result244__;
                                                                come_call_finalizer3(result_244,sIsHeap_finalize, 0, 0, 0, 0, (void*)0);
}

static void sIsPointer_finalize(struct sIsPointer* self){
void* __result_obj__;
_Bool _if_conditional364;
_Bool _if_conditional365;
memset(&__result_obj__, 0, sizeof(void*));
                                                                    if(_if_conditional364=self!=((void*)0)&&((struct sIsPointer*)come_null_check(((struct sIsPointer*)come_null_check(self, "sIsPointer_finalize", 0, 3212)), "sIsPointer_finalize", 0, 3213))->sname!=((void*)0),                                                                    _if_conditional364) {
                                                                        ((struct sIsPointer*)come_null_check(((struct sIsPointer*)come_null_check(self, "sIsPointer_finalize", 0, 3214)), "sIsPointer_finalize", 0, 3215))->sname = come_decrement_ref_count2(((struct sIsPointer*)come_null_check(((struct sIsPointer*)come_null_check(self, "sIsPointer_finalize", 0, 3214)), "sIsPointer_finalize", 0, 3215))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                    }
                                                                    if(_if_conditional365=self!=((void*)0)&&((struct sIsPointer*)come_null_check(((struct sIsPointer*)come_null_check(self, "sIsPointer_finalize", 1, 3216)), "sIsPointer_finalize", 1, 3217))->type!=((void*)0),                                                                    _if_conditional365) {
                                                                        come_call_finalizer3(((struct sIsPointer*)come_null_check(((struct sIsPointer*)come_null_check(self, "sIsPointer_finalize", 1, 3218)), "sIsPointer_finalize", 1, 3219))->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                    }
}

static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self){
void* __result_obj__;
_Bool _if_conditional366;
struct sIsPointer* __result246__;
void* right_value461;
struct sIsPointer* result_249;
_Bool _if_conditional367;
_Bool _if_conditional368;
char* __exception_result_var_b425;
void* right_value462;
char* __dec_obj145;
_Bool _if_conditional369;
struct sType* __exception_result_var_b426;
void* right_value463;
struct sType* __dec_obj146;
struct sIsPointer* __result247__;
memset(&__result_obj__, 0, sizeof(void*));
right_value461 = (void*)0;
memset(&result_249, 0, sizeof(struct sIsPointer*));
right_value462 = (void*)0;
right_value463 = (void*)0;
                                                                    if(_if_conditional366=self==(void*)0,                                                                    _if_conditional366) {
                                                                        __result246__ = __result_obj__ = (void*)0;
                                                                        return __result246__;
                                                                    }
                                                                    result_249=(struct sIsPointer*)come_increment_ref_count(((struct sIsPointer*)(right_value461=(struct sIsPointer*)come_calloc(1, sizeof(struct sIsPointer)*(1), "sIsPointer_clone", 3, "sIsPointer"))));
                                                                    come_call_finalizer3(right_value461,sIsPointer_finalize, 0, 1, 0, 0, __result_obj__);
                                                                    if(_if_conditional367=self!=((void*)0),                                                                    _if_conditional367) {
                                                                        ((struct sIsPointer*)come_null_check(((struct sIsPointer*)come_null_check(result_249, "sIsPointer_clone", 4, 3220)), "sIsPointer_clone", 4, 3221))->sline=((struct sIsPointer*)come_null_check(((struct sIsPointer*)come_null_check(self, "sIsPointer_clone", 4, 3222)), "sIsPointer_clone", 4, 3223))->sline;
                                                                    }
                                                                    if(_if_conditional368=self!=((void*)0)&&((struct sIsPointer*)come_null_check(((struct sIsPointer*)come_null_check(self, "sIsPointer_clone", 5, 3224)), "sIsPointer_clone", 5, 3225))->sname!=((void*)0),                                                                    _if_conditional368) {
                                                                        __dec_obj145=((struct sIsPointer*)come_null_check(((struct sIsPointer*)come_null_check(result_249, "sIsPointer_clone", 5, 3226)), "sIsPointer_clone", 5, 3227))->sname;
                                                                        ((struct sIsPointer*)come_null_check(((struct sIsPointer*)come_null_check(result_249, "sIsPointer_clone", 5, 3226)), "sIsPointer_clone", 5, 3227))->sname=(char*)come_increment_ref_count(((char*)(right_value462=(come_push_stackframe("sIsPointer_clone", 5, 3230),__exception_result_var_b425=string_clone(((struct sIsPointer*)come_null_check(((struct sIsPointer*)come_null_check(self, "sIsPointer_clone", 5, 3228)), "sIsPointer_clone", 5, 3229))->sname), come_pop_stackframe(), __exception_result_var_b425))));
                                                                        __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value462 = come_decrement_ref_count2(right_value462, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    }
                                                                    if(_if_conditional369=self!=((void*)0)&&((struct sIsPointer*)come_null_check(((struct sIsPointer*)come_null_check(self, "sIsPointer_clone", 6, 3231)), "sIsPointer_clone", 6, 3232))->type!=((void*)0),                                                                    _if_conditional369) {
                                                                        __dec_obj146=((struct sIsPointer*)come_null_check(((struct sIsPointer*)come_null_check(result_249, "sIsPointer_clone", 6, 3233)), "sIsPointer_clone", 6, 3234))->type;
                                                                        ((struct sIsPointer*)come_null_check(((struct sIsPointer*)come_null_check(result_249, "sIsPointer_clone", 6, 3233)), "sIsPointer_clone", 6, 3234))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value463=(come_push_stackframe("sIsPointer_clone", 6, 3237),__exception_result_var_b426=sType_clone(((struct sIsPointer*)come_null_check(((struct sIsPointer*)come_null_check(self, "sIsPointer_clone", 6, 3235)), "sIsPointer_clone", 6, 3236))->type), come_pop_stackframe(), __exception_result_var_b426))));
                                                                        come_call_finalizer3(__dec_obj146,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                        come_call_finalizer3(right_value463,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                                    }
                                                                    __result247__ = __result_obj__ = result_249;
                                                                    come_call_finalizer3(result_249,sIsPointer_finalize, 0, 0, 1, 0, (void*)0);
                                                                    return __result247__;
                                                                    come_call_finalizer3(result_249,sIsPointer_finalize, 0, 0, 0, 0, (void*)0);
}

static void sSizeOfNode_finalize(struct sSizeOfNode* self){
void* __result_obj__;
_Bool _if_conditional409;
_Bool _if_conditional410;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                if(_if_conditional409=self!=((void*)0)&&((struct sSizeOfNode*)come_null_check(((struct sSizeOfNode*)come_null_check(self, "sSizeOfNode_finalize", 0, 3413)), "sSizeOfNode_finalize", 0, 3414))->sname!=((void*)0),                                                                                _if_conditional409) {
                                                                                    ((struct sSizeOfNode*)come_null_check(((struct sSizeOfNode*)come_null_check(self, "sSizeOfNode_finalize", 0, 3415)), "sSizeOfNode_finalize", 0, 3416))->sname = come_decrement_ref_count2(((struct sSizeOfNode*)come_null_check(((struct sSizeOfNode*)come_null_check(self, "sSizeOfNode_finalize", 0, 3415)), "sSizeOfNode_finalize", 0, 3416))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                if(_if_conditional410=self!=((void*)0)&&((struct sSizeOfNode*)come_null_check(((struct sSizeOfNode*)come_null_check(self, "sSizeOfNode_finalize", 1, 3417)), "sSizeOfNode_finalize", 1, 3418))->type!=((void*)0),                                                                                _if_conditional410) {
                                                                                    come_call_finalizer3(((struct sSizeOfNode*)come_null_check(((struct sSizeOfNode*)come_null_check(self, "sSizeOfNode_finalize", 1, 3419)), "sSizeOfNode_finalize", 1, 3420))->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                }
}

static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self){
void* __result_obj__;
_Bool _if_conditional411;
struct sSizeOfNode* __result268__;
void* right_value500;
struct sSizeOfNode* result_265;
_Bool _if_conditional412;
_Bool _if_conditional413;
char* __exception_result_var_b460;
void* right_value501;
char* __dec_obj153;
_Bool _if_conditional414;
struct sType* __exception_result_var_b461;
void* right_value502;
struct sType* __dec_obj154;
struct sSizeOfNode* __result269__;
memset(&__result_obj__, 0, sizeof(void*));
right_value500 = (void*)0;
memset(&result_265, 0, sizeof(struct sSizeOfNode*));
right_value501 = (void*)0;
right_value502 = (void*)0;
                                                                                if(_if_conditional411=self==(void*)0,                                                                                _if_conditional411) {
                                                                                    __result268__ = __result_obj__ = (void*)0;
                                                                                    return __result268__;
                                                                                }
                                                                                result_265=(struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(right_value500=(struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "sSizeOfNode_clone", 3, "sSizeOfNode"))));
                                                                                come_call_finalizer3(right_value500,sSizeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                if(_if_conditional412=self!=((void*)0),                                                                                _if_conditional412) {
                                                                                    ((struct sSizeOfNode*)come_null_check(((struct sSizeOfNode*)come_null_check(result_265, "sSizeOfNode_clone", 4, 3421)), "sSizeOfNode_clone", 4, 3422))->sline=((struct sSizeOfNode*)come_null_check(((struct sSizeOfNode*)come_null_check(self, "sSizeOfNode_clone", 4, 3423)), "sSizeOfNode_clone", 4, 3424))->sline;
                                                                                }
                                                                                if(_if_conditional413=self!=((void*)0)&&((struct sSizeOfNode*)come_null_check(((struct sSizeOfNode*)come_null_check(self, "sSizeOfNode_clone", 5, 3425)), "sSizeOfNode_clone", 5, 3426))->sname!=((void*)0),                                                                                _if_conditional413) {
                                                                                    __dec_obj153=((struct sSizeOfNode*)come_null_check(((struct sSizeOfNode*)come_null_check(result_265, "sSizeOfNode_clone", 5, 3427)), "sSizeOfNode_clone", 5, 3428))->sname;
                                                                                    ((struct sSizeOfNode*)come_null_check(((struct sSizeOfNode*)come_null_check(result_265, "sSizeOfNode_clone", 5, 3427)), "sSizeOfNode_clone", 5, 3428))->sname=(char*)come_increment_ref_count(((char*)(right_value501=(come_push_stackframe("sSizeOfNode_clone", 5, 3431),__exception_result_var_b460=string_clone(((struct sSizeOfNode*)come_null_check(((struct sSizeOfNode*)come_null_check(self, "sSizeOfNode_clone", 5, 3429)), "sSizeOfNode_clone", 5, 3430))->sname), come_pop_stackframe(), __exception_result_var_b460))));
                                                                                    __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value501 = come_decrement_ref_count2(right_value501, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                if(_if_conditional414=self!=((void*)0)&&((struct sSizeOfNode*)come_null_check(((struct sSizeOfNode*)come_null_check(self, "sSizeOfNode_clone", 6, 3432)), "sSizeOfNode_clone", 6, 3433))->type!=((void*)0),                                                                                _if_conditional414) {
                                                                                    __dec_obj154=((struct sSizeOfNode*)come_null_check(((struct sSizeOfNode*)come_null_check(result_265, "sSizeOfNode_clone", 6, 3434)), "sSizeOfNode_clone", 6, 3435))->type;
                                                                                    ((struct sSizeOfNode*)come_null_check(((struct sSizeOfNode*)come_null_check(result_265, "sSizeOfNode_clone", 6, 3434)), "sSizeOfNode_clone", 6, 3435))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value502=(come_push_stackframe("sSizeOfNode_clone", 6, 3438),__exception_result_var_b461=sType_clone(((struct sSizeOfNode*)come_null_check(((struct sSizeOfNode*)come_null_check(self, "sSizeOfNode_clone", 6, 3436)), "sSizeOfNode_clone", 6, 3437))->type), come_pop_stackframe(), __exception_result_var_b461))));
                                                                                    come_call_finalizer3(__dec_obj154,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    come_call_finalizer3(right_value502,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                __result269__ = __result_obj__ = result_265;
                                                                                come_call_finalizer3(result_265,sSizeOfNode_finalize, 0, 0, 1, 0, (void*)0);
                                                                                return __result269__;
                                                                                come_call_finalizer3(result_265,sSizeOfNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional416;
_Bool _if_conditional417;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                if(_if_conditional416=self!=((void*)0)&&((struct sSizeOfExpNode*)come_null_check(((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_finalize", 0, 3448)), "sSizeOfExpNode_finalize", 0, 3449))->sname!=((void*)0),                                                                                _if_conditional416) {
                                                                                    ((struct sSizeOfExpNode*)come_null_check(((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_finalize", 0, 3450)), "sSizeOfExpNode_finalize", 0, 3451))->sname = come_decrement_ref_count2(((struct sSizeOfExpNode*)come_null_check(((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_finalize", 0, 3450)), "sSizeOfExpNode_finalize", 0, 3451))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                if(_if_conditional417=self!=((void*)0)&&((struct sSizeOfExpNode*)come_null_check(((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_finalize", 1, 3452)), "sSizeOfExpNode_finalize", 1, 3453))->exp!=((void*)0),                                                                                _if_conditional417) {
                                                                                    if(((struct sSizeOfExpNode*)come_null_check(((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_finalize", 1, 3454)), "sSizeOfExpNode_finalize", 1, 3455))->exp) { ((struct sSizeOfExpNode*)come_null_check(((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_finalize", 1, 3454)), "sSizeOfExpNode_finalize", 1, 3455))->exp = come_decrement_ref_count2(((struct sSizeOfExpNode*)come_null_check(((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_finalize", 1, 3454)), "sSizeOfExpNode_finalize", 1, 3455))->exp, ((struct sNode*)((struct sSizeOfExpNode*)come_null_check(((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_finalize", 1, 3454)), "sSizeOfExpNode_finalize", 1, 3455))->exp)->finalize, ((struct sNode*)((struct sSizeOfExpNode*)come_null_check(((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_finalize", 1, 3454)), "sSizeOfExpNode_finalize", 1, 3455))->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                }
}

static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional418;
struct sSizeOfExpNode* __result271__;
void* right_value507;
struct sSizeOfExpNode* result_267;
_Bool _if_conditional419;
_Bool _if_conditional420;
char* __exception_result_var_b464;
void* right_value508;
char* __dec_obj155;
_Bool _if_conditional421;
struct sNode* __exception_result_var_b465;
void* right_value509;
struct sNode* __dec_obj156;
struct sSizeOfExpNode* __result272__;
memset(&__result_obj__, 0, sizeof(void*));
right_value507 = (void*)0;
memset(&result_267, 0, sizeof(struct sSizeOfExpNode*));
right_value508 = (void*)0;
right_value509 = (void*)0;
                                                                                if(_if_conditional418=self==(void*)0,                                                                                _if_conditional418) {
                                                                                    __result271__ = __result_obj__ = (void*)0;
                                                                                    return __result271__;
                                                                                }
                                                                                result_267=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(right_value507=(struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "sSizeOfExpNode_clone", 3, "sSizeOfExpNode"))));
                                                                                come_call_finalizer3(right_value507,sSizeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                if(_if_conditional419=self!=((void*)0),                                                                                _if_conditional419) {
                                                                                    ((struct sSizeOfExpNode*)come_null_check(((struct sSizeOfExpNode*)come_null_check(result_267, "sSizeOfExpNode_clone", 4, 3456)), "sSizeOfExpNode_clone", 4, 3457))->sline=((struct sSizeOfExpNode*)come_null_check(((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_clone", 4, 3458)), "sSizeOfExpNode_clone", 4, 3459))->sline;
                                                                                }
                                                                                if(_if_conditional420=self!=((void*)0)&&((struct sSizeOfExpNode*)come_null_check(((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_clone", 5, 3460)), "sSizeOfExpNode_clone", 5, 3461))->sname!=((void*)0),                                                                                _if_conditional420) {
                                                                                    __dec_obj155=((struct sSizeOfExpNode*)come_null_check(((struct sSizeOfExpNode*)come_null_check(result_267, "sSizeOfExpNode_clone", 5, 3462)), "sSizeOfExpNode_clone", 5, 3463))->sname;
                                                                                    ((struct sSizeOfExpNode*)come_null_check(((struct sSizeOfExpNode*)come_null_check(result_267, "sSizeOfExpNode_clone", 5, 3462)), "sSizeOfExpNode_clone", 5, 3463))->sname=(char*)come_increment_ref_count(((char*)(right_value508=(come_push_stackframe("sSizeOfExpNode_clone", 5, 3466),__exception_result_var_b464=string_clone(((struct sSizeOfExpNode*)come_null_check(((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_clone", 5, 3464)), "sSizeOfExpNode_clone", 5, 3465))->sname), come_pop_stackframe(), __exception_result_var_b464))));
                                                                                    __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value508 = come_decrement_ref_count2(right_value508, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                if(_if_conditional421=self!=((void*)0)&&((struct sSizeOfExpNode*)come_null_check(((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_clone", 6, 3467)), "sSizeOfExpNode_clone", 6, 3468))->exp!=((void*)0),                                                                                _if_conditional421) {
                                                                                    __dec_obj156=((struct sSizeOfExpNode*)come_null_check(((struct sSizeOfExpNode*)come_null_check(result_267, "sSizeOfExpNode_clone", 6, 3469)), "sSizeOfExpNode_clone", 6, 3470))->exp;
                                                                                    ((struct sSizeOfExpNode*)come_null_check(((struct sSizeOfExpNode*)come_null_check(result_267, "sSizeOfExpNode_clone", 6, 3469)), "sSizeOfExpNode_clone", 6, 3470))->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value509=(come_push_stackframe("sSizeOfExpNode_clone", 6, 3473),__exception_result_var_b465=sNode_clone(((struct sSizeOfExpNode*)come_null_check(((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_clone", 6, 3471)), "sSizeOfExpNode_clone", 6, 3472))->exp), come_pop_stackframe(), __exception_result_var_b465))));
                                                                                    if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                    if(right_value509) { right_value509 = come_decrement_ref_count2(right_value509, ((struct sNode*)right_value509)->finalize, ((struct sNode*)right_value509)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                }
                                                                                __result272__ = __result_obj__ = result_267;
                                                                                come_call_finalizer3(result_267,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
                                                                                return __result272__;
                                                                                come_call_finalizer3(result_267,sSizeOfExpNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sTypeOfNode_finalize(struct sTypeOfNode* self){
void* __result_obj__;
_Bool _if_conditional429;
_Bool _if_conditional430;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                    if(_if_conditional429=self!=((void*)0)&&((struct sTypeOfNode*)come_null_check(((struct sTypeOfNode*)come_null_check(self, "sTypeOfNode_finalize", 0, 3509)), "sTypeOfNode_finalize", 0, 3510))->sname!=((void*)0),                                                                                    _if_conditional429) {
                                                                                        ((struct sTypeOfNode*)come_null_check(((struct sTypeOfNode*)come_null_check(self, "sTypeOfNode_finalize", 0, 3511)), "sTypeOfNode_finalize", 0, 3512))->sname = come_decrement_ref_count2(((struct sTypeOfNode*)come_null_check(((struct sTypeOfNode*)come_null_check(self, "sTypeOfNode_finalize", 0, 3511)), "sTypeOfNode_finalize", 0, 3512))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    }
                                                                                    if(_if_conditional430=self!=((void*)0)&&((struct sTypeOfNode*)come_null_check(((struct sTypeOfNode*)come_null_check(self, "sTypeOfNode_finalize", 1, 3513)), "sTypeOfNode_finalize", 1, 3514))->type!=((void*)0),                                                                                    _if_conditional430) {
                                                                                        come_call_finalizer3(((struct sTypeOfNode*)come_null_check(((struct sTypeOfNode*)come_null_check(self, "sTypeOfNode_finalize", 1, 3515)), "sTypeOfNode_finalize", 1, 3516))->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    }
}

static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self){
void* __result_obj__;
_Bool _if_conditional431;
struct sTypeOfNode* __result274__;
void* right_value515;
struct sTypeOfNode* result_276;
_Bool _if_conditional432;
_Bool _if_conditional433;
char* __exception_result_var_b472;
void* right_value516;
char* __dec_obj157;
_Bool _if_conditional434;
struct sType* __exception_result_var_b473;
void* right_value517;
struct sType* __dec_obj158;
struct sTypeOfNode* __result275__;
memset(&__result_obj__, 0, sizeof(void*));
right_value515 = (void*)0;
memset(&result_276, 0, sizeof(struct sTypeOfNode*));
right_value516 = (void*)0;
right_value517 = (void*)0;
                                                                                    if(_if_conditional431=self==(void*)0,                                                                                    _if_conditional431) {
                                                                                        __result274__ = __result_obj__ = (void*)0;
                                                                                        return __result274__;
                                                                                    }
                                                                                    result_276=(struct sTypeOfNode*)come_increment_ref_count(((struct sTypeOfNode*)(right_value515=(struct sTypeOfNode*)come_calloc(1, sizeof(struct sTypeOfNode)*(1), "sTypeOfNode_clone", 3, "sTypeOfNode"))));
                                                                                    come_call_finalizer3(right_value515,sTypeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    if(_if_conditional432=self!=((void*)0),                                                                                    _if_conditional432) {
                                                                                        ((struct sTypeOfNode*)come_null_check(((struct sTypeOfNode*)come_null_check(result_276, "sTypeOfNode_clone", 4, 3517)), "sTypeOfNode_clone", 4, 3518))->sline=((struct sTypeOfNode*)come_null_check(((struct sTypeOfNode*)come_null_check(self, "sTypeOfNode_clone", 4, 3519)), "sTypeOfNode_clone", 4, 3520))->sline;
                                                                                    }
                                                                                    if(_if_conditional433=self!=((void*)0)&&((struct sTypeOfNode*)come_null_check(((struct sTypeOfNode*)come_null_check(self, "sTypeOfNode_clone", 5, 3521)), "sTypeOfNode_clone", 5, 3522))->sname!=((void*)0),                                                                                    _if_conditional433) {
                                                                                        __dec_obj157=((struct sTypeOfNode*)come_null_check(((struct sTypeOfNode*)come_null_check(result_276, "sTypeOfNode_clone", 5, 3523)), "sTypeOfNode_clone", 5, 3524))->sname;
                                                                                        ((struct sTypeOfNode*)come_null_check(((struct sTypeOfNode*)come_null_check(result_276, "sTypeOfNode_clone", 5, 3523)), "sTypeOfNode_clone", 5, 3524))->sname=(char*)come_increment_ref_count(((char*)(right_value516=(come_push_stackframe("sTypeOfNode_clone", 5, 3527),__exception_result_var_b472=string_clone(((struct sTypeOfNode*)come_null_check(((struct sTypeOfNode*)come_null_check(self, "sTypeOfNode_clone", 5, 3525)), "sTypeOfNode_clone", 5, 3526))->sname), come_pop_stackframe(), __exception_result_var_b472))));
                                                                                        __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                        right_value516 = come_decrement_ref_count2(right_value516, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    }
                                                                                    if(_if_conditional434=self!=((void*)0)&&((struct sTypeOfNode*)come_null_check(((struct sTypeOfNode*)come_null_check(self, "sTypeOfNode_clone", 6, 3528)), "sTypeOfNode_clone", 6, 3529))->type!=((void*)0),                                                                                    _if_conditional434) {
                                                                                        __dec_obj158=((struct sTypeOfNode*)come_null_check(((struct sTypeOfNode*)come_null_check(result_276, "sTypeOfNode_clone", 6, 3530)), "sTypeOfNode_clone", 6, 3531))->type;
                                                                                        ((struct sTypeOfNode*)come_null_check(((struct sTypeOfNode*)come_null_check(result_276, "sTypeOfNode_clone", 6, 3530)), "sTypeOfNode_clone", 6, 3531))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value517=(come_push_stackframe("sTypeOfNode_clone", 6, 3534),__exception_result_var_b473=sType_clone(((struct sTypeOfNode*)come_null_check(((struct sTypeOfNode*)come_null_check(self, "sTypeOfNode_clone", 6, 3532)), "sTypeOfNode_clone", 6, 3533))->type), come_pop_stackframe(), __exception_result_var_b473))));
                                                                                        come_call_finalizer3(__dec_obj158,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                        come_call_finalizer3(right_value517,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    }
                                                                                    __result275__ = __result_obj__ = result_276;
                                                                                    come_call_finalizer3(result_276,sTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
                                                                                    return __result275__;
                                                                                    come_call_finalizer3(result_276,sTypeOfNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional436;
_Bool _if_conditional437;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                    if(_if_conditional436=self!=((void*)0)&&((struct sTypeOfExpNode*)come_null_check(((struct sTypeOfExpNode*)come_null_check(self, "sTypeOfExpNode_finalize", 0, 3544)), "sTypeOfExpNode_finalize", 0, 3545))->sname!=((void*)0),                                                                                    _if_conditional436) {
                                                                                        ((struct sTypeOfExpNode*)come_null_check(((struct sTypeOfExpNode*)come_null_check(self, "sTypeOfExpNode_finalize", 0, 3546)), "sTypeOfExpNode_finalize", 0, 3547))->sname = come_decrement_ref_count2(((struct sTypeOfExpNode*)come_null_check(((struct sTypeOfExpNode*)come_null_check(self, "sTypeOfExpNode_finalize", 0, 3546)), "sTypeOfExpNode_finalize", 0, 3547))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    }
                                                                                    if(_if_conditional437=self!=((void*)0)&&((struct sTypeOfExpNode*)come_null_check(((struct sTypeOfExpNode*)come_null_check(self, "sTypeOfExpNode_finalize", 1, 3548)), "sTypeOfExpNode_finalize", 1, 3549))->exp!=((void*)0),                                                                                    _if_conditional437) {
                                                                                        if(((struct sTypeOfExpNode*)come_null_check(((struct sTypeOfExpNode*)come_null_check(self, "sTypeOfExpNode_finalize", 1, 3550)), "sTypeOfExpNode_finalize", 1, 3551))->exp) { ((struct sTypeOfExpNode*)come_null_check(((struct sTypeOfExpNode*)come_null_check(self, "sTypeOfExpNode_finalize", 1, 3550)), "sTypeOfExpNode_finalize", 1, 3551))->exp = come_decrement_ref_count2(((struct sTypeOfExpNode*)come_null_check(((struct sTypeOfExpNode*)come_null_check(self, "sTypeOfExpNode_finalize", 1, 3550)), "sTypeOfExpNode_finalize", 1, 3551))->exp, ((struct sNode*)((struct sTypeOfExpNode*)come_null_check(((struct sTypeOfExpNode*)come_null_check(self, "sTypeOfExpNode_finalize", 1, 3550)), "sTypeOfExpNode_finalize", 1, 3551))->exp)->finalize, ((struct sNode*)((struct sTypeOfExpNode*)come_null_check(((struct sTypeOfExpNode*)come_null_check(self, "sTypeOfExpNode_finalize", 1, 3550)), "sTypeOfExpNode_finalize", 1, 3551))->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    }
}

static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional438;
struct sTypeOfExpNode* __result277__;
void* right_value522;
struct sTypeOfExpNode* result_278;
_Bool _if_conditional439;
_Bool _if_conditional440;
char* __exception_result_var_b476;
void* right_value523;
char* __dec_obj159;
_Bool _if_conditional441;
struct sNode* __exception_result_var_b477;
void* right_value524;
struct sNode* __dec_obj160;
struct sTypeOfExpNode* __result278__;
memset(&__result_obj__, 0, sizeof(void*));
right_value522 = (void*)0;
memset(&result_278, 0, sizeof(struct sTypeOfExpNode*));
right_value523 = (void*)0;
right_value524 = (void*)0;
                                                                                    if(_if_conditional438=self==(void*)0,                                                                                    _if_conditional438) {
                                                                                        __result277__ = __result_obj__ = (void*)0;
                                                                                        return __result277__;
                                                                                    }
                                                                                    result_278=(struct sTypeOfExpNode*)come_increment_ref_count(((struct sTypeOfExpNode*)(right_value522=(struct sTypeOfExpNode*)come_calloc(1, sizeof(struct sTypeOfExpNode)*(1), "sTypeOfExpNode_clone", 3, "sTypeOfExpNode"))));
                                                                                    come_call_finalizer3(right_value522,sTypeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    if(_if_conditional439=self!=((void*)0),                                                                                    _if_conditional439) {
                                                                                        ((struct sTypeOfExpNode*)come_null_check(((struct sTypeOfExpNode*)come_null_check(result_278, "sTypeOfExpNode_clone", 4, 3552)), "sTypeOfExpNode_clone", 4, 3553))->sline=((struct sTypeOfExpNode*)come_null_check(((struct sTypeOfExpNode*)come_null_check(self, "sTypeOfExpNode_clone", 4, 3554)), "sTypeOfExpNode_clone", 4, 3555))->sline;
                                                                                    }
                                                                                    if(_if_conditional440=self!=((void*)0)&&((struct sTypeOfExpNode*)come_null_check(((struct sTypeOfExpNode*)come_null_check(self, "sTypeOfExpNode_clone", 5, 3556)), "sTypeOfExpNode_clone", 5, 3557))->sname!=((void*)0),                                                                                    _if_conditional440) {
                                                                                        __dec_obj159=((struct sTypeOfExpNode*)come_null_check(((struct sTypeOfExpNode*)come_null_check(result_278, "sTypeOfExpNode_clone", 5, 3558)), "sTypeOfExpNode_clone", 5, 3559))->sname;
                                                                                        ((struct sTypeOfExpNode*)come_null_check(((struct sTypeOfExpNode*)come_null_check(result_278, "sTypeOfExpNode_clone", 5, 3558)), "sTypeOfExpNode_clone", 5, 3559))->sname=(char*)come_increment_ref_count(((char*)(right_value523=(come_push_stackframe("sTypeOfExpNode_clone", 5, 3562),__exception_result_var_b476=string_clone(((struct sTypeOfExpNode*)come_null_check(((struct sTypeOfExpNode*)come_null_check(self, "sTypeOfExpNode_clone", 5, 3560)), "sTypeOfExpNode_clone", 5, 3561))->sname), come_pop_stackframe(), __exception_result_var_b476))));
                                                                                        __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                        right_value523 = come_decrement_ref_count2(right_value523, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    }
                                                                                    if(_if_conditional441=self!=((void*)0)&&((struct sTypeOfExpNode*)come_null_check(((struct sTypeOfExpNode*)come_null_check(self, "sTypeOfExpNode_clone", 6, 3563)), "sTypeOfExpNode_clone", 6, 3564))->exp!=((void*)0),                                                                                    _if_conditional441) {
                                                                                        __dec_obj160=((struct sTypeOfExpNode*)come_null_check(((struct sTypeOfExpNode*)come_null_check(result_278, "sTypeOfExpNode_clone", 6, 3565)), "sTypeOfExpNode_clone", 6, 3566))->exp;
                                                                                        ((struct sTypeOfExpNode*)come_null_check(((struct sTypeOfExpNode*)come_null_check(result_278, "sTypeOfExpNode_clone", 6, 3565)), "sTypeOfExpNode_clone", 6, 3566))->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value524=(come_push_stackframe("sTypeOfExpNode_clone", 6, 3569),__exception_result_var_b477=sNode_clone(((struct sTypeOfExpNode*)come_null_check(((struct sTypeOfExpNode*)come_null_check(self, "sTypeOfExpNode_clone", 6, 3567)), "sTypeOfExpNode_clone", 6, 3568))->exp), come_pop_stackframe(), __exception_result_var_b477))));
                                                                                        if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                        if(right_value524) { right_value524 = come_decrement_ref_count2(right_value524, ((struct sNode*)right_value524)->finalize, ((struct sNode*)right_value524)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    }
                                                                                    __result278__ = __result_obj__ = result_278;
                                                                                    come_call_finalizer3(result_278,sTypeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
                                                                                    return __result278__;
                                                                                    come_call_finalizer3(result_278,sTypeOfExpNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sAlignOfNode_finalize(struct sAlignOfNode* self){
void* __result_obj__;
_Bool _if_conditional447;
_Bool _if_conditional448;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                        if(_if_conditional447=self!=((void*)0)&&((struct sAlignOfNode*)come_null_check(((struct sAlignOfNode*)come_null_check(self, "sAlignOfNode_finalize", 0, 3595)), "sAlignOfNode_finalize", 0, 3596))->sname!=((void*)0),                                                                                        _if_conditional447) {
                                                                                            ((struct sAlignOfNode*)come_null_check(((struct sAlignOfNode*)come_null_check(self, "sAlignOfNode_finalize", 0, 3597)), "sAlignOfNode_finalize", 0, 3598))->sname = come_decrement_ref_count2(((struct sAlignOfNode*)come_null_check(((struct sAlignOfNode*)come_null_check(self, "sAlignOfNode_finalize", 0, 3597)), "sAlignOfNode_finalize", 0, 3598))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        if(_if_conditional448=self!=((void*)0)&&((struct sAlignOfNode*)come_null_check(((struct sAlignOfNode*)come_null_check(self, "sAlignOfNode_finalize", 1, 3599)), "sAlignOfNode_finalize", 1, 3600))->type!=((void*)0),                                                                                        _if_conditional448) {
                                                                                            come_call_finalizer3(((struct sAlignOfNode*)come_null_check(((struct sAlignOfNode*)come_null_check(self, "sAlignOfNode_finalize", 1, 3601)), "sAlignOfNode_finalize", 1, 3602))->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                        }
}

static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self){
void* __result_obj__;
_Bool _if_conditional449;
struct sAlignOfNode* __result280__;
void* right_value530;
struct sAlignOfNode* result_286;
_Bool _if_conditional450;
_Bool _if_conditional451;
char* __exception_result_var_b486;
void* right_value531;
char* __dec_obj161;
_Bool _if_conditional452;
struct sType* __exception_result_var_b487;
void* right_value532;
struct sType* __dec_obj162;
struct sAlignOfNode* __result281__;
memset(&__result_obj__, 0, sizeof(void*));
right_value530 = (void*)0;
memset(&result_286, 0, sizeof(struct sAlignOfNode*));
right_value531 = (void*)0;
right_value532 = (void*)0;
                                                                                        if(_if_conditional449=self==(void*)0,                                                                                        _if_conditional449) {
                                                                                            __result280__ = __result_obj__ = (void*)0;
                                                                                            return __result280__;
                                                                                        }
                                                                                        result_286=(struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(right_value530=(struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "sAlignOfNode_clone", 3, "sAlignOfNode"))));
                                                                                        come_call_finalizer3(right_value530,sAlignOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        if(_if_conditional450=self!=((void*)0),                                                                                        _if_conditional450) {
                                                                                            ((struct sAlignOfNode*)come_null_check(((struct sAlignOfNode*)come_null_check(result_286, "sAlignOfNode_clone", 4, 3603)), "sAlignOfNode_clone", 4, 3604))->sline=((struct sAlignOfNode*)come_null_check(((struct sAlignOfNode*)come_null_check(self, "sAlignOfNode_clone", 4, 3605)), "sAlignOfNode_clone", 4, 3606))->sline;
                                                                                        }
                                                                                        if(_if_conditional451=self!=((void*)0)&&((struct sAlignOfNode*)come_null_check(((struct sAlignOfNode*)come_null_check(self, "sAlignOfNode_clone", 5, 3607)), "sAlignOfNode_clone", 5, 3608))->sname!=((void*)0),                                                                                        _if_conditional451) {
                                                                                            __dec_obj161=((struct sAlignOfNode*)come_null_check(((struct sAlignOfNode*)come_null_check(result_286, "sAlignOfNode_clone", 5, 3609)), "sAlignOfNode_clone", 5, 3610))->sname;
                                                                                            ((struct sAlignOfNode*)come_null_check(((struct sAlignOfNode*)come_null_check(result_286, "sAlignOfNode_clone", 5, 3609)), "sAlignOfNode_clone", 5, 3610))->sname=(char*)come_increment_ref_count(((char*)(right_value531=(come_push_stackframe("sAlignOfNode_clone", 5, 3613),__exception_result_var_b486=string_clone(((struct sAlignOfNode*)come_null_check(((struct sAlignOfNode*)come_null_check(self, "sAlignOfNode_clone", 5, 3611)), "sAlignOfNode_clone", 5, 3612))->sname), come_pop_stackframe(), __exception_result_var_b486))));
                                                                                            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                            right_value531 = come_decrement_ref_count2(right_value531, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                        }
                                                                                        if(_if_conditional452=self!=((void*)0)&&((struct sAlignOfNode*)come_null_check(((struct sAlignOfNode*)come_null_check(self, "sAlignOfNode_clone", 6, 3614)), "sAlignOfNode_clone", 6, 3615))->type!=((void*)0),                                                                                        _if_conditional452) {
                                                                                            __dec_obj162=((struct sAlignOfNode*)come_null_check(((struct sAlignOfNode*)come_null_check(result_286, "sAlignOfNode_clone", 6, 3616)), "sAlignOfNode_clone", 6, 3617))->type;
                                                                                            ((struct sAlignOfNode*)come_null_check(((struct sAlignOfNode*)come_null_check(result_286, "sAlignOfNode_clone", 6, 3616)), "sAlignOfNode_clone", 6, 3617))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value532=(come_push_stackframe("sAlignOfNode_clone", 6, 3620),__exception_result_var_b487=sType_clone(((struct sAlignOfNode*)come_null_check(((struct sAlignOfNode*)come_null_check(self, "sAlignOfNode_clone", 6, 3618)), "sAlignOfNode_clone", 6, 3619))->type), come_pop_stackframe(), __exception_result_var_b487))));
                                                                                            come_call_finalizer3(__dec_obj162,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                            come_call_finalizer3(right_value532,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        }
                                                                                        __result281__ = __result_obj__ = result_286;
                                                                                        come_call_finalizer3(result_286,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
                                                                                        return __result281__;
                                                                                        come_call_finalizer3(result_286,sAlignOfNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional453;
_Bool _if_conditional454;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                        if(_if_conditional453=self!=((void*)0)&&((struct sAlignOfExpNode*)come_null_check(((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_finalize", 0, 3625)), "sAlignOfExpNode_finalize", 0, 3626))->sname!=((void*)0),                                                                                        _if_conditional453) {
                                                                                            ((struct sAlignOfExpNode*)come_null_check(((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_finalize", 0, 3627)), "sAlignOfExpNode_finalize", 0, 3628))->sname = come_decrement_ref_count2(((struct sAlignOfExpNode*)come_null_check(((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_finalize", 0, 3627)), "sAlignOfExpNode_finalize", 0, 3628))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        if(_if_conditional454=self!=((void*)0)&&((struct sAlignOfExpNode*)come_null_check(((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_finalize", 1, 3629)), "sAlignOfExpNode_finalize", 1, 3630))->exp!=((void*)0),                                                                                        _if_conditional454) {
                                                                                            if(((struct sAlignOfExpNode*)come_null_check(((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_finalize", 1, 3631)), "sAlignOfExpNode_finalize", 1, 3632))->exp) { ((struct sAlignOfExpNode*)come_null_check(((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_finalize", 1, 3631)), "sAlignOfExpNode_finalize", 1, 3632))->exp = come_decrement_ref_count2(((struct sAlignOfExpNode*)come_null_check(((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_finalize", 1, 3631)), "sAlignOfExpNode_finalize", 1, 3632))->exp, ((struct sNode*)((struct sAlignOfExpNode*)come_null_check(((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_finalize", 1, 3631)), "sAlignOfExpNode_finalize", 1, 3632))->exp)->finalize, ((struct sNode*)((struct sAlignOfExpNode*)come_null_check(((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_finalize", 1, 3631)), "sAlignOfExpNode_finalize", 1, 3632))->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                        }
}

static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional455;
struct sAlignOfExpNode* __result283__;
void* right_value537;
struct sAlignOfExpNode* result_288;
_Bool _if_conditional456;
_Bool _if_conditional457;
char* __exception_result_var_b491;
void* right_value538;
char* __dec_obj163;
_Bool _if_conditional458;
struct sNode* __exception_result_var_b492;
void* right_value539;
struct sNode* __dec_obj164;
struct sAlignOfExpNode* __result284__;
memset(&__result_obj__, 0, sizeof(void*));
right_value537 = (void*)0;
memset(&result_288, 0, sizeof(struct sAlignOfExpNode*));
right_value538 = (void*)0;
right_value539 = (void*)0;
                                                                                        if(_if_conditional455=self==(void*)0,                                                                                        _if_conditional455) {
                                                                                            __result283__ = __result_obj__ = (void*)0;
                                                                                            return __result283__;
                                                                                        }
                                                                                        result_288=(struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(right_value537=(struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "sAlignOfExpNode_clone", 3, "sAlignOfExpNode"))));
                                                                                        come_call_finalizer3(right_value537,sAlignOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        if(_if_conditional456=self!=((void*)0),                                                                                        _if_conditional456) {
                                                                                            ((struct sAlignOfExpNode*)come_null_check(((struct sAlignOfExpNode*)come_null_check(result_288, "sAlignOfExpNode_clone", 4, 3633)), "sAlignOfExpNode_clone", 4, 3634))->sline=((struct sAlignOfExpNode*)come_null_check(((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_clone", 4, 3635)), "sAlignOfExpNode_clone", 4, 3636))->sline;
                                                                                        }
                                                                                        if(_if_conditional457=self!=((void*)0)&&((struct sAlignOfExpNode*)come_null_check(((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_clone", 5, 3637)), "sAlignOfExpNode_clone", 5, 3638))->sname!=((void*)0),                                                                                        _if_conditional457) {
                                                                                            __dec_obj163=((struct sAlignOfExpNode*)come_null_check(((struct sAlignOfExpNode*)come_null_check(result_288, "sAlignOfExpNode_clone", 5, 3639)), "sAlignOfExpNode_clone", 5, 3640))->sname;
                                                                                            ((struct sAlignOfExpNode*)come_null_check(((struct sAlignOfExpNode*)come_null_check(result_288, "sAlignOfExpNode_clone", 5, 3639)), "sAlignOfExpNode_clone", 5, 3640))->sname=(char*)come_increment_ref_count(((char*)(right_value538=(come_push_stackframe("sAlignOfExpNode_clone", 5, 3643),__exception_result_var_b491=string_clone(((struct sAlignOfExpNode*)come_null_check(((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_clone", 5, 3641)), "sAlignOfExpNode_clone", 5, 3642))->sname), come_pop_stackframe(), __exception_result_var_b491))));
                                                                                            __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                            right_value538 = come_decrement_ref_count2(right_value538, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                        }
                                                                                        if(_if_conditional458=self!=((void*)0)&&((struct sAlignOfExpNode*)come_null_check(((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_clone", 6, 3644)), "sAlignOfExpNode_clone", 6, 3645))->exp!=((void*)0),                                                                                        _if_conditional458) {
                                                                                            __dec_obj164=((struct sAlignOfExpNode*)come_null_check(((struct sAlignOfExpNode*)come_null_check(result_288, "sAlignOfExpNode_clone", 6, 3646)), "sAlignOfExpNode_clone", 6, 3647))->exp;
                                                                                            ((struct sAlignOfExpNode*)come_null_check(((struct sAlignOfExpNode*)come_null_check(result_288, "sAlignOfExpNode_clone", 6, 3646)), "sAlignOfExpNode_clone", 6, 3647))->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value539=(come_push_stackframe("sAlignOfExpNode_clone", 6, 3650),__exception_result_var_b492=sNode_clone(((struct sAlignOfExpNode*)come_null_check(((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_clone", 6, 3648)), "sAlignOfExpNode_clone", 6, 3649))->exp), come_pop_stackframe(), __exception_result_var_b492))));
                                                                                            if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count2(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                            if(right_value539) { right_value539 = come_decrement_ref_count2(right_value539, ((struct sNode*)right_value539)->finalize, ((struct sNode*)right_value539)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        }
                                                                                        __result284__ = __result_obj__ = result_288;
                                                                                        come_call_finalizer3(result_288,sAlignOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
                                                                                        return __result284__;
                                                                                        come_call_finalizer3(result_288,sAlignOfExpNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sAlignOfNode2_finalize(struct sAlignOfNode2* self){
void* __result_obj__;
_Bool _if_conditional464;
_Bool _if_conditional465;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                            if(_if_conditional464=self!=((void*)0)&&((struct sAlignOfNode2*)come_null_check(((struct sAlignOfNode2*)come_null_check(self, "sAlignOfNode2_finalize", 0, 3676)), "sAlignOfNode2_finalize", 0, 3677))->sname!=((void*)0),                                                                                            _if_conditional464) {
                                                                                                ((struct sAlignOfNode2*)come_null_check(((struct sAlignOfNode2*)come_null_check(self, "sAlignOfNode2_finalize", 0, 3678)), "sAlignOfNode2_finalize", 0, 3679))->sname = come_decrement_ref_count2(((struct sAlignOfNode2*)come_null_check(((struct sAlignOfNode2*)come_null_check(self, "sAlignOfNode2_finalize", 0, 3678)), "sAlignOfNode2_finalize", 0, 3679))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
                                                                                            if(_if_conditional465=self!=((void*)0)&&((struct sAlignOfNode2*)come_null_check(((struct sAlignOfNode2*)come_null_check(self, "sAlignOfNode2_finalize", 1, 3680)), "sAlignOfNode2_finalize", 1, 3681))->type!=((void*)0),                                                                                            _if_conditional465) {
                                                                                                come_call_finalizer3(((struct sAlignOfNode2*)come_null_check(((struct sAlignOfNode2*)come_null_check(self, "sAlignOfNode2_finalize", 1, 3682)), "sAlignOfNode2_finalize", 1, 3683))->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                            }
}

static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self){
void* __result_obj__;
_Bool _if_conditional466;
struct sAlignOfNode2* __result286__;
void* right_value545;
struct sAlignOfNode2* result_296;
_Bool _if_conditional467;
_Bool _if_conditional468;
char* __exception_result_var_b501;
void* right_value546;
char* __dec_obj165;
_Bool _if_conditional469;
struct sType* __exception_result_var_b502;
void* right_value547;
struct sType* __dec_obj166;
struct sAlignOfNode2* __result287__;
memset(&__result_obj__, 0, sizeof(void*));
right_value545 = (void*)0;
memset(&result_296, 0, sizeof(struct sAlignOfNode2*));
right_value546 = (void*)0;
right_value547 = (void*)0;
                                                                                            if(_if_conditional466=self==(void*)0,                                                                                            _if_conditional466) {
                                                                                                __result286__ = __result_obj__ = (void*)0;
                                                                                                return __result286__;
                                                                                            }
                                                                                            result_296=(struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(right_value545=(struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "sAlignOfNode2_clone", 3, "sAlignOfNode2"))));
                                                                                            come_call_finalizer3(right_value545,sAlignOfNode2_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            if(_if_conditional467=self!=((void*)0),                                                                                            _if_conditional467) {
                                                                                                ((struct sAlignOfNode2*)come_null_check(((struct sAlignOfNode2*)come_null_check(result_296, "sAlignOfNode2_clone", 4, 3684)), "sAlignOfNode2_clone", 4, 3685))->sline=((struct sAlignOfNode2*)come_null_check(((struct sAlignOfNode2*)come_null_check(self, "sAlignOfNode2_clone", 4, 3686)), "sAlignOfNode2_clone", 4, 3687))->sline;
                                                                                            }
                                                                                            if(_if_conditional468=self!=((void*)0)&&((struct sAlignOfNode2*)come_null_check(((struct sAlignOfNode2*)come_null_check(self, "sAlignOfNode2_clone", 5, 3688)), "sAlignOfNode2_clone", 5, 3689))->sname!=((void*)0),                                                                                            _if_conditional468) {
                                                                                                __dec_obj165=((struct sAlignOfNode2*)come_null_check(((struct sAlignOfNode2*)come_null_check(result_296, "sAlignOfNode2_clone", 5, 3690)), "sAlignOfNode2_clone", 5, 3691))->sname;
                                                                                                ((struct sAlignOfNode2*)come_null_check(((struct sAlignOfNode2*)come_null_check(result_296, "sAlignOfNode2_clone", 5, 3690)), "sAlignOfNode2_clone", 5, 3691))->sname=(char*)come_increment_ref_count(((char*)(right_value546=(come_push_stackframe("sAlignOfNode2_clone", 5, 3694),__exception_result_var_b501=string_clone(((struct sAlignOfNode2*)come_null_check(((struct sAlignOfNode2*)come_null_check(self, "sAlignOfNode2_clone", 5, 3692)), "sAlignOfNode2_clone", 5, 3693))->sname), come_pop_stackframe(), __exception_result_var_b501))));
                                                                                                __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value546 = come_decrement_ref_count2(right_value546, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            if(_if_conditional469=self!=((void*)0)&&((struct sAlignOfNode2*)come_null_check(((struct sAlignOfNode2*)come_null_check(self, "sAlignOfNode2_clone", 6, 3695)), "sAlignOfNode2_clone", 6, 3696))->type!=((void*)0),                                                                                            _if_conditional469) {
                                                                                                __dec_obj166=((struct sAlignOfNode2*)come_null_check(((struct sAlignOfNode2*)come_null_check(result_296, "sAlignOfNode2_clone", 6, 3697)), "sAlignOfNode2_clone", 6, 3698))->type;
                                                                                                ((struct sAlignOfNode2*)come_null_check(((struct sAlignOfNode2*)come_null_check(result_296, "sAlignOfNode2_clone", 6, 3697)), "sAlignOfNode2_clone", 6, 3698))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value547=(come_push_stackframe("sAlignOfNode2_clone", 6, 3701),__exception_result_var_b502=sType_clone(((struct sAlignOfNode2*)come_null_check(((struct sAlignOfNode2*)come_null_check(self, "sAlignOfNode2_clone", 6, 3699)), "sAlignOfNode2_clone", 6, 3700))->type), come_pop_stackframe(), __exception_result_var_b502))));
                                                                                                come_call_finalizer3(__dec_obj166,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                                come_call_finalizer3(right_value547,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            __result287__ = __result_obj__ = result_296;
                                                                                            come_call_finalizer3(result_296,sAlignOfNode2_finalize, 0, 0, 1, 0, (void*)0);
                                                                                            return __result287__;
                                                                                            come_call_finalizer3(result_296,sAlignOfNode2_finalize, 0, 0, 0, 0, (void*)0);
}

static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self){
void* __result_obj__;
_Bool _if_conditional470;
_Bool _if_conditional471;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                            if(_if_conditional470=self!=((void*)0)&&((struct sAlignOfExpNode2*)come_null_check(((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_finalize", 0, 3706)), "sAlignOfExpNode2_finalize", 0, 3707))->sname!=((void*)0),                                                                                            _if_conditional470) {
                                                                                                ((struct sAlignOfExpNode2*)come_null_check(((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_finalize", 0, 3708)), "sAlignOfExpNode2_finalize", 0, 3709))->sname = come_decrement_ref_count2(((struct sAlignOfExpNode2*)come_null_check(((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_finalize", 0, 3708)), "sAlignOfExpNode2_finalize", 0, 3709))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
                                                                                            if(_if_conditional471=self!=((void*)0)&&((struct sAlignOfExpNode2*)come_null_check(((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_finalize", 1, 3710)), "sAlignOfExpNode2_finalize", 1, 3711))->exp!=((void*)0),                                                                                            _if_conditional471) {
                                                                                                if(((struct sAlignOfExpNode2*)come_null_check(((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_finalize", 1, 3712)), "sAlignOfExpNode2_finalize", 1, 3713))->exp) { ((struct sAlignOfExpNode2*)come_null_check(((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_finalize", 1, 3712)), "sAlignOfExpNode2_finalize", 1, 3713))->exp = come_decrement_ref_count2(((struct sAlignOfExpNode2*)come_null_check(((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_finalize", 1, 3712)), "sAlignOfExpNode2_finalize", 1, 3713))->exp, ((struct sNode*)((struct sAlignOfExpNode2*)come_null_check(((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_finalize", 1, 3712)), "sAlignOfExpNode2_finalize", 1, 3713))->exp)->finalize, ((struct sNode*)((struct sAlignOfExpNode2*)come_null_check(((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_finalize", 1, 3712)), "sAlignOfExpNode2_finalize", 1, 3713))->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                            }
}

static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self){
void* __result_obj__;
_Bool _if_conditional472;
struct sAlignOfExpNode2* __result289__;
void* right_value552;
struct sAlignOfExpNode2* result_298;
_Bool _if_conditional473;
_Bool _if_conditional474;
char* __exception_result_var_b506;
void* right_value553;
char* __dec_obj167;
_Bool _if_conditional475;
struct sNode* __exception_result_var_b507;
void* right_value554;
struct sNode* __dec_obj168;
struct sAlignOfExpNode2* __result290__;
memset(&__result_obj__, 0, sizeof(void*));
right_value552 = (void*)0;
memset(&result_298, 0, sizeof(struct sAlignOfExpNode2*));
right_value553 = (void*)0;
right_value554 = (void*)0;
                                                                                            if(_if_conditional472=self==(void*)0,                                                                                            _if_conditional472) {
                                                                                                __result289__ = __result_obj__ = (void*)0;
                                                                                                return __result289__;
                                                                                            }
                                                                                            result_298=(struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(right_value552=(struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "sAlignOfExpNode2_clone", 3, "sAlignOfExpNode2"))));
                                                                                            come_call_finalizer3(right_value552,sAlignOfExpNode2_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            if(_if_conditional473=self!=((void*)0),                                                                                            _if_conditional473) {
                                                                                                ((struct sAlignOfExpNode2*)come_null_check(((struct sAlignOfExpNode2*)come_null_check(result_298, "sAlignOfExpNode2_clone", 4, 3714)), "sAlignOfExpNode2_clone", 4, 3715))->sline=((struct sAlignOfExpNode2*)come_null_check(((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_clone", 4, 3716)), "sAlignOfExpNode2_clone", 4, 3717))->sline;
                                                                                            }
                                                                                            if(_if_conditional474=self!=((void*)0)&&((struct sAlignOfExpNode2*)come_null_check(((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_clone", 5, 3718)), "sAlignOfExpNode2_clone", 5, 3719))->sname!=((void*)0),                                                                                            _if_conditional474) {
                                                                                                __dec_obj167=((struct sAlignOfExpNode2*)come_null_check(((struct sAlignOfExpNode2*)come_null_check(result_298, "sAlignOfExpNode2_clone", 5, 3720)), "sAlignOfExpNode2_clone", 5, 3721))->sname;
                                                                                                ((struct sAlignOfExpNode2*)come_null_check(((struct sAlignOfExpNode2*)come_null_check(result_298, "sAlignOfExpNode2_clone", 5, 3720)), "sAlignOfExpNode2_clone", 5, 3721))->sname=(char*)come_increment_ref_count(((char*)(right_value553=(come_push_stackframe("sAlignOfExpNode2_clone", 5, 3724),__exception_result_var_b506=string_clone(((struct sAlignOfExpNode2*)come_null_check(((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_clone", 5, 3722)), "sAlignOfExpNode2_clone", 5, 3723))->sname), come_pop_stackframe(), __exception_result_var_b506))));
                                                                                                __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value553 = come_decrement_ref_count2(right_value553, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            if(_if_conditional475=self!=((void*)0)&&((struct sAlignOfExpNode2*)come_null_check(((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_clone", 6, 3725)), "sAlignOfExpNode2_clone", 6, 3726))->exp!=((void*)0),                                                                                            _if_conditional475) {
                                                                                                __dec_obj168=((struct sAlignOfExpNode2*)come_null_check(((struct sAlignOfExpNode2*)come_null_check(result_298, "sAlignOfExpNode2_clone", 6, 3727)), "sAlignOfExpNode2_clone", 6, 3728))->exp;
                                                                                                ((struct sAlignOfExpNode2*)come_null_check(((struct sAlignOfExpNode2*)come_null_check(result_298, "sAlignOfExpNode2_clone", 6, 3727)), "sAlignOfExpNode2_clone", 6, 3728))->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value554=(come_push_stackframe("sAlignOfExpNode2_clone", 6, 3731),__exception_result_var_b507=sNode_clone(((struct sAlignOfExpNode2*)come_null_check(((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_clone", 6, 3729)), "sAlignOfExpNode2_clone", 6, 3730))->exp), come_pop_stackframe(), __exception_result_var_b507))));
                                                                                                if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count2(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                if(right_value554) { right_value554 = come_decrement_ref_count2(right_value554, ((struct sNode*)right_value554)->finalize, ((struct sNode*)right_value554)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            }
                                                                                            __result290__ = __result_obj__ = result_298;
                                                                                            come_call_finalizer3(result_298,sAlignOfExpNode2_finalize, 0, 0, 1, 0, (void*)0);
                                                                                            return __result290__;
                                                                                            come_call_finalizer3(result_298,sAlignOfExpNode2_finalize, 0, 0, 0, 0, (void*)0);
}

static void sAlignAsNode_finalize(struct sAlignAsNode* self){
void* __result_obj__;
_Bool _if_conditional481;
_Bool _if_conditional482;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                if(_if_conditional481=self!=((void*)0)&&((struct sAlignAsNode*)come_null_check(((struct sAlignAsNode*)come_null_check(self, "sAlignAsNode_finalize", 0, 3757)), "sAlignAsNode_finalize", 0, 3758))->sname!=((void*)0),                                                                                                _if_conditional481) {
                                                                                                    ((struct sAlignAsNode*)come_null_check(((struct sAlignAsNode*)come_null_check(self, "sAlignAsNode_finalize", 0, 3759)), "sAlignAsNode_finalize", 0, 3760))->sname = come_decrement_ref_count2(((struct sAlignAsNode*)come_null_check(((struct sAlignAsNode*)come_null_check(self, "sAlignAsNode_finalize", 0, 3759)), "sAlignAsNode_finalize", 0, 3760))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                }
                                                                                                if(_if_conditional482=self!=((void*)0)&&((struct sAlignAsNode*)come_null_check(((struct sAlignAsNode*)come_null_check(self, "sAlignAsNode_finalize", 1, 3761)), "sAlignAsNode_finalize", 1, 3762))->type!=((void*)0),                                                                                                _if_conditional482) {
                                                                                                    come_call_finalizer3(((struct sAlignAsNode*)come_null_check(((struct sAlignAsNode*)come_null_check(self, "sAlignAsNode_finalize", 1, 3763)), "sAlignAsNode_finalize", 1, 3764))->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                                }
}

static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self){
void* __result_obj__;
_Bool _if_conditional483;
struct sAlignAsNode* __result292__;
void* right_value560;
struct sAlignAsNode* result_306;
_Bool _if_conditional484;
_Bool _if_conditional485;
char* __exception_result_var_b516;
void* right_value561;
char* __dec_obj169;
_Bool _if_conditional486;
struct sType* __exception_result_var_b517;
void* right_value562;
struct sType* __dec_obj170;
struct sAlignAsNode* __result293__;
memset(&__result_obj__, 0, sizeof(void*));
right_value560 = (void*)0;
memset(&result_306, 0, sizeof(struct sAlignAsNode*));
right_value561 = (void*)0;
right_value562 = (void*)0;
                                                                                                if(_if_conditional483=self==(void*)0,                                                                                                _if_conditional483) {
                                                                                                    __result292__ = __result_obj__ = (void*)0;
                                                                                                    return __result292__;
                                                                                                }
                                                                                                result_306=(struct sAlignAsNode*)come_increment_ref_count(((struct sAlignAsNode*)(right_value560=(struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "sAlignAsNode_clone", 3, "sAlignAsNode"))));
                                                                                                come_call_finalizer3(right_value560,sAlignAsNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                                if(_if_conditional484=self!=((void*)0),                                                                                                _if_conditional484) {
                                                                                                    ((struct sAlignAsNode*)come_null_check(((struct sAlignAsNode*)come_null_check(result_306, "sAlignAsNode_clone", 4, 3765)), "sAlignAsNode_clone", 4, 3766))->sline=((struct sAlignAsNode*)come_null_check(((struct sAlignAsNode*)come_null_check(self, "sAlignAsNode_clone", 4, 3767)), "sAlignAsNode_clone", 4, 3768))->sline;
                                                                                                }
                                                                                                if(_if_conditional485=self!=((void*)0)&&((struct sAlignAsNode*)come_null_check(((struct sAlignAsNode*)come_null_check(self, "sAlignAsNode_clone", 5, 3769)), "sAlignAsNode_clone", 5, 3770))->sname!=((void*)0),                                                                                                _if_conditional485) {
                                                                                                    __dec_obj169=((struct sAlignAsNode*)come_null_check(((struct sAlignAsNode*)come_null_check(result_306, "sAlignAsNode_clone", 5, 3771)), "sAlignAsNode_clone", 5, 3772))->sname;
                                                                                                    ((struct sAlignAsNode*)come_null_check(((struct sAlignAsNode*)come_null_check(result_306, "sAlignAsNode_clone", 5, 3771)), "sAlignAsNode_clone", 5, 3772))->sname=(char*)come_increment_ref_count(((char*)(right_value561=(come_push_stackframe("sAlignAsNode_clone", 5, 3775),__exception_result_var_b516=string_clone(((struct sAlignAsNode*)come_null_check(((struct sAlignAsNode*)come_null_check(self, "sAlignAsNode_clone", 5, 3773)), "sAlignAsNode_clone", 5, 3774))->sname), come_pop_stackframe(), __exception_result_var_b516))));
                                                                                                    __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                    right_value561 = come_decrement_ref_count2(right_value561, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                }
                                                                                                if(_if_conditional486=self!=((void*)0)&&((struct sAlignAsNode*)come_null_check(((struct sAlignAsNode*)come_null_check(self, "sAlignAsNode_clone", 6, 3776)), "sAlignAsNode_clone", 6, 3777))->type!=((void*)0),                                                                                                _if_conditional486) {
                                                                                                    __dec_obj170=((struct sAlignAsNode*)come_null_check(((struct sAlignAsNode*)come_null_check(result_306, "sAlignAsNode_clone", 6, 3778)), "sAlignAsNode_clone", 6, 3779))->type;
                                                                                                    ((struct sAlignAsNode*)come_null_check(((struct sAlignAsNode*)come_null_check(result_306, "sAlignAsNode_clone", 6, 3778)), "sAlignAsNode_clone", 6, 3779))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value562=(come_push_stackframe("sAlignAsNode_clone", 6, 3782),__exception_result_var_b517=sType_clone(((struct sAlignAsNode*)come_null_check(((struct sAlignAsNode*)come_null_check(self, "sAlignAsNode_clone", 6, 3780)), "sAlignAsNode_clone", 6, 3781))->type), come_pop_stackframe(), __exception_result_var_b517))));
                                                                                                    come_call_finalizer3(__dec_obj170,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                                    come_call_finalizer3(right_value562,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                                }
                                                                                                __result293__ = __result_obj__ = result_306;
                                                                                                come_call_finalizer3(result_306,sAlignAsNode_finalize, 0, 0, 1, 0, (void*)0);
                                                                                                return __result293__;
                                                                                                come_call_finalizer3(result_306,sAlignAsNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self){
void* __result_obj__;
_Bool _if_conditional487;
_Bool _if_conditional488;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                if(_if_conditional487=self!=((void*)0)&&((struct sAlignAsExpNode*)come_null_check(((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_finalize", 0, 3787)), "sAlignAsExpNode_finalize", 0, 3788))->sname!=((void*)0),                                                                                                _if_conditional487) {
                                                                                                    ((struct sAlignAsExpNode*)come_null_check(((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_finalize", 0, 3789)), "sAlignAsExpNode_finalize", 0, 3790))->sname = come_decrement_ref_count2(((struct sAlignAsExpNode*)come_null_check(((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_finalize", 0, 3789)), "sAlignAsExpNode_finalize", 0, 3790))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                }
                                                                                                if(_if_conditional488=self!=((void*)0)&&((struct sAlignAsExpNode*)come_null_check(((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_finalize", 1, 3791)), "sAlignAsExpNode_finalize", 1, 3792))->exp!=((void*)0),                                                                                                _if_conditional488) {
                                                                                                    if(((struct sAlignAsExpNode*)come_null_check(((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_finalize", 1, 3793)), "sAlignAsExpNode_finalize", 1, 3794))->exp) { ((struct sAlignAsExpNode*)come_null_check(((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_finalize", 1, 3793)), "sAlignAsExpNode_finalize", 1, 3794))->exp = come_decrement_ref_count2(((struct sAlignAsExpNode*)come_null_check(((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_finalize", 1, 3793)), "sAlignAsExpNode_finalize", 1, 3794))->exp, ((struct sNode*)((struct sAlignAsExpNode*)come_null_check(((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_finalize", 1, 3793)), "sAlignAsExpNode_finalize", 1, 3794))->exp)->finalize, ((struct sNode*)((struct sAlignAsExpNode*)come_null_check(((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_finalize", 1, 3793)), "sAlignAsExpNode_finalize", 1, 3794))->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                }
}

static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self){
void* __result_obj__;
_Bool _if_conditional489;
struct sAlignAsExpNode* __result295__;
void* right_value567;
struct sAlignAsExpNode* result_308;
_Bool _if_conditional490;
_Bool _if_conditional491;
char* __exception_result_var_b521;
void* right_value568;
char* __dec_obj171;
_Bool _if_conditional492;
struct sNode* __exception_result_var_b522;
void* right_value569;
struct sNode* __dec_obj172;
struct sAlignAsExpNode* __result296__;
memset(&__result_obj__, 0, sizeof(void*));
right_value567 = (void*)0;
memset(&result_308, 0, sizeof(struct sAlignAsExpNode*));
right_value568 = (void*)0;
right_value569 = (void*)0;
                                                                                                if(_if_conditional489=self==(void*)0,                                                                                                _if_conditional489) {
                                                                                                    __result295__ = __result_obj__ = (void*)0;
                                                                                                    return __result295__;
                                                                                                }
                                                                                                result_308=(struct sAlignAsExpNode*)come_increment_ref_count(((struct sAlignAsExpNode*)(right_value567=(struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "sAlignAsExpNode_clone", 3, "sAlignAsExpNode"))));
                                                                                                come_call_finalizer3(right_value567,sAlignAsExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                                if(_if_conditional490=self!=((void*)0),                                                                                                _if_conditional490) {
                                                                                                    ((struct sAlignAsExpNode*)come_null_check(((struct sAlignAsExpNode*)come_null_check(result_308, "sAlignAsExpNode_clone", 4, 3795)), "sAlignAsExpNode_clone", 4, 3796))->sline=((struct sAlignAsExpNode*)come_null_check(((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_clone", 4, 3797)), "sAlignAsExpNode_clone", 4, 3798))->sline;
                                                                                                }
                                                                                                if(_if_conditional491=self!=((void*)0)&&((struct sAlignAsExpNode*)come_null_check(((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_clone", 5, 3799)), "sAlignAsExpNode_clone", 5, 3800))->sname!=((void*)0),                                                                                                _if_conditional491) {
                                                                                                    __dec_obj171=((struct sAlignAsExpNode*)come_null_check(((struct sAlignAsExpNode*)come_null_check(result_308, "sAlignAsExpNode_clone", 5, 3801)), "sAlignAsExpNode_clone", 5, 3802))->sname;
                                                                                                    ((struct sAlignAsExpNode*)come_null_check(((struct sAlignAsExpNode*)come_null_check(result_308, "sAlignAsExpNode_clone", 5, 3801)), "sAlignAsExpNode_clone", 5, 3802))->sname=(char*)come_increment_ref_count(((char*)(right_value568=(come_push_stackframe("sAlignAsExpNode_clone", 5, 3805),__exception_result_var_b521=string_clone(((struct sAlignAsExpNode*)come_null_check(((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_clone", 5, 3803)), "sAlignAsExpNode_clone", 5, 3804))->sname), come_pop_stackframe(), __exception_result_var_b521))));
                                                                                                    __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                    right_value568 = come_decrement_ref_count2(right_value568, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                }
                                                                                                if(_if_conditional492=self!=((void*)0)&&((struct sAlignAsExpNode*)come_null_check(((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_clone", 6, 3806)), "sAlignAsExpNode_clone", 6, 3807))->exp!=((void*)0),                                                                                                _if_conditional492) {
                                                                                                    __dec_obj172=((struct sAlignAsExpNode*)come_null_check(((struct sAlignAsExpNode*)come_null_check(result_308, "sAlignAsExpNode_clone", 6, 3808)), "sAlignAsExpNode_clone", 6, 3809))->exp;
                                                                                                    ((struct sAlignAsExpNode*)come_null_check(((struct sAlignAsExpNode*)come_null_check(result_308, "sAlignAsExpNode_clone", 6, 3808)), "sAlignAsExpNode_clone", 6, 3809))->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value569=(come_push_stackframe("sAlignAsExpNode_clone", 6, 3812),__exception_result_var_b522=sNode_clone(((struct sAlignAsExpNode*)come_null_check(((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_clone", 6, 3810)), "sAlignAsExpNode_clone", 6, 3811))->exp), come_pop_stackframe(), __exception_result_var_b522))));
                                                                                                    if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count2(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                    if(right_value569) { right_value569 = come_decrement_ref_count2(right_value569, ((struct sNode*)right_value569)->finalize, ((struct sNode*)right_value569)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                }
                                                                                                __result296__ = __result_obj__ = result_308;
                                                                                                come_call_finalizer3(result_308,sAlignAsExpNode_finalize, 0, 0, 1, 0, (void*)0);
                                                                                                return __result296__;
                                                                                                come_call_finalizer3(result_308,sAlignAsExpNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __exception_result_var_b524;
_Bool _if_conditional493;
_Bool __exception_result_var_b525;
_Bool _if_conditional494;
unsigned long int __exception_result_var_b526;
_Bool __exception_result_var_b527;
_Bool __exception_result_var_b528;
_Bool _if_conditional495;
unsigned long int __exception_result_var_b529;
_Bool _if_conditional496;
_Bool __exception_result_var_b530;
_Bool _if_conditional497;
unsigned long int __exception_result_var_b531;
_Bool __exception_result_var_b532;
_Bool _if_conditional498;
unsigned long int __exception_result_var_b533;
_Bool __exception_result_var_b534;
_Bool _if_conditional499;
unsigned long int __exception_result_var_b535;
void* right_value572;
void* right_value573;
struct sNothingNode* __exception_result_var_b536;
struct sNode* _inf_value34;
struct sNothingNode* _inf_obj_value34;
void* right_value576;
struct sNode* __result301__;
void* right_value577;
struct sNode* __exception_result_var_b538;
struct sNode* __result302__;
memset(&__result_obj__, 0, sizeof(void*));
right_value572 = (void*)0;
right_value573 = (void*)0;
right_value576 = (void*)0;
right_value577 = (void*)0;
    if(_if_conditional493=(come_push_stackframe("21obj.c", 1624, 3814),__exception_result_var_b524=charp_operator_equals(buf,"using"), come_pop_stackframe(), __exception_result_var_b524),    _if_conditional493) {
        if(_if_conditional494=(come_push_stackframe("21obj.c", 1625, 3815),__exception_result_var_b525=parsecmp("neo-c",info), come_pop_stackframe(), __exception_result_var_b525),        _if_conditional494) {
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1626, 3816)), "21obj.c", 1626, 3817))->p+=(come_push_stackframe("21obj.c", 1626, 3818),__exception_result_var_b526=strlen("neo-c"), come_pop_stackframe(), __exception_result_var_b526);
            (come_push_stackframe("21obj.c", 1627,3819),skip_spaces_and_lf(info),come_pop_stackframe());
            gComeC=(_Bool)0;
        }
        else {
            if(_if_conditional495=(come_push_stackframe("21obj.c", 1631, 3820),__exception_result_var_b527=parsecmp("c",info), come_pop_stackframe(), __exception_result_var_b527)||(come_push_stackframe("21obj.c", 1631, 3821),__exception_result_var_b528=parsecmp("C",info), come_pop_stackframe(), __exception_result_var_b528),            _if_conditional495) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1632, 3822)), "21obj.c", 1632, 3823))->p+=(come_push_stackframe("21obj.c", 1632, 3824),__exception_result_var_b529=strlen("c"), come_pop_stackframe(), __exception_result_var_b529);
                (come_push_stackframe("21obj.c", 1633,3825),skip_spaces_and_lf(info),come_pop_stackframe());
                if(_if_conditional496=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1635, 3826)), "21obj.c", 1635, 3827))->p, "21obj.c", 1635, 3828))==123,                _if_conditional496) {
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1636, 3829)), "21obj.c", 1636, 3830))->p++;
                    (come_push_stackframe("21obj.c", 1637,3831),skip_spaces_and_lf(info),come_pop_stackframe());
                    gComeC=(_Bool)1;
                    (come_push_stackframe("21obj.c", 1641,3832),transpile_toplevel((_Bool)1,info),come_pop_stackframe());
                    gComeC=(_Bool)0;
                }
                else {
                    gComeC=(_Bool)1;
                }
            }
            else {
                if(_if_conditional497=(come_push_stackframe("21obj.c", 1649, 3833),__exception_result_var_b530=parsecmp("gc",info), come_pop_stackframe(), __exception_result_var_b530),                _if_conditional497) {
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1650, 3834)), "21obj.c", 1650, 3835))->p+=(come_push_stackframe("21obj.c", 1650, 3836),__exception_result_var_b531=strlen("gc"), come_pop_stackframe(), __exception_result_var_b531);
                    (come_push_stackframe("21obj.c", 1651,3837),skip_spaces_and_lf(info),come_pop_stackframe());
                }
                else {
                    if(_if_conditional498=(come_push_stackframe("21obj.c", 1653, 3838),__exception_result_var_b532=parsecmp("no-gc",info), come_pop_stackframe(), __exception_result_var_b532),                    _if_conditional498) {
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1654, 3839)), "21obj.c", 1654, 3840))->p+=(come_push_stackframe("21obj.c", 1654, 3841),__exception_result_var_b533=strlen("no-gc"), come_pop_stackframe(), __exception_result_var_b533);
                        (come_push_stackframe("21obj.c", 1655,3842),skip_spaces_and_lf(info),come_pop_stackframe());
                    }
                    else {
                        if(_if_conditional499=(come_push_stackframe("21obj.c", 1657, 3843),__exception_result_var_b534=parsecmp("unsafe",info), come_pop_stackframe(), __exception_result_var_b534),                        _if_conditional499) {
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1658, 3844)), "21obj.c", 1658, 3845))->p+=(come_push_stackframe("21obj.c", 1658, 3846),__exception_result_var_b535=strlen("unsafe"), come_pop_stackframe(), __exception_result_var_b535);
                            (come_push_stackframe("21obj.c", 1659,3847),skip_spaces_and_lf(info),come_pop_stackframe());
                        }
                        else {
                            (come_push_stackframe("21obj.c", 1662,3848),err_msg(info,"invalid using"),come_pop_stackframe());
                            (come_push_stackframe("21obj.c", 1663,3849),exit(2),come_pop_stackframe());
                        }
                    }
                }
            }
        }
        _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1666, "struct sNode");
        _inf_obj_value34=come_increment_ref_count((come_push_stackframe("21obj.c", 1666, 3851),__exception_result_var_b536=((struct sNothingNode*)(right_value573=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)come_null_check(((struct sNothingNode*)(right_value572=(struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1666, "sNothingNode"))), "21obj.c", 1666, 3850))),info))), come_pop_stackframe(), __exception_result_var_b536));
        _inf_value34->_protocol_obj=_inf_obj_value34;
        _inf_value34->finalize=(void*)sNothingNode_finalize;
        _inf_value34->clone=(void*)sNothingNode_clone;
        _inf_value34->compile=(void*)sNothingNode_compile;
        _inf_value34->sline=(void*)sNodeBase_sline;
        _inf_value34->sname=(void*)sNodeBase_sname;
        _inf_value34->terminated=(void*)sNodeBase_terminated;
        _inf_value34->kind=(void*)sNothingNode_kind;
        __result301__ = __result_obj__ = ((struct sNode*)(right_value576=_inf_value34));
        come_call_finalizer3(right_value572,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value573,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value576) { right_value576 = come_decrement_ref_count2(right_value576, ((struct sNode*)right_value576)->finalize, ((struct sNode*)right_value576)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result301__;
    }
    __result302__ = __result_obj__ = (come_push_stackframe("21obj.c", 1669, 3867),__exception_result_var_b538=((struct sNode*)(right_value577=top_level_v93(buf,head,head_sline,info))), come_pop_stackframe(), __exception_result_var_b538);
    if(right_value577) { right_value577 = come_decrement_ref_count2(right_value577, ((struct sNode*)right_value577)->finalize, ((struct sNode*)right_value577)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result302__;
}

static void sNothingNode_finalize(struct sNothingNode* self){
void* __result_obj__;
_Bool _if_conditional500;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional500=self!=((void*)0)&&((struct sNothingNode*)come_null_check(((struct sNothingNode*)come_null_check(self, "sNothingNode_finalize", 0, 3852)), "sNothingNode_finalize", 0, 3853))->sname!=((void*)0),            _if_conditional500) {
                ((struct sNothingNode*)come_null_check(((struct sNothingNode*)come_null_check(self, "sNothingNode_finalize", 0, 3854)), "sNothingNode_finalize", 0, 3855))->sname = come_decrement_ref_count2(((struct sNothingNode*)come_null_check(((struct sNothingNode*)come_null_check(self, "sNothingNode_finalize", 0, 3854)), "sNothingNode_finalize", 0, 3855))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self){
void* __result_obj__;
_Bool _if_conditional501;
struct sNothingNode* __result299__;
void* right_value574;
struct sNothingNode* result_309;
_Bool _if_conditional502;
_Bool _if_conditional503;
char* __exception_result_var_b537;
void* right_value575;
char* __dec_obj173;
struct sNothingNode* __result300__;
memset(&__result_obj__, 0, sizeof(void*));
right_value574 = (void*)0;
memset(&result_309, 0, sizeof(struct sNothingNode*));
right_value575 = (void*)0;
            if(_if_conditional501=self==(void*)0,            _if_conditional501) {
                __result299__ = __result_obj__ = (void*)0;
                return __result299__;
            }
            result_309=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(right_value574=(struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "sNothingNode_clone", 3, "sNothingNode"))));
            come_call_finalizer3(right_value574,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional502=self!=((void*)0),            _if_conditional502) {
                ((struct sNothingNode*)come_null_check(((struct sNothingNode*)come_null_check(result_309, "sNothingNode_clone", 4, 3856)), "sNothingNode_clone", 4, 3857))->sline=((struct sNothingNode*)come_null_check(((struct sNothingNode*)come_null_check(self, "sNothingNode_clone", 4, 3858)), "sNothingNode_clone", 4, 3859))->sline;
            }
            if(_if_conditional503=self!=((void*)0)&&((struct sNothingNode*)come_null_check(((struct sNothingNode*)come_null_check(self, "sNothingNode_clone", 5, 3860)), "sNothingNode_clone", 5, 3861))->sname!=((void*)0),            _if_conditional503) {
                __dec_obj173=((struct sNothingNode*)come_null_check(((struct sNothingNode*)come_null_check(result_309, "sNothingNode_clone", 5, 3862)), "sNothingNode_clone", 5, 3863))->sname;
                ((struct sNothingNode*)come_null_check(((struct sNothingNode*)come_null_check(result_309, "sNothingNode_clone", 5, 3862)), "sNothingNode_clone", 5, 3863))->sname=(char*)come_increment_ref_count(((char*)(right_value575=(come_push_stackframe("sNothingNode_clone", 5, 3866),__exception_result_var_b537=string_clone(((struct sNothingNode*)come_null_check(((struct sNothingNode*)come_null_check(self, "sNothingNode_clone", 5, 3864)), "sNothingNode_clone", 5, 3865))->sname), come_pop_stackframe(), __exception_result_var_b537))));
                __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value575 = come_decrement_ref_count2(right_value575, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result300__ = __result_obj__ = result_309;
            come_call_finalizer3(result_309,sNothingNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result300__;
            come_call_finalizer3(result_309,sNothingNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __exception_result_var_b539;
_Bool _if_conditional504;
unsigned long int __exception_result_var_b540;
void* right_value578;
struct tuple3$3sTypephcharphbool* __exception_result_var_b541;
struct tuple3$3sTypephcharphbool* multiple_assign_var12;
struct sType* type3_310;
char* name2_311;
_Bool err_312;
_Bool _if_conditional505;
int __exception_result_var_b542;
struct sType* __exception_result_var_b543;
void* right_value579;
struct sType* inf_type_313;
void* right_value580;
void* right_value581;
struct sImplementsNode* __exception_result_var_b544;
struct sNode* _inf_value35;
struct sImplementsNode* _inf_obj_value35;
void* right_value586;
struct sNode* __result305__;
_Bool _if_conditional514;
_Bool __exception_result_var_b548;
_Bool _while_condtional22;
void* right_value587;
struct sNode* __exception_result_var_b549;
struct sNode* __result306__;
memset(&__result_obj__, 0, sizeof(void*));
right_value578 = (void*)0;
right_value579 = (void*)0;
memset(&inf_type_313, 0, sizeof(struct sType*));
right_value580 = (void*)0;
right_value581 = (void*)0;
right_value586 = (void*)0;
right_value587 = (void*)0;
    if(_if_conditional504=(come_push_stackframe("21obj.c", 1674, 3868),__exception_result_var_b539=parsecmp("implements",info), come_pop_stackframe(), __exception_result_var_b539),    _if_conditional504) {
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1675, 3869)), "21obj.c", 1675, 3870))->p+=(come_push_stackframe("21obj.c", 1675, 3871),__exception_result_var_b540=strlen("implements"), come_pop_stackframe(), __exception_result_var_b540);
        (come_push_stackframe("21obj.c", 1676,3872),skip_spaces_and_lf(info),come_pop_stackframe());
        multiple_assign_var12=(come_push_stackframe("21obj.c", 1678, 3873),__exception_result_var_b541=((struct tuple3$3sTypephcharphbool*)(right_value578=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b541);
        type3_310=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
        name2_311=(char*)come_increment_ref_count(multiple_assign_var12->v2);
        err_312=multiple_assign_var12->v3;
        come_call_finalizer3(right_value578,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional505=!err_312,        _if_conditional505) {
            (come_push_stackframe("21obj.c", 1680, 3878),__exception_result_var_b542=printf("%s %d: parse_type failed\n",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1680, 3874)), "21obj.c", 1680, 3875))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1680, 3876)), "21obj.c", 1680, 3877))->sline), come_pop_stackframe(), __exception_result_var_b542);
            (come_push_stackframe("21obj.c", 1681,3879),exit(2),come_pop_stackframe());
        }
        inf_type_313=(struct sType*)come_increment_ref_count(((struct sType*)(right_value579=(come_push_stackframe("21obj.c", 1684, 3880),__exception_result_var_b543=sType_clone(type3_310), come_pop_stackframe(), __exception_result_var_b543))));
        come_call_finalizer3(right_value579,sType_finalize, 0, 1, 0, 0, __result_obj__);
        _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1686, "struct sNode");
        _inf_obj_value35=come_increment_ref_count((come_push_stackframe("21obj.c", 1686, 3882),__exception_result_var_b544=((struct sImplementsNode*)(right_value581=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)come_null_check(((struct sImplementsNode*)(right_value580=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1686, "sImplementsNode"))), "21obj.c", 1686, 3881))),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type_313),info))), come_pop_stackframe(), __exception_result_var_b544));
        _inf_value35->_protocol_obj=_inf_obj_value35;
        _inf_value35->finalize=(void*)sImplementsNode_finalize;
        _inf_value35->clone=(void*)sImplementsNode_clone;
        _inf_value35->compile=(void*)sImplementsNode_compile;
        _inf_value35->sline=(void*)sNodeBase_sline;
        _inf_value35->sname=(void*)sNodeBase_sname;
        _inf_value35->terminated=(void*)sNodeBase_terminated;
        _inf_value35->kind=(void*)sImplementsNode_kind;
        __result305__ = __result_obj__ = ((struct sNode*)(right_value586=_inf_value35));
        come_call_finalizer3(type3_310,sType_finalize, 0, 0, 0, 0, (void*)0);
        name2_311 = come_decrement_ref_count2(name2_311, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(inf_type_313,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        come_call_finalizer3(right_value580,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value581,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value586) { right_value586 = come_decrement_ref_count2(right_value586, ((struct sNode*)right_value586)->finalize, ((struct sNode*)right_value586)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result305__;
        come_call_finalizer3(type3_310,sType_finalize, 0, 0, 0, 0, (void*)0);
        name2_311 = come_decrement_ref_count2(name2_311, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(inf_type_313,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional514=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1688, 3920)), "21obj.c", 1688, 3921))->p, "21obj.c", 1688, 3922))==64,        _if_conditional514) {
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1689, 3923)), "21obj.c", 1689, 3924))->p++;
            while(_while_condtional22=(come_push_stackframe("21obj.c", 1690, 3928),__exception_result_var_b548=xisalnum(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1690, 3925)), "21obj.c", 1690, 3926))->p, "21obj.c", 1690, 3927))), come_pop_stackframe(), __exception_result_var_b548)||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1690, 3929)), "21obj.c", 1690, 3930))->p, "21obj.c", 1690, 3931))==95,            _while_condtional22) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1691, 3932)), "21obj.c", 1691, 3933))->p++;
            }
            (come_push_stackframe("21obj.c", 1693,3934),skip_spaces_and_lf(info),come_pop_stackframe());
        }
    }
    __result306__ = __result_obj__ = (come_push_stackframe("21obj.c", 1696, 3935),__exception_result_var_b549=((struct sNode*)(right_value587=post_position_operator_v19((struct sNode*)come_increment_ref_count(node),info))), come_pop_stackframe(), __exception_result_var_b549);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right_value587) { right_value587 = come_decrement_ref_count2(right_value587, ((struct sNode*)right_value587)->finalize, ((struct sNode*)right_value587)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result306__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sImplementsNode_finalize(struct sImplementsNode* self){
void* __result_obj__;
_Bool _if_conditional506;
_Bool _if_conditional507;
_Bool _if_conditional508;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional506=self!=((void*)0)&&((struct sImplementsNode*)come_null_check(((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 0, 3883)), "sImplementsNode_finalize", 0, 3884))->sname!=((void*)0),            _if_conditional506) {
                ((struct sImplementsNode*)come_null_check(((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 0, 3885)), "sImplementsNode_finalize", 0, 3886))->sname = come_decrement_ref_count2(((struct sImplementsNode*)come_null_check(((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 0, 3885)), "sImplementsNode_finalize", 0, 3886))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional507=self!=((void*)0)&&((struct sImplementsNode*)come_null_check(((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 1, 3887)), "sImplementsNode_finalize", 1, 3888))->obj_exp!=((void*)0),            _if_conditional507) {
                if(((struct sImplementsNode*)come_null_check(((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 1, 3889)), "sImplementsNode_finalize", 1, 3890))->obj_exp) { ((struct sImplementsNode*)come_null_check(((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 1, 3889)), "sImplementsNode_finalize", 1, 3890))->obj_exp = come_decrement_ref_count2(((struct sImplementsNode*)come_null_check(((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 1, 3889)), "sImplementsNode_finalize", 1, 3890))->obj_exp, ((struct sNode*)((struct sImplementsNode*)come_null_check(((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 1, 3889)), "sImplementsNode_finalize", 1, 3890))->obj_exp)->finalize, ((struct sNode*)((struct sImplementsNode*)come_null_check(((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 1, 3889)), "sImplementsNode_finalize", 1, 3890))->obj_exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional508=self!=((void*)0)&&((struct sImplementsNode*)come_null_check(((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 2, 3891)), "sImplementsNode_finalize", 2, 3892))->inf_type!=((void*)0),            _if_conditional508) {
                come_call_finalizer3(((struct sImplementsNode*)come_null_check(((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 2, 3893)), "sImplementsNode_finalize", 2, 3894))->inf_type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self){
void* __result_obj__;
_Bool _if_conditional509;
struct sImplementsNode* __result303__;
void* right_value582;
struct sImplementsNode* result_314;
_Bool _if_conditional510;
_Bool _if_conditional511;
char* __exception_result_var_b545;
void* right_value583;
char* __dec_obj174;
_Bool _if_conditional512;
struct sNode* __exception_result_var_b546;
void* right_value584;
struct sNode* __dec_obj175;
_Bool _if_conditional513;
struct sType* __exception_result_var_b547;
void* right_value585;
struct sType* __dec_obj176;
struct sImplementsNode* __result304__;
memset(&__result_obj__, 0, sizeof(void*));
right_value582 = (void*)0;
memset(&result_314, 0, sizeof(struct sImplementsNode*));
right_value583 = (void*)0;
right_value584 = (void*)0;
right_value585 = (void*)0;
            if(_if_conditional509=self==(void*)0,            _if_conditional509) {
                __result303__ = __result_obj__ = (void*)0;
                return __result303__;
            }
            result_314=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(right_value582=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "sImplementsNode_clone", 3, "sImplementsNode"))));
            come_call_finalizer3(right_value582,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional510=self!=((void*)0),            _if_conditional510) {
                ((struct sImplementsNode*)come_null_check(((struct sImplementsNode*)come_null_check(result_314, "sImplementsNode_clone", 4, 3895)), "sImplementsNode_clone", 4, 3896))->sline=((struct sImplementsNode*)come_null_check(((struct sImplementsNode*)come_null_check(self, "sImplementsNode_clone", 4, 3897)), "sImplementsNode_clone", 4, 3898))->sline;
            }
            if(_if_conditional511=self!=((void*)0)&&((struct sImplementsNode*)come_null_check(((struct sImplementsNode*)come_null_check(self, "sImplementsNode_clone", 5, 3899)), "sImplementsNode_clone", 5, 3900))->sname!=((void*)0),            _if_conditional511) {
                __dec_obj174=((struct sImplementsNode*)come_null_check(((struct sImplementsNode*)come_null_check(result_314, "sImplementsNode_clone", 5, 3901)), "sImplementsNode_clone", 5, 3902))->sname;
                ((struct sImplementsNode*)come_null_check(((struct sImplementsNode*)come_null_check(result_314, "sImplementsNode_clone", 5, 3901)), "sImplementsNode_clone", 5, 3902))->sname=(char*)come_increment_ref_count(((char*)(right_value583=(come_push_stackframe("sImplementsNode_clone", 5, 3905),__exception_result_var_b545=string_clone(((struct sImplementsNode*)come_null_check(((struct sImplementsNode*)come_null_check(self, "sImplementsNode_clone", 5, 3903)), "sImplementsNode_clone", 5, 3904))->sname), come_pop_stackframe(), __exception_result_var_b545))));
                __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value583 = come_decrement_ref_count2(right_value583, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional512=self!=((void*)0)&&((struct sImplementsNode*)come_null_check(((struct sImplementsNode*)come_null_check(self, "sImplementsNode_clone", 6, 3906)), "sImplementsNode_clone", 6, 3907))->obj_exp!=((void*)0),            _if_conditional512) {
                __dec_obj175=((struct sImplementsNode*)come_null_check(((struct sImplementsNode*)come_null_check(result_314, "sImplementsNode_clone", 6, 3908)), "sImplementsNode_clone", 6, 3909))->obj_exp;
                ((struct sImplementsNode*)come_null_check(((struct sImplementsNode*)come_null_check(result_314, "sImplementsNode_clone", 6, 3908)), "sImplementsNode_clone", 6, 3909))->obj_exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value584=(come_push_stackframe("sImplementsNode_clone", 6, 3912),__exception_result_var_b546=sNode_clone(((struct sImplementsNode*)come_null_check(((struct sImplementsNode*)come_null_check(self, "sImplementsNode_clone", 6, 3910)), "sImplementsNode_clone", 6, 3911))->obj_exp), come_pop_stackframe(), __exception_result_var_b546))));
                if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count2(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value584) { right_value584 = come_decrement_ref_count2(right_value584, ((struct sNode*)right_value584)->finalize, ((struct sNode*)right_value584)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional513=self!=((void*)0)&&((struct sImplementsNode*)come_null_check(((struct sImplementsNode*)come_null_check(self, "sImplementsNode_clone", 7, 3913)), "sImplementsNode_clone", 7, 3914))->inf_type!=((void*)0),            _if_conditional513) {
                __dec_obj176=((struct sImplementsNode*)come_null_check(((struct sImplementsNode*)come_null_check(result_314, "sImplementsNode_clone", 7, 3915)), "sImplementsNode_clone", 7, 3916))->inf_type;
                ((struct sImplementsNode*)come_null_check(((struct sImplementsNode*)come_null_check(result_314, "sImplementsNode_clone", 7, 3915)), "sImplementsNode_clone", 7, 3916))->inf_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value585=(come_push_stackframe("sImplementsNode_clone", 7, 3919),__exception_result_var_b547=sType_clone(((struct sImplementsNode*)come_null_check(((struct sImplementsNode*)come_null_check(self, "sImplementsNode_clone", 7, 3917)), "sImplementsNode_clone", 7, 3918))->inf_type), come_pop_stackframe(), __exception_result_var_b547))));
                come_call_finalizer3(__dec_obj176,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value585,sType_finalize, 0, 1, 0, 0, __result_obj__);
            }
            __result304__ = __result_obj__ = result_314;
            come_call_finalizer3(result_314,sImplementsNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result304__;
            come_call_finalizer3(result_314,sImplementsNode_finalize, 0, 0, 0, 0, (void*)0);
}

