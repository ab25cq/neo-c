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

_Bool node_compile(struct sNode* node, struct sInfo* info);

int come_main_v2(int argc, char** argv);

void err_msg(struct sInfo* info, char* msg, ...);

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

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

struct sNode* expression_node_v96(struct sInfo* info);

struct sNode* parse_tuple(struct sInfo* info);

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

_Bool sNothingNode_terminated(struct sNothingNode* self);

char* sNothingNode_kind(struct sNothingNode* self);

_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info);

struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct sInfo* info);

_Bool sNewNode_terminated(struct sNewNode* self);

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

_Bool sImplementsNode_terminated(struct sImplementsNode* self);

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

_Bool sTrueNode_terminated(struct sTrueNode* self);

char* sTrueNode_kind(struct sTrueNode* self);

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info);

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info);

_Bool sFalseNode_terminated(struct sFalseNode* self);

char* sFalseNode_kind(struct sFalseNode* self);

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info);

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info);

_Bool sSizeOfNode_terminated(struct sSizeOfNode* self);

char* sSizeOfNode_kind(struct sSizeOfNode* self);

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info);

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info);

_Bool sSizeOfExpNode_terminated(struct sSizeOfExpNode* self);

char* sSizeOfExpNode_kind(struct sSizeOfExpNode* self);

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info);

struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info);

_Bool sTypeOfNode_terminated(struct sTypeOfNode* self);

char* sTypeOfNode_kind(struct sTypeOfNode* self);

_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info);

struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info);

_Bool sTypeOfExpNode_terminated(struct sTypeOfExpNode* self);

char* sTypeOfExpNode_kind(struct sTypeOfExpNode* self);

_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info);

struct sDynamicTypeOfNode* sDynamicTypeOfNode_initialize(struct sDynamicTypeOfNode* self, struct sNode* exp, struct sInfo* info);

_Bool sDynamicTypeOfNode_terminated(struct sDynamicTypeOfNode* self);

char* sDynamicTypeOfNode_kind(struct sDynamicTypeOfNode* self);

_Bool sDynamicTypeOfNode_compile(struct sDynamicTypeOfNode* self, struct sInfo* info);

static void sDynamicTypeOfNode_finalize(struct sDynamicTypeOfNode* self);
struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info);

_Bool sAlignOfNode_terminated(struct sAlignOfNode* self);

char* sAlignOfNode_kind(struct sAlignOfNode* self);

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info);

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info);

_Bool sAlignOfExpNode_terminated(struct sAlignOfExpNode* self);

char* sAlignOfExpNode_kind(struct sAlignOfExpNode* self);

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info);

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info);

_Bool sAlignOfNode2_terminated(struct sAlignOfNode2* self);

char* sAlignOfNode2_kind(struct sAlignOfNode2* self);

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info);

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info);

_Bool sAlignOfExpNode2_terminated(struct sAlignOfExpNode2* self);

char* sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self);

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info);

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info);

_Bool sAlignAsNode_terminated(struct sAlignAsNode* self);

char* sAlignAsNode_kind(struct sAlignAsNode* self);

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info);

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info);

_Bool sAlignAsExpNode_terminated(struct sAlignAsExpNode* self);

char* sAlignAsExpNode_kind(struct sAlignAsExpNode* self);

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info);

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info);

_Bool sDeleteNode_terminated(struct sDeleteNode* self);

char* sDeleteNode_kind(struct sDeleteNode* self);

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info);

struct sForceDeleteNode* sForceDeleteNode_initialize(struct sForceDeleteNode* self, struct sNode* node, struct sInfo* info);

_Bool sForceDeleteNode_terminated(struct sForceDeleteNode* self);

char* sForceDeleteNode_kind(struct sForceDeleteNode* self);

_Bool sForceDeleteNode_compile(struct sForceDeleteNode* self, struct sInfo* info);

struct sDelegateNode* sDelegateNode_initialize(struct sDelegateNode* self, struct sNode* node, struct sInfo* info);

_Bool sDelegateNode_terminated(struct sDelegateNode* self);

char* sDelegateNode_kind(struct sDelegateNode* self);

_Bool sDelegateNode_compile(struct sDelegateNode* self, struct sInfo* info);

struct sShareNode* sShareNode_initialize(struct sShareNode* self, struct sNode* node, struct sInfo* info);

_Bool sShareNode_terminated(struct sShareNode* self);

char* sShareNode_kind(struct sShareNode* self);

_Bool sShareNode_compile(struct sShareNode* self, struct sInfo* info);

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info);

_Bool sBorrowNode_terminated(struct sBorrowNode* self);

char* sBorrowNode_kind(struct sBorrowNode* self);

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info);

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info);

_Bool sCloneNode_terminated(struct sCloneNode* self);

char* sCloneNode_kind(struct sCloneNode* self);

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info);

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info);

_Bool sDupeNode_terminated(struct sDupeNode* self);

char* sDupeNode_kind(struct sDupeNode* self);

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info);

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info);

_Bool sDummyHeapNode_terminated(struct sDummyHeapNode* self);

char* sDummyHeapNode_kind(struct sDummyHeapNode* self);

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info);

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info);

_Bool sGCIncNode_terminated(struct sGCIncNode* self);

char* sGCIncNode_kind(struct sGCIncNode* self);

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info);

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info);

_Bool sGCDecNode_terminated(struct sGCDecNode* self);

char* sGCDecNode_kind(struct sGCDecNode* self);

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info);

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info);

_Bool sIsHeap_terminated(struct sIsHeap* self);

char* sIsHeap_kind(struct sIsHeap* self);

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info);

struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info);

_Bool sIsPointer_terminated(struct sIsPointer* self);

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
    # 45 "./neo-c.h"
    perror(msg);
    # 46 "./neo-c.h"
    stackframe();
    # 47 "./neo-c.h"
    exit(4);
    # 49 "./neo-c.h"
    __result1__ = (_Bool)0;
    return __result1__;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long int len){
void* __result_obj__;
void* right_value0;
void* right_value1;
struct buffer* result_0;
struct buffer* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
right_value0 = (void*)0;
right_value1 = (void*)0;
memset(&result_0, 0, sizeof(struct buffer*));
    # 1897 "./neo-c.h"
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1897, "buffer"))))))));
    come_call_finalizer3(right_value0,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value1,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1898 "./neo-c.h"
    buffer_append(result_0,self,sizeof(char)*len);
    # 1899 "./neo-c.h"
    __result2__ = __result_obj__ = result_0;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result2__;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* shortpa_to_buffer(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value2;
void* right_value3;
struct buffer* result_1;
struct buffer* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
right_value2 = (void*)0;
right_value3 = (void*)0;
memset(&result_1, 0, sizeof(struct buffer*));
    # 1904 "./neo-c.h"
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1904, "buffer"))))))));
    come_call_finalizer3(right_value2,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value3,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1905 "./neo-c.h"
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
    # 1906 "./neo-c.h"
    __result3__ = __result_obj__ = result_1;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result3__;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long int len){
void* __result_obj__;
void* right_value4;
void* right_value5;
struct buffer* result_2;
struct buffer* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
right_value4 = (void*)0;
right_value5 = (void*)0;
memset(&result_2, 0, sizeof(struct buffer*));
    # 1911 "./neo-c.h"
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1911, "buffer"))))))));
    come_call_finalizer3(right_value4,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value5,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1912 "./neo-c.h"
    buffer_append(result_2,(char*)self,sizeof(int)*len);
    # 1913 "./neo-c.h"
    __result4__ = __result_obj__ = result_2;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result4__;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long int len){
void* __result_obj__;
void* right_value6;
void* right_value7;
struct buffer* result_3;
struct buffer* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
right_value6 = (void*)0;
right_value7 = (void*)0;
memset(&result_3, 0, sizeof(struct buffer*));
    # 1918 "./neo-c.h"
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1918, "buffer"))))))));
    come_call_finalizer3(right_value6,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value7,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1919 "./neo-c.h"
    buffer_append(result_3,(char*)self,sizeof(long)*len);
    # 1920 "./neo-c.h"
    __result5__ = __result_obj__ = result_3;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result5__;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long int len){
void* __result_obj__;
void* right_value8;
void* right_value9;
struct buffer* result_4;
struct buffer* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
right_value8 = (void*)0;
right_value9 = (void*)0;
memset(&result_4, 0, sizeof(struct buffer*));
    # 1925 "./neo-c.h"
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1925, "buffer"))))))));
    come_call_finalizer3(right_value8,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value9,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1926 "./neo-c.h"
    buffer_append(result_4,(char*)self,sizeof(float)*len);
    # 1927 "./neo-c.h"
    __result6__ = __result_obj__ = result_4;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result6__;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long int len){
void* __result_obj__;
void* right_value10;
void* right_value11;
struct buffer* result_5;
struct buffer* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
right_value11 = (void*)0;
memset(&result_5, 0, sizeof(struct buffer*));
    # 1932 "./neo-c.h"
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1932, "buffer"))))))));
    come_call_finalizer3(right_value10,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value11,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1933 "./neo-c.h"
    buffer_append(result_5,(char*)self,sizeof(double)*len);
    # 1934 "./neo-c.h"
    __result7__ = __result_obj__ = result_5;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result7__;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
void* right_value12;
struct smart_pointer$1char* result_6;
void* right_value13;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
right_value12 = (void*)0;
memset(&result_6, 0, sizeof(struct smart_pointer$1char*));
right_value13 = (void*)0;
    # 1948 "./neo-c.h"
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1948, "smart_pointer$1char"))));
    come_call_finalizer3(right_value12,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1950 "./neo-c.h"
    __dec_obj1=result_6->memory;
    result_6->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=buffer_clone(self))));
    come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value13,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1951 "./neo-c.h"
    result_6->p=result_6->memory->buf;
    # 1953 "./neo-c.h"
    __result8__ = __result_obj__ = result_6;
    come_call_finalizer3(result_6,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result8__;
    come_call_finalizer3(result_6,smart_pointer$1charp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
void* right_value14;
struct smart_pointer$1char* result_7;
void* right_value15;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
memset(&result_7, 0, sizeof(struct smart_pointer$1char*));
right_value15 = (void*)0;
    # 1958 "./neo-c.h"
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1958, "smart_pointer$1char"))));
    come_call_finalizer3(right_value14,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1960 "./neo-c.h"
    __dec_obj2=result_7->memory;
    result_7->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=buffer_clone(self))));
    come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value15,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1961 "./neo-c.h"
    result_7->p=(char*)result_7->memory->buf;
    # 1963 "./neo-c.h"
    __result9__ = __result_obj__ = result_7;
    come_call_finalizer3(result_7,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result9__;
    come_call_finalizer3(result_7,smart_pointer$1charp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
void* right_value16;
struct smart_pointer$1short* result_8;
void* right_value17;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
right_value16 = (void*)0;
memset(&result_8, 0, sizeof(struct smart_pointer$1short*));
right_value17 = (void*)0;
    # 1968 "./neo-c.h"
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 1968, "smart_pointer$1short"))));
    come_call_finalizer3(right_value16,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1970 "./neo-c.h"
    __dec_obj3=result_8->memory;
    result_8->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value17=buffer_clone(self))));
    come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value17,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1971 "./neo-c.h"
    result_8->p=(short short*)result_8->memory->buf;
    # 1973 "./neo-c.h"
    __result10__ = __result_obj__ = result_8;
    come_call_finalizer3(result_8,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    return __result10__;
    come_call_finalizer3(result_8,smart_pointer$1shortp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
void* right_value18;
struct smart_pointer$1int* result_9;
void* right_value19;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
right_value18 = (void*)0;
memset(&result_9, 0, sizeof(struct smart_pointer$1int*));
right_value19 = (void*)0;
    # 1978 "./neo-c.h"
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 1978, "smart_pointer$1int"))));
    come_call_finalizer3(right_value18,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1980 "./neo-c.h"
    __dec_obj4=result_9->memory;
    result_9->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=buffer_clone(self))));
    come_call_finalizer3(__dec_obj4,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value19,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1981 "./neo-c.h"
    result_9->p=(int*)result_9->memory->buf;
    # 1983 "./neo-c.h"
    __result11__ = __result_obj__ = result_9;
    come_call_finalizer3(result_9,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    return __result11__;
    come_call_finalizer3(result_9,smart_pointer$1intp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
void* right_value20;
struct smart_pointer$1long* result_10;
void* right_value21;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value20 = (void*)0;
memset(&result_10, 0, sizeof(struct smart_pointer$1long*));
right_value21 = (void*)0;
    # 1988 "./neo-c.h"
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 1988, "smart_pointer$1long"))));
    come_call_finalizer3(right_value20,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1990 "./neo-c.h"
    __dec_obj5=result_10->memory;
    result_10->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value21=buffer_clone(self))));
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value21,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1991 "./neo-c.h"
    result_10->p=(long*)result_10->memory->buf;
    # 1993 "./neo-c.h"
    __result12__ = __result_obj__ = result_10;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    return __result12__;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long int len){
void* __result_obj__;
void* right_value22;
void* right_value25;
struct smart_pointer$1char* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
right_value22 = (void*)0;
right_value25 = (void*)0;
    # 2159 "./neo-c.h"
    __result14__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2159, "smart_pointer$1char")))),self,len)));
    come_call_finalizer3(right_value22,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value25,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result14__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value26;
void* right_value29;
struct smart_pointer$1short* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value26 = (void*)0;
right_value29 = (void*)0;
    # 2164 "./neo-c.h"
    __result16__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2164, "smart_pointer$1short")))),self,len)));
    come_call_finalizer3(right_value26,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value29,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result16__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long int len){
void* __result_obj__;
void* right_value30;
void* right_value33;
struct smart_pointer$1int* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value30 = (void*)0;
right_value33 = (void*)0;
    # 2169 "./neo-c.h"
    __result18__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2169, "smart_pointer$1int")))),self,len)));
    come_call_finalizer3(right_value30,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value33,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result18__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long int len){
void* __result_obj__;
void* right_value34;
void* right_value37;
struct smart_pointer$1long* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
right_value34 = (void*)0;
right_value37 = (void*)0;
    # 2174 "./neo-c.h"
    __result20__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2174, "smart_pointer$1long")))),self,len)));
    come_call_finalizer3(right_value34,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value37,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result20__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long int len){
void* __result_obj__;
void* right_value38;
void* right_value41;
struct smart_pointer$1float* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value38 = (void*)0;
right_value41 = (void*)0;
    # 2179 "./neo-c.h"
    __result22__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2179, "smart_pointer$1float")))),self,len)));
    come_call_finalizer3(right_value38,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value41,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result22__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long int len){
void* __result_obj__;
void* right_value42;
void* right_value45;
struct smart_pointer$1double* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
right_value42 = (void*)0;
right_value45 = (void*)0;
    # 2184 "./neo-c.h"
    __result24__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2184, "smart_pointer$1double")))),self,len)));
    come_call_finalizer3(right_value42,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value45,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    return __result24__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long int len){
void* __result_obj__;
void* right_value46;
void* right_value50;
struct list$1char* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
right_value46 = (void*)0;
right_value50 = (void*)0;
    # 2189 "./neo-c.h"
    __result27__ = __result_obj__ = ((struct list$1char*)(right_value50=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count(((struct list$1char*)(right_value46=(struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2189, "list$1char")))),len,self)));
    come_call_finalizer3(right_value46,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value50,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result27__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value51;
void* right_value55;
struct list$1short* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
right_value55 = (void*)0;
    # 2194 "./neo-c.h"
    __result30__ = __result_obj__ = ((struct list$1short*)(right_value55=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count(((struct list$1short*)(right_value51=(struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2194, "list$1short")))),len,self)));
    come_call_finalizer3(right_value51,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value55,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result30__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long int len){
void* __result_obj__;
void* right_value56;
void* right_value60;
struct list$1int* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
right_value56 = (void*)0;
right_value60 = (void*)0;
    # 2199 "./neo-c.h"
    __result33__ = __result_obj__ = ((struct list$1int*)(right_value60=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value56=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2199, "list$1int")))),len,self)));
    come_call_finalizer3(right_value56,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value60,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result33__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long int len){
void* __result_obj__;
void* right_value61;
void* right_value65;
struct list$1long* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value61 = (void*)0;
right_value65 = (void*)0;
    # 2204 "./neo-c.h"
    __result36__ = __result_obj__ = ((struct list$1long*)(right_value65=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count(((struct list$1long*)(right_value61=(struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2204, "list$1long")))),len,self)));
    come_call_finalizer3(right_value61,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value65,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result36__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long int len){
void* __result_obj__;
void* right_value66;
void* right_value70;
struct list$1float* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value66 = (void*)0;
right_value70 = (void*)0;
    # 2209 "./neo-c.h"
    __result39__ = __result_obj__ = ((struct list$1float*)(right_value70=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count(((struct list$1float*)(right_value66=(struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2209, "list$1float")))),len,self)));
    come_call_finalizer3(right_value66,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value70,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result39__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long int len){
void* __result_obj__;
void* right_value71;
void* right_value75;
struct list$1double* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value71 = (void*)0;
right_value75 = (void*)0;
    # 2214 "./neo-c.h"
    __result42__ = __result_obj__ = ((struct list$1double*)(right_value75=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count(((struct list$1double*)(right_value71=(struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2214, "list$1double")))),len,self)));
    come_call_finalizer3(right_value71,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value75,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    return __result42__;
}
static inline unsigned long int charpa_length(char* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result43__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2244 "./neo-c.h"
    __result43__ = len;
    return __result43__;
}
static inline unsigned long int shortpa_length(short short* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result44__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2249 "./neo-c.h"
    __result44__ = len;
    return __result44__;
}
static inline unsigned long int intpa_length(int* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result45__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2254 "./neo-c.h"
    __result45__ = len;
    return __result45__;
}
static inline unsigned long int longpa_length(long* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result46__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2259 "./neo-c.h"
    __result46__ = len;
    return __result46__;
}
static inline unsigned long int floatpa_length(float* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result47__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2264 "./neo-c.h"
    __result47__ = len;
    return __result47__;
}
static inline unsigned long int doublepa_length(double* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result48__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2269 "./neo-c.h"
    __result48__ = len;
    return __result48__;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value76;
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
    # 2330 "./neo-c.h"
    __result49__ = __result_obj__ = ((char*)(right_value76=xsprintf(msg,self)));
    right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result49__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value77;
char* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value77 = (void*)0;
    # 2335 "./neo-c.h"
    __result50__ = __result_obj__ = ((char*)(right_value77=xsprintf(msg,self)));
    right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result50__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
void* right_value78;
char* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value78 = (void*)0;
    # 2340 "./neo-c.h"
    __result51__ = __result_obj__ = ((char*)(right_value78=xsprintf(msg,self)));
    right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result51__;
}

// body function








static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
void* __result_obj__;
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1charp_finalize"
        # 0 "smart_pointer$1charp_finalize"
        if(_if_conditional1=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional1) {
            # 0 "smart_pointer$1charp_finalize"
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
void* __result_obj__;
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1shortp_finalize"
        # 0 "smart_pointer$1shortp_finalize"
        if(_if_conditional2=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional2) {
            # 0 "smart_pointer$1shortp_finalize"
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
void* __result_obj__;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1intp_finalize"
        # 0 "smart_pointer$1intp_finalize"
        if(_if_conditional3=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional3) {
            # 0 "smart_pointer$1intp_finalize"
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
void* __result_obj__;
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1longp_finalize"
        # 0 "smart_pointer$1longp_finalize"
        if(_if_conditional4=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional4) {
            # 0 "smart_pointer$1longp_finalize"
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static struct smart_pointer$1char* smart_pointer$1char_initialize(struct smart_pointer$1char* self, void* memory, int size){
void* __result_obj__;
void* right_value23;
void* right_value24;
struct buffer* __dec_obj6;
struct smart_pointer$1char* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value23 = (void*)0;
right_value24 = (void*)0;
        # 2000 "./neo-c.h"
        __dec_obj6=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj6,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value23,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value24,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2002 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(char)*size);
        # 2004 "./neo-c.h"
        self->p=(char*)self->memory->buf;
        # 2006 "./neo-c.h"
        __result13__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
        return __result13__;
        come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size){
void* __result_obj__;
void* right_value27;
void* right_value28;
struct buffer* __dec_obj7;
struct smart_pointer$1short* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
right_value27 = (void*)0;
right_value28 = (void*)0;
        # 2000 "./neo-c.h"
        __dec_obj7=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value27,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value28,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2002 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(short short)*size);
        # 2004 "./neo-c.h"
        self->p=(short short*)self->memory->buf;
        # 2006 "./neo-c.h"
        __result15__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
        return __result15__;
        come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size){
void* __result_obj__;
void* right_value31;
void* right_value32;
struct buffer* __dec_obj8;
struct smart_pointer$1int* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
right_value31 = (void*)0;
right_value32 = (void*)0;
        # 2000 "./neo-c.h"
        __dec_obj8=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj8,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value31,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value32,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2002 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(int)*size);
        # 2004 "./neo-c.h"
        self->p=(int*)self->memory->buf;
        # 2006 "./neo-c.h"
        __result17__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
        return __result17__;
        come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size){
void* __result_obj__;
void* right_value35;
void* right_value36;
struct buffer* __dec_obj9;
struct smart_pointer$1long* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value35 = (void*)0;
right_value36 = (void*)0;
        # 2000 "./neo-c.h"
        __dec_obj9=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value35,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value36,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2002 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(long)*size);
        # 2004 "./neo-c.h"
        self->p=(long*)self->memory->buf;
        # 2006 "./neo-c.h"
        __result19__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
        return __result19__;
        come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size){
void* __result_obj__;
void* right_value39;
void* right_value40;
struct buffer* __dec_obj10;
struct smart_pointer$1float* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
right_value39 = (void*)0;
right_value40 = (void*)0;
        # 2000 "./neo-c.h"
        __dec_obj10=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj10,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value39,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value40,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2002 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(float)*size);
        # 2004 "./neo-c.h"
        self->p=(float*)self->memory->buf;
        # 2006 "./neo-c.h"
        __result21__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
        return __result21__;
        come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
void* __result_obj__;
_Bool _if_conditional5;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "smart_pointer$1floatp_finalize"
            # 0 "smart_pointer$1floatp_finalize"
            if(_if_conditional5=self!=((void*)0)&&self->memory!=((void*)0),            _if_conditional5) {
                # 0 "smart_pointer$1floatp_finalize"
                come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct smart_pointer$1double* smart_pointer$1double_initialize(struct smart_pointer$1double* self, void* memory, int size){
void* __result_obj__;
void* right_value43;
void* right_value44;
struct buffer* __dec_obj11;
struct smart_pointer$1double* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
right_value43 = (void*)0;
right_value44 = (void*)0;
        # 2000 "./neo-c.h"
        __dec_obj11=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value43,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value44,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2002 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(double)*size);
        # 2004 "./neo-c.h"
        self->p=(double*)self->memory->buf;
        # 2006 "./neo-c.h"
        __result23__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
        return __result23__;
        come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
void* __result_obj__;
_Bool _if_conditional6;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "smart_pointer$1doublep_finalize"
            # 0 "smart_pointer$1doublep_finalize"
            if(_if_conditional6=self!=((void*)0)&&self->memory!=((void*)0),            _if_conditional6) {
                # 0 "smart_pointer$1doublep_finalize"
                come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__;
int i_11;
struct list$1char* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_11, 0, sizeof(int));
        # 103 "./neo-c.h"
        self->head=((void*)0);
        # 104 "./neo-c.h"
        self->tail=((void*)0);
        # 105 "./neo-c.h"
        self->len=0;
        # 111 "./neo-c.h"
        for(        i_11=0;        i_11<num_value;        i_11++        ){
            # 108 "./neo-c.h"
            list$1char_push_back(self,values[i_11]);
        }
        # 111 "./neo-c.h"
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
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional7=self->len==0,                _if_conditional7) {
                    # 217 "./neo-c.h"
                    litem_12=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value47=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 217, "list_item$1char"))));
                    come_call_finalizer3(right_value47,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_12->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_12->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_12->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_12;
                    # 224 "./neo-c.h"
                    self->head=litem_12;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional8=self->len==1,                    _if_conditional8) {
                        # 227 "./neo-c.h"
                        litem_13=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value48=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 227, "list_item$1char"))));
                        come_call_finalizer3(right_value48,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_13->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_13->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_13->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_13;
                        # 234 "./neo-c.h"
                        self->head->next=litem_13;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_14=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value49=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 237, "list_item$1char"))));
                        come_call_finalizer3(right_value49,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_14->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_14->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_14->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_14;
                        # 244 "./neo-c.h"
                        self->tail=litem_14;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
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
            # 114 "./neo-c.h"
            it_15=self->head;
            # 120 "./neo-c.h"
            while(_while_condtional1=it_15!=((void*)0),            _while_condtional1) {
                # 116 "./neo-c.h"
                prev_it_16=it_15;
                # 117 "./neo-c.h"
                it_15=it_15->next;
                # 118 "./neo-c.h"
                come_call_finalizer3(prev_it_16,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
void* __result_obj__;
int i_17;
struct list$1short* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_17, 0, sizeof(int));
        # 103 "./neo-c.h"
        self->head=((void*)0);
        # 104 "./neo-c.h"
        self->tail=((void*)0);
        # 105 "./neo-c.h"
        self->len=0;
        # 111 "./neo-c.h"
        for(        i_17=0;        i_17<num_value;        i_17++        ){
            # 108 "./neo-c.h"
            list$1short_push_back(self,values[i_17]);
        }
        # 111 "./neo-c.h"
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
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional9=self->len==0,                _if_conditional9) {
                    # 217 "./neo-c.h"
                    litem_18=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value52=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 217, "list_item$1short"))));
                    come_call_finalizer3(right_value52,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_18->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_18->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_18->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_18;
                    # 224 "./neo-c.h"
                    self->head=litem_18;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional10=self->len==1,                    _if_conditional10) {
                        # 227 "./neo-c.h"
                        litem_19=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value53=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 227, "list_item$1short"))));
                        come_call_finalizer3(right_value53,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_19->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_19->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_19->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_19;
                        # 234 "./neo-c.h"
                        self->head->next=litem_19;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_20=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value54=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 237, "list_item$1short"))));
                        come_call_finalizer3(right_value54,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_20->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_20->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_20->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_20;
                        # 244 "./neo-c.h"
                        self->tail=litem_20;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
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
            # 114 "./neo-c.h"
            it_21=self->head;
            # 120 "./neo-c.h"
            while(_while_condtional2=it_21!=((void*)0),            _while_condtional2) {
                # 116 "./neo-c.h"
                prev_it_22=it_21;
                # 117 "./neo-c.h"
                it_21=it_21->next;
                # 118 "./neo-c.h"
                come_call_finalizer3(prev_it_22,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__;
int i_23;
struct list$1int* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_23, 0, sizeof(int));
        # 103 "./neo-c.h"
        self->head=((void*)0);
        # 104 "./neo-c.h"
        self->tail=((void*)0);
        # 105 "./neo-c.h"
        self->len=0;
        # 111 "./neo-c.h"
        for(        i_23=0;        i_23<num_value;        i_23++        ){
            # 108 "./neo-c.h"
            list$1int_push_back(self,values[i_23]);
        }
        # 111 "./neo-c.h"
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
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional11=self->len==0,                _if_conditional11) {
                    # 217 "./neo-c.h"
                    litem_24=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value57=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 217, "list_item$1int"))));
                    come_call_finalizer3(right_value57,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_24->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_24->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_24->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_24;
                    # 224 "./neo-c.h"
                    self->head=litem_24;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional12=self->len==1,                    _if_conditional12) {
                        # 227 "./neo-c.h"
                        litem_25=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value58=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 227, "list_item$1int"))));
                        come_call_finalizer3(right_value58,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_25->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_25->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_25->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_25;
                        # 234 "./neo-c.h"
                        self->head->next=litem_25;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_26=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value59=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 237, "list_item$1int"))));
                        come_call_finalizer3(right_value59,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_26->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_26->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_26->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_26;
                        # 244 "./neo-c.h"
                        self->tail=litem_26;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
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
            # 114 "./neo-c.h"
            it_27=self->head;
            # 120 "./neo-c.h"
            while(_while_condtional3=it_27!=((void*)0),            _while_condtional3) {
                # 116 "./neo-c.h"
                prev_it_28=it_27;
                # 117 "./neo-c.h"
                it_27=it_27->next;
                # 118 "./neo-c.h"
                come_call_finalizer3(prev_it_28,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__;
int i_29;
struct list$1long* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_29, 0, sizeof(int));
        # 103 "./neo-c.h"
        self->head=((void*)0);
        # 104 "./neo-c.h"
        self->tail=((void*)0);
        # 105 "./neo-c.h"
        self->len=0;
        # 111 "./neo-c.h"
        for(        i_29=0;        i_29<num_value;        i_29++        ){
            # 108 "./neo-c.h"
            list$1long_push_back(self,values[i_29]);
        }
        # 111 "./neo-c.h"
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
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional13=self->len==0,                _if_conditional13) {
                    # 217 "./neo-c.h"
                    litem_30=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value62=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 217, "list_item$1long"))));
                    come_call_finalizer3(right_value62,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_30->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_30->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_30->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_30;
                    # 224 "./neo-c.h"
                    self->head=litem_30;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional14=self->len==1,                    _if_conditional14) {
                        # 227 "./neo-c.h"
                        litem_31=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value63=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 227, "list_item$1long"))));
                        come_call_finalizer3(right_value63,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_31->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_31->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_31->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_31;
                        # 234 "./neo-c.h"
                        self->head->next=litem_31;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_32=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value64=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 237, "list_item$1long"))));
                        come_call_finalizer3(right_value64,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_32->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_32->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_32->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_32;
                        # 244 "./neo-c.h"
                        self->tail=litem_32;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
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
            # 114 "./neo-c.h"
            it_33=self->head;
            # 120 "./neo-c.h"
            while(_while_condtional4=it_33!=((void*)0),            _while_condtional4) {
                # 116 "./neo-c.h"
                prev_it_34=it_33;
                # 117 "./neo-c.h"
                it_33=it_33->next;
                # 118 "./neo-c.h"
                come_call_finalizer3(prev_it_34,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__;
int i_35;
struct list$1float* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_35, 0, sizeof(int));
        # 103 "./neo-c.h"
        self->head=((void*)0);
        # 104 "./neo-c.h"
        self->tail=((void*)0);
        # 105 "./neo-c.h"
        self->len=0;
        # 111 "./neo-c.h"
        for(        i_35=0;        i_35<num_value;        i_35++        ){
            # 108 "./neo-c.h"
            list$1float_push_back(self,values[i_35]);
        }
        # 111 "./neo-c.h"
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
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional15=self->len==0,                _if_conditional15) {
                    # 217 "./neo-c.h"
                    litem_36=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value67=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 217, "list_item$1float"))));
                    come_call_finalizer3(right_value67,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_36->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_36->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_36->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_36;
                    # 224 "./neo-c.h"
                    self->head=litem_36;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional16=self->len==1,                    _if_conditional16) {
                        # 227 "./neo-c.h"
                        litem_37=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value68=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 227, "list_item$1float"))));
                        come_call_finalizer3(right_value68,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_37->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_37->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_37->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_37;
                        # 234 "./neo-c.h"
                        self->head->next=litem_37;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_38=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value69=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 237, "list_item$1float"))));
                        come_call_finalizer3(right_value69,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_38->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_38->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_38->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_38;
                        # 244 "./neo-c.h"
                        self->tail=litem_38;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
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
            # 114 "./neo-c.h"
            it_39=self->head;
            # 120 "./neo-c.h"
            while(_while_condtional5=it_39!=((void*)0),            _while_condtional5) {
                # 116 "./neo-c.h"
                prev_it_40=it_39;
                # 117 "./neo-c.h"
                it_39=it_39->next;
                # 118 "./neo-c.h"
                come_call_finalizer3(prev_it_40,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__;
int i_41;
struct list$1double* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_41, 0, sizeof(int));
        # 103 "./neo-c.h"
        self->head=((void*)0);
        # 104 "./neo-c.h"
        self->tail=((void*)0);
        # 105 "./neo-c.h"
        self->len=0;
        # 111 "./neo-c.h"
        for(        i_41=0;        i_41<num_value;        i_41++        ){
            # 108 "./neo-c.h"
            list$1double_push_back(self,values[i_41]);
        }
        # 111 "./neo-c.h"
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
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional17=self->len==0,                _if_conditional17) {
                    # 217 "./neo-c.h"
                    litem_42=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value72=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 217, "list_item$1double"))));
                    come_call_finalizer3(right_value72,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_42->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_42->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_42->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_42;
                    # 224 "./neo-c.h"
                    self->head=litem_42;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional18=self->len==1,                    _if_conditional18) {
                        # 227 "./neo-c.h"
                        litem_43=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value73=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 227, "list_item$1double"))));
                        come_call_finalizer3(right_value73,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_43->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_43->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_43->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_43;
                        # 234 "./neo-c.h"
                        self->head->next=litem_43;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_44=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value74=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 237, "list_item$1double"))));
                        come_call_finalizer3(right_value74,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_44->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_44->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_44->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_44;
                        # 244 "./neo-c.h"
                        self->tail=litem_44;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
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
            # 114 "./neo-c.h"
            it_45=self->head;
            # 120 "./neo-c.h"
            while(_while_condtional6=it_45!=((void*)0),            _while_condtional6) {
                # 116 "./neo-c.h"
                prev_it_46=it_45;
                # 117 "./neo-c.h"
                it_45=it_45->next;
                # 118 "./neo-c.h"
                come_call_finalizer3(prev_it_46,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
            }
}










struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value79;
char* __dec_obj12;
struct sNothingNode* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
    # 7 "21obj.c"
    self->sline=info->sline;
    # 8 "21obj.c"
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value79=__builtin_string(info->sname))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 11 "21obj.c"
    __result52__ = __result_obj__ = self;
    come_call_finalizer3(self,sNothingNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result52__;
    come_call_finalizer3(self,sNothingNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sNothingNode_terminated(struct sNothingNode* self){
void* __result_obj__;
_Bool __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    # 13 "21obj.c"
    __result53__ = (_Bool)0;
    return __result53__;
}

char* sNothingNode_kind(struct sNothingNode* self){
void* __result_obj__;
void* right_value80;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
    # 18 "21obj.c"
    __result54__ = __result_obj__ = ((char*)(right_value80=__builtin_string("sNothingNode")));
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result54__;
}

_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __result55__;
memset(&__result_obj__, 0, sizeof(void*));
    # 23 "21obj.c"
    __result55__ = (_Bool)1;
    return __result55__;
}

struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value116;
struct sType* __dec_obj36;
void* right_value117;
char* __dec_obj37;
struct sNewNode* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value116 = (void*)0;
right_value117 = (void*)0;
    # 33 "21obj.c"
    __dec_obj36=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value116=sType_clone(type))));
    come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value116,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 35 "21obj.c"
    self->sline=info->sline;
    # 36 "21obj.c"
    __dec_obj37=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value117=__builtin_string(info->sname))));
    __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 39 "21obj.c"
    __result74__ = __result_obj__ = self;
    come_call_finalizer3(self,sNewNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result74__;
    come_call_finalizer3(self,sNewNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sNewNode_terminated(struct sNewNode* self){
void* __result_obj__;
_Bool __result75__;
memset(&__result_obj__, 0, sizeof(void*));
    # 41 "21obj.c"
    __result75__ = (_Bool)0;
    return __result75__;
}

char* sNewNode_kind(struct sNewNode* self){
void* __result_obj__;
void* right_value118;
char* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
    # 46 "21obj.c"
    __result76__ = __result_obj__ = ((char*)(right_value118=__builtin_string("sNewNode")));
    right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result76__;
}

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_77;
void* right_value119;
struct CVALUE* come_value_78;
void* right_value120;
void* right_value121;
struct buffer* num_string_79;
struct list$1sNodeph* o2_saved_80;
struct sNode* it_83;
_Bool _if_conditional119;
_Bool __result84__;
void* right_value122;
struct CVALUE* cvalue_86;
void* right_value123;
void* right_value124;
struct sType* type2_87;
void* right_value125;
char* type_name_90;
void* right_value126;
char* type_name2_91;
void* right_value127;
void* right_value128;
char* __dec_obj38;
_Bool _if_conditional120;
void* right_value129;
char* __dec_obj39;
void* right_value130;
struct sType* __dec_obj40;
_Bool __result87__;
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
    # 51 "21obj.c"
    type_77=self->type;
    # 53 "21obj.c"
    come_value_78=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value119=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 53, "CVALUE"))));
    come_call_finalizer3(right_value119,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 55 "21obj.c"
    num_string_79=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value121=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value120=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "21obj.c", 55, "buffer"))))))));
    come_call_finalizer3(right_value120,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value121,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 57 "21obj.c"
    buffer_append_str(num_string_79,"1");
    # 70 "21obj.c"
    for(    o2_saved_80=(struct list$1sNodeph*)come_increment_ref_count((type_77->mArrayNum)),it_83=list$1sNodeph_begin((o2_saved_80));    !list$1sNodeph_end((o2_saved_80));    it_83=list$1sNodeph_next((o2_saved_80))    ){
        # 64 "21obj.c"
        # 60 "21obj.c"
        if(_if_conditional119=!node_compile(it_83,info),        _if_conditional119) {
            # 61 "21obj.c"
            __result84__ = (_Bool)0;
            come_call_finalizer3(o2_saved_80,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_78,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(num_string_79,buffer_finalize, 0, 0, 0, 0, (void*)0);
            return __result84__;
        }
        # 64 "21obj.c"
        cvalue_86=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value122=get_value_from_stack(-1,info))));
        come_call_finalizer3(right_value122,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 65 "21obj.c"
        dec_stack_ptr(1,info);
        # 67 "21obj.c"
        buffer_append_str(num_string_79,((char*)(right_value123=xsprintf("*(%s)",cvalue_86->c_value))));
        right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(cvalue_86,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_80,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    # 70 "21obj.c"
    type2_87=(struct sType*)come_increment_ref_count(((struct sType*)(right_value124=solve_generics(type_77,info->generics_type,info))));
    come_call_finalizer3(right_value124,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 77 "21obj.c"
    list$1sNodeph_reset(type2_87->mArrayNum);
    # 79 "21obj.c"
    type_name_90=(char*)come_increment_ref_count(((char*)(right_value125=make_type_name_string(type2_87,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 81 "21obj.c"
    type_name2_91=(char*)come_increment_ref_count(((char*)(right_value126=make_come_type_name_string(type2_87,info))));
    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 83 "21obj.c"
    __dec_obj38=come_value_78->c_value;
    come_value_78->c_value=(char*)come_increment_ref_count(((char*)(right_value128=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_90,type_name_90,((char*)(right_value127=buffer_to_string(num_string_79))),info->sname,info->sline,type_name2_91))));
    __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 85 "21obj.c"
    type2_87->mHeap=(_Bool)1;
    # 86 "21obj.c"
    type2_87->mPointerNum++;
    # 93 "21obj.c"
    # 88 "21obj.c"
    if(type2_87->mNoSolvedGenericsType->v1) {
        # 89 "21obj.c"
        type2_87->mNoSolvedGenericsType->v1->mPointerNum++;
        # 90 "21obj.c"
        type2_87->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
    }
    # 93 "21obj.c"
    __dec_obj39=come_value_78->c_value;
    come_value_78->c_value=(char*)come_increment_ref_count(((char*)(right_value129=append_object_to_right_values(come_value_78->c_value,(struct sType*)come_increment_ref_count(type2_87),info))));
    __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 94 "21obj.c"
    __dec_obj40=come_value_78->type;
    come_value_78->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=sType_clone(type2_87))));
    come_call_finalizer3(__dec_obj40,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value130,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 95 "21obj.c"
    come_value_78->var=((void*)0);
    # 97 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_78->c_value);
    # 99 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_78));
    # 101 "21obj.c"
    __result87__ = (_Bool)1;
    come_call_finalizer3(come_value_78,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_79,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_87,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_90 = come_decrement_ref_count2(type_name_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_name2_91 = come_decrement_ref_count2(type_name2_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result87__;
    come_call_finalizer3(come_value_78,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_79,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_87,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_90 = come_decrement_ref_count2(type_name_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_name2_91 = come_decrement_ref_count2(type_name2_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional20;
struct sType* __result56__;
void* right_value81;
struct sType* result_47;
_Bool _if_conditional38;
_Bool _if_conditional39;
void* right_value88;
struct list$1sTypeph* __dec_obj16;
_Bool _if_conditional43;
void* right_value91;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional47;
void* right_value92;
struct tuple1$1sTypeph* __dec_obj19;
_Bool _if_conditional48;
void* right_value93;
char* __dec_obj20;
_Bool _if_conditional49;
void* right_value94;
struct list$1sTypeph* __dec_obj21;
_Bool _if_conditional50;
void* right_value102;
struct list$1sNodeph* __dec_obj25;
_Bool _if_conditional63;
_Bool _if_conditional64;
void* right_value103;
struct list$1sTypeph* __dec_obj26;
_Bool _if_conditional65;
void* right_value110;
struct list$1charph* __dec_obj30;
_Bool _if_conditional69;
void* right_value111;
struct tuple1$1sTypeph* __dec_obj31;
_Bool _if_conditional70;
_Bool _if_conditional71;
void* right_value112;
struct sNode* __dec_obj32;
_Bool _if_conditional72;
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
void* right_value113;
struct sNode* __dec_obj33;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
void* right_value114;
char* __dec_obj34;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
void* right_value115;
char* __dec_obj35;
_Bool _if_conditional110;
struct sType* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
memset(&result_47, 0, sizeof(struct sType*));
right_value88 = (void*)0;
right_value91 = (void*)0;
right_value92 = (void*)0;
right_value93 = (void*)0;
right_value94 = (void*)0;
right_value102 = (void*)0;
right_value103 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
        # 3 "sType_clone"
        # 2 "sType_clone"
        if(_if_conditional20=self==(void*)0,        _if_conditional20) {
            # 2 "sType_clone"
            __result56__ = __result_obj__ = (void*)0;
            return __result56__;
        }
        # 3 "sType_clone"
        result_47=(struct sType*)come_increment_ref_count(((struct sType*)(right_value81=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer3(right_value81,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 5 "sType_clone"
        # 4 "sType_clone"
        if(_if_conditional38=self!=((void*)0),        _if_conditional38) {
            # 4 "sType_clone"
            result_47->mClass=self->mClass;
        }
        # 6 "sType_clone"
        # 5 "sType_clone"
        if(_if_conditional39=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional39) {
            # 5 "sType_clone"
            __dec_obj16=result_47->mMultipleTypes;
            result_47->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value88=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer3(__dec_obj16,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value88,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 7 "sType_clone"
        # 6 "sType_clone"
        if(_if_conditional43=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional43) {
            # 6 "sType_clone"
            __dec_obj18=result_47->mNoSolvedGenericsType;
            result_47->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value91=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value91,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 8 "sType_clone"
        # 7 "sType_clone"
        if(_if_conditional47=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional47) {
            # 7 "sType_clone"
            __dec_obj19=result_47->mOriginalLoadVarType;
            result_47->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value92=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer3(__dec_obj19,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value92,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 9 "sType_clone"
        # 8 "sType_clone"
        if(_if_conditional48=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional48) {
            # 8 "sType_clone"
            __dec_obj20=result_47->mGenericsName;
            result_47->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value93=string_clone(self->mGenericsName))));
            __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 10 "sType_clone"
        # 9 "sType_clone"
        if(_if_conditional49=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional49) {
            # 9 "sType_clone"
            __dec_obj21=result_47->mGenericsTypes;
            result_47->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value94=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer3(__dec_obj21,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value94,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 11 "sType_clone"
        # 10 "sType_clone"
        if(_if_conditional50=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional50) {
            # 10 "sType_clone"
            __dec_obj25=result_47->mArrayNum;
            result_47->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value102=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer3(__dec_obj25,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value102,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 12 "sType_clone"
        # 11 "sType_clone"
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            # 11 "sType_clone"
            result_47->mOmitArrayNum=self->mOmitArrayNum;
        }
        # 13 "sType_clone"
        # 12 "sType_clone"
        if(_if_conditional64=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional64) {
            # 12 "sType_clone"
            __dec_obj26=result_47->mParamTypes;
            result_47->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value103=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer3(__dec_obj26,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value103,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 14 "sType_clone"
        # 13 "sType_clone"
        if(_if_conditional65=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional65) {
            # 13 "sType_clone"
            __dec_obj30=result_47->mParamNames;
            result_47->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value110=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer3(__dec_obj30,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value110,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 15 "sType_clone"
        # 14 "sType_clone"
        if(_if_conditional69=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional69) {
            # 14 "sType_clone"
            __dec_obj31=result_47->mResultType;
            result_47->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value111=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer3(__dec_obj31,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value111,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 16 "sType_clone"
        # 15 "sType_clone"
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            # 15 "sType_clone"
            result_47->mVarArgs=self->mVarArgs;
        }
        # 17 "sType_clone"
        # 16 "sType_clone"
        if(_if_conditional71=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional71) {
            # 16 "sType_clone"
            __dec_obj32=result_47->mAlignas;
            result_47->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value112=sNode_clone(self->mAlignas))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value112) { right_value112 = come_decrement_ref_count2(right_value112, ((struct sNode*)right_value112)->finalize, ((struct sNode*)right_value112)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 18 "sType_clone"
        # 17 "sType_clone"
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            # 17 "sType_clone"
            result_47->mUnsigned=self->mUnsigned;
        }
        # 19 "sType_clone"
        # 18 "sType_clone"
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            # 18 "sType_clone"
            result_47->mShort=self->mShort;
        }
        # 20 "sType_clone"
        # 19 "sType_clone"
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            # 19 "sType_clone"
            result_47->mLong=self->mLong;
        }
        # 21 "sType_clone"
        # 20 "sType_clone"
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            # 20 "sType_clone"
            result_47->mLongLong=self->mLongLong;
        }
        # 22 "sType_clone"
        # 21 "sType_clone"
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            # 21 "sType_clone"
            result_47->mConstant=self->mConstant;
        }
        # 23 "sType_clone"
        # 22 "sType_clone"
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            # 22 "sType_clone"
            result_47->mRegister=self->mRegister;
        }
        # 24 "sType_clone"
        # 23 "sType_clone"
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            # 23 "sType_clone"
            result_47->mVolatile=self->mVolatile;
        }
        # 25 "sType_clone"
        # 24 "sType_clone"
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            # 24 "sType_clone"
            result_47->mStatic=self->mStatic;
        }
        # 26 "sType_clone"
        # 25 "sType_clone"
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            # 25 "sType_clone"
            result_47->mRecord=self->mRecord;
        }
        # 27 "sType_clone"
        # 26 "sType_clone"
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            # 26 "sType_clone"
            result_47->mExtern=self->mExtern;
        }
        # 28 "sType_clone"
        # 27 "sType_clone"
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            # 27 "sType_clone"
            result_47->mRestrict=self->mRestrict;
        }
        # 29 "sType_clone"
        # 28 "sType_clone"
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            # 28 "sType_clone"
            result_47->mImmutable=self->mImmutable;
        }
        # 30 "sType_clone"
        # 29 "sType_clone"
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            # 29 "sType_clone"
            result_47->mHeap=self->mHeap;
        }
        # 31 "sType_clone"
        # 30 "sType_clone"
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            # 30 "sType_clone"
            result_47->mDummyHeap=self->mDummyHeap;
        }
        # 32 "sType_clone"
        # 31 "sType_clone"
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            # 31 "sType_clone"
            result_47->mDelegate=self->mDelegate;
        }
        # 33 "sType_clone"
        # 32 "sType_clone"
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            # 32 "sType_clone"
            result_47->mShare=self->mShare;
        }
        # 34 "sType_clone"
        # 33 "sType_clone"
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            # 33 "sType_clone"
            result_47->mClone=self->mClone;
        }
        # 35 "sType_clone"
        # 34 "sType_clone"
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            # 34 "sType_clone"
            result_47->mNoHeap=self->mNoHeap;
        }
        # 36 "sType_clone"
        # 35 "sType_clone"
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            # 35 "sType_clone"
            result_47->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        # 37 "sType_clone"
        # 36 "sType_clone"
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            # 36 "sType_clone"
            result_47->mRefference=self->mRefference;
        }
        # 38 "sType_clone"
        # 37 "sType_clone"
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            # 37 "sType_clone"
            result_47->mException=self->mException;
        }
        # 39 "sType_clone"
        # 38 "sType_clone"
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            # 38 "sType_clone"
            result_47->mPointerNum=self->mPointerNum;
        }
        # 40 "sType_clone"
        # 39 "sType_clone"
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            # 39 "sType_clone"
            result_47->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        # 41 "sType_clone"
        # 40 "sType_clone"
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            # 40 "sType_clone"
            result_47->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        # 42 "sType_clone"
        # 41 "sType_clone"
        if(_if_conditional96=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional96) {
            # 41 "sType_clone"
            __dec_obj33=result_47->mSizeNum;
            result_47->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value113=sNode_clone(self->mSizeNum))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value113) { right_value113 = come_decrement_ref_count2(right_value113, ((struct sNode*)right_value113)->finalize, ((struct sNode*)right_value113)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 43 "sType_clone"
        # 42 "sType_clone"
        if(_if_conditional97=self!=((void*)0),        _if_conditional97) {
            # 42 "sType_clone"
            result_47->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        # 44 "sType_clone"
        # 43 "sType_clone"
        if(_if_conditional98=self!=((void*)0),        _if_conditional98) {
            # 43 "sType_clone"
            result_47->mTypeOfExpression=self->mTypeOfExpression;
        }
        # 45 "sType_clone"
        # 44 "sType_clone"
        if(_if_conditional99=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional99) {
            # 44 "sType_clone"
            __dec_obj34=result_47->mOriginalTypeName;
            result_47->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value114=string_clone(self->mOriginalTypeName))));
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 46 "sType_clone"
        # 45 "sType_clone"
        if(_if_conditional100=self!=((void*)0),        _if_conditional100) {
            # 45 "sType_clone"
            result_47->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        # 47 "sType_clone"
        # 46 "sType_clone"
        if(_if_conditional101=self!=((void*)0),        _if_conditional101) {
            # 46 "sType_clone"
            result_47->mFunctionParam=self->mFunctionParam;
        }
        # 48 "sType_clone"
        # 47 "sType_clone"
        if(_if_conditional102=self!=((void*)0),        _if_conditional102) {
            # 47 "sType_clone"
            result_47->mAllocaValue=self->mAllocaValue;
        }
        # 49 "sType_clone"
        # 48 "sType_clone"
        if(_if_conditional103=self!=((void*)0),        _if_conditional103) {
            # 48 "sType_clone"
            result_47->mGenericsStruct=self->mGenericsStruct;
        }
        # 50 "sType_clone"
        # 49 "sType_clone"
        if(_if_conditional104=self!=((void*)0),        _if_conditional104) {
            # 49 "sType_clone"
            result_47->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        # 51 "sType_clone"
        # 50 "sType_clone"
        if(_if_conditional105=self!=((void*)0),        _if_conditional105) {
            # 50 "sType_clone"
            result_47->mComeMemCore=self->mComeMemCore;
        }
        # 52 "sType_clone"
        # 51 "sType_clone"
        if(_if_conditional106=self!=((void*)0),        _if_conditional106) {
            # 51 "sType_clone"
            result_47->mInline=self->mInline;
        }
        # 53 "sType_clone"
        # 52 "sType_clone"
        if(_if_conditional107=self!=((void*)0),        _if_conditional107) {
            # 52 "sType_clone"
            result_47->mNullValue=self->mNullValue;
        }
        # 54 "sType_clone"
        # 53 "sType_clone"
        if(_if_conditional108=self!=((void*)0),        _if_conditional108) {
            # 53 "sType_clone"
            result_47->mGuardValue=self->mGuardValue;
        }
        # 55 "sType_clone"
        # 54 "sType_clone"
        if(_if_conditional109=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional109) {
            # 54 "sType_clone"
            __dec_obj35=result_47->mAsmName;
            result_47->mAsmName=(char*)come_increment_ref_count(((char*)(right_value115=string_clone(self->mAsmName))));
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 56 "sType_clone"
        # 55 "sType_clone"
        if(_if_conditional110=self!=((void*)0),        _if_conditional110) {
            # 55 "sType_clone"
            result_47->mArrayPointerType=self->mArrayPointerType;
        }
        # 56 "sType_clone"
        __result73__ = __result_obj__ = result_47;
        come_call_finalizer3(result_47,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result73__;
        come_call_finalizer3(result_47,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional21;
_Bool _if_conditional23;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sType_finalize"
            # 0 "sType_finalize"
            if(_if_conditional21=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional21) {
                # 0 "sType_finalize"
                come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 2 "sType_finalize"
            # 1 "sType_finalize"
            if(_if_conditional23=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional23) {
                # 1 "sType_finalize"
                come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 3 "sType_finalize"
            # 2 "sType_finalize"
            if(_if_conditional25=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional25) {
                # 2 "sType_finalize"
                come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 4 "sType_finalize"
            # 3 "sType_finalize"
            if(_if_conditional26=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional26) {
                # 3 "sType_finalize"
                self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 5 "sType_finalize"
            # 4 "sType_finalize"
            if(_if_conditional27=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional27) {
                # 4 "sType_finalize"
                come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 6 "sType_finalize"
            # 5 "sType_finalize"
            if(_if_conditional28=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional28) {
                # 5 "sType_finalize"
                come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 7 "sType_finalize"
            # 6 "sType_finalize"
            if(_if_conditional30=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional30) {
                # 6 "sType_finalize"
                come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 8 "sType_finalize"
            # 7 "sType_finalize"
            if(_if_conditional31=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional31) {
                # 7 "sType_finalize"
                come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 9 "sType_finalize"
            # 8 "sType_finalize"
            if(_if_conditional33=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional33) {
                # 8 "sType_finalize"
                come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 10 "sType_finalize"
            # 9 "sType_finalize"
            if(_if_conditional34=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional34) {
                # 9 "sType_finalize"
                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 11 "sType_finalize"
            # 10 "sType_finalize"
            if(_if_conditional35=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional35) {
                # 10 "sType_finalize"
                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 12 "sType_finalize"
            # 11 "sType_finalize"
            if(_if_conditional36=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional36) {
                # 11 "sType_finalize"
                self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 13 "sType_finalize"
            # 12 "sType_finalize"
            if(_if_conditional37=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional37) {
                # 12 "sType_finalize"
                self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
                    # 114 "./neo-c.h"
                    it_48=self->head;
                    # 120 "./neo-c.h"
                    while(_while_condtional7=it_48!=((void*)0),                    _while_condtional7) {
                        # 116 "./neo-c.h"
                        prev_it_49=it_48;
                        # 117 "./neo-c.h"
                        it_48=it_48->next;
                        # 118 "./neo-c.h"
                        come_call_finalizer3(prev_it_49,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1sTypephp_finalize"
                            # 0 "list_item$1sTypephp_finalize"
                            if(_if_conditional22=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional22) {
                                # 0 "list_item$1sTypephp_finalize"
                                come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple1$1sTypephp_finalize"
                    # 0 "tuple1$1sTypephp_finalize"
                    if(_if_conditional24=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional24) {
                        # 0 "tuple1$1sTypephp_finalize"
                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
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
                    # 114 "./neo-c.h"
                    it_50=self->head;
                    # 120 "./neo-c.h"
                    while(_while_condtional8=it_50!=((void*)0),                    _while_condtional8) {
                        # 116 "./neo-c.h"
                        prev_it_51=it_50;
                        # 117 "./neo-c.h"
                        it_50=it_50->next;
                        # 118 "./neo-c.h"
                        come_call_finalizer3(prev_it_51,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional29;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1sNodephp_finalize"
                            # 0 "list_item$1sNodephp_finalize"
                            if(_if_conditional29=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional29) {
                                # 0 "list_item$1sNodephp_finalize"
                                if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
                    # 114 "./neo-c.h"
                    it_52=self->head;
                    # 120 "./neo-c.h"
                    while(_while_condtional9=it_52!=((void*)0),                    _while_condtional9) {
                        # 116 "./neo-c.h"
                        prev_it_53=it_52;
                        # 117 "./neo-c.h"
                        it_52=it_52->next;
                        # 118 "./neo-c.h"
                        come_call_finalizer3(prev_it_53,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1charphp_finalize"
                            # 0 "list_item$1charphp_finalize"
                            if(_if_conditional32=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional32) {
                                # 0 "list_item$1charphp_finalize"
                                self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional40;
struct list$1sTypeph* __result57__;
void* right_value82;
void* right_value83;
struct list$1sTypeph* result_54;
struct list_item$1sTypeph* it_55;
_Bool _while_condtional10;
void* right_value87;
struct list$1sTypeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
right_value83 = (void*)0;
memset(&result_54, 0, sizeof(struct list$1sTypeph*));
memset(&it_55, 0, sizeof(struct list_item$1sTypeph*));
right_value87 = (void*)0;
                # 133 "./neo-c.h"
                # 130 "./neo-c.h"
                if(_if_conditional40=self==((void*)0),                _if_conditional40) {
                    # 131 "./neo-c.h"
                    __result57__ = __result_obj__ = ((void*)0);
                    return __result57__;
                }
                # 133 "./neo-c.h"
                result_54=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value83=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value82=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 133, "list$1sTypeph"))))))));
                come_call_finalizer3(right_value82,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value83,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 135 "./neo-c.h"
                it_55=self->head;
                # 142 "./neo-c.h"
                while(_while_condtional10=it_55!=((void*)0),                _while_condtional10) {
                    # 137 "./neo-c.h"
                    list$1sTypeph_add(result_54,(struct sType*)come_increment_ref_count(((struct sType*)(right_value87=sType_clone(it_55->item)))));
                    come_call_finalizer3(right_value87,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 139 "./neo-c.h"
                    it_55=it_55->next;
                }
                # 142 "./neo-c.h"
                __result60__ = __result_obj__ = result_54;
                come_call_finalizer3(result_54,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result60__;
                come_call_finalizer3(result_54,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 95 "./neo-c.h"
                    self->head=((void*)0);
                    # 96 "./neo-c.h"
                    self->tail=((void*)0);
                    # 97 "./neo-c.h"
                    self->len=0;
                    # 99 "./neo-c.h"
                    __result58__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result58__;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional41;
void* right_value84;
struct list_item$1sTypeph* litem_56;
struct sType* __dec_obj13;
_Bool _if_conditional42;
void* right_value85;
struct list_item$1sTypeph* litem_57;
struct sType* __dec_obj14;
void* right_value86;
struct list_item$1sTypeph* litem_58;
struct sType* __dec_obj15;
struct list$1sTypeph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1sTypeph*));
right_value85 = (void*)0;
memset(&litem_57, 0, sizeof(struct list_item$1sTypeph*));
right_value86 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1sTypeph*));
                        # 177 "./neo-c.h"
                        # 146 "./neo-c.h"
                        if(_if_conditional41=self->len==0,                        _if_conditional41) {
                            # 147 "./neo-c.h"
                            litem_56=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value84=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 147, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value84,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 149 "./neo-c.h"
                            litem_56->prev=((void*)0);
                            # 150 "./neo-c.h"
                            litem_56->next=((void*)0);
                            # 151 "./neo-c.h"
                            __dec_obj13=litem_56->item;
                            litem_56->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
                            # 153 "./neo-c.h"
                            self->tail=litem_56;
                            # 154 "./neo-c.h"
                            self->head=litem_56;
                        }
                        else {
                            # 177 "./neo-c.h"
                            # 156 "./neo-c.h"
                            if(_if_conditional42=self->len==1,                            _if_conditional42) {
                                # 157 "./neo-c.h"
                                litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value85=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 157, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value85,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 159 "./neo-c.h"
                                litem_57->prev=self->head;
                                # 160 "./neo-c.h"
                                litem_57->next=((void*)0);
                                # 161 "./neo-c.h"
                                __dec_obj14=litem_57->item;
                                litem_57->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                                # 163 "./neo-c.h"
                                self->tail=litem_57;
                                # 164 "./neo-c.h"
                                self->head->next=litem_57;
                            }
                            else {
                                # 167 "./neo-c.h"
                                litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value86=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 167, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value86,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 169 "./neo-c.h"
                                litem_58->prev=self->tail;
                                # 170 "./neo-c.h"
                                litem_58->next=((void*)0);
                                # 171 "./neo-c.h"
                                __dec_obj15=litem_58->item;
                                litem_58->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj15,sType_finalize, 0, 0, 0, 0, (void*)0);
                                # 173 "./neo-c.h"
                                self->tail->next=litem_58;
                                # 174 "./neo-c.h"
                                self->tail=litem_58;
                            }
                        }
                        # 177 "./neo-c.h"
                        self->len++;
                        # 179 "./neo-c.h"
                        __result59__ = __result_obj__ = self;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result59__;
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
                # 114 "./neo-c.h"
                it_59=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional11=it_59!=((void*)0),                _while_condtional11) {
                    # 116 "./neo-c.h"
                    prev_it_60=it_59;
                    # 117 "./neo-c.h"
                    it_59=it_59->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_60,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional44;
struct tuple1$1sTypeph* __result61__;
void* right_value89;
struct tuple1$1sTypeph* result_61;
_Bool _if_conditional46;
void* right_value90;
struct sType* __dec_obj17;
struct tuple1$1sTypeph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
memset(&result_61, 0, sizeof(struct tuple1$1sTypeph*));
right_value90 = (void*)0;
                # 3 "tuple1$1sTypephp_clone"
                # 2 "tuple1$1sTypephp_clone"
                if(_if_conditional44=self==(void*)0,                _if_conditional44) {
                    # 2 "tuple1$1sTypephp_clone"
                    __result61__ = __result_obj__ = (void*)0;
                    return __result61__;
                }
                # 3 "tuple1$1sTypephp_clone"
                result_61=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value89=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer3(right_value89,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "tuple1$1sTypephp_clone"
                # 4 "tuple1$1sTypephp_clone"
                if(_if_conditional46=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional46) {
                    # 4 "tuple1$1sTypephp_clone"
                    __dec_obj17=result_61->v1;
                    result_61->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value90=sType_clone(self->v1))));
                    come_call_finalizer3(__dec_obj17,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value90,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 5 "tuple1$1sTypephp_clone"
                __result62__ = __result_obj__ = result_61;
                come_call_finalizer3(result_61,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result62__;
                come_call_finalizer3(result_61,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional45;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple1$1sTypeph_finalize"
                    # 0 "tuple1$1sTypeph_finalize"
                    if(_if_conditional45=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional45) {
                        # 0 "tuple1$1sTypeph_finalize"
                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional51;
struct list$1sNodeph* __result63__;
void* right_value95;
void* right_value96;
struct list$1sNodeph* result_62;
struct list_item$1sNodeph* it_63;
_Bool _while_condtional12;
void* right_value101;
struct list$1sNodeph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
right_value96 = (void*)0;
memset(&result_62, 0, sizeof(struct list$1sNodeph*));
memset(&it_63, 0, sizeof(struct list_item$1sNodeph*));
right_value101 = (void*)0;
                # 133 "./neo-c.h"
                # 130 "./neo-c.h"
                if(_if_conditional51=self==((void*)0),                _if_conditional51) {
                    # 131 "./neo-c.h"
                    __result63__ = __result_obj__ = ((void*)0);
                    return __result63__;
                }
                # 133 "./neo-c.h"
                result_62=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value96=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value95=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 133, "list$1sNodeph"))))))));
                come_call_finalizer3(right_value95,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value96,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 135 "./neo-c.h"
                it_63=self->head;
                # 142 "./neo-c.h"
                while(_while_condtional12=it_63!=((void*)0),                _while_condtional12) {
                    # 137 "./neo-c.h"
                    list$1sNodeph_add(result_62,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value101=sNode_clone(it_63->item)))));
                    if(right_value101) { right_value101 = come_decrement_ref_count2(right_value101, ((struct sNode*)right_value101)->finalize, ((struct sNode*)right_value101)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 139 "./neo-c.h"
                    it_63=it_63->next;
                }
                # 142 "./neo-c.h"
                __result68__ = __result_obj__ = result_62;
                come_call_finalizer3(result_62,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result68__;
                come_call_finalizer3(result_62,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 95 "./neo-c.h"
                    self->head=((void*)0);
                    # 96 "./neo-c.h"
                    self->tail=((void*)0);
                    # 97 "./neo-c.h"
                    self->len=0;
                    # 99 "./neo-c.h"
                    __result64__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result64__;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional52;
void* right_value97;
struct list_item$1sNodeph* litem_64;
struct sNode* __dec_obj22;
_Bool _if_conditional53;
void* right_value98;
struct list_item$1sNodeph* litem_65;
struct sNode* __dec_obj23;
void* right_value99;
struct list_item$1sNodeph* litem_66;
struct sNode* __dec_obj24;
struct list$1sNodeph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
memset(&litem_64, 0, sizeof(struct list_item$1sNodeph*));
right_value98 = (void*)0;
memset(&litem_65, 0, sizeof(struct list_item$1sNodeph*));
right_value99 = (void*)0;
memset(&litem_66, 0, sizeof(struct list_item$1sNodeph*));
                        # 177 "./neo-c.h"
                        # 146 "./neo-c.h"
                        if(_if_conditional52=self->len==0,                        _if_conditional52) {
                            # 147 "./neo-c.h"
                            litem_64=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value97=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 147, "list_item$1sNodeph"))));
                            come_call_finalizer3(right_value97,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 149 "./neo-c.h"
                            litem_64->prev=((void*)0);
                            # 150 "./neo-c.h"
                            litem_64->next=((void*)0);
                            # 151 "./neo-c.h"
                            __dec_obj22=litem_64->item;
                            litem_64->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                            # 153 "./neo-c.h"
                            self->tail=litem_64;
                            # 154 "./neo-c.h"
                            self->head=litem_64;
                        }
                        else {
                            # 177 "./neo-c.h"
                            # 156 "./neo-c.h"
                            if(_if_conditional53=self->len==1,                            _if_conditional53) {
                                # 157 "./neo-c.h"
                                litem_65=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value98=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 157, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value98,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 159 "./neo-c.h"
                                litem_65->prev=self->head;
                                # 160 "./neo-c.h"
                                litem_65->next=((void*)0);
                                # 161 "./neo-c.h"
                                __dec_obj23=litem_65->item;
                                litem_65->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                # 163 "./neo-c.h"
                                self->tail=litem_65;
                                # 164 "./neo-c.h"
                                self->head->next=litem_65;
                            }
                            else {
                                # 167 "./neo-c.h"
                                litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value99=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 167, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value99,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 169 "./neo-c.h"
                                litem_66->prev=self->tail;
                                # 170 "./neo-c.h"
                                litem_66->next=((void*)0);
                                # 171 "./neo-c.h"
                                __dec_obj24=litem_66->item;
                                litem_66->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                                # 173 "./neo-c.h"
                                self->tail->next=litem_66;
                                # 174 "./neo-c.h"
                                self->tail=litem_66;
                            }
                        }
                        # 177 "./neo-c.h"
                        self->len++;
                        # 179 "./neo-c.h"
                        __result65__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result65__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional54;
struct sNode* __result66__;
void* right_value100;
struct sNode* result_67;
_Bool _if_conditional55;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
struct sNode* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value100 = (void*)0;
memset(&result_67, 0, sizeof(struct sNode*));
                        # 3 "sNode_clone"
                        # 2 "sNode_clone"
                        if(_if_conditional54=self==(void*)0,                        _if_conditional54) {
                            # 2 "sNode_clone"
                            __result66__ = __result_obj__ = (void*)0;
                            return __result66__;
                        }
                        # 3 "sNode_clone"
                        result_67=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value100=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value100) { right_value100 = come_decrement_ref_count2(right_value100, ((struct sNode*)right_value100)->finalize, ((struct sNode*)right_value100)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 5 "sNode_clone"
                        # 4 "sNode_clone"
                        if(_if_conditional55=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional55) {
                            # 4 "sNode_clone"
                            result_67->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        # 6 "sNode_clone"
                        # 5 "sNode_clone"
                        if(_if_conditional56=self!=((void*)0),                        _if_conditional56) {
                            # 5 "sNode_clone"
                            result_67->finalize=self->finalize;
                        }
                        # 7 "sNode_clone"
                        # 6 "sNode_clone"
                        if(_if_conditional57=self!=((void*)0),                        _if_conditional57) {
                            # 6 "sNode_clone"
                            result_67->clone=self->clone;
                        }
                        # 8 "sNode_clone"
                        # 7 "sNode_clone"
                        if(_if_conditional58=self!=((void*)0),                        _if_conditional58) {
                            # 7 "sNode_clone"
                            result_67->compile=self->compile;
                        }
                        # 9 "sNode_clone"
                        # 8 "sNode_clone"
                        if(_if_conditional59=self!=((void*)0),                        _if_conditional59) {
                            # 8 "sNode_clone"
                            result_67->sline=self->sline;
                        }
                        # 10 "sNode_clone"
                        # 9 "sNode_clone"
                        if(_if_conditional60=self!=((void*)0),                        _if_conditional60) {
                            # 9 "sNode_clone"
                            result_67->sname=self->sname;
                        }
                        # 11 "sNode_clone"
                        # 10 "sNode_clone"
                        if(_if_conditional61=self!=((void*)0),                        _if_conditional61) {
                            # 10 "sNode_clone"
                            result_67->terminated=self->terminated;
                        }
                        # 12 "sNode_clone"
                        # 11 "sNode_clone"
                        if(_if_conditional62=self!=((void*)0),                        _if_conditional62) {
                            # 11 "sNode_clone"
                            result_67->kind=self->kind;
                        }
                        # 12 "sNode_clone"
                        __result67__ = __result_obj__ = result_67;
                        if(result_67) { result_67 = come_decrement_ref_count2(result_67, ((struct sNode*)result_67)->finalize, ((struct sNode*)result_67)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result67__;
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
                # 114 "./neo-c.h"
                it_68=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional13=it_68!=((void*)0),                _while_condtional13) {
                    # 116 "./neo-c.h"
                    prev_it_69=it_68;
                    # 117 "./neo-c.h"
                    it_68=it_68->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_69,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional66;
struct list$1charph* __result69__;
void* right_value104;
void* right_value105;
struct list$1charph* result_70;
struct list_item$1charph* it_71;
_Bool _while_condtional14;
void* right_value109;
struct list$1charph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
right_value105 = (void*)0;
memset(&result_70, 0, sizeof(struct list$1charph*));
memset(&it_71, 0, sizeof(struct list_item$1charph*));
right_value109 = (void*)0;
                # 133 "./neo-c.h"
                # 130 "./neo-c.h"
                if(_if_conditional66=self==((void*)0),                _if_conditional66) {
                    # 131 "./neo-c.h"
                    __result69__ = __result_obj__ = ((void*)0);
                    return __result69__;
                }
                # 133 "./neo-c.h"
                result_70=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value105=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value104=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 133, "list$1charph"))))))));
                come_call_finalizer3(right_value104,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value105,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 135 "./neo-c.h"
                it_71=self->head;
                # 142 "./neo-c.h"
                while(_while_condtional14=it_71!=((void*)0),                _while_condtional14) {
                    # 137 "./neo-c.h"
                    list$1charph_add(result_70,(char*)come_increment_ref_count(((char*)(right_value109=string_clone(it_71->item)))));
                    right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 139 "./neo-c.h"
                    it_71=it_71->next;
                }
                # 142 "./neo-c.h"
                __result72__ = __result_obj__ = result_70;
                come_call_finalizer3(result_70,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result72__;
                come_call_finalizer3(result_70,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 95 "./neo-c.h"
                    self->head=((void*)0);
                    # 96 "./neo-c.h"
                    self->tail=((void*)0);
                    # 97 "./neo-c.h"
                    self->len=0;
                    # 99 "./neo-c.h"
                    __result70__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result70__;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional67;
void* right_value106;
struct list_item$1charph* litem_72;
char* __dec_obj27;
_Bool _if_conditional68;
void* right_value107;
struct list_item$1charph* litem_73;
char* __dec_obj28;
void* right_value108;
struct list_item$1charph* litem_74;
char* __dec_obj29;
struct list$1charph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
memset(&litem_72, 0, sizeof(struct list_item$1charph*));
right_value107 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1charph*));
right_value108 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1charph*));
                        # 177 "./neo-c.h"
                        # 146 "./neo-c.h"
                        if(_if_conditional67=self->len==0,                        _if_conditional67) {
                            # 147 "./neo-c.h"
                            litem_72=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value106=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 147, "list_item$1charph"))));
                            come_call_finalizer3(right_value106,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 149 "./neo-c.h"
                            litem_72->prev=((void*)0);
                            # 150 "./neo-c.h"
                            litem_72->next=((void*)0);
                            # 151 "./neo-c.h"
                            __dec_obj27=litem_72->item;
                            litem_72->item=(char*)come_increment_ref_count(item);
                            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                            # 153 "./neo-c.h"
                            self->tail=litem_72;
                            # 154 "./neo-c.h"
                            self->head=litem_72;
                        }
                        else {
                            # 177 "./neo-c.h"
                            # 156 "./neo-c.h"
                            if(_if_conditional68=self->len==1,                            _if_conditional68) {
                                # 157 "./neo-c.h"
                                litem_73=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value107=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 157, "list_item$1charph"))));
                                come_call_finalizer3(right_value107,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 159 "./neo-c.h"
                                litem_73->prev=self->head;
                                # 160 "./neo-c.h"
                                litem_73->next=((void*)0);
                                # 161 "./neo-c.h"
                                __dec_obj28=litem_73->item;
                                litem_73->item=(char*)come_increment_ref_count(item);
                                __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 163 "./neo-c.h"
                                self->tail=litem_73;
                                # 164 "./neo-c.h"
                                self->head->next=litem_73;
                            }
                            else {
                                # 167 "./neo-c.h"
                                litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value108=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 167, "list_item$1charph"))));
                                come_call_finalizer3(right_value108,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 169 "./neo-c.h"
                                litem_74->prev=self->tail;
                                # 170 "./neo-c.h"
                                litem_74->next=((void*)0);
                                # 171 "./neo-c.h"
                                __dec_obj29=litem_74->item;
                                litem_74->item=(char*)come_increment_ref_count(item);
                                __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 173 "./neo-c.h"
                                self->tail->next=litem_74;
                                # 174 "./neo-c.h"
                                self->tail=litem_74;
                            }
                        }
                        # 177 "./neo-c.h"
                        self->len++;
                        # 179 "./neo-c.h"
                        __result71__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result71__;
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
                # 114 "./neo-c.h"
                it_75=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional15=it_75!=((void*)0),                _while_condtional15) {
                    # 116 "./neo-c.h"
                    prev_it_76=it_75;
                    # 117 "./neo-c.h"
                    it_75=it_75->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_76,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional113;
_Bool _if_conditional114;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "CVALUE_finalize"
        # 0 "CVALUE_finalize"
        if(_if_conditional113=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional113) {
            # 0 "CVALUE_finalize"
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "CVALUE_finalize"
        # 1 "CVALUE_finalize"
        if(_if_conditional114=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional114) {
            # 1 "CVALUE_finalize"
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional115;
struct sNode* result_81;
struct sNode* __result77__;
_Bool _if_conditional116;
struct sNode* __result78__;
struct sNode* result_82;
struct sNode* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_81, 0, sizeof(struct sNode*));
memset(&result_82, 0, sizeof(struct sNode*));
        # 281 "./neo-c.h"
        # 276 "./neo-c.h"
        if(_if_conditional115=self==((void*)0),        _if_conditional115) {
            # 277 "./neo-c.h"
            # 278 "./neo-c.h"
            memset(&result_81,0,sizeof(struct sNode*));
            # 279 "./neo-c.h"
            __result77__ = __result_obj__ = result_81;
            return __result77__;
        }
        # 281 "./neo-c.h"
        self->it=self->head;
        # 287 "./neo-c.h"
        # 283 "./neo-c.h"
        if(self->it) {
            # 284 "./neo-c.h"
            __result78__ = __result_obj__ = self->it->item;
            return __result78__;
        }
        # 287 "./neo-c.h"
        # 288 "./neo-c.h"
        memset(&result_82,0,sizeof(struct sNode*));
        # 289 "./neo-c.h"
        __result79__ = __result_obj__ = result_82;
        return __result79__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
        # 311 "./neo-c.h"
        __result80__ = self==((void*)0)||self->it==((void*)0);
        return __result80__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional117;
struct sNode* result_84;
struct sNode* __result81__;
_Bool _if_conditional118;
struct sNode* __result82__;
struct sNode* result_85;
struct sNode* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_84, 0, sizeof(struct sNode*));
memset(&result_85, 0, sizeof(struct sNode*));
        # 299 "./neo-c.h"
        # 293 "./neo-c.h"
        if(_if_conditional117=self==((void*)0)||self->it==((void*)0),        _if_conditional117) {
            # 294 "./neo-c.h"
            # 295 "./neo-c.h"
            memset(&result_84,0,sizeof(struct sNode*));
            # 296 "./neo-c.h"
            __result81__ = __result_obj__ = result_84;
            return __result81__;
        }
        # 299 "./neo-c.h"
        self->it=self->it->next;
        # 305 "./neo-c.h"
        # 301 "./neo-c.h"
        if(self->it) {
            # 302 "./neo-c.h"
            __result82__ = __result_obj__ = self->it->item;
            return __result82__;
        }
        # 305 "./neo-c.h"
        # 306 "./neo-c.h"
        memset(&result_85,0,sizeof(struct sNode*));
        # 307 "./neo-c.h"
        __result83__ = __result_obj__ = result_85;
        return __result83__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_88;
_Bool _while_condtional16;
struct list_item$1sNodeph* prev_it_89;
struct list$1sNodeph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_88, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_89, 0, sizeof(struct list_item$1sNodeph*));
        # 420 "./neo-c.h"
        it_88=self->head;
        # 427 "./neo-c.h"
        while(_while_condtional16=it_88!=((void*)0),        _while_condtional16) {
            # 422 "./neo-c.h"
            prev_it_89=it_88;
            # 423 "./neo-c.h"
            it_88=it_88->next;
            # 424 "./neo-c.h"
            come_call_finalizer3(prev_it_89,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 427 "./neo-c.h"
        self->head=((void*)0);
        # 428 "./neo-c.h"
        self->tail=((void*)0);
        # 430 "./neo-c.h"
        self->len=0;
        # 432 "./neo-c.h"
        __result85__ = __result_obj__ = self;
        return __result85__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional121;
void* right_value131;
struct list_item$1CVALUEph* litem_92;
struct CVALUE* __dec_obj41;
_Bool _if_conditional123;
void* right_value132;
struct list_item$1CVALUEph* litem_93;
struct CVALUE* __dec_obj42;
void* right_value133;
struct list_item$1CVALUEph* litem_94;
struct CVALUE* __dec_obj43;
struct list$1CVALUEph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
right_value131 = (void*)0;
memset(&litem_92, 0, sizeof(struct list_item$1CVALUEph*));
right_value132 = (void*)0;
memset(&litem_93, 0, sizeof(struct list_item$1CVALUEph*));
right_value133 = (void*)0;
memset(&litem_94, 0, sizeof(struct list_item$1CVALUEph*));
        # 247 "./neo-c.h"
        # 216 "./neo-c.h"
        if(_if_conditional121=self->len==0,        _if_conditional121) {
            # 217 "./neo-c.h"
            litem_92=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value131=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 217, "list_item$1CVALUEph"))));
            come_call_finalizer3(right_value131,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            # 219 "./neo-c.h"
            litem_92->prev=((void*)0);
            # 220 "./neo-c.h"
            litem_92->next=((void*)0);
            # 221 "./neo-c.h"
            __dec_obj41=litem_92->item;
            litem_92->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj41,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            # 223 "./neo-c.h"
            self->tail=litem_92;
            # 224 "./neo-c.h"
            self->head=litem_92;
        }
        else {
            # 247 "./neo-c.h"
            # 226 "./neo-c.h"
            if(_if_conditional123=self->len==1,            _if_conditional123) {
                # 227 "./neo-c.h"
                litem_93=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value132=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 227, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value132,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 229 "./neo-c.h"
                litem_93->prev=self->head;
                # 230 "./neo-c.h"
                litem_93->next=((void*)0);
                # 231 "./neo-c.h"
                __dec_obj42=litem_93->item;
                litem_93->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj42,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                # 233 "./neo-c.h"
                self->tail=litem_93;
                # 234 "./neo-c.h"
                self->head->next=litem_93;
            }
            else {
                # 237 "./neo-c.h"
                litem_94=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value133=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 237, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value133,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 239 "./neo-c.h"
                litem_94->prev=self->tail;
                # 240 "./neo-c.h"
                litem_94->next=((void*)0);
                # 241 "./neo-c.h"
                __dec_obj43=litem_94->item;
                litem_94->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj43,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                # 243 "./neo-c.h"
                self->tail->next=litem_94;
                # 244 "./neo-c.h"
                self->tail=litem_94;
            }
        }
        # 247 "./neo-c.h"
        self->len++;
        # 249 "./neo-c.h"
        __result86__ = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result86__;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional122;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "list_item$1CVALUEphp_finalize"
                # 0 "list_item$1CVALUEphp_finalize"
                if(_if_conditional122=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional122) {
                    # 0 "list_item$1CVALUEphp_finalize"
                    come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
}

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info){
void* __result_obj__;
void* right_value134;
struct sNode* __dec_obj44;
void* right_value135;
struct sType* __dec_obj45;
void* right_value136;
char* __dec_obj46;
struct sImplementsNode* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
    # 112 "21obj.c"
    __dec_obj44=self->obj_exp;
    self->obj_exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value134=sNode_clone(obj_exp))));
    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value134) { right_value134 = come_decrement_ref_count2(right_value134, ((struct sNode*)right_value134)->finalize, ((struct sNode*)right_value134)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 113 "21obj.c"
    __dec_obj45=self->inf_type;
    self->inf_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value135=sType_clone(inf_type))));
    come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value135,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 115 "21obj.c"
    self->sline=info->sline;
    # 116 "21obj.c"
    __dec_obj46=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value136=__builtin_string(info->sname))));
    __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 119 "21obj.c"
    __result88__ = __result_obj__ = self;
    come_call_finalizer3(self,sImplementsNode_finalize, 0, 0, 1, 0, (void*)0);
    if(obj_exp) { obj_exp = come_decrement_ref_count2(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer3(inf_type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result88__;
    come_call_finalizer3(self,sImplementsNode_finalize, 0, 0, 1, 0, (void*)0);
    if(obj_exp) { obj_exp = come_decrement_ref_count2(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer3(inf_type,sType_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sImplementsNode_terminated(struct sImplementsNode* self){
void* __result_obj__;
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
    # 121 "21obj.c"
    __result89__ = (_Bool)0;
    return __result89__;
}

char* sImplementsNode_kind(struct sImplementsNode* self){
void* __result_obj__;
void* right_value137;
char* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value137 = (void*)0;
    # 126 "21obj.c"
    __result90__ = __result_obj__ = ((char*)(right_value137=__builtin_string("sImplementsNode")));
    right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result90__;
}

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value138;
struct sNode* obj_exp_95;
void* right_value139;
struct sType* inf_type_96;
_Bool _if_conditional127;
_Bool __result91__;
void* right_value140;
struct CVALUE* come_value_97;
void* right_value141;
struct sType* type_98;
struct sClass* klass_99;
void* right_value142;
struct CVALUE* come_value2_100;
void* right_value143;
struct sType* type2_101;
void* right_value144;
char* type_name_102;
void* right_value145;
char* type_name2_103;
static int inf_num_104=0;
void* right_value146;
char* buf_105;
void* right_value147;
char* buf2_106;
void* right_value148;
struct sType* typeX_107;
void* right_value149;
void* right_value150;
int i_108;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* name_112;
struct sType* field_type_113;
void* right_value151;
char* method_name_114;
struct sFun* fun_117;
_Bool _if_conditional153;
struct sClass* klass2_123;
_Bool _while_condtional21;
void* right_value152;
char* __dec_obj47;
_Bool _if_conditional163;
void* right_value153;
char* __dec_obj48;
void* right_value154;
struct sType* type3_124;
void* right_value155;
struct sType* __dec_obj49;
void* right_value156;
char* __dec_obj50;
_Bool __result104__;
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
memset(&name_112, 0, sizeof(char*));
memset(&field_type_113, 0, sizeof(struct sType*));
memset(&name_112, 0, sizeof(char*));
memset(&field_type_113, 0, sizeof(struct sType*));
right_value151 = (void*)0;
memset(&method_name_114, 0, sizeof(char*));
memset(&fun_117, 0, sizeof(struct sFun*));
memset(&klass2_123, 0, sizeof(struct sClass*));
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
memset(&type3_124, 0, sizeof(struct sType*));
right_value155 = (void*)0;
right_value156 = (void*)0;
    # 131 "21obj.c"
    obj_exp_95=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value138=sNode_clone(self->obj_exp))));
    if(right_value138) { right_value138 = come_decrement_ref_count2(right_value138, ((struct sNode*)right_value138)->finalize, ((struct sNode*)right_value138)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 132 "21obj.c"
    inf_type_96=(struct sType*)come_increment_ref_count(((struct sType*)(right_value139=sType_clone(self->inf_type))));
    come_call_finalizer3(right_value139,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 138 "21obj.c"
    # 134 "21obj.c"
    if(_if_conditional127=!node_compile(obj_exp_95,info),    _if_conditional127) {
        # 135 "21obj.c"
        __result91__ = (_Bool)0;
        if(obj_exp_95) { obj_exp_95 = come_decrement_ref_count2(obj_exp_95, ((struct sNode*)obj_exp_95)->finalize, ((struct sNode*)obj_exp_95)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(inf_type_96,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result91__;
    }
    # 138 "21obj.c"
    come_value_97=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value140=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value140,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 139 "21obj.c"
    dec_stack_ptr(1,info);
    # 141 "21obj.c"
    type_98=(struct sType*)come_increment_ref_count(((struct sType*)(right_value141=sType_clone(come_value_97->type))));
    come_call_finalizer3(right_value141,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 142 "21obj.c"
    type_98->mPointerNum--;
    # 143 "21obj.c"
    type_98->mHeap=(_Bool)0;
    # 145 "21obj.c"
    klass_99=inf_type_96->mClass;
    # 147 "21obj.c"
    come_value2_100=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value142=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 147, "CVALUE"))));
    come_call_finalizer3(right_value142,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 149 "21obj.c"
    type2_101=(struct sType*)come_increment_ref_count(((struct sType*)(right_value143=sType_clone(inf_type_96))));
    come_call_finalizer3(right_value143,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 151 "21obj.c"
    type_name_102=(char*)come_increment_ref_count(((char*)(right_value144=make_type_name_string(inf_type_96,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 152 "21obj.c"
    type_name2_103=(char*)come_increment_ref_count(((char*)(right_value145=make_type_name_string(type_98,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 154 "21obj.c"
    # 156 "21obj.c"
    buf_105=(char*)come_increment_ref_count(((char*)(right_value146=xsprintf("%s* _inf_value%d;\n",type_name_102,++inf_num_104))));
    right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 157 "21obj.c"
    add_come_code_at_function_head(info,buf_105);
    # 158 "21obj.c"
    buf2_106=(char*)come_increment_ref_count(((char*)(right_value147=xsprintf("%s* _inf_obj_value%d;\n",type_name2_103,inf_num_104))));
    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 159 "21obj.c"
    add_come_code_at_function_head(info,buf2_106);
    # 161 "21obj.c"
    add_come_code(info,"_inf_value%d=(%s*)come_calloc(1, sizeof(%s), \"%s\", %d, \"%s\");\n",inf_num_104,type_name_102,type_name_102,info->sname,info->sline,type_name_102);
    # 162 "21obj.c"
    add_come_code(info,"_inf_obj_value%d=come_increment_ref_count(%s);\n",inf_num_104,come_value_97->c_value);
    # 163 "21obj.c"
    add_come_code(info,"_inf_value%d->_protocol_obj=_inf_obj_value%d;\n",inf_num_104,inf_num_104);
    # 165 "21obj.c"
    typeX_107=(struct sType*)come_increment_ref_count(((struct sType*)(right_value148=sType_clone(type_98))));
    come_call_finalizer3(right_value148,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 166 "21obj.c"
    typeX_107->mPointerNum++;
    # 168 "21obj.c"
    ((struct tuple2$2sFunpcharph*)(right_value149=create_finalizer_automatically(typeX_107,"finalize",info)));
    come_call_finalizer3(right_value149,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 169 "21obj.c"
    ((struct tuple2$2sFunpcharph*)(right_value150=create_cloner_automatically(typeX_107,"clone",info)));
    come_call_finalizer3(right_value150,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 199 "21obj.c"
    for(    i_108=1;    i_108<list$1tuple2$2charphsTypephph_length(klass_99->mFields);    i_108++    ){
        # 172 "21obj.c"
        multiple_assign_var1=((struct tuple2$2charphsTypeph*)come_null_check(list$1tuple2$2charphsTypephphp_operator_load_element(klass_99->mFields,i_108), "21obj.c", 172, 0));
        name_112=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type_113=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        # 174 "21obj.c"
        method_name_114=(char*)come_increment_ref_count(((char*)(right_value151=create_method_name(type_98,(_Bool)0,name_112,info,(_Bool)1))));
        right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 176 "21obj.c"
        fun_117=map$2charphsFunph_at(info->funcs,method_name_114,((void*)0));
        # 197 "21obj.c"
        # 178 "21obj.c"
        if(_if_conditional153=fun_117==((void*)0),        _if_conditional153) {
            # 179 "21obj.c"
            klass2_123=((struct sClass*)come_null_check(map$2charphsClassphp_operator_load_element(info->classes,type_98->mClass->mName), "21obj.c", 179, 1));
            # 192 "21obj.c"
            while(_while_condtional21=map$2charphsClassphp_operator_load_element(info->classes,klass2_123->mParentClassName),            _while_condtional21) {
                # 181 "21obj.c"
                klass2_123=map$2charphsClassphp_operator_load_element(info->classes,klass2_123->mParentClassName);
                # 183 "21obj.c"
                __dec_obj47=method_name_114;
                method_name_114=(char*)come_increment_ref_count(((char*)(right_value152=create_method_name_using_class(klass2_123,(_Bool)0,name_112,info,(_Bool)1))));
                __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 185 "21obj.c"
                fun_117=map$2charphsFunph_at(info->funcs,method_name_114,((void*)0));
                # 190 "21obj.c"
                # 187 "21obj.c"
                if(fun_117) {
                    # 188 "21obj.c"
                    break;
                }
            }
            # 192 "21obj.c"
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_104,name_112,method_name_114);
        }
        else {
            # 195 "21obj.c"
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_104,name_112,method_name_114);
        }
        name_112 = come_decrement_ref_count2(name_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_113,sType_finalize, 0, 0, 0, 0, (void*)0);
        method_name_114 = come_decrement_ref_count2(method_name_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 199 "21obj.c"
    __dec_obj48=come_value2_100->c_value;
    come_value2_100->c_value=(char*)come_increment_ref_count(((char*)(right_value153=xsprintf("_inf_value%d",inf_num_104))));
    __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 200 "21obj.c"
    type3_124=(struct sType*)come_increment_ref_count(((struct sType*)(right_value154=sType_clone(inf_type_96))));
    come_call_finalizer3(right_value154,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 201 "21obj.c"
    type3_124->mPointerNum++;
    # 202 "21obj.c"
    type3_124->mHeap=(_Bool)1;
    # 203 "21obj.c"
    type2_101->mHeap=(_Bool)1;
    # 204 "21obj.c"
    __dec_obj49=come_value2_100->type;
    come_value2_100->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value155=sType_clone(type2_101))));
    come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value155,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 205 "21obj.c"
    __dec_obj50=come_value2_100->c_value;
    come_value2_100->c_value=(char*)come_increment_ref_count(((char*)(right_value156=append_object_to_right_values(come_value2_100->c_value,(struct sType*)come_increment_ref_count(type3_124),info))));
    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 206 "21obj.c"
    come_value2_100->type->mPointerNum++;
    # 207 "21obj.c"
    come_value2_100->var=((void*)0);
    # 209 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value2_100->c_value);
    # 211 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_100));
    # 213 "21obj.c"
    __result104__ = (_Bool)1;
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
    return __result104__;
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
_Bool _if_conditional128;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "tuple2$2sFunpcharphp_finalize"
        # 0 "tuple2$2sFunpcharphp_finalize"
        if(_if_conditional128=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional128) {
            # 0 "tuple2$2sFunpcharphp_finalize"
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional129;
int __result92__;
int __result93__;
memset(&__result_obj__, 0, sizeof(void*));
        # 354 "./neo-c.h"
        # 351 "./neo-c.h"
        if(_if_conditional129=self==((void*)0),        _if_conditional129) {
            # 352 "./neo-c.h"
            __result92__ = 0;
            return __result92__;
        }
        # 354 "./neo-c.h"
        __result93__ = self->len;
        return __result93__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_operator_load_element(struct list$1tuple2$2charphsTypephph* self, int position){
void* __result_obj__;
_Bool _if_conditional130;
struct list_item$1tuple2$2charphsTypephph* it_109;
int i_110;
_Bool _while_condtional17;
_Bool _if_conditional131;
struct tuple2$2charphsTypeph* __result94__;
struct tuple2$2charphsTypeph* default_value_111;
struct tuple2$2charphsTypeph* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_109, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&i_110, 0, sizeof(int));
memset(&default_value_111, 0, sizeof(struct tuple2$2charphsTypeph*));
            # 673 "./neo-c.h"
            # 669 "./neo-c.h"
            if(_if_conditional130=position<0,            _if_conditional130) {
                # 670 "./neo-c.h"
                position+=self->len;
            }
            # 673 "./neo-c.h"
            it_109=self->head;
            # 674 "./neo-c.h"
            i_110=0;
            # 681 "./neo-c.h"
            while(_while_condtional17=it_109!=((void*)0),            _while_condtional17) {
                # 679 "./neo-c.h"
                # 676 "./neo-c.h"
                if(_if_conditional131=position==i_110,                _if_conditional131) {
                    # 677 "./neo-c.h"
                    __result94__ = __result_obj__ = it_109->item;
                    return __result94__;
                }
                # 679 "./neo-c.h"
                it_109=it_109->next;
                # 680 "./neo-c.h"
                i_110++;
            }
            # 683 "./neo-c.h"
            # 684 "./neo-c.h"
            memset(&default_value_111,0,sizeof(struct tuple2$2charphsTypeph*));
            # 685 "./neo-c.h"
            __result95__ = __result_obj__ = default_value_111;
            come_call_finalizer3(default_value_111,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result95__;
            come_call_finalizer3(default_value_111,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional132;
_Bool _if_conditional133;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "tuple2$2charphsTypephp_finalize"
                # 0 "tuple2$2charphsTypephp_finalize"
                if(_if_conditional132=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional132) {
                    # 0 "tuple2$2charphsTypephp_finalize"
                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 2 "tuple2$2charphsTypephp_finalize"
                # 1 "tuple2$2charphsTypephp_finalize"
                if(_if_conditional133=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional133) {
                    # 1 "tuple2$2charphsTypephp_finalize"
                    come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_115;
unsigned int it_116;
_Bool _while_condtional18;
_Bool _if_conditional134;
_Bool _if_conditional135;
struct sFun* __result96__;
_Bool _if_conditional151;
_Bool _if_conditional152;
struct sFun* __result97__;
struct sFun* __result98__;
struct sFun* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_115, 0, sizeof(unsigned int));
memset(&it_116, 0, sizeof(unsigned int));
            # 1201 "./neo-c.h"
            hash_115=string_get_hash_key(((char*)key))%self->size;
            # 1202 "./neo-c.h"
            it_116=hash_115;
            # 1226 "./neo-c.h"
            while(_while_condtional18=(_Bool)1,            _while_condtional18) {
                # 1224 "./neo-c.h"
                # 1205 "./neo-c.h"
                if(_if_conditional134=self->item_existance[it_116],                _if_conditional134) {
                    # 1212 "./neo-c.h"
                    # 1207 "./neo-c.h"
                    if(_if_conditional135=string_equals(self->keys[it_116],key),                    _if_conditional135) {
                        # 1209 "./neo-c.h"
                        __result96__ = __result_obj__ = self->items[it_116];
                        come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result96__;
                    }
                    # 1212 "./neo-c.h"
                    it_116++;
                    # 1220 "./neo-c.h"
                    # 1214 "./neo-c.h"
                    if(_if_conditional151=it_116>=self->size,                    _if_conditional151) {
                        # 1215 "./neo-c.h"
                        it_116=0;
                    }
                    else {
                        # 1220 "./neo-c.h"
                        # 1217 "./neo-c.h"
                        if(_if_conditional152=it_116==hash_115,                        _if_conditional152) {
                            # 1218 "./neo-c.h"
                            __result97__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result97__;
                        }
                    }
                }
                else {
                    # 1222 "./neo-c.h"
                    __result98__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result98__;
                }
            }
            # 1226 "./neo-c.h"
            __result99__ = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result99__;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional136;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool _if_conditional140;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sFun_finalize"
                            # 0 "sFun_finalize"
                            if(_if_conditional136=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional136) {
                                # 0 "sFun_finalize"
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "sFun_finalize"
                            # 1 "sFun_finalize"
                            if(_if_conditional137=self!=((void*)0)&&self->mResultType!=((void*)0),                            _if_conditional137) {
                                # 1 "sFun_finalize"
                                come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 3 "sFun_finalize"
                            # 2 "sFun_finalize"
                            if(_if_conditional138=self!=((void*)0)&&self->mParamTypes!=((void*)0),                            _if_conditional138) {
                                # 2 "sFun_finalize"
                                come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 4 "sFun_finalize"
                            # 3 "sFun_finalize"
                            if(_if_conditional139=self!=((void*)0)&&self->mParamNames!=((void*)0),                            _if_conditional139) {
                                # 3 "sFun_finalize"
                                come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 5 "sFun_finalize"
                            # 4 "sFun_finalize"
                            if(_if_conditional140=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                            _if_conditional140) {
                                # 4 "sFun_finalize"
                                come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 6 "sFun_finalize"
                            # 5 "sFun_finalize"
                            if(_if_conditional141=self!=((void*)0)&&self->mLambdaType!=((void*)0),                            _if_conditional141) {
                                # 5 "sFun_finalize"
                                come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 7 "sFun_finalize"
                            # 6 "sFun_finalize"
                            if(_if_conditional142=self!=((void*)0)&&self->mBlock!=((void*)0),                            _if_conditional142) {
                                # 6 "sFun_finalize"
                                come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 8 "sFun_finalize"
                            # 7 "sFun_finalize"
                            if(_if_conditional145=self!=((void*)0)&&self->mSource!=((void*)0),                            _if_conditional145) {
                                # 7 "sFun_finalize"
                                come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 9 "sFun_finalize"
                            # 8 "sFun_finalize"
                            if(_if_conditional146=self!=((void*)0)&&self->mSourceHead!=((void*)0),                            _if_conditional146) {
                                # 8 "sFun_finalize"
                                come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 10 "sFun_finalize"
                            # 9 "sFun_finalize"
                            if(_if_conditional147=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                            _if_conditional147) {
                                # 9 "sFun_finalize"
                                come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 11 "sFun_finalize"
                            # 10 "sFun_finalize"
                            if(_if_conditional148=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                            _if_conditional148) {
                                # 10 "sFun_finalize"
                                come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 12 "sFun_finalize"
                            # 11 "sFun_finalize"
                            if(_if_conditional149=self!=((void*)0)&&self->mComeHeader!=((void*)0),                            _if_conditional149) {
                                # 11 "sFun_finalize"
                                self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 13 "sFun_finalize"
                            # 12 "sFun_finalize"
                            if(_if_conditional150=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                            _if_conditional150) {
                                # 12 "sFun_finalize"
                                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional143;
_Bool _if_conditional144;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sBlock_finalize"
                                    # 0 "sBlock_finalize"
                                    if(_if_conditional143=self!=((void*)0)&&self->mNodes!=((void*)0),                                    _if_conditional143) {
                                        # 0 "sBlock_finalize"
                                        come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "sBlock_finalize"
                                    # 1 "sBlock_finalize"
                                    if(_if_conditional144=self!=((void*)0)&&self->mVarTable!=((void*)0),                                    _if_conditional144) {
                                        # 1 "sBlock_finalize"
                                        come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                    }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_118;
unsigned int hash_119;
unsigned int it_120;
_Bool _while_condtional19;
_Bool _if_conditional154;
_Bool _if_conditional155;
struct sClass* __result100__;
_Bool _if_conditional161;
_Bool _if_conditional162;
struct sClass* __result101__;
struct sClass* __result102__;
struct sClass* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_118, 0, sizeof(struct sClass*));
memset(&hash_119, 0, sizeof(unsigned int));
memset(&it_120, 0, sizeof(unsigned int));
                # 1519 "./neo-c.h"
                # 1520 "./neo-c.h"
                memset(&default_value_118,0,sizeof(struct sClass*));
                # 1522 "./neo-c.h"
                hash_119=string_get_hash_key(((char*)key))%self->size;
                # 1523 "./neo-c.h"
                it_120=hash_119;
                # 1547 "./neo-c.h"
                while(_while_condtional19=(_Bool)1,                _while_condtional19) {
                    # 1545 "./neo-c.h"
                    # 1526 "./neo-c.h"
                    if(_if_conditional154=self->item_existance[it_120],                    _if_conditional154) {
                        # 1533 "./neo-c.h"
                        # 1528 "./neo-c.h"
                        if(_if_conditional155=string_equals(self->keys[it_120],key),                        _if_conditional155) {
                            # 1530 "./neo-c.h"
                            __result100__ = __result_obj__ = self->items[it_120];
                            come_call_finalizer3(default_value_118,sClass_finalize, 0, 0, 0, 0, (void*)0);
                            return __result100__;
                        }
                        # 1533 "./neo-c.h"
                        it_120++;
                        # 1541 "./neo-c.h"
                        # 1535 "./neo-c.h"
                        if(_if_conditional161=it_120>=self->size,                        _if_conditional161) {
                            # 1536 "./neo-c.h"
                            it_120=0;
                        }
                        else {
                            # 1541 "./neo-c.h"
                            # 1538 "./neo-c.h"
                            if(_if_conditional162=it_120==hash_119,                            _if_conditional162) {
                                # 1539 "./neo-c.h"
                                __result101__ = __result_obj__ = default_value_118;
                                come_call_finalizer3(default_value_118,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                return __result101__;
                            }
                        }
                    }
                    else {
                        # 1543 "./neo-c.h"
                        __result102__ = __result_obj__ = default_value_118;
                        come_call_finalizer3(default_value_118,sClass_finalize, 0, 0, 1, 0, (void*)0);
                        return __result102__;
                    }
                }
                # 1547 "./neo-c.h"
                __result103__ = __result_obj__ = default_value_118;
                come_call_finalizer3(default_value_118,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result103__;
                come_call_finalizer3(default_value_118,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional159;
_Bool _if_conditional160;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sClass_finalize"
                                # 0 "sClass_finalize"
                                if(_if_conditional156=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional156) {
                                    # 0 "sClass_finalize"
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sClass_finalize"
                                # 1 "sClass_finalize"
                                if(_if_conditional157=self!=((void*)0)&&self->mFields!=((void*)0),                                _if_conditional157) {
                                    # 1 "sClass_finalize"
                                    come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sClass_finalize"
                                # 2 "sClass_finalize"
                                if(_if_conditional159=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional159) {
                                    # 2 "sClass_finalize"
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 4 "sClass_finalize"
                                # 3 "sClass_finalize"
                                if(_if_conditional160=self!=((void*)0)&&self->mParentClassName!=((void*)0),                                _if_conditional160) {
                                    # 3 "sClass_finalize"
                                    self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_121;
_Bool _while_condtional20;
struct list_item$1tuple2$2charphsTypephph* prev_it_122;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_121, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_122, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                        # 114 "./neo-c.h"
                                        it_121=self->head;
                                        # 120 "./neo-c.h"
                                        while(_while_condtional20=it_121!=((void*)0),                                        _while_condtional20) {
                                            # 116 "./neo-c.h"
                                            prev_it_122=it_121;
                                            # 117 "./neo-c.h"
                                            it_121=it_121->next;
                                            # 118 "./neo-c.h"
                                            come_call_finalizer3(prev_it_122,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional158;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                if(_if_conditional158=self!=((void*)0)&&self->item!=((void*)0),                                                _if_conditional158) {
                                                    # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                    come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value157;
char* __dec_obj51;
struct sTrueNode* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value157 = (void*)0;
    # 222 "21obj.c"
    self->sline=info->sline;
    # 223 "21obj.c"
    __dec_obj51=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value157=__builtin_string(info->sname))));
    __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 226 "21obj.c"
    __result105__ = __result_obj__ = self;
    come_call_finalizer3(self,sTrueNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result105__;
    come_call_finalizer3(self,sTrueNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sTrueNode_terminated(struct sTrueNode* self){
void* __result_obj__;
_Bool __result106__;
memset(&__result_obj__, 0, sizeof(void*));
    # 228 "21obj.c"
    __result106__ = (_Bool)0;
    return __result106__;
}

char* sTrueNode_kind(struct sTrueNode* self){
void* __result_obj__;
void* right_value158;
char* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value158 = (void*)0;
    # 233 "21obj.c"
    __result107__ = __result_obj__ = ((char*)(right_value158=__builtin_string("sTrueNode")));
    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result107__;
}

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value159;
struct CVALUE* come_value_125;
void* right_value160;
char* __dec_obj52;
void* right_value161;
void* right_value162;
struct sType* __dec_obj53;
_Bool __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value159 = (void*)0;
memset(&come_value_125, 0, sizeof(struct CVALUE*));
right_value160 = (void*)0;
right_value161 = (void*)0;
right_value162 = (void*)0;
    # 238 "21obj.c"
    come_value_125=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value159=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 238, "CVALUE"))));
    come_call_finalizer3(right_value159,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 240 "21obj.c"
    __dec_obj52=come_value_125->c_value;
    come_value_125->c_value=(char*)come_increment_ref_count(((char*)(right_value160=xsprintf("(_Bool)1"))));
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 241 "21obj.c"
    __dec_obj53=come_value_125->type;
    come_value_125->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value162=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value161=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 241, "sType")))),"bool",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value161,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value162,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 242 "21obj.c"
    come_value_125->var=((void*)0);
    # 244 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_125->c_value);
    # 246 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_125));
    # 248 "21obj.c"
    __result108__ = (_Bool)1;
    come_call_finalizer3(come_value_125,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result108__;
    come_call_finalizer3(come_value_125,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value163;
char* __dec_obj54;
struct sFalseNode* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value163 = (void*)0;
    # 256 "21obj.c"
    self->sline=info->sline;
    # 257 "21obj.c"
    __dec_obj54=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value163=__builtin_string(info->sname))));
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 260 "21obj.c"
    __result109__ = __result_obj__ = self;
    come_call_finalizer3(self,sFalseNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result109__;
    come_call_finalizer3(self,sFalseNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sFalseNode_terminated(struct sFalseNode* self){
void* __result_obj__;
_Bool __result110__;
memset(&__result_obj__, 0, sizeof(void*));
    # 262 "21obj.c"
    __result110__ = (_Bool)0;
    return __result110__;
}

char* sFalseNode_kind(struct sFalseNode* self){
void* __result_obj__;
void* right_value164;
char* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value164 = (void*)0;
    # 267 "21obj.c"
    __result111__ = __result_obj__ = ((char*)(right_value164=__builtin_string("sFalseNode")));
    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result111__;
}

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value165;
struct CVALUE* come_value_126;
void* right_value166;
char* __dec_obj55;
void* right_value167;
void* right_value168;
struct sType* __dec_obj56;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
right_value165 = (void*)0;
memset(&come_value_126, 0, sizeof(struct CVALUE*));
right_value166 = (void*)0;
right_value167 = (void*)0;
right_value168 = (void*)0;
    # 272 "21obj.c"
    come_value_126=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value165=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 272, "CVALUE"))));
    come_call_finalizer3(right_value165,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 274 "21obj.c"
    __dec_obj55=come_value_126->c_value;
    come_value_126->c_value=(char*)come_increment_ref_count(((char*)(right_value166=xsprintf("(_Bool)0"))));
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 275 "21obj.c"
    __dec_obj56=come_value_126->type;
    come_value_126->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value168=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value167=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 275, "sType")))),"bool",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj56,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value167,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value168,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 276 "21obj.c"
    come_value_126->var=((void*)0);
    # 278 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_126->c_value);
    # 280 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_126));
    # 282 "21obj.c"
    __result112__ = (_Bool)1;
    come_call_finalizer3(come_value_126,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result112__;
    come_call_finalizer3(come_value_126,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value169;
struct sType* __dec_obj57;
void* right_value170;
char* __dec_obj58;
struct sSizeOfNode* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value169 = (void*)0;
right_value170 = (void*)0;
    # 292 "21obj.c"
    __dec_obj57=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value169=sType_clone(type))));
    come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value169,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 294 "21obj.c"
    self->sline=info->sline;
    # 295 "21obj.c"
    __dec_obj58=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value170=__builtin_string(info->sname))));
    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 298 "21obj.c"
    __result113__ = __result_obj__ = self;
    come_call_finalizer3(self,sSizeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result113__;
    come_call_finalizer3(self,sSizeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sSizeOfNode_terminated(struct sSizeOfNode* self){
void* __result_obj__;
_Bool __result114__;
memset(&__result_obj__, 0, sizeof(void*));
    # 300 "21obj.c"
    __result114__ = (_Bool)0;
    return __result114__;
}

char* sSizeOfNode_kind(struct sSizeOfNode* self){
void* __result_obj__;
void* right_value171;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
right_value171 = (void*)0;
    # 305 "21obj.c"
    __result115__ = __result_obj__ = ((char*)(right_value171=__builtin_string("sSizeOfNode")));
    right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result115__;
}

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_127;
void* right_value172;
struct CVALUE* come_value_128;
void* right_value173;
struct sType* type2_129;
void* right_value174;
char* type_name_130;
void* right_value175;
char* __dec_obj59;
void* right_value176;
void* right_value177;
struct sType* __dec_obj60;
_Bool __result116__;
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
    # 310 "21obj.c"
    type_127=self->type;
    # 312 "21obj.c"
    come_value_128=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value172=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 312, "CVALUE"))));
    come_call_finalizer3(right_value172,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 314 "21obj.c"
    type2_129=(struct sType*)come_increment_ref_count(((struct sType*)(right_value173=solve_generics(type_127,info->generics_type,info))));
    come_call_finalizer3(right_value173,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 316 "21obj.c"
    type_name_130=(char*)come_increment_ref_count(((char*)(right_value174=make_type_name_string(type2_129,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 318 "21obj.c"
    __dec_obj59=come_value_128->c_value;
    come_value_128->c_value=(char*)come_increment_ref_count(((char*)(right_value175=xsprintf("sizeof(%s)",type_name_130))));
    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 319 "21obj.c"
    __dec_obj60=come_value_128->type;
    come_value_128->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value177=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value176=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 319, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj60,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value176,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value177,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 320 "21obj.c"
    come_value_128->type->mUnsigned=(_Bool)1;
    # 321 "21obj.c"
    come_value_128->var=((void*)0);
    # 323 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_128->c_value);
    # 325 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_128));
    # 327 "21obj.c"
    __result116__ = (_Bool)1;
    come_call_finalizer3(come_value_128,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_129,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_130 = come_decrement_ref_count2(type_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result116__;
    come_call_finalizer3(come_value_128,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_129,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_130 = come_decrement_ref_count2(type_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value178;
struct sNode* __dec_obj61;
void* right_value179;
char* __dec_obj62;
struct sSizeOfExpNode* __result117__;
struct sSizeOfExpNode* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
right_value178 = (void*)0;
right_value179 = (void*)0;
    # 337 "21obj.c"
    __dec_obj61=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value178=sNode_clone(exp))));
    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value178) { right_value178 = come_decrement_ref_count2(right_value178, ((struct sNode*)right_value178)->finalize, ((struct sNode*)right_value178)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 339 "21obj.c"
    self->sline=info->sline;
    # 340 "21obj.c"
    __dec_obj62=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value179=__builtin_string(info->sname))));
    __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 342 "21obj.c"
    __result117__ = __result_obj__ = self;
    come_call_finalizer3(self,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result117__;
    # 345 "21obj.c"
    __result118__ = __result_obj__ = self;
    come_call_finalizer3(self,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result118__;
    come_call_finalizer3(self,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sSizeOfExpNode_terminated(struct sSizeOfExpNode* self){
void* __result_obj__;
_Bool __result119__;
memset(&__result_obj__, 0, sizeof(void*));
    # 347 "21obj.c"
    __result119__ = (_Bool)0;
    return __result119__;
}

char* sSizeOfExpNode_kind(struct sSizeOfExpNode* self){
void* __result_obj__;
void* right_value180;
char* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
right_value180 = (void*)0;
    # 352 "21obj.c"
    __result120__ = __result_obj__ = ((char*)(right_value180=__builtin_string("sSizeOfExpNode")));
    right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result120__;
}

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_131;
_Bool _if_conditional170;
_Bool __result121__;
void* right_value181;
struct CVALUE* come_value_132;
void* right_value182;
struct CVALUE* come_value2_133;
void* right_value183;
char* __dec_obj63;
void* right_value184;
void* right_value185;
struct sType* __dec_obj64;
_Bool __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_131, 0, sizeof(struct sNode*));
right_value181 = (void*)0;
memset(&come_value_132, 0, sizeof(struct CVALUE*));
right_value182 = (void*)0;
memset(&come_value2_133, 0, sizeof(struct CVALUE*));
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
    # 357 "21obj.c"
    exp_131=(struct sNode*)come_increment_ref_count(self->exp);
    # 363 "21obj.c"
    # 359 "21obj.c"
    if(_if_conditional170=!node_compile(exp_131,info),    _if_conditional170) {
        # 360 "21obj.c"
        __result121__ = (_Bool)0;
        if(exp_131) { exp_131 = come_decrement_ref_count2(exp_131, ((struct sNode*)exp_131)->finalize, ((struct sNode*)exp_131)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result121__;
    }
    # 363 "21obj.c"
    come_value_132=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value181=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value181,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 364 "21obj.c"
    dec_stack_ptr(1,info);
    # 366 "21obj.c"
    come_value2_133=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value182=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 366, "CVALUE"))));
    come_call_finalizer3(right_value182,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 368 "21obj.c"
    __dec_obj63=come_value2_133->c_value;
    come_value2_133->c_value=(char*)come_increment_ref_count(((char*)(right_value183=xsprintf("sizeof(%s)",come_value_132->c_value))));
    __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 369 "21obj.c"
    __dec_obj64=come_value2_133->type;
    come_value2_133->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value185=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value184=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 369, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value184,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value185,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 370 "21obj.c"
    come_value2_133->type->mUnsigned=(_Bool)1;
    # 371 "21obj.c"
    come_value2_133->var=((void*)0);
    # 373 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value2_133->c_value);
    # 375 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_133));
    # 377 "21obj.c"
    __result122__ = (_Bool)1;
    if(exp_131) { exp_131 = come_decrement_ref_count2(exp_131, ((struct sNode*)exp_131)->finalize, ((struct sNode*)exp_131)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_132,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_133,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result122__;
    if(exp_131) { exp_131 = come_decrement_ref_count2(exp_131, ((struct sNode*)exp_131)->finalize, ((struct sNode*)exp_131)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_132,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_133,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value186;
struct sType* __dec_obj65;
void* right_value187;
char* __dec_obj66;
struct sTypeOfNode* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value186 = (void*)0;
right_value187 = (void*)0;
    # 387 "21obj.c"
    __dec_obj65=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value186=sType_clone(type))));
    come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value186,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 389 "21obj.c"
    self->sline=info->sline;
    # 390 "21obj.c"
    __dec_obj66=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value187=__builtin_string(info->sname))));
    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 393 "21obj.c"
    __result123__ = __result_obj__ = self;
    come_call_finalizer3(self,sTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result123__;
    come_call_finalizer3(self,sTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sTypeOfNode_terminated(struct sTypeOfNode* self){
void* __result_obj__;
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
    # 395 "21obj.c"
    __result124__ = (_Bool)0;
    return __result124__;
}

char* sTypeOfNode_kind(struct sTypeOfNode* self){
void* __result_obj__;
void* right_value188;
char* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value188 = (void*)0;
    # 400 "21obj.c"
    __result125__ = __result_obj__ = ((char*)(right_value188=__builtin_string("sTypeOfNode")));
    right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result125__;
}

_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_134;
void* right_value189;
struct CVALUE* come_value_135;
void* right_value190;
struct sType* type2_136;
void* right_value191;
char* type_name_137;
void* right_value192;
char* __dec_obj67;
void* right_value193;
void* right_value194;
struct sType* __dec_obj68;
_Bool __result126__;
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
    # 405 "21obj.c"
    type_134=self->type;
    # 407 "21obj.c"
    come_value_135=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value189=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 407, "CVALUE"))));
    come_call_finalizer3(right_value189,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 409 "21obj.c"
    type2_136=(struct sType*)come_increment_ref_count(((struct sType*)(right_value190=solve_generics(type_134,info->generics_type,info))));
    come_call_finalizer3(right_value190,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 411 "21obj.c"
    type_name_137=(char*)come_increment_ref_count(((char*)(right_value191=make_type_name_string(type2_136,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 413 "21obj.c"
    __dec_obj67=come_value_135->c_value;
    come_value_135->c_value=(char*)come_increment_ref_count(((char*)(right_value192=xsprintf("\"%s\"",type_name_137))));
    __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 414 "21obj.c"
    __dec_obj68=come_value_135->type;
    come_value_135->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value194=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value193=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 414, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value193,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value194,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 415 "21obj.c"
    come_value_135->var=((void*)0);
    # 417 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_135->c_value);
    # 419 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_135));
    # 421 "21obj.c"
    __result126__ = (_Bool)1;
    come_call_finalizer3(come_value_135,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_136,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_137 = come_decrement_ref_count2(type_name_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result126__;
    come_call_finalizer3(come_value_135,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_136,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_137 = come_decrement_ref_count2(type_name_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value195;
struct sNode* __dec_obj69;
void* right_value196;
char* __dec_obj70;
struct sTypeOfExpNode* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
right_value195 = (void*)0;
right_value196 = (void*)0;
    # 431 "21obj.c"
    __dec_obj69=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value195=sNode_clone(exp))));
    if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value195) { right_value195 = come_decrement_ref_count2(right_value195, ((struct sNode*)right_value195)->finalize, ((struct sNode*)right_value195)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 433 "21obj.c"
    self->sline=info->sline;
    # 434 "21obj.c"
    __dec_obj70=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value196=__builtin_string(info->sname))));
    __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 437 "21obj.c"
    __result127__ = __result_obj__ = self;
    come_call_finalizer3(self,sTypeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result127__;
    come_call_finalizer3(self,sTypeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sTypeOfExpNode_terminated(struct sTypeOfExpNode* self){
void* __result_obj__;
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
    # 439 "21obj.c"
    __result128__ = (_Bool)0;
    return __result128__;
}

char* sTypeOfExpNode_kind(struct sTypeOfExpNode* self){
void* __result_obj__;
void* right_value197;
char* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value197 = (void*)0;
    # 444 "21obj.c"
    __result129__ = __result_obj__ = ((char*)(right_value197=__builtin_string("sTypeOfExpNode")));
    right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result129__;
}

_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_138;
_Bool _if_conditional175;
_Bool __result130__;
void* right_value198;
struct CVALUE* come_value_139;
void* right_value199;
struct sType* type_140;
void* right_value200;
struct sType* type2_141;
void* right_value201;
char* type_name_142;
void* right_value202;
char* __dec_obj71;
void* right_value203;
void* right_value204;
struct sType* __dec_obj72;
_Bool __result131__;
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
    # 449 "21obj.c"
    exp_138=(struct sNode*)come_increment_ref_count(self->exp);
    # 455 "21obj.c"
    # 451 "21obj.c"
    if(_if_conditional175=!node_compile(exp_138,info),    _if_conditional175) {
        # 452 "21obj.c"
        __result130__ = (_Bool)0;
        if(exp_138) { exp_138 = come_decrement_ref_count2(exp_138, ((struct sNode*)exp_138)->finalize, ((struct sNode*)exp_138)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result130__;
    }
    # 455 "21obj.c"
    come_value_139=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value198=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value198,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 456 "21obj.c"
    dec_stack_ptr(1,info);
    # 458 "21obj.c"
    type_140=(struct sType*)come_increment_ref_count(((struct sType*)(right_value199=sType_clone(come_value_139->type))));
    come_call_finalizer3(right_value199,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 460 "21obj.c"
    type2_141=(struct sType*)come_increment_ref_count(((struct sType*)(right_value200=solve_generics(type_140,info->generics_type,info))));
    come_call_finalizer3(right_value200,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 462 "21obj.c"
    type_name_142=(char*)come_increment_ref_count(((char*)(right_value201=make_type_name_string(type2_141,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 464 "21obj.c"
    __dec_obj71=come_value_139->c_value;
    come_value_139->c_value=(char*)come_increment_ref_count(((char*)(right_value202=xsprintf("\"%s\"",type_name_142))));
    __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 465 "21obj.c"
    __dec_obj72=come_value_139->type;
    come_value_139->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value204=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value203=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 465, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value203,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value204,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 466 "21obj.c"
    come_value_139->var=((void*)0);
    # 468 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_139->c_value);
    # 470 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_139));
    # 472 "21obj.c"
    __result131__ = (_Bool)1;
    if(exp_138) { exp_138 = come_decrement_ref_count2(exp_138, ((struct sNode*)exp_138)->finalize, ((struct sNode*)exp_138)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_139,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_140,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_141,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_142 = come_decrement_ref_count2(type_name_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result131__;
    if(exp_138) { exp_138 = come_decrement_ref_count2(exp_138, ((struct sNode*)exp_138)->finalize, ((struct sNode*)exp_138)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_139,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_140,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_141,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_142 = come_decrement_ref_count2(type_name_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sDynamicTypeOfNode* sDynamicTypeOfNode_initialize(struct sDynamicTypeOfNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value205;
struct sNode* __dec_obj73;
void* right_value206;
char* __dec_obj74;
struct sDynamicTypeOfNode* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
right_value205 = (void*)0;
right_value206 = (void*)0;
    # 482 "21obj.c"
    __dec_obj73=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value205=sNode_clone(exp))));
    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value205) { right_value205 = come_decrement_ref_count2(right_value205, ((struct sNode*)right_value205)->finalize, ((struct sNode*)right_value205)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 484 "21obj.c"
    self->sline=info->sline;
    # 485 "21obj.c"
    __dec_obj74=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value206=__builtin_string(info->sname))));
    __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 488 "21obj.c"
    __result132__ = __result_obj__ = self;
    come_call_finalizer3(self,sDynamicTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result132__;
    come_call_finalizer3(self,sDynamicTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sDynamicTypeOfNode_terminated(struct sDynamicTypeOfNode* self){
void* __result_obj__;
_Bool __result133__;
memset(&__result_obj__, 0, sizeof(void*));
    # 490 "21obj.c"
    __result133__ = (_Bool)0;
    return __result133__;
}

char* sDynamicTypeOfNode_kind(struct sDynamicTypeOfNode* self){
void* __result_obj__;
void* right_value207;
char* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
right_value207 = (void*)0;
    # 495 "21obj.c"
    __result134__ = __result_obj__ = ((char*)(right_value207=__builtin_string("sDynamicTypeOfNode")));
    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result134__;
}

_Bool sDynamicTypeOfNode_compile(struct sDynamicTypeOfNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_143;
_Bool _if_conditional178;
_Bool __result135__;
void* right_value208;
struct CVALUE* come_value_144;
_Bool _if_conditional179;
void* right_value209;
struct sType* type_145;
void* right_value210;
struct sType* type2_146;
void* right_value211;
char* type_name_147;
void* right_value212;
char* __dec_obj75;
void* right_value213;
void* right_value214;
struct sType* __dec_obj76;
_Bool __result136__;
void* right_value215;
struct CVALUE* come_value2_148;
void* right_value216;
char* __dec_obj77;
void* right_value217;
void* right_value218;
struct sType* __dec_obj78;
_Bool __result137__;
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
    # 500 "21obj.c"
    exp_143=(struct sNode*)come_increment_ref_count(self->exp);
    # 506 "21obj.c"
    # 502 "21obj.c"
    if(_if_conditional178=!node_compile(exp_143,info),    _if_conditional178) {
        # 503 "21obj.c"
        __result135__ = (_Bool)0;
        if(exp_143) { exp_143 = come_decrement_ref_count2(exp_143, ((struct sNode*)exp_143)->finalize, ((struct sNode*)exp_143)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result135__;
    }
    # 506 "21obj.c"
    come_value_144=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value208=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value208,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 507 "21obj.c"
    dec_stack_ptr(1,info);
    # 538 "21obj.c"
    # 509 "21obj.c"
    if(_if_conditional179=!come_value_144->type->mHeap,    _if_conditional179) {
        # 510 "21obj.c"
        type_145=(struct sType*)come_increment_ref_count(((struct sType*)(right_value209=sType_clone(come_value_144->type))));
        come_call_finalizer3(right_value209,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 512 "21obj.c"
        type2_146=(struct sType*)come_increment_ref_count(((struct sType*)(right_value210=solve_generics(type_145,info->generics_type,info))));
        come_call_finalizer3(right_value210,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 514 "21obj.c"
        type_name_147=(char*)come_increment_ref_count(((char*)(right_value211=make_type_name_string(type2_146,(_Bool)0,(_Bool)0,(_Bool)0,info))));
        right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 516 "21obj.c"
        __dec_obj75=come_value_144->c_value;
        come_value_144->c_value=(char*)come_increment_ref_count(((char*)(right_value212=xsprintf("\"%s\"",type_name_147))));
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 517 "21obj.c"
        __dec_obj76=come_value_144->type;
        come_value_144->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value214=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value213=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 517, "sType")))),"char*",(_Bool)0,info))));
        come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value213,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value214,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 518 "21obj.c"
        come_value_144->var=((void*)0);
        # 520 "21obj.c"
        add_come_last_code(info,"%s;\n",come_value_144->c_value);
        # 522 "21obj.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_144));
        # 524 "21obj.c"
        __result136__ = (_Bool)1;
        come_call_finalizer3(type_145,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_146,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_name_147 = come_decrement_ref_count2(type_name_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(exp_143) { exp_143 = come_decrement_ref_count2(exp_143, ((struct sNode*)exp_143)->finalize, ((struct sNode*)exp_143)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_144,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result136__;
        come_call_finalizer3(type_145,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_146,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_name_147 = come_decrement_ref_count2(type_name_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 527 "21obj.c"
        come_value2_148=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value215=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 527, "CVALUE"))));
        come_call_finalizer3(right_value215,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 529 "21obj.c"
        __dec_obj77=come_value2_148->c_value;
        come_value2_148->c_value=(char*)come_increment_ref_count(((char*)(right_value216=xsprintf("come_dynamic_typeof(%s)",come_value_144->c_value))));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 530 "21obj.c"
        __dec_obj78=come_value2_148->type;
        come_value2_148->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value218=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value217=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 530, "sType")))),"char*",(_Bool)0,info))));
        come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value217,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value218,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 531 "21obj.c"
        come_value2_148->var=((void*)0);
        # 533 "21obj.c"
        add_come_last_code(info,"%s;\n",come_value2_148->c_value);
        # 535 "21obj.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_148));
        come_call_finalizer3(come_value2_148,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 538 "21obj.c"
    __result137__ = (_Bool)1;
    if(exp_143) { exp_143 = come_decrement_ref_count2(exp_143, ((struct sNode*)exp_143)->finalize, ((struct sNode*)exp_143)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_144,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result137__;
    if(exp_143) { exp_143 = come_decrement_ref_count2(exp_143, ((struct sNode*)exp_143)->finalize, ((struct sNode*)exp_143)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_144,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static void sDynamicTypeOfNode_finalize(struct sDynamicTypeOfNode* self){
void* __result_obj__;
_Bool _if_conditional176;
_Bool _if_conditional177;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sDynamicTypeOfNode_finalize"
        # 0 "sDynamicTypeOfNode_finalize"
        if(_if_conditional176=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional176) {
            # 0 "sDynamicTypeOfNode_finalize"
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "sDynamicTypeOfNode_finalize"
        # 1 "sDynamicTypeOfNode_finalize"
        if(_if_conditional177=self!=((void*)0)&&self->exp!=((void*)0),        _if_conditional177) {
            # 1 "sDynamicTypeOfNode_finalize"
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
}

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value219;
struct sType* __dec_obj79;
void* right_value220;
char* __dec_obj80;
struct sAlignOfNode* __result138__;
struct sAlignOfNode* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
right_value219 = (void*)0;
right_value220 = (void*)0;
    # 548 "21obj.c"
    __dec_obj79=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value219=sType_clone(type))));
    come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value219,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 550 "21obj.c"
    self->sline=info->sline;
    # 551 "21obj.c"
    __dec_obj80=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value220=__builtin_string(info->sname))));
    __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 553 "21obj.c"
    __result138__ = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result138__;
    # 556 "21obj.c"
    __result139__ = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result139__;
    come_call_finalizer3(self,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sAlignOfNode_terminated(struct sAlignOfNode* self){
void* __result_obj__;
_Bool __result140__;
memset(&__result_obj__, 0, sizeof(void*));
    # 558 "21obj.c"
    __result140__ = (_Bool)0;
    return __result140__;
}

char* sAlignOfNode_kind(struct sAlignOfNode* self){
void* __result_obj__;
void* right_value221;
char* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value221 = (void*)0;
    # 563 "21obj.c"
    __result141__ = __result_obj__ = ((char*)(right_value221=__builtin_string("sAlignOfNode")));
    right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result141__;
}

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_149;
void* right_value222;
struct CVALUE* come_value_150;
void* right_value223;
struct sType* type2_151;
void* right_value224;
char* type_name_152;
void* right_value225;
char* __dec_obj81;
void* right_value226;
void* right_value227;
struct sType* __dec_obj82;
_Bool __result142__;
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
    # 568 "21obj.c"
    type_149=self->type;
    # 570 "21obj.c"
    come_value_150=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value222=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 570, "CVALUE"))));
    come_call_finalizer3(right_value222,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 572 "21obj.c"
    type2_151=(struct sType*)come_increment_ref_count(((struct sType*)(right_value223=solve_generics(type_149,info->generics_type,info))));
    come_call_finalizer3(right_value223,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 574 "21obj.c"
    type_name_152=(char*)come_increment_ref_count(((char*)(right_value224=make_type_name_string(type2_151,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 576 "21obj.c"
    __dec_obj81=come_value_150->c_value;
    come_value_150->c_value=(char*)come_increment_ref_count(((char*)(right_value225=xsprintf("_Alignof(%s)",type_name_152))));
    __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 577 "21obj.c"
    __dec_obj82=come_value_150->type;
    come_value_150->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value227=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value226=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 577, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj82,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value226,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value227,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 578 "21obj.c"
    come_value_150->type->mUnsigned=(_Bool)1;
    # 579 "21obj.c"
    come_value_150->var=((void*)0);
    # 581 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_150->c_value);
    # 583 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_150));
    # 585 "21obj.c"
    __result142__ = (_Bool)1;
    come_call_finalizer3(come_value_150,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_151,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_152 = come_decrement_ref_count2(type_name_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result142__;
    come_call_finalizer3(come_value_150,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_151,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_152 = come_decrement_ref_count2(type_name_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value228;
struct sNode* __dec_obj83;
void* right_value229;
char* __dec_obj84;
struct sAlignOfExpNode* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
right_value228 = (void*)0;
right_value229 = (void*)0;
    # 595 "21obj.c"
    __dec_obj83=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value228=sNode_clone(exp))));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count2(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value228) { right_value228 = come_decrement_ref_count2(right_value228, ((struct sNode*)right_value228)->finalize, ((struct sNode*)right_value228)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 597 "21obj.c"
    self->sline=info->sline;
    # 598 "21obj.c"
    __dec_obj84=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value229=__builtin_string(info->sname))));
    __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 601 "21obj.c"
    __result143__ = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result143__;
    come_call_finalizer3(self,sAlignOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sAlignOfExpNode_terminated(struct sAlignOfExpNode* self){
void* __result_obj__;
_Bool __result144__;
memset(&__result_obj__, 0, sizeof(void*));
    # 603 "21obj.c"
    __result144__ = (_Bool)0;
    return __result144__;
}

char* sAlignOfExpNode_kind(struct sAlignOfExpNode* self){
void* __result_obj__;
void* right_value230;
char* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
right_value230 = (void*)0;
    # 608 "21obj.c"
    __result145__ = __result_obj__ = ((char*)(right_value230=__builtin_string("sAlignOfExpNode")));
    right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result145__;
}

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_153;
_Bool _if_conditional184;
_Bool __result146__;
void* right_value231;
struct CVALUE* come_value_154;
void* right_value232;
struct CVALUE* come_value2_155;
void* right_value233;
char* __dec_obj85;
void* right_value234;
void* right_value235;
struct sType* __dec_obj86;
_Bool __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_153, 0, sizeof(struct sNode*));
right_value231 = (void*)0;
memset(&come_value_154, 0, sizeof(struct CVALUE*));
right_value232 = (void*)0;
memset(&come_value2_155, 0, sizeof(struct CVALUE*));
right_value233 = (void*)0;
right_value234 = (void*)0;
right_value235 = (void*)0;
    # 613 "21obj.c"
    exp_153=(struct sNode*)come_increment_ref_count(self->exp);
    # 619 "21obj.c"
    # 615 "21obj.c"
    if(_if_conditional184=!node_compile(exp_153,info),    _if_conditional184) {
        # 616 "21obj.c"
        __result146__ = (_Bool)0;
        if(exp_153) { exp_153 = come_decrement_ref_count2(exp_153, ((struct sNode*)exp_153)->finalize, ((struct sNode*)exp_153)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result146__;
    }
    # 619 "21obj.c"
    come_value_154=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value231=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value231,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 620 "21obj.c"
    dec_stack_ptr(1,info);
    # 622 "21obj.c"
    come_value2_155=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value232=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 622, "CVALUE"))));
    come_call_finalizer3(right_value232,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 624 "21obj.c"
    __dec_obj85=come_value2_155->c_value;
    come_value2_155->c_value=(char*)come_increment_ref_count(((char*)(right_value233=xsprintf("_AlignOf(%s)",come_value_154->c_value))));
    __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 625 "21obj.c"
    __dec_obj86=come_value2_155->type;
    come_value2_155->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value235=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value234=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 625, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value234,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value235,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 626 "21obj.c"
    come_value2_155->type->mUnsigned=(_Bool)1;
    # 627 "21obj.c"
    come_value2_155->var=((void*)0);
    # 629 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value2_155->c_value);
    # 631 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_155));
    # 633 "21obj.c"
    __result147__ = (_Bool)1;
    if(exp_153) { exp_153 = come_decrement_ref_count2(exp_153, ((struct sNode*)exp_153)->finalize, ((struct sNode*)exp_153)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_154,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_155,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result147__;
    if(exp_153) { exp_153 = come_decrement_ref_count2(exp_153, ((struct sNode*)exp_153)->finalize, ((struct sNode*)exp_153)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_154,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_155,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value236;
struct sType* __dec_obj87;
void* right_value237;
char* __dec_obj88;
struct sAlignOfNode2* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
right_value236 = (void*)0;
right_value237 = (void*)0;
    # 643 "21obj.c"
    __dec_obj87=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value236=sType_clone(type))));
    come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value236,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 645 "21obj.c"
    self->sline=info->sline;
    # 646 "21obj.c"
    __dec_obj88=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value237=__builtin_string(info->sname))));
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 649 "21obj.c"
    __result148__ = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfNode2_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result148__;
    come_call_finalizer3(self,sAlignOfNode2_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sAlignOfNode2_terminated(struct sAlignOfNode2* self){
void* __result_obj__;
_Bool __result149__;
memset(&__result_obj__, 0, sizeof(void*));
    # 651 "21obj.c"
    __result149__ = (_Bool)0;
    return __result149__;
}

char* sAlignOfNode2_kind(struct sAlignOfNode2* self){
void* __result_obj__;
void* right_value238;
char* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
right_value238 = (void*)0;
    # 656 "21obj.c"
    __result150__ = __result_obj__ = ((char*)(right_value238=__builtin_string("sAlignOfNode2")));
    right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result150__;
}

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_156;
void* right_value239;
struct CVALUE* come_value_157;
void* right_value240;
struct sType* type2_158;
void* right_value241;
char* type_name_159;
void* right_value242;
char* __dec_obj89;
void* right_value243;
void* right_value244;
struct sType* __dec_obj90;
_Bool __result151__;
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
    # 661 "21obj.c"
    type_156=self->type;
    # 663 "21obj.c"
    come_value_157=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value239=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 663, "CVALUE"))));
    come_call_finalizer3(right_value239,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 665 "21obj.c"
    type2_158=(struct sType*)come_increment_ref_count(((struct sType*)(right_value240=solve_generics(type_156,info->generics_type,info))));
    come_call_finalizer3(right_value240,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 667 "21obj.c"
    type_name_159=(char*)come_increment_ref_count(((char*)(right_value241=make_type_name_string(type2_158,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 669 "21obj.c"
    __dec_obj89=come_value_157->c_value;
    come_value_157->c_value=(char*)come_increment_ref_count(((char*)(right_value242=xsprintf("__alignof__(%s)",type_name_159))));
    __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 670 "21obj.c"
    __dec_obj90=come_value_157->type;
    come_value_157->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value244=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value243=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 670, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value243,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value244,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 671 "21obj.c"
    come_value_157->type->mUnsigned=(_Bool)1;
    # 672 "21obj.c"
    come_value_157->var=((void*)0);
    # 674 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_157->c_value);
    # 676 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_157));
    # 678 "21obj.c"
    __result151__ = (_Bool)1;
    come_call_finalizer3(come_value_157,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_158,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_159 = come_decrement_ref_count2(type_name_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result151__;
    come_call_finalizer3(come_value_157,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_158,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_159 = come_decrement_ref_count2(type_name_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value245;
struct sNode* __dec_obj91;
void* right_value246;
char* __dec_obj92;
struct sAlignOfExpNode2* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
right_value245 = (void*)0;
right_value246 = (void*)0;
    # 688 "21obj.c"
    __dec_obj91=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value245=sNode_clone(exp))));
    if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count2(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value245) { right_value245 = come_decrement_ref_count2(right_value245, ((struct sNode*)right_value245)->finalize, ((struct sNode*)right_value245)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 690 "21obj.c"
    self->sline=info->sline;
    # 691 "21obj.c"
    __dec_obj92=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value246=__builtin_string(info->sname))));
    __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 694 "21obj.c"
    __result152__ = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfExpNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result152__;
    come_call_finalizer3(self,sAlignOfExpNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sAlignOfExpNode2_terminated(struct sAlignOfExpNode2* self){
void* __result_obj__;
_Bool __result153__;
memset(&__result_obj__, 0, sizeof(void*));
    # 696 "21obj.c"
    __result153__ = (_Bool)0;
    return __result153__;
}

char* sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self){
void* __result_obj__;
void* right_value247;
char* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
right_value247 = (void*)0;
    # 701 "21obj.c"
    __result154__ = __result_obj__ = ((char*)(right_value247=__builtin_string("sAlignOfExpNode2")));
    right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result154__;
}

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_160;
_Bool _if_conditional189;
_Bool __result155__;
void* right_value248;
struct CVALUE* come_value_161;
void* right_value249;
struct CVALUE* come_value2_162;
void* right_value250;
char* __dec_obj93;
void* right_value251;
void* right_value252;
struct sType* __dec_obj94;
_Bool __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_160, 0, sizeof(struct sNode*));
right_value248 = (void*)0;
memset(&come_value_161, 0, sizeof(struct CVALUE*));
right_value249 = (void*)0;
memset(&come_value2_162, 0, sizeof(struct CVALUE*));
right_value250 = (void*)0;
right_value251 = (void*)0;
right_value252 = (void*)0;
    # 706 "21obj.c"
    exp_160=(struct sNode*)come_increment_ref_count(self->exp);
    # 712 "21obj.c"
    # 708 "21obj.c"
    if(_if_conditional189=!node_compile(exp_160,info),    _if_conditional189) {
        # 709 "21obj.c"
        __result155__ = (_Bool)0;
        if(exp_160) { exp_160 = come_decrement_ref_count2(exp_160, ((struct sNode*)exp_160)->finalize, ((struct sNode*)exp_160)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result155__;
    }
    # 712 "21obj.c"
    come_value_161=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value248=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value248,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 713 "21obj.c"
    dec_stack_ptr(1,info);
    # 715 "21obj.c"
    come_value2_162=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value249=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 715, "CVALUE"))));
    come_call_finalizer3(right_value249,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 717 "21obj.c"
    __dec_obj93=come_value2_162->c_value;
    come_value2_162->c_value=(char*)come_increment_ref_count(((char*)(right_value250=xsprintf("__alignof__(%s)",come_value_161->c_value))));
    __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 718 "21obj.c"
    __dec_obj94=come_value2_162->type;
    come_value2_162->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value252=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value251=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 718, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value251,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value252,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 719 "21obj.c"
    come_value2_162->type->mUnsigned=(_Bool)1;
    # 720 "21obj.c"
    come_value2_162->var=((void*)0);
    # 722 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value2_162->c_value);
    # 724 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_162));
    # 726 "21obj.c"
    __result156__ = (_Bool)1;
    if(exp_160) { exp_160 = come_decrement_ref_count2(exp_160, ((struct sNode*)exp_160)->finalize, ((struct sNode*)exp_160)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_161,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_162,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result156__;
    if(exp_160) { exp_160 = come_decrement_ref_count2(exp_160, ((struct sNode*)exp_160)->finalize, ((struct sNode*)exp_160)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_161,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_162,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value253;
struct sType* __dec_obj95;
void* right_value254;
char* __dec_obj96;
struct sAlignAsNode* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
right_value253 = (void*)0;
right_value254 = (void*)0;
    # 736 "21obj.c"
    __dec_obj95=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value253=sType_clone(type))));
    come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value253,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 738 "21obj.c"
    self->sline=info->sline;
    # 739 "21obj.c"
    __dec_obj96=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value254=__builtin_string(info->sname))));
    __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 742 "21obj.c"
    __result157__ = __result_obj__ = self;
    come_call_finalizer3(self,sAlignAsNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result157__;
    come_call_finalizer3(self,sAlignAsNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sAlignAsNode_terminated(struct sAlignAsNode* self){
void* __result_obj__;
_Bool __result158__;
memset(&__result_obj__, 0, sizeof(void*));
    # 744 "21obj.c"
    __result158__ = (_Bool)0;
    return __result158__;
}

char* sAlignAsNode_kind(struct sAlignAsNode* self){
void* __result_obj__;
void* right_value255;
char* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
right_value255 = (void*)0;
    # 749 "21obj.c"
    __result159__ = __result_obj__ = ((char*)(right_value255=__builtin_string("sAlignAsNode")));
    right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result159__;
}

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_163;
void* right_value256;
struct CVALUE* come_value_164;
void* right_value257;
struct sType* type2_165;
void* right_value258;
char* type_name_166;
void* right_value259;
char* __dec_obj97;
void* right_value260;
void* right_value261;
struct sType* __dec_obj98;
_Bool __result160__;
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
    # 754 "21obj.c"
    type_163=self->type;
    # 756 "21obj.c"
    come_value_164=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value256=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 756, "CVALUE"))));
    come_call_finalizer3(right_value256,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 758 "21obj.c"
    type2_165=(struct sType*)come_increment_ref_count(((struct sType*)(right_value257=solve_generics(type_163,info->generics_type,info))));
    come_call_finalizer3(right_value257,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 760 "21obj.c"
    type_name_166=(char*)come_increment_ref_count(((char*)(right_value258=make_type_name_string(type2_165,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 762 "21obj.c"
    __dec_obj97=come_value_164->c_value;
    come_value_164->c_value=(char*)come_increment_ref_count(((char*)(right_value259=xsprintf("_Alignas(%s)",type_name_166))));
    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 763 "21obj.c"
    __dec_obj98=come_value_164->type;
    come_value_164->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value261=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value260=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 763, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj98,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value260,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value261,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 764 "21obj.c"
    come_value_164->type->mUnsigned=(_Bool)1;
    # 765 "21obj.c"
    come_value_164->var=((void*)0);
    # 767 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value_164->c_value);
    # 769 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_164));
    # 771 "21obj.c"
    __result160__ = (_Bool)1;
    come_call_finalizer3(come_value_164,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_165,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_166 = come_decrement_ref_count2(type_name_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result160__;
    come_call_finalizer3(come_value_164,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_165,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_166 = come_decrement_ref_count2(type_name_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value262;
struct sNode* __dec_obj99;
void* right_value263;
char* __dec_obj100;
struct sAlignAsExpNode* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
right_value262 = (void*)0;
right_value263 = (void*)0;
    # 781 "21obj.c"
    __dec_obj99=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value262=sNode_clone(exp))));
    if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count2(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value262) { right_value262 = come_decrement_ref_count2(right_value262, ((struct sNode*)right_value262)->finalize, ((struct sNode*)right_value262)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 783 "21obj.c"
    self->sline=info->sline;
    # 784 "21obj.c"
    __dec_obj100=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value263=__builtin_string(info->sname))));
    __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 787 "21obj.c"
    __result161__ = __result_obj__ = self;
    come_call_finalizer3(self,sAlignAsExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result161__;
    come_call_finalizer3(self,sAlignAsExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sAlignAsExpNode_terminated(struct sAlignAsExpNode* self){
void* __result_obj__;
_Bool __result162__;
memset(&__result_obj__, 0, sizeof(void*));
    # 789 "21obj.c"
    __result162__ = (_Bool)0;
    return __result162__;
}

char* sAlignAsExpNode_kind(struct sAlignAsExpNode* self){
void* __result_obj__;
void* right_value264;
char* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
right_value264 = (void*)0;
    # 794 "21obj.c"
    __result163__ = __result_obj__ = ((char*)(right_value264=__builtin_string("sAlignAsExpNode")));
    right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result163__;
}

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_167;
_Bool _if_conditional194;
_Bool __result164__;
void* right_value265;
struct CVALUE* come_value_168;
void* right_value266;
struct CVALUE* come_value2_169;
void* right_value267;
char* __dec_obj101;
void* right_value268;
void* right_value269;
struct sType* __dec_obj102;
_Bool __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_167, 0, sizeof(struct sNode*));
right_value265 = (void*)0;
memset(&come_value_168, 0, sizeof(struct CVALUE*));
right_value266 = (void*)0;
memset(&come_value2_169, 0, sizeof(struct CVALUE*));
right_value267 = (void*)0;
right_value268 = (void*)0;
right_value269 = (void*)0;
    # 799 "21obj.c"
    exp_167=(struct sNode*)come_increment_ref_count(self->exp);
    # 805 "21obj.c"
    # 801 "21obj.c"
    if(_if_conditional194=!node_compile(exp_167,info),    _if_conditional194) {
        # 802 "21obj.c"
        __result164__ = (_Bool)0;
        if(exp_167) { exp_167 = come_decrement_ref_count2(exp_167, ((struct sNode*)exp_167)->finalize, ((struct sNode*)exp_167)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result164__;
    }
    # 805 "21obj.c"
    come_value_168=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value265=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value265,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 806 "21obj.c"
    dec_stack_ptr(1,info);
    # 808 "21obj.c"
    come_value2_169=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value266=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 808, "CVALUE"))));
    come_call_finalizer3(right_value266,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 810 "21obj.c"
    __dec_obj101=come_value2_169->c_value;
    come_value2_169->c_value=(char*)come_increment_ref_count(((char*)(right_value267=xsprintf("_Alignas(%s)",come_value_168->c_value))));
    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 811 "21obj.c"
    __dec_obj102=come_value2_169->type;
    come_value2_169->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value269=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value268=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 811, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj102,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value268,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value269,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 812 "21obj.c"
    come_value2_169->type->mUnsigned=(_Bool)1;
    # 813 "21obj.c"
    come_value2_169->var=((void*)0);
    # 815 "21obj.c"
    add_come_last_code(info,"%s;\n",come_value2_169->c_value);
    # 817 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_169));
    # 819 "21obj.c"
    __result165__ = (_Bool)1;
    if(exp_167) { exp_167 = come_decrement_ref_count2(exp_167, ((struct sNode*)exp_167)->finalize, ((struct sNode*)exp_167)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_168,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_169,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result165__;
    if(exp_167) { exp_167 = come_decrement_ref_count2(exp_167, ((struct sNode*)exp_167)->finalize, ((struct sNode*)exp_167)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_168,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_169,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value270;
struct sNode* __dec_obj103;
void* right_value271;
char* __dec_obj104;
struct sDeleteNode* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
right_value270 = (void*)0;
right_value271 = (void*)0;
    # 829 "21obj.c"
    __dec_obj103=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value270=sNode_clone(node))));
    if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count2(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value270) { right_value270 = come_decrement_ref_count2(right_value270, ((struct sNode*)right_value270)->finalize, ((struct sNode*)right_value270)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 831 "21obj.c"
    self->sline=info->sline;
    # 832 "21obj.c"
    __dec_obj104=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value271=__builtin_string(info->sname))));
    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 835 "21obj.c"
    __result166__ = __result_obj__ = self;
    come_call_finalizer3(self,sDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result166__;
    come_call_finalizer3(self,sDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sDeleteNode_terminated(struct sDeleteNode* self){
void* __result_obj__;
_Bool __result167__;
memset(&__result_obj__, 0, sizeof(void*));
    # 837 "21obj.c"
    __result167__ = (_Bool)0;
    return __result167__;
}

char* sDeleteNode_kind(struct sDeleteNode* self){
void* __result_obj__;
void* right_value272;
char* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
right_value272 = (void*)0;
    # 842 "21obj.c"
    __result168__ = __result_obj__ = ((char*)(right_value272=__builtin_string("sDeleteNode")));
    right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result168__;
}

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_170;
_Bool _if_conditional197;
_Bool __result169__;
void* right_value273;
struct CVALUE* come_value_171;
_Bool __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_170, 0, sizeof(struct sNode*));
right_value273 = (void*)0;
memset(&come_value_171, 0, sizeof(struct CVALUE*));
    # 847 "21obj.c"
    node_170=self->node;
    # 853 "21obj.c"
    # 849 "21obj.c"
    if(_if_conditional197=!node_compile(node_170,info),    _if_conditional197) {
        # 850 "21obj.c"
        __result169__ = (_Bool)0;
        return __result169__;
    }
    # 853 "21obj.c"
    come_value_171=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value273=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value273,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 854 "21obj.c"
    dec_stack_ptr(1,info);
    # 856 "21obj.c"
    free_object(come_value_171->type,come_value_171->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
    # 858 "21obj.c"
    __result170__ = (_Bool)1;
    come_call_finalizer3(come_value_171,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result170__;
    come_call_finalizer3(come_value_171,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sForceDeleteNode* sForceDeleteNode_initialize(struct sForceDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value274;
struct sNode* __dec_obj105;
void* right_value275;
char* __dec_obj106;
struct sForceDeleteNode* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
right_value274 = (void*)0;
right_value275 = (void*)0;
    # 868 "21obj.c"
    __dec_obj105=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value274=sNode_clone(node))));
    if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count2(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value274) { right_value274 = come_decrement_ref_count2(right_value274, ((struct sNode*)right_value274)->finalize, ((struct sNode*)right_value274)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 870 "21obj.c"
    self->sline=info->sline;
    # 871 "21obj.c"
    __dec_obj106=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value275=__builtin_string(info->sname))));
    __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 874 "21obj.c"
    __result171__ = __result_obj__ = self;
    come_call_finalizer3(self,sForceDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result171__;
    come_call_finalizer3(self,sForceDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sForceDeleteNode_terminated(struct sForceDeleteNode* self){
void* __result_obj__;
_Bool __result172__;
memset(&__result_obj__, 0, sizeof(void*));
    # 876 "21obj.c"
    __result172__ = (_Bool)0;
    return __result172__;
}

char* sForceDeleteNode_kind(struct sForceDeleteNode* self){
void* __result_obj__;
void* right_value276;
char* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
right_value276 = (void*)0;
    # 881 "21obj.c"
    __result173__ = __result_obj__ = ((char*)(right_value276=__builtin_string("sForceDeleteNode")));
    right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result173__;
}

_Bool sForceDeleteNode_compile(struct sForceDeleteNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_172;
_Bool _if_conditional200;
_Bool __result174__;
void* right_value277;
struct CVALUE* come_value_173;
_Bool __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_172, 0, sizeof(struct sNode*));
right_value277 = (void*)0;
memset(&come_value_173, 0, sizeof(struct CVALUE*));
    # 886 "21obj.c"
    node_172=self->node;
    # 892 "21obj.c"
    # 888 "21obj.c"
    if(_if_conditional200=!node_compile(node_172,info),    _if_conditional200) {
        # 889 "21obj.c"
        __result174__ = (_Bool)0;
        return __result174__;
    }
    # 892 "21obj.c"
    come_value_173=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value277=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value277,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 893 "21obj.c"
    dec_stack_ptr(1,info);
    # 895 "21obj.c"
    free_object(come_value_173->type,come_value_173->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)1);
    # 897 "21obj.c"
    __result175__ = (_Bool)1;
    come_call_finalizer3(come_value_173,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result175__;
    come_call_finalizer3(come_value_173,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sDelegateNode* sDelegateNode_initialize(struct sDelegateNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value278;
struct sNode* __dec_obj107;
void* right_value279;
char* __dec_obj108;
struct sDelegateNode* __result176__;
struct sDelegateNode* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
right_value278 = (void*)0;
right_value279 = (void*)0;
    # 907 "21obj.c"
    __dec_obj107=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value278=sNode_clone(node))));
    if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count2(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value278) { right_value278 = come_decrement_ref_count2(right_value278, ((struct sNode*)right_value278)->finalize, ((struct sNode*)right_value278)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 909 "21obj.c"
    self->sline=info->sline;
    # 910 "21obj.c"
    __dec_obj108=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value279=__builtin_string(info->sname))));
    __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 912 "21obj.c"
    __result176__ = __result_obj__ = self;
    come_call_finalizer3(self,sDelegateNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result176__;
    # 915 "21obj.c"
    __result177__ = __result_obj__ = self;
    come_call_finalizer3(self,sDelegateNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result177__;
    come_call_finalizer3(self,sDelegateNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sDelegateNode_terminated(struct sDelegateNode* self){
void* __result_obj__;
_Bool __result178__;
memset(&__result_obj__, 0, sizeof(void*));
    # 917 "21obj.c"
    __result178__ = (_Bool)0;
    return __result178__;
}

char* sDelegateNode_kind(struct sDelegateNode* self){
void* __result_obj__;
void* right_value280;
char* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
right_value280 = (void*)0;
    # 922 "21obj.c"
    __result179__ = __result_obj__ = ((char*)(right_value280=__builtin_string("sDelegateNode")));
    right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result179__;
}

_Bool sDelegateNode_compile(struct sDelegateNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_174;
_Bool _if_conditional203;
_Bool __result180__;
void* right_value281;
struct CVALUE* come_value_175;
_Bool _if_conditional204;
_Bool __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_174, 0, sizeof(struct sNode*));
right_value281 = (void*)0;
memset(&come_value_175, 0, sizeof(struct CVALUE*));
    # 927 "21obj.c"
    node_174=self->node;
    # 933 "21obj.c"
    # 929 "21obj.c"
    if(_if_conditional203=!node_compile(node_174,info),    _if_conditional203) {
        # 930 "21obj.c"
        __result180__ = (_Bool)0;
        return __result180__;
    }
    # 933 "21obj.c"
    come_value_175=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value281=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value281,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 934 "21obj.c"
    dec_stack_ptr(1,info);
    # 936 "21obj.c"
    come_value_175->type->mDelegate=(_Bool)1;
    # 948 "21obj.c"
    # 938 "21obj.c"
    if(come_value_175->var) {
        # 939 "21obj.c"
        come_value_175->var->mType->mDelegate=(_Bool)1;
    }
    # 948 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_175));
    # 950 "21obj.c"
    __result181__ = (_Bool)1;
    come_call_finalizer3(come_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result181__;
    come_call_finalizer3(come_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sShareNode* sShareNode_initialize(struct sShareNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value282;
struct sNode* __dec_obj109;
void* right_value283;
char* __dec_obj110;
struct sShareNode* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
right_value282 = (void*)0;
right_value283 = (void*)0;
    # 960 "21obj.c"
    __dec_obj109=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value282=sNode_clone(node))));
    if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count2(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value282) { right_value282 = come_decrement_ref_count2(right_value282, ((struct sNode*)right_value282)->finalize, ((struct sNode*)right_value282)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 962 "21obj.c"
    self->sline=info->sline;
    # 963 "21obj.c"
    __dec_obj110=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value283=__builtin_string(info->sname))));
    __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 966 "21obj.c"
    __result182__ = __result_obj__ = self;
    come_call_finalizer3(self,sShareNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result182__;
    come_call_finalizer3(self,sShareNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sShareNode_terminated(struct sShareNode* self){
void* __result_obj__;
_Bool __result183__;
memset(&__result_obj__, 0, sizeof(void*));
    # 968 "21obj.c"
    __result183__ = (_Bool)0;
    return __result183__;
}

char* sShareNode_kind(struct sShareNode* self){
void* __result_obj__;
void* right_value284;
char* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
right_value284 = (void*)0;
    # 973 "21obj.c"
    __result184__ = __result_obj__ = ((char*)(right_value284=__builtin_string("sShareNode")));
    right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result184__;
}

_Bool sShareNode_compile(struct sShareNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_176;
_Bool _if_conditional207;
_Bool __result185__;
void* right_value285;
struct CVALUE* come_value_177;
_Bool _if_conditional208;
_Bool __result186__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_176, 0, sizeof(struct sNode*));
right_value285 = (void*)0;
memset(&come_value_177, 0, sizeof(struct CVALUE*));
    # 978 "21obj.c"
    node_176=self->node;
    # 984 "21obj.c"
    # 980 "21obj.c"
    if(_if_conditional207=!node_compile(node_176,info),    _if_conditional207) {
        # 981 "21obj.c"
        __result185__ = (_Bool)0;
        return __result185__;
    }
    # 984 "21obj.c"
    come_value_177=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value285=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value285,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 985 "21obj.c"
    dec_stack_ptr(1,info);
    # 987 "21obj.c"
    come_value_177->type->mShare=(_Bool)1;
    # 993 "21obj.c"
    # 989 "21obj.c"
    if(come_value_177->var) {
        # 990 "21obj.c"
        come_value_177->var->mType->mShare=(_Bool)1;
    }
    # 993 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_177));
    # 995 "21obj.c"
    __result186__ = (_Bool)1;
    come_call_finalizer3(come_value_177,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result186__;
    come_call_finalizer3(come_value_177,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value286;
struct sNode* __dec_obj111;
void* right_value287;
char* __dec_obj112;
struct sBorrowNode* __result187__;
struct sBorrowNode* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
right_value286 = (void*)0;
right_value287 = (void*)0;
    # 1005 "21obj.c"
    __dec_obj111=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value286=sNode_clone(node))));
    if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count2(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value286) { right_value286 = come_decrement_ref_count2(right_value286, ((struct sNode*)right_value286)->finalize, ((struct sNode*)right_value286)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1007 "21obj.c"
    self->sline=info->sline;
    # 1008 "21obj.c"
    __dec_obj112=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value287=__builtin_string(info->sname))));
    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1010 "21obj.c"
    __result187__ = __result_obj__ = self;
    come_call_finalizer3(self,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result187__;
    # 1013 "21obj.c"
    __result188__ = __result_obj__ = self;
    come_call_finalizer3(self,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result188__;
    come_call_finalizer3(self,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sBorrowNode_terminated(struct sBorrowNode* self){
void* __result_obj__;
_Bool __result189__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1015 "21obj.c"
    __result189__ = (_Bool)0;
    return __result189__;
}

char* sBorrowNode_kind(struct sBorrowNode* self){
void* __result_obj__;
void* right_value288;
char* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
right_value288 = (void*)0;
    # 1020 "21obj.c"
    __result190__ = __result_obj__ = ((char*)(right_value288=__builtin_string("sBorrowNode")));
    right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result190__;
}

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_178;
_Bool _if_conditional211;
_Bool __result191__;
void* right_value289;
struct CVALUE* come_value_179;
int right_value_id_180;
_Bool _if_conditional212;
_Bool __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_178, 0, sizeof(struct sNode*));
right_value289 = (void*)0;
memset(&come_value_179, 0, sizeof(struct CVALUE*));
memset(&right_value_id_180, 0, sizeof(int));
    # 1025 "21obj.c"
    node_178=self->node;
    # 1031 "21obj.c"
    # 1027 "21obj.c"
    if(_if_conditional211=!node_compile(node_178,info),    _if_conditional211) {
        # 1028 "21obj.c"
        __result191__ = (_Bool)0;
        return __result191__;
    }
    # 1031 "21obj.c"
    come_value_179=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value289=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value289,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1032 "21obj.c"
    dec_stack_ptr(1,info);
    # 1034 "21obj.c"
    come_value_179->type->mHeap=(_Bool)0;
    # 1036 "21obj.c"
    right_value_id_180=get_right_value_id_from_obj((char*)come_increment_ref_count(come_value_179->c_value));
    # 1042 "21obj.c"
    # 1038 "21obj.c"
    if(_if_conditional212=right_value_id_180!=-1,    _if_conditional212) {
        # 1039 "21obj.c"
        remove_object_from_right_values(right_value_id_180,info);
    }
    # 1042 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_179));
    # 1044 "21obj.c"
    __result192__ = (_Bool)1;
    come_call_finalizer3(come_value_179,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result192__;
    come_call_finalizer3(come_value_179,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value290;
struct sNode* __dec_obj113;
void* right_value291;
char* __dec_obj114;
struct sCloneNode* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
right_value290 = (void*)0;
right_value291 = (void*)0;
    # 1054 "21obj.c"
    __dec_obj113=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value290=sNode_clone(node))));
    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value290) { right_value290 = come_decrement_ref_count2(right_value290, ((struct sNode*)right_value290)->finalize, ((struct sNode*)right_value290)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1056 "21obj.c"
    self->sline=info->sline;
    # 1057 "21obj.c"
    __dec_obj114=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value291=__builtin_string(info->sname))));
    __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1060 "21obj.c"
    __result193__ = __result_obj__ = self;
    come_call_finalizer3(self,sCloneNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result193__;
    come_call_finalizer3(self,sCloneNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sCloneNode_terminated(struct sCloneNode* self){
void* __result_obj__;
_Bool __result194__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1062 "21obj.c"
    __result194__ = (_Bool)0;
    return __result194__;
}

char* sCloneNode_kind(struct sCloneNode* self){
void* __result_obj__;
void* right_value292;
char* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
right_value292 = (void*)0;
    # 1067 "21obj.c"
    __result195__ = __result_obj__ = ((char*)(right_value292=__builtin_string("sCloneNode")));
    right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result195__;
}

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_181;
_Bool _if_conditional215;
_Bool __result196__;
void* right_value293;
struct CVALUE* left_value_182;
void* right_value294;
struct sType* left_type_183;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
void* right_value295;
struct CVALUE* come_value_184;
void* right_value296;
struct tuple2$2sTypephcharph* multiple_assign_var2;
struct sType* result_type_185;
char* c_value_186;
char* __dec_obj115;
void* right_value297;
struct sType* __dec_obj116;
void* right_value298;
char* __dec_obj117;
_Bool __result197__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_181, 0, sizeof(struct sNode*));
right_value293 = (void*)0;
memset(&left_value_182, 0, sizeof(struct CVALUE*));
right_value294 = (void*)0;
memset(&left_type_183, 0, sizeof(struct sType*));
right_value295 = (void*)0;
memset(&come_value_184, 0, sizeof(struct CVALUE*));
right_value296 = (void*)0;
memset(&result_type_185, 0, sizeof(struct sType*));
memset(&c_value_186, 0, sizeof(char*));
memset(&result_type_185, 0, sizeof(struct sType*));
memset(&c_value_186, 0, sizeof(char*));
right_value297 = (void*)0;
right_value298 = (void*)0;
    # 1072 "21obj.c"
    node_181=self->node;
    # 1078 "21obj.c"
    # 1074 "21obj.c"
    if(_if_conditional215=!node_compile(node_181,info),    _if_conditional215) {
        # 1075 "21obj.c"
        __result196__ = (_Bool)0;
        return __result196__;
    }
    # 1078 "21obj.c"
    left_value_182=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value293=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value293,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1079 "21obj.c"
    dec_stack_ptr(1,info);
    # 1081 "21obj.c"
    left_value_182->type->mClone=(_Bool)1;
    # 1083 "21obj.c"
    left_type_183=(struct sType*)come_increment_ref_count(((struct sType*)(right_value294=sType_clone(left_value_182->type))));
    come_call_finalizer3(right_value294,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 1106 "21obj.c"
    # 1085 "21obj.c"
    if(_if_conditional216=left_type_183->mPointerNum==1&&string_operator_equals(left_type_183->mClass->mName,"void")&&left_type_183->mHeap==(_Bool)0,    _if_conditional216) {
        # 1086 "21obj.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_182));
    }
    else {
        # 1106 "21obj.c"
        # 1088 "21obj.c"
        if(_if_conditional217=left_type_183->mPointerNum==0,        _if_conditional217) {
            # 1089 "21obj.c"
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_182));
        }
        else {
            # 1106 "21obj.c"
            # 1091 "21obj.c"
            if(_if_conditional218=left_type_183->mPointerNum>0,            _if_conditional218) {
                # 1092 "21obj.c"
                come_value_184=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value295=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1092, "CVALUE"))));
                come_call_finalizer3(right_value295,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                # 1094 "21obj.c"
                multiple_assign_var2=((struct tuple2$2sTypephcharph*)(right_value296=clone_object(left_type_183,left_value_182->c_value,info)));
                result_type_185=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
                c_value_186=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer3(right_value296,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 1095 "21obj.c"
                __dec_obj115=come_value_184->c_value;
                come_value_184->c_value=(char*)come_increment_ref_count(c_value_186);
                __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
                # 1096 "21obj.c"
                __dec_obj116=come_value_184->type;
                come_value_184->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value297=sType_clone(left_type_183))));
                come_call_finalizer3(__dec_obj116,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value297,sType_finalize, 0, 1, 0, 0, __result_obj__);
                # 1097 "21obj.c"
                come_value_184->type->mHeap=(_Bool)1;
                # 1098 "21obj.c"
                come_value_184->type->mClone=(_Bool)1;
                # 1099 "21obj.c"
                come_value_184->var=((void*)0);
                # 1101 "21obj.c"
                __dec_obj117=come_value_184->c_value;
                come_value_184->c_value=(char*)come_increment_ref_count(((char*)(right_value298=append_object_to_right_values(come_value_184->c_value,(struct sType*)come_increment_ref_count(left_type_183),info))));
                __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1103 "21obj.c"
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_184));
                come_call_finalizer3(come_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                c_value_186 = come_decrement_ref_count2(c_value_186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    # 1106 "21obj.c"
    __result197__ = (_Bool)1;
    come_call_finalizer3(left_value_182,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_183,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result197__;
    come_call_finalizer3(left_value_182,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_183,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional219;
_Bool _if_conditional220;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple2$2sTypephcharphp_finalize"
                    # 0 "tuple2$2sTypephcharphp_finalize"
                    if(_if_conditional219=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional219) {
                        # 0 "tuple2$2sTypephcharphp_finalize"
                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    # 2 "tuple2$2sTypephcharphp_finalize"
                    # 1 "tuple2$2sTypephcharphp_finalize"
                    if(_if_conditional220=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional220) {
                        # 1 "tuple2$2sTypephcharphp_finalize"
                        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value299;
struct sNode* __dec_obj118;
void* right_value300;
char* __dec_obj119;
struct sDupeNode* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
right_value299 = (void*)0;
right_value300 = (void*)0;
    # 1116 "21obj.c"
    __dec_obj118=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value299=sNode_clone(node))));
    if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count2(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value299) { right_value299 = come_decrement_ref_count2(right_value299, ((struct sNode*)right_value299)->finalize, ((struct sNode*)right_value299)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1118 "21obj.c"
    self->sline=info->sline;
    # 1119 "21obj.c"
    __dec_obj119=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value300=__builtin_string(info->sname))));
    __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value300 = come_decrement_ref_count2(right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1122 "21obj.c"
    __result198__ = __result_obj__ = self;
    come_call_finalizer3(self,sDupeNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result198__;
    come_call_finalizer3(self,sDupeNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sDupeNode_terminated(struct sDupeNode* self){
void* __result_obj__;
_Bool __result199__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1124 "21obj.c"
    __result199__ = (_Bool)0;
    return __result199__;
}

char* sDupeNode_kind(struct sDupeNode* self){
void* __result_obj__;
void* right_value301;
char* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
right_value301 = (void*)0;
    # 1129 "21obj.c"
    __result200__ = __result_obj__ = ((char*)(right_value301=__builtin_string("sDupeNode")));
    right_value301 = come_decrement_ref_count2(right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result200__;
}

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_187;
_Bool _if_conditional223;
_Bool __result201__;
void* right_value302;
struct CVALUE* left_value_188;
void* right_value303;
struct sType* left_type_189;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
void* right_value304;
struct CVALUE* come_value_190;
void* right_value305;
struct tuple2$2sTypephcharph* multiple_assign_var3;
struct sType* result_type_191;
char* c_value_192;
char* __dec_obj120;
void* right_value306;
struct sType* __dec_obj121;
void* right_value307;
char* __dec_obj122;
_Bool __result202__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_187, 0, sizeof(struct sNode*));
right_value302 = (void*)0;
memset(&left_value_188, 0, sizeof(struct CVALUE*));
right_value303 = (void*)0;
memset(&left_type_189, 0, sizeof(struct sType*));
right_value304 = (void*)0;
memset(&come_value_190, 0, sizeof(struct CVALUE*));
right_value305 = (void*)0;
memset(&result_type_191, 0, sizeof(struct sType*));
memset(&c_value_192, 0, sizeof(char*));
memset(&result_type_191, 0, sizeof(struct sType*));
memset(&c_value_192, 0, sizeof(char*));
right_value306 = (void*)0;
right_value307 = (void*)0;
    # 1134 "21obj.c"
    node_187=self->node;
    # 1140 "21obj.c"
    # 1136 "21obj.c"
    if(_if_conditional223=!node_compile(node_187,info),    _if_conditional223) {
        # 1137 "21obj.c"
        __result201__ = (_Bool)0;
        return __result201__;
    }
    # 1140 "21obj.c"
    left_value_188=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value302=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value302,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1141 "21obj.c"
    dec_stack_ptr(1,info);
    # 1143 "21obj.c"
    left_type_189=(struct sType*)come_increment_ref_count(((struct sType*)(right_value303=sType_clone(left_value_188->type))));
    come_call_finalizer3(right_value303,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 1165 "21obj.c"
    # 1145 "21obj.c"
    if(_if_conditional224=left_type_189->mPointerNum==0,    _if_conditional224) {
        # 1146 "21obj.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_188));
    }
    else {
        # 1165 "21obj.c"
        # 1148 "21obj.c"
        if(_if_conditional225=left_type_189->mPointerNum>0&&left_type_189->mHeap==(_Bool)0,        _if_conditional225) {
            # 1149 "21obj.c"
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_188));
        }
        else {
            # 1165 "21obj.c"
            # 1151 "21obj.c"
            if(_if_conditional226=left_type_189->mPointerNum>0,            _if_conditional226) {
                # 1152 "21obj.c"
                come_value_190=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value304=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1152, "CVALUE"))));
                come_call_finalizer3(right_value304,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                # 1154 "21obj.c"
                multiple_assign_var3=((struct tuple2$2sTypephcharph*)(right_value305=clone_object(left_type_189,left_value_188->c_value,info)));
                result_type_191=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
                c_value_192=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                come_call_finalizer3(right_value305,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 1155 "21obj.c"
                __dec_obj120=come_value_190->c_value;
                come_value_190->c_value=(char*)come_increment_ref_count(c_value_192);
                __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
                # 1156 "21obj.c"
                __dec_obj121=come_value_190->type;
                come_value_190->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value306=sType_clone(left_type_189))));
                come_call_finalizer3(__dec_obj121,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value306,sType_finalize, 0, 1, 0, 0, __result_obj__);
                # 1157 "21obj.c"
                come_value_190->type->mHeap=(_Bool)1;
                # 1158 "21obj.c"
                come_value_190->var=((void*)0);
                # 1160 "21obj.c"
                __dec_obj122=come_value_190->c_value;
                come_value_190->c_value=(char*)come_increment_ref_count(((char*)(right_value307=append_object_to_right_values(come_value_190->c_value,(struct sType*)come_increment_ref_count(left_type_189),info))));
                __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value307 = come_decrement_ref_count2(right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1162 "21obj.c"
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_190));
                come_call_finalizer3(come_value_190,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_191,sType_finalize, 0, 0, 0, 0, (void*)0);
                c_value_192 = come_decrement_ref_count2(c_value_192, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    # 1165 "21obj.c"
    __result202__ = (_Bool)1;
    come_call_finalizer3(left_value_188,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_189,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result202__;
    come_call_finalizer3(left_value_188,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_189,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value308;
struct sNode* __dec_obj123;
void* right_value309;
char* __dec_obj124;
struct sDummyHeapNode* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
right_value308 = (void*)0;
right_value309 = (void*)0;
    # 1175 "21obj.c"
    __dec_obj123=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value308=sNode_clone(node))));
    if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count2(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value308) { right_value308 = come_decrement_ref_count2(right_value308, ((struct sNode*)right_value308)->finalize, ((struct sNode*)right_value308)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1177 "21obj.c"
    self->sline=info->sline;
    # 1178 "21obj.c"
    __dec_obj124=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value309=__builtin_string(info->sname))));
    __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value309 = come_decrement_ref_count2(right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1181 "21obj.c"
    __result203__ = __result_obj__ = self;
    come_call_finalizer3(self,sDummyHeapNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result203__;
    come_call_finalizer3(self,sDummyHeapNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sDummyHeapNode_terminated(struct sDummyHeapNode* self){
void* __result_obj__;
_Bool __result204__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1183 "21obj.c"
    __result204__ = (_Bool)0;
    return __result204__;
}

char* sDummyHeapNode_kind(struct sDummyHeapNode* self){
void* __result_obj__;
void* right_value310;
char* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
right_value310 = (void*)0;
    # 1188 "21obj.c"
    __result205__ = __result_obj__ = ((char*)(right_value310=__builtin_string("sDummyHeapNode")));
    right_value310 = come_decrement_ref_count2(right_value310, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result205__;
}

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_193;
_Bool _if_conditional229;
_Bool __result206__;
void* right_value311;
struct CVALUE* come_value_194;
_Bool __result207__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_193, 0, sizeof(struct sNode*));
right_value311 = (void*)0;
memset(&come_value_194, 0, sizeof(struct CVALUE*));
    # 1193 "21obj.c"
    node_193=self->node;
    # 1199 "21obj.c"
    # 1195 "21obj.c"
    if(_if_conditional229=!node_compile(node_193,info),    _if_conditional229) {
        # 1196 "21obj.c"
        __result206__ = (_Bool)0;
        return __result206__;
    }
    # 1199 "21obj.c"
    come_value_194=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value311=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value311,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1200 "21obj.c"
    dec_stack_ptr(1,info);
    # 1202 "21obj.c"
    come_value_194->type->mHeap=(_Bool)1;
    # 1204 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_194));
    # 1206 "21obj.c"
    __result207__ = (_Bool)1;
    come_call_finalizer3(come_value_194,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result207__;
    come_call_finalizer3(come_value_194,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value312;
struct sNode* __dec_obj125;
void* right_value313;
char* __dec_obj126;
struct sGCIncNode* __result208__;
memset(&__result_obj__, 0, sizeof(void*));
right_value312 = (void*)0;
right_value313 = (void*)0;
    # 1216 "21obj.c"
    __dec_obj125=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value312=sNode_clone(node))));
    if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count2(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value312) { right_value312 = come_decrement_ref_count2(right_value312, ((struct sNode*)right_value312)->finalize, ((struct sNode*)right_value312)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1218 "21obj.c"
    self->sline=info->sline;
    # 1219 "21obj.c"
    __dec_obj126=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value313=__builtin_string(info->sname))));
    __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1222 "21obj.c"
    __result208__ = __result_obj__ = self;
    come_call_finalizer3(self,sGCIncNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result208__;
    come_call_finalizer3(self,sGCIncNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sGCIncNode_terminated(struct sGCIncNode* self){
void* __result_obj__;
_Bool __result209__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1224 "21obj.c"
    __result209__ = (_Bool)0;
    return __result209__;
}

char* sGCIncNode_kind(struct sGCIncNode* self){
void* __result_obj__;
void* right_value314;
char* __result210__;
memset(&__result_obj__, 0, sizeof(void*));
right_value314 = (void*)0;
    # 1229 "21obj.c"
    __result210__ = __result_obj__ = ((char*)(right_value314=__builtin_string("sGCIncNode")));
    right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result210__;
}

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_195;
_Bool _if_conditional232;
_Bool __result211__;
void* right_value315;
struct CVALUE* come_value_196;
struct sType* type_197;
_Bool _if_conditional233;
void* right_value316;
char* type_name_198;
void* right_value317;
char* __dec_obj127;
_Bool __result212__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_195, 0, sizeof(struct sNode*));
right_value315 = (void*)0;
memset(&come_value_196, 0, sizeof(struct CVALUE*));
memset(&type_197, 0, sizeof(struct sType*));
right_value316 = (void*)0;
memset(&type_name_198, 0, sizeof(char*));
right_value317 = (void*)0;
    # 1234 "21obj.c"
    node_195=self->node;
    # 1240 "21obj.c"
    # 1236 "21obj.c"
    if(_if_conditional232=!node_compile(node_195,info),    _if_conditional232) {
        # 1237 "21obj.c"
        __result211__ = (_Bool)0;
        return __result211__;
    }
    # 1240 "21obj.c"
    come_value_196=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value315=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value315,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1241 "21obj.c"
    dec_stack_ptr(1,info);
    # 1243 "21obj.c"
    type_197=come_value_196->type;
    # 1250 "21obj.c"
    # 1245 "21obj.c"
    if(come_value_196->type->mHeap) {
        # 1246 "21obj.c"
        type_name_198=(char*)come_increment_ref_count(((char*)(right_value316=make_type_name_string(type_197,(_Bool)0,(_Bool)0,(_Bool)0,info))));
        right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1247 "21obj.c"
        __dec_obj127=come_value_196->c_value;
        come_value_196->c_value=(char*)come_increment_ref_count(((char*)(right_value317=increment_ref_count_object(come_value_196->type,come_value_196->c_value,info))));
        __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value317 = come_decrement_ref_count2(right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        type_name_198 = come_decrement_ref_count2(type_name_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1250 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_196));
    # 1252 "21obj.c"
    __result212__ = (_Bool)1;
    come_call_finalizer3(come_value_196,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result212__;
    come_call_finalizer3(come_value_196,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value318;
struct sNode* __dec_obj128;
void* right_value319;
char* __dec_obj129;
struct sGCDecNode* __result213__;
memset(&__result_obj__, 0, sizeof(void*));
right_value318 = (void*)0;
right_value319 = (void*)0;
    # 1262 "21obj.c"
    __dec_obj128=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value318=sNode_clone(node))));
    if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count2(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value318) { right_value318 = come_decrement_ref_count2(right_value318, ((struct sNode*)right_value318)->finalize, ((struct sNode*)right_value318)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1264 "21obj.c"
    self->sline=info->sline;
    # 1265 "21obj.c"
    __dec_obj129=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value319=__builtin_string(info->sname))));
    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value319 = come_decrement_ref_count2(right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1268 "21obj.c"
    __result213__ = __result_obj__ = self;
    come_call_finalizer3(self,sGCDecNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result213__;
    come_call_finalizer3(self,sGCDecNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sGCDecNode_terminated(struct sGCDecNode* self){
void* __result_obj__;
_Bool __result214__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1270 "21obj.c"
    __result214__ = (_Bool)0;
    return __result214__;
}

char* sGCDecNode_kind(struct sGCDecNode* self){
void* __result_obj__;
void* right_value320;
char* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
right_value320 = (void*)0;
    # 1275 "21obj.c"
    __result215__ = __result_obj__ = ((char*)(right_value320=__builtin_string("sGCDecNode")));
    right_value320 = come_decrement_ref_count2(right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result215__;
}

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_199;
_Bool _if_conditional236;
_Bool __result216__;
void* right_value321;
struct CVALUE* come_value_200;
struct sType* type_201;
_Bool __result217__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_199, 0, sizeof(struct sNode*));
right_value321 = (void*)0;
memset(&come_value_200, 0, sizeof(struct CVALUE*));
memset(&type_201, 0, sizeof(struct sType*));
    # 1280 "21obj.c"
    node_199=self->node;
    # 1286 "21obj.c"
    # 1282 "21obj.c"
    if(_if_conditional236=!node_compile(node_199,info),    _if_conditional236) {
        # 1283 "21obj.c"
        __result216__ = (_Bool)0;
        return __result216__;
    }
    # 1286 "21obj.c"
    come_value_200=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value321=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value321,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1287 "21obj.c"
    dec_stack_ptr(1,info);
    # 1289 "21obj.c"
    type_201=come_value_200->type;
    # 1291 "21obj.c"
    decrement_ref_count_object(type_201,come_value_200->c_value,info,(_Bool)0);
    # 1293 "21obj.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_200));
    # 1295 "21obj.c"
    __result217__ = (_Bool)1;
    come_call_finalizer3(come_value_200,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result217__;
    come_call_finalizer3(come_value_200,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value322;
struct sType* __dec_obj130;
void* right_value323;
char* __dec_obj131;
struct sIsHeap* __result218__;
memset(&__result_obj__, 0, sizeof(void*));
right_value322 = (void*)0;
right_value323 = (void*)0;
    # 1305 "21obj.c"
    __dec_obj130=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value322=sType_clone(type))));
    come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value322,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 1307 "21obj.c"
    self->sline=info->sline;
    # 1308 "21obj.c"
    __dec_obj131=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value323=__builtin_string(info->sname))));
    __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1311 "21obj.c"
    __result218__ = __result_obj__ = self;
    come_call_finalizer3(self,sIsHeap_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result218__;
    come_call_finalizer3(self,sIsHeap_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sIsHeap_terminated(struct sIsHeap* self){
void* __result_obj__;
_Bool __result219__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1313 "21obj.c"
    __result219__ = (_Bool)0;
    return __result219__;
}

char* sIsHeap_kind(struct sIsHeap* self){
void* __result_obj__;
void* right_value324;
char* __result220__;
memset(&__result_obj__, 0, sizeof(void*));
right_value324 = (void*)0;
    # 1318 "21obj.c"
    __result220__ = __result_obj__ = ((char*)(right_value324=__builtin_string("sIsHeap")));
    right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result220__;
}

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info){
void* __result_obj__;
struct sType* node_202;
_Bool _if_conditional239;
void* right_value325;
struct CVALUE* come_value_203;
void* right_value326;
char* __dec_obj132;
void* right_value327;
void* right_value328;
struct sType* __dec_obj133;
void* right_value329;
struct CVALUE* come_value_204;
void* right_value330;
char* __dec_obj134;
void* right_value331;
void* right_value332;
struct sType* __dec_obj135;
_Bool __result221__;
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
    # 1323 "21obj.c"
    node_202=self->type;
    # 1348 "21obj.c"
    # 1325 "21obj.c"
    if(self->type->mHeap) {
        # 1326 "21obj.c"
        come_value_203=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value325=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1326, "CVALUE"))));
        come_call_finalizer3(right_value325,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 1328 "21obj.c"
        __dec_obj132=come_value_203->c_value;
        come_value_203->c_value=(char*)come_increment_ref_count(((char*)(right_value326=xsprintf("1"))));
        __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value326 = come_decrement_ref_count2(right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1329 "21obj.c"
        __dec_obj133=come_value_203->type;
        come_value_203->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value328=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value327=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1329, "sType")))),"int",(_Bool)0,info))));
        come_call_finalizer3(__dec_obj133,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value327,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value328,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 1330 "21obj.c"
        come_value_203->var=((void*)0);
        # 1332 "21obj.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_203));
        # 1334 "21obj.c"
        add_come_last_code(info,"%s;\n",come_value_203->c_value);
        come_call_finalizer3(come_value_203,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 1337 "21obj.c"
        come_value_204=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value329=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1337, "CVALUE"))));
        come_call_finalizer3(right_value329,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 1339 "21obj.c"
        __dec_obj134=come_value_204->c_value;
        come_value_204->c_value=(char*)come_increment_ref_count(((char*)(right_value330=xsprintf("0"))));
        __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value330 = come_decrement_ref_count2(right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1340 "21obj.c"
        __dec_obj135=come_value_204->type;
        come_value_204->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value332=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value331=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1340, "sType")))),"int",(_Bool)0,info))));
        come_call_finalizer3(__dec_obj135,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value331,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value332,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 1341 "21obj.c"
        come_value_204->var=((void*)0);
        # 1343 "21obj.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_204));
        # 1345 "21obj.c"
        add_come_last_code(info,"%s;\n",come_value_204->c_value);
        come_call_finalizer3(come_value_204,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 1348 "21obj.c"
    __result221__ = (_Bool)1;
    return __result221__;
}

struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value333;
struct sType* __dec_obj136;
void* right_value334;
char* __dec_obj137;
struct sIsPointer* __result222__;
memset(&__result_obj__, 0, sizeof(void*));
right_value333 = (void*)0;
right_value334 = (void*)0;
    # 1358 "21obj.c"
    __dec_obj136=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value333=sType_clone(type))));
    come_call_finalizer3(__dec_obj136,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value333,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 1360 "21obj.c"
    self->sline=info->sline;
    # 1361 "21obj.c"
    __dec_obj137=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value334=__builtin_string(info->sname))));
    __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1364 "21obj.c"
    __result222__ = __result_obj__ = self;
    come_call_finalizer3(self,sIsPointer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result222__;
    come_call_finalizer3(self,sIsPointer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sIsPointer_terminated(struct sIsPointer* self){
void* __result_obj__;
_Bool __result223__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1366 "21obj.c"
    __result223__ = (_Bool)0;
    return __result223__;
}

char* sIsPointer_kind(struct sIsPointer* self){
void* __result_obj__;
void* right_value335;
char* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
right_value335 = (void*)0;
    # 1371 "21obj.c"
    __result224__ = __result_obj__ = ((char*)(right_value335=__builtin_string("sIsPointer")));
    right_value335 = come_decrement_ref_count2(right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result224__;
}

_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo* info){
void* __result_obj__;
struct sType* node_205;
_Bool _if_conditional242;
void* right_value336;
struct CVALUE* come_value_206;
void* right_value337;
char* __dec_obj138;
void* right_value338;
void* right_value339;
struct sType* __dec_obj139;
void* right_value340;
struct CVALUE* come_value_207;
void* right_value341;
char* __dec_obj140;
void* right_value342;
void* right_value343;
struct sType* __dec_obj141;
_Bool __result225__;
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
    # 1376 "21obj.c"
    node_205=self->type;
    # 1401 "21obj.c"
    # 1378 "21obj.c"
    if(_if_conditional242=self->type->mPointerNum>0,    _if_conditional242) {
        # 1379 "21obj.c"
        come_value_206=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value336=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1379, "CVALUE"))));
        come_call_finalizer3(right_value336,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 1381 "21obj.c"
        __dec_obj138=come_value_206->c_value;
        come_value_206->c_value=(char*)come_increment_ref_count(((char*)(right_value337=xsprintf("1"))));
        __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value337 = come_decrement_ref_count2(right_value337, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1382 "21obj.c"
        __dec_obj139=come_value_206->type;
        come_value_206->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value339=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value338=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1382, "sType")))),"int",(_Bool)0,info))));
        come_call_finalizer3(__dec_obj139,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value338,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value339,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 1383 "21obj.c"
        come_value_206->var=((void*)0);
        # 1385 "21obj.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_206));
        # 1387 "21obj.c"
        add_come_last_code(info,"%s;\n",come_value_206->c_value);
        come_call_finalizer3(come_value_206,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 1390 "21obj.c"
        come_value_207=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value340=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1390, "CVALUE"))));
        come_call_finalizer3(right_value340,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 1392 "21obj.c"
        __dec_obj140=come_value_207->c_value;
        come_value_207->c_value=(char*)come_increment_ref_count(((char*)(right_value341=xsprintf("0"))));
        __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1393 "21obj.c"
        __dec_obj141=come_value_207->type;
        come_value_207->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value343=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value342=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1393, "sType")))),"int",(_Bool)0,info))));
        come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value342,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value343,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 1394 "21obj.c"
        come_value_207->var=((void*)0);
        # 1396 "21obj.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_207));
        # 1398 "21obj.c"
        add_come_last_code(info,"%s;\n",come_value_207->c_value);
        come_call_finalizer3(come_value_207,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 1401 "21obj.c"
    __result225__ = (_Bool)1;
    return __result225__;
}

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional243;
void* right_value344;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* type_208;
char* name_209;
_Bool err_210;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool _if_conditional248;
void* right_value345;
struct sType* inf_type_211;
void* right_value346;
struct sNode* node_212;
int __exception_result_var_b1;
void* right_value347;
void* right_value348;
struct sNode* _inf_value1;
struct sImplementsNode* _inf_obj_value1;
void* right_value353;
struct sNode* __result228__;
void* right_value354;
void* right_value355;
struct sNode* _inf_value2;
struct sNewNode* _inf_obj_value2;
void* right_value359;
struct sNode* obj_215;
void* right_value360;
char* fun_name_216;
void* right_value361;
void* right_value362;
struct sNode* __result231__;
void* right_value363;
void* right_value364;
struct sNode* _inf_value3;
struct sNewNode* _inf_obj_value3;
void* right_value368;
struct sNode* __result234__;
_Bool _if_conditional269;
void* right_value369;
void* right_value370;
struct sNode* _inf_value4;
struct sTrueNode* _inf_obj_value4;
void* right_value373;
struct sNode* __result237__;
_Bool _if_conditional274;
void* right_value374;
void* right_value375;
struct sNode* _inf_value5;
struct sFalseNode* _inf_obj_value5;
void* right_value378;
struct sNode* __result240__;
_Bool _if_conditional279;
void* right_value379;
struct sNode* node_220;
void* right_value380;
void* right_value381;
struct sNode* _inf_value6;
struct sDeleteNode* _inf_obj_value6;
void* right_value385;
struct sNode* __result243__;
_Bool _if_conditional286;
void* right_value386;
struct sNode* node_222;
void* right_value387;
void* right_value388;
struct sNode* _inf_value7;
struct sForceDeleteNode* _inf_obj_value7;
void* right_value392;
struct sNode* __result246__;
_Bool _if_conditional293;
void* right_value393;
struct sNode* node_224;
void* right_value394;
void* right_value395;
struct sNode* _inf_value8;
struct sBorrowNode* _inf_obj_value8;
void* right_value399;
struct sNode* __result249__;
_Bool _if_conditional300;
void* right_value400;
struct sNode* node_226;
void* right_value401;
void* right_value402;
struct sNode* _inf_value9;
struct sDelegateNode* _inf_obj_value9;
void* right_value406;
struct sNode* __result252__;
_Bool _if_conditional307;
void* right_value407;
struct sNode* node_228;
void* right_value408;
void* right_value409;
struct sNode* _inf_value10;
struct sShareNode* _inf_obj_value10;
void* right_value413;
struct sNode* __result255__;
_Bool _if_conditional314;
void* right_value414;
struct sNode* node_230;
void* right_value415;
void* right_value416;
struct sNode* _inf_value11;
struct sCloneNode* _inf_obj_value11;
void* right_value420;
struct sNode* __result258__;
_Bool _if_conditional321;
void* right_value421;
struct sNode* node_232;
void* right_value422;
void* right_value423;
struct sNode* _inf_value12;
struct sDupeNode* _inf_obj_value12;
void* right_value427;
struct sNode* __result261__;
_Bool _if_conditional328;
void* right_value428;
struct sNode* node_234;
void* right_value429;
void* right_value430;
struct sNode* _inf_value13;
struct sDummyHeapNode* _inf_obj_value13;
void* right_value434;
struct sNode* __result264__;
_Bool _if_conditional335;
void* right_value435;
struct sNode* node_236;
int __exception_result_var_b2;
void* right_value436;
void* right_value437;
struct sNode* _inf_value14;
struct sGCIncNode* _inf_obj_value14;
void* right_value441;
struct sNode* __result267__;
_Bool _if_conditional342;
void* right_value442;
struct sNode* node_238;
int __exception_result_var_b3;
void* right_value443;
void* right_value444;
struct sNode* _inf_value15;
struct sGCDecNode* _inf_obj_value15;
void* right_value448;
struct sNode* __result270__;
_Bool _if_conditional349;
void* right_value449;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* param_type_240;
char* param_name_241;
_Bool err_242;
_Bool _if_conditional350;
void* right_value450;
struct sType* type2_243;
int __exception_result_var_b4;
void* right_value451;
void* right_value452;
struct sNode* _inf_value16;
struct sIsHeap* _inf_obj_value16;
void* right_value456;
struct sNode* __result273__;
_Bool _if_conditional357;
void* right_value457;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* param_type_245;
char* param_name_246;
_Bool err_247;
_Bool _if_conditional358;
void* right_value458;
struct sType* type2_248;
int __exception_result_var_b5;
void* right_value459;
void* right_value460;
struct sNode* _inf_value17;
struct sIsPointer* _inf_obj_value17;
void* right_value464;
struct sNode* __result276__;
_Bool _if_conditional365;
_Bool _if_conditional366;
void* right_value465;
void* right_value466;
struct sNode* _inf_value18;
struct sNothingNode* _inf_obj_value18;
void* right_value469;
struct sNode* __result279__;
_Bool _if_conditional371;
_Bool _if_conditional372;
void* right_value470;
struct sNode* node_251;
struct sNode* __result280__;
void* right_value471;
void* right_value472;
struct sNode* _inf_value19;
struct sNothingNode* _inf_obj_value19;
void* right_value475;
struct sNode* __result283__;
_Bool _if_conditional377;
void* right_value476;
void* right_value477;
struct sNode* _inf_value20;
struct sNothingNode* _inf_obj_value20;
void* right_value480;
struct sNode* __result286__;
_Bool _if_conditional382;
void* right_value481;
void* right_value482;
struct sNode* _inf_value21;
struct sNothingNode* _inf_obj_value21;
void* right_value485;
struct sNode* __result289__;
_Bool _if_conditional387;
void* right_value486;
void* right_value487;
struct sNode* _inf_value22;
struct sNothingNode* _inf_obj_value22;
void* right_value490;
struct sNode* __result292__;
_Bool _if_conditional392;
void* right_value491;
void* right_value492;
struct sNode* _inf_value23;
struct sNothingNode* _inf_obj_value23;
void* right_value495;
struct sNode* __result295__;
_Bool _if_conditional397;
int __exception_result_var_b6;
_Bool is_type_name_flag_257;
char* p_258;
int sline_259;
_Bool _if_conditional398;
void* right_value496;
char* word_260;
_Bool _if_conditional399;
_Bool _if_conditional400;
void* right_value497;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* type_261;
char* name_262;
_Bool err_263;
_Bool _if_conditional401;
int __exception_result_var_b7;
void* right_value498;
void* right_value499;
struct sNode* _inf_value24;
struct sSizeOfNode* _inf_obj_value24;
void* right_value503;
struct sNode* __result298__;
void* right_value504;
struct sNode* exp_265;
int __exception_result_var_b8;
void* right_value505;
void* right_value506;
struct sNode* _inf_value25;
struct sSizeOfExpNode* _inf_obj_value25;
void* right_value510;
struct sNode* __result301__;
_Bool _if_conditional414;
int __exception_result_var_b9;
_Bool is_type_name_flag_267;
char* p_268;
int sline_269;
_Bool _if_conditional415;
void* right_value511;
char* word_270;
_Bool _if_conditional416;
_Bool _if_conditional417;
void* right_value512;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* type_271;
char* name_272;
_Bool err_273;
_Bool _if_conditional418;
int __exception_result_var_b10;
void* right_value513;
void* right_value514;
struct sNode* _inf_value26;
struct sTypeOfNode* _inf_obj_value26;
void* right_value518;
struct sNode* __result304__;
void* right_value519;
struct sNode* exp_275;
int __exception_result_var_b11;
void* right_value520;
void* right_value521;
struct sNode* _inf_value27;
struct sTypeOfExpNode* _inf_obj_value27;
void* right_value525;
struct sNode* __result307__;
_Bool _if_conditional431;
int __exception_result_var_b12;
_Bool is_type_name_flag_277;
char* p_278;
int sline_279;
_Bool _if_conditional432;
void* right_value526;
char* word_280;
_Bool _if_conditional433;
_Bool _if_conditional434;
void* right_value527;
struct tuple3$3sTypephcharphbool* multiple_assign_var9;
struct sType* type_281;
char* name_282;
_Bool err_283;
_Bool _if_conditional435;
int __exception_result_var_b13;
void* right_value528;
void* right_value529;
struct sNode* _inf_value28;
struct sAlignOfNode* _inf_obj_value28;
void* right_value533;
struct sNode* __result310__;
void* right_value534;
struct sNode* exp_285;
int __exception_result_var_b14;
void* right_value535;
void* right_value536;
struct sNode* _inf_value29;
struct sAlignOfExpNode* _inf_obj_value29;
void* right_value540;
struct sNode* __result313__;
_Bool _if_conditional448;
int __exception_result_var_b15;
_Bool is_type_name_flag_287;
char* p_288;
int sline_289;
_Bool _if_conditional449;
void* right_value541;
char* word_290;
_Bool _if_conditional450;
_Bool _if_conditional451;
void* right_value542;
struct tuple3$3sTypephcharphbool* multiple_assign_var10;
struct sType* type_291;
char* name_292;
_Bool err_293;
_Bool _if_conditional452;
int __exception_result_var_b16;
void* right_value543;
void* right_value544;
struct sNode* _inf_value30;
struct sAlignOfNode2* _inf_obj_value30;
void* right_value548;
struct sNode* __result316__;
void* right_value549;
struct sNode* exp_295;
int __exception_result_var_b17;
void* right_value550;
void* right_value551;
struct sNode* _inf_value31;
struct sAlignOfExpNode2* _inf_obj_value31;
void* right_value555;
struct sNode* __result319__;
_Bool _if_conditional465;
int __exception_result_var_b18;
_Bool is_type_name_flag_297;
char* p_298;
int sline_299;
_Bool _if_conditional466;
void* right_value556;
char* word_300;
_Bool _if_conditional467;
_Bool _if_conditional468;
void* right_value557;
struct tuple3$3sTypephcharphbool* multiple_assign_var11;
struct sType* type_301;
char* name_302;
_Bool err_303;
_Bool _if_conditional469;
int __exception_result_var_b19;
void* right_value558;
void* right_value559;
struct sNode* _inf_value32;
struct sAlignAsNode* _inf_obj_value32;
void* right_value563;
struct sNode* __result322__;
void* right_value564;
struct sNode* exp_305;
int __exception_result_var_b20;
void* right_value565;
void* right_value566;
struct sNode* _inf_value33;
struct sAlignAsExpNode* _inf_obj_value33;
void* right_value570;
struct sNode* __result325__;
void* right_value571;
struct sNode* __result326__;
memset(&__result_obj__, 0, sizeof(void*));
right_value344 = (void*)0;
memset(&type_208, 0, sizeof(struct sType*));
memset(&name_209, 0, sizeof(char*));
memset(&err_210, 0, sizeof(_Bool));
memset(&type_208, 0, sizeof(struct sType*));
memset(&name_209, 0, sizeof(char*));
memset(&err_210, 0, sizeof(_Bool));
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
memset(&obj_215, 0, sizeof(struct sNode*));
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
memset(&param_type_240, 0, sizeof(struct sType*));
memset(&param_name_241, 0, sizeof(char*));
memset(&err_242, 0, sizeof(_Bool));
memset(&param_type_240, 0, sizeof(struct sType*));
memset(&param_name_241, 0, sizeof(char*));
memset(&err_242, 0, sizeof(_Bool));
right_value450 = (void*)0;
memset(&type2_243, 0, sizeof(struct sType*));
right_value451 = (void*)0;
right_value452 = (void*)0;
right_value456 = (void*)0;
right_value457 = (void*)0;
memset(&param_type_245, 0, sizeof(struct sType*));
memset(&param_name_246, 0, sizeof(char*));
memset(&err_247, 0, sizeof(_Bool));
memset(&param_type_245, 0, sizeof(struct sType*));
memset(&param_name_246, 0, sizeof(char*));
memset(&err_247, 0, sizeof(_Bool));
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
memset(&is_type_name_flag_257, 0, sizeof(_Bool));
memset(&p_258, 0, sizeof(char*));
memset(&sline_259, 0, sizeof(int));
right_value496 = (void*)0;
memset(&word_260, 0, sizeof(char*));
right_value497 = (void*)0;
memset(&type_261, 0, sizeof(struct sType*));
memset(&name_262, 0, sizeof(char*));
memset(&err_263, 0, sizeof(_Bool));
memset(&type_261, 0, sizeof(struct sType*));
memset(&name_262, 0, sizeof(char*));
memset(&err_263, 0, sizeof(_Bool));
right_value498 = (void*)0;
right_value499 = (void*)0;
right_value503 = (void*)0;
right_value504 = (void*)0;
memset(&exp_265, 0, sizeof(struct sNode*));
right_value505 = (void*)0;
right_value506 = (void*)0;
right_value510 = (void*)0;
memset(&is_type_name_flag_267, 0, sizeof(_Bool));
memset(&p_268, 0, sizeof(char*));
memset(&sline_269, 0, sizeof(int));
right_value511 = (void*)0;
memset(&word_270, 0, sizeof(char*));
right_value512 = (void*)0;
memset(&type_271, 0, sizeof(struct sType*));
memset(&name_272, 0, sizeof(char*));
memset(&err_273, 0, sizeof(_Bool));
memset(&type_271, 0, sizeof(struct sType*));
memset(&name_272, 0, sizeof(char*));
memset(&err_273, 0, sizeof(_Bool));
right_value513 = (void*)0;
right_value514 = (void*)0;
right_value518 = (void*)0;
right_value519 = (void*)0;
memset(&exp_275, 0, sizeof(struct sNode*));
right_value520 = (void*)0;
right_value521 = (void*)0;
right_value525 = (void*)0;
memset(&is_type_name_flag_277, 0, sizeof(_Bool));
memset(&p_278, 0, sizeof(char*));
memset(&sline_279, 0, sizeof(int));
right_value526 = (void*)0;
memset(&word_280, 0, sizeof(char*));
right_value527 = (void*)0;
memset(&type_281, 0, sizeof(struct sType*));
memset(&name_282, 0, sizeof(char*));
memset(&err_283, 0, sizeof(_Bool));
memset(&type_281, 0, sizeof(struct sType*));
memset(&name_282, 0, sizeof(char*));
memset(&err_283, 0, sizeof(_Bool));
right_value528 = (void*)0;
right_value529 = (void*)0;
right_value533 = (void*)0;
right_value534 = (void*)0;
memset(&exp_285, 0, sizeof(struct sNode*));
right_value535 = (void*)0;
right_value536 = (void*)0;
right_value540 = (void*)0;
memset(&is_type_name_flag_287, 0, sizeof(_Bool));
memset(&p_288, 0, sizeof(char*));
memset(&sline_289, 0, sizeof(int));
right_value541 = (void*)0;
memset(&word_290, 0, sizeof(char*));
right_value542 = (void*)0;
memset(&type_291, 0, sizeof(struct sType*));
memset(&name_292, 0, sizeof(char*));
memset(&err_293, 0, sizeof(_Bool));
memset(&type_291, 0, sizeof(struct sType*));
memset(&name_292, 0, sizeof(char*));
memset(&err_293, 0, sizeof(_Bool));
right_value543 = (void*)0;
right_value544 = (void*)0;
right_value548 = (void*)0;
right_value549 = (void*)0;
memset(&exp_295, 0, sizeof(struct sNode*));
right_value550 = (void*)0;
right_value551 = (void*)0;
right_value555 = (void*)0;
memset(&is_type_name_flag_297, 0, sizeof(_Bool));
memset(&p_298, 0, sizeof(char*));
memset(&sline_299, 0, sizeof(int));
right_value556 = (void*)0;
memset(&word_300, 0, sizeof(char*));
right_value557 = (void*)0;
memset(&type_301, 0, sizeof(struct sType*));
memset(&name_302, 0, sizeof(char*));
memset(&err_303, 0, sizeof(_Bool));
memset(&type_301, 0, sizeof(struct sType*));
memset(&name_302, 0, sizeof(char*));
memset(&err_303, 0, sizeof(_Bool));
right_value558 = (void*)0;
right_value559 = (void*)0;
right_value563 = (void*)0;
right_value564 = (void*)0;
memset(&exp_305, 0, sizeof(struct sNode*));
right_value565 = (void*)0;
right_value566 = (void*)0;
right_value570 = (void*)0;
right_value571 = (void*)0;
    # 1805 "21obj.c"
    # 1407 "21obj.c"
    if(_if_conditional243=charp_operator_equals(buf,"new"),    _if_conditional243) {
        # 1408 "21obj.c"
        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value344=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_208=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        name_209=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_210=multiple_assign_var4->v3;
        come_call_finalizer3(right_value344,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        # 1414 "21obj.c"
        # 1409 "21obj.c"
        if(_if_conditional246=!err_210,        _if_conditional246) {
            # 1410 "21obj.c"
            err_msg(info,"parse_type failed");
            # 1411 "21obj.c"
            exit(2);
        }
        # 1437 "21obj.c"
        # 1414 "21obj.c"
        if(_if_conditional247=*info->p==40,        _if_conditional247) {
            # 1433 "21obj.c"
            # 1415 "21obj.c"
            if(type_208->mClass->mProtocol) {
                # 1416 "21obj.c"
                info->p++;
                # 1417 "21obj.c"
                skip_spaces_and_lf(info);
                # 1419 "21obj.c"
                inf_type_211=(struct sType*)come_increment_ref_count(((struct sType*)(right_value345=sType_clone(type_208))));
                come_call_finalizer3(right_value345,sType_finalize, 0, 1, 0, 0, __result_obj__);
                # 1421 "21obj.c"
                node_212=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value346=expression_v13(info))));
                if(right_value346) { right_value346 = come_decrement_ref_count2(right_value346, ((struct sNode*)right_value346)->finalize, ((struct sNode*)right_value346)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1423 "21obj.c"
                (come_push_stackframe("21obj.c", 1423, 2),__exception_result_var_b1=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b1);
                # 1425 "21obj.c"
                _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1425, "struct sNode");
                _inf_obj_value1=come_increment_ref_count(((struct sImplementsNode*)(right_value348=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(right_value347=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1425, "sImplementsNode")))),(struct sNode*)come_increment_ref_count(node_212),(struct sType*)come_increment_ref_count(inf_type_211),info))));
                _inf_value1->_protocol_obj=_inf_obj_value1;
                _inf_value1->finalize=(void*)sImplementsNode_finalize;
                _inf_value1->clone=(void*)sImplementsNode_clone;
                _inf_value1->compile=(void*)sImplementsNode_compile;
                _inf_value1->sline=(void*)sNodeBase_sline;
                _inf_value1->sname=(void*)sNodeBase_sname;
                _inf_value1->terminated=(void*)sImplementsNode_terminated;
                _inf_value1->kind=(void*)sImplementsNode_kind;
                __result228__ = __result_obj__ = ((struct sNode*)(right_value353=_inf_value1));
                come_call_finalizer3(inf_type_211,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(node_212) { node_212 = come_decrement_ref_count2(node_212, ((struct sNode*)node_212)->finalize, ((struct sNode*)node_212)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(type_208,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_209 = come_decrement_ref_count2(name_209, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value347,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value348,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value353) { right_value353 = come_decrement_ref_count2(right_value353, ((struct sNode*)right_value353)->finalize, ((struct sNode*)right_value353)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result228__;
                come_call_finalizer3(inf_type_211,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(node_212) { node_212 = come_decrement_ref_count2(node_212, ((struct sNode*)node_212)->finalize, ((struct sNode*)node_212)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 1428 "21obj.c"
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1428, "struct sNode");
                _inf_obj_value2=come_increment_ref_count(((struct sNewNode*)(right_value355=sNewNode_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value354=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1428, "sNewNode")))),(struct sType*)come_increment_ref_count(type_208),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sNewNode_finalize;
                _inf_value2->clone=(void*)sNewNode_clone;
                _inf_value2->compile=(void*)sNewNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNewNode_terminated;
                _inf_value2->kind=(void*)sNewNode_kind;
                obj_215=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value359=_inf_value2)));
                come_call_finalizer3(right_value354,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value355,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value359) { right_value359 = come_decrement_ref_count2(right_value359, ((struct sNode*)right_value359)->finalize, ((struct sNode*)right_value359)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1429 "21obj.c"
                fun_name_216=(char*)come_increment_ref_count(((char*)(right_value360=__builtin_string("initialize"))));
                right_value360 = come_decrement_ref_count2(right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1431 "21obj.c"
                __result231__ = __result_obj__ = ((struct sNode*)(right_value362=parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value361=sNode_clone(obj_215)))),(char*)come_increment_ref_count(fun_name_216),info)));
                if(obj_215) { obj_215 = come_decrement_ref_count2(obj_215, ((struct sNode*)obj_215)->finalize, ((struct sNode*)obj_215)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_216 = come_decrement_ref_count2(fun_name_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_208,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_209 = come_decrement_ref_count2(name_209, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(right_value361) { right_value361 = come_decrement_ref_count2(right_value361, ((struct sNode*)right_value361)->finalize, ((struct sNode*)right_value361)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                if(right_value362) { right_value362 = come_decrement_ref_count2(right_value362, ((struct sNode*)right_value362)->finalize, ((struct sNode*)right_value362)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result231__;
                if(obj_215) { obj_215 = come_decrement_ref_count2(obj_215, ((struct sNode*)obj_215)->finalize, ((struct sNode*)obj_215)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_216 = come_decrement_ref_count2(fun_name_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            # 1435 "21obj.c"
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1435, "struct sNode");
            _inf_obj_value3=come_increment_ref_count(((struct sNewNode*)(right_value364=sNewNode_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value363=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1435, "sNewNode")))),(struct sType*)come_increment_ref_count(type_208),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sNewNode_finalize;
            _inf_value3->clone=(void*)sNewNode_clone;
            _inf_value3->compile=(void*)sNewNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNewNode_terminated;
            _inf_value3->kind=(void*)sNewNode_kind;
            __result234__ = __result_obj__ = ((struct sNode*)(right_value368=_inf_value3));
            come_call_finalizer3(type_208,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_209 = come_decrement_ref_count2(name_209, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value363,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value364,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value368) { right_value368 = come_decrement_ref_count2(right_value368, ((struct sNode*)right_value368)->finalize, ((struct sNode*)right_value368)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result234__;
        }
        come_call_finalizer3(type_208,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_209 = come_decrement_ref_count2(name_209, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 1805 "21obj.c"
        # 1438 "21obj.c"
        if(_if_conditional269=charp_operator_equals(buf,"true"),        _if_conditional269) {
            # 1439 "21obj.c"
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1439, "struct sNode");
            _inf_obj_value4=come_increment_ref_count(((struct sTrueNode*)(right_value370=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(right_value369=(struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 1439, "sTrueNode")))),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sTrueNode_finalize;
            _inf_value4->clone=(void*)sTrueNode_clone;
            _inf_value4->compile=(void*)sTrueNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sTrueNode_terminated;
            _inf_value4->kind=(void*)sTrueNode_kind;
            __result237__ = __result_obj__ = ((struct sNode*)(right_value373=_inf_value4));
            come_call_finalizer3(right_value369,sTrueNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value370,sTrueNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value373) { right_value373 = come_decrement_ref_count2(right_value373, ((struct sNode*)right_value373)->finalize, ((struct sNode*)right_value373)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result237__;
        }
        else {
            # 1805 "21obj.c"
            # 1441 "21obj.c"
            if(_if_conditional274=charp_operator_equals(buf,"false"),            _if_conditional274) {
                # 1442 "21obj.c"
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1442, "struct sNode");
                _inf_obj_value5=come_increment_ref_count(((struct sFalseNode*)(right_value375=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(right_value374=(struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 1442, "sFalseNode")))),info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sFalseNode_finalize;
                _inf_value5->clone=(void*)sFalseNode_clone;
                _inf_value5->compile=(void*)sFalseNode_compile;
                _inf_value5->sline=(void*)sNodeBase_sline;
                _inf_value5->sname=(void*)sNodeBase_sname;
                _inf_value5->terminated=(void*)sFalseNode_terminated;
                _inf_value5->kind=(void*)sFalseNode_kind;
                __result240__ = __result_obj__ = ((struct sNode*)(right_value378=_inf_value5));
                come_call_finalizer3(right_value374,sFalseNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value375,sFalseNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value378) { right_value378 = come_decrement_ref_count2(right_value378, ((struct sNode*)right_value378)->finalize, ((struct sNode*)right_value378)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result240__;
            }
            else {
                # 1805 "21obj.c"
                # 1444 "21obj.c"
                if(_if_conditional279=charp_operator_equals(buf,"delete"),                _if_conditional279) {
                    # 1445 "21obj.c"
                    node_220=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value379=expression_v13(info))));
                    if(right_value379) { right_value379 = come_decrement_ref_count2(right_value379, ((struct sNode*)right_value379)->finalize, ((struct sNode*)right_value379)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1447 "21obj.c"
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1447, "struct sNode");
                    _inf_obj_value6=come_increment_ref_count(((struct sDeleteNode*)(right_value381=sDeleteNode_initialize((struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(right_value380=(struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "21obj.c", 1447, "sDeleteNode")))),(struct sNode*)come_increment_ref_count(node_220),info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sDeleteNode_finalize;
                    _inf_value6->clone=(void*)sDeleteNode_clone;
                    _inf_value6->compile=(void*)sDeleteNode_compile;
                    _inf_value6->sline=(void*)sNodeBase_sline;
                    _inf_value6->sname=(void*)sNodeBase_sname;
                    _inf_value6->terminated=(void*)sDeleteNode_terminated;
                    _inf_value6->kind=(void*)sDeleteNode_kind;
                    __result243__ = __result_obj__ = ((struct sNode*)(right_value385=_inf_value6));
                    if(node_220) { node_220 = come_decrement_ref_count2(node_220, ((struct sNode*)node_220)->finalize, ((struct sNode*)node_220)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(right_value380,sDeleteNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value381,sDeleteNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value385) { right_value385 = come_decrement_ref_count2(right_value385, ((struct sNode*)right_value385)->finalize, ((struct sNode*)right_value385)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result243__;
                    if(node_220) { node_220 = come_decrement_ref_count2(node_220, ((struct sNode*)node_220)->finalize, ((struct sNode*)node_220)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 1805 "21obj.c"
                    # 1449 "21obj.c"
                    if(_if_conditional286=charp_operator_equals(buf,"force_delete"),                    _if_conditional286) {
                        # 1450 "21obj.c"
                        node_222=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value386=expression_v13(info))));
                        if(right_value386) { right_value386 = come_decrement_ref_count2(right_value386, ((struct sNode*)right_value386)->finalize, ((struct sNode*)right_value386)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 1452 "21obj.c"
                        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1452, "struct sNode");
                        _inf_obj_value7=come_increment_ref_count(((struct sForceDeleteNode*)(right_value388=sForceDeleteNode_initialize((struct sForceDeleteNode*)come_increment_ref_count(((struct sForceDeleteNode*)(right_value387=(struct sForceDeleteNode*)come_calloc(1, sizeof(struct sForceDeleteNode)*(1), "21obj.c", 1452, "sForceDeleteNode")))),(struct sNode*)come_increment_ref_count(node_222),info))));
                        _inf_value7->_protocol_obj=_inf_obj_value7;
                        _inf_value7->finalize=(void*)sForceDeleteNode_finalize;
                        _inf_value7->clone=(void*)sForceDeleteNode_clone;
                        _inf_value7->compile=(void*)sForceDeleteNode_compile;
                        _inf_value7->sline=(void*)sNodeBase_sline;
                        _inf_value7->sname=(void*)sNodeBase_sname;
                        _inf_value7->terminated=(void*)sForceDeleteNode_terminated;
                        _inf_value7->kind=(void*)sForceDeleteNode_kind;
                        __result246__ = __result_obj__ = ((struct sNode*)(right_value392=_inf_value7));
                        if(node_222) { node_222 = come_decrement_ref_count2(node_222, ((struct sNode*)node_222)->finalize, ((struct sNode*)node_222)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(right_value387,sForceDeleteNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value388,sForceDeleteNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value392) { right_value392 = come_decrement_ref_count2(right_value392, ((struct sNode*)right_value392)->finalize, ((struct sNode*)right_value392)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result246__;
                        if(node_222) { node_222 = come_decrement_ref_count2(node_222, ((struct sNode*)node_222)->finalize, ((struct sNode*)node_222)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        # 1805 "21obj.c"
                        # 1455 "21obj.c"
                        if(_if_conditional293=charp_operator_equals(buf,"borrow"),                        _if_conditional293) {
                            # 1456 "21obj.c"
                            node_224=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value393=expression_v13(info))));
                            if(right_value393) { right_value393 = come_decrement_ref_count2(right_value393, ((struct sNode*)right_value393)->finalize, ((struct sNode*)right_value393)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 1458 "21obj.c"
                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1458, "struct sNode");
                            _inf_obj_value8=come_increment_ref_count(((struct sBorrowNode*)(right_value395=sBorrowNode_initialize((struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(right_value394=(struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "21obj.c", 1458, "sBorrowNode")))),(struct sNode*)come_increment_ref_count(node_224),info))));
                            _inf_value8->_protocol_obj=_inf_obj_value8;
                            _inf_value8->finalize=(void*)sBorrowNode_finalize;
                            _inf_value8->clone=(void*)sBorrowNode_clone;
                            _inf_value8->compile=(void*)sBorrowNode_compile;
                            _inf_value8->sline=(void*)sNodeBase_sline;
                            _inf_value8->sname=(void*)sNodeBase_sname;
                            _inf_value8->terminated=(void*)sBorrowNode_terminated;
                            _inf_value8->kind=(void*)sBorrowNode_kind;
                            __result249__ = __result_obj__ = ((struct sNode*)(right_value399=_inf_value8));
                            if(node_224) { node_224 = come_decrement_ref_count2(node_224, ((struct sNode*)node_224)->finalize, ((struct sNode*)node_224)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(right_value394,sBorrowNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value395,sBorrowNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value399) { right_value399 = come_decrement_ref_count2(right_value399, ((struct sNode*)right_value399)->finalize, ((struct sNode*)right_value399)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result249__;
                            if(node_224) { node_224 = come_decrement_ref_count2(node_224, ((struct sNode*)node_224)->finalize, ((struct sNode*)node_224)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            # 1805 "21obj.c"
                            # 1460 "21obj.c"
                            if(_if_conditional300=charp_operator_equals(buf,"delegate"),                            _if_conditional300) {
                                # 1461 "21obj.c"
                                node_226=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value400=expression_v13(info))));
                                if(right_value400) { right_value400 = come_decrement_ref_count2(right_value400, ((struct sNode*)right_value400)->finalize, ((struct sNode*)right_value400)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 1463 "21obj.c"
                                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1463, "struct sNode");
                                _inf_obj_value9=come_increment_ref_count(((struct sDelegateNode*)(right_value402=sDelegateNode_initialize((struct sDelegateNode*)come_increment_ref_count(((struct sDelegateNode*)(right_value401=(struct sDelegateNode*)come_calloc(1, sizeof(struct sDelegateNode)*(1), "21obj.c", 1463, "sDelegateNode")))),(struct sNode*)come_increment_ref_count(node_226),info))));
                                _inf_value9->_protocol_obj=_inf_obj_value9;
                                _inf_value9->finalize=(void*)sDelegateNode_finalize;
                                _inf_value9->clone=(void*)sDelegateNode_clone;
                                _inf_value9->compile=(void*)sDelegateNode_compile;
                                _inf_value9->sline=(void*)sNodeBase_sline;
                                _inf_value9->sname=(void*)sNodeBase_sname;
                                _inf_value9->terminated=(void*)sDelegateNode_terminated;
                                _inf_value9->kind=(void*)sDelegateNode_kind;
                                __result252__ = __result_obj__ = ((struct sNode*)(right_value406=_inf_value9));
                                if(node_226) { node_226 = come_decrement_ref_count2(node_226, ((struct sNode*)node_226)->finalize, ((struct sNode*)node_226)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(right_value401,sDelegateNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value402,sDelegateNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value406) { right_value406 = come_decrement_ref_count2(right_value406, ((struct sNode*)right_value406)->finalize, ((struct sNode*)right_value406)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result252__;
                                if(node_226) { node_226 = come_decrement_ref_count2(node_226, ((struct sNode*)node_226)->finalize, ((struct sNode*)node_226)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                # 1805 "21obj.c"
                                # 1465 "21obj.c"
                                if(_if_conditional307=charp_operator_equals(buf,"share"),                                _if_conditional307) {
                                    # 1466 "21obj.c"
                                    node_228=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value407=expression_v13(info))));
                                    if(right_value407) { right_value407 = come_decrement_ref_count2(right_value407, ((struct sNode*)right_value407)->finalize, ((struct sNode*)right_value407)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    # 1468 "21obj.c"
                                    _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1468, "struct sNode");
                                    _inf_obj_value10=come_increment_ref_count(((struct sShareNode*)(right_value409=sShareNode_initialize((struct sShareNode*)come_increment_ref_count(((struct sShareNode*)(right_value408=(struct sShareNode*)come_calloc(1, sizeof(struct sShareNode)*(1), "21obj.c", 1468, "sShareNode")))),(struct sNode*)come_increment_ref_count(node_228),info))));
                                    _inf_value10->_protocol_obj=_inf_obj_value10;
                                    _inf_value10->finalize=(void*)sShareNode_finalize;
                                    _inf_value10->clone=(void*)sShareNode_clone;
                                    _inf_value10->compile=(void*)sShareNode_compile;
                                    _inf_value10->sline=(void*)sNodeBase_sline;
                                    _inf_value10->sname=(void*)sNodeBase_sname;
                                    _inf_value10->terminated=(void*)sShareNode_terminated;
                                    _inf_value10->kind=(void*)sShareNode_kind;
                                    __result255__ = __result_obj__ = ((struct sNode*)(right_value413=_inf_value10));
                                    if(node_228) { node_228 = come_decrement_ref_count2(node_228, ((struct sNode*)node_228)->finalize, ((struct sNode*)node_228)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer3(right_value408,sShareNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value409,sShareNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(right_value413) { right_value413 = come_decrement_ref_count2(right_value413, ((struct sNode*)right_value413)->finalize, ((struct sNode*)right_value413)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result255__;
                                    if(node_228) { node_228 = come_decrement_ref_count2(node_228, ((struct sNode*)node_228)->finalize, ((struct sNode*)node_228)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    # 1805 "21obj.c"
                                    # 1470 "21obj.c"
                                    if(_if_conditional314=charp_operator_equals(buf,"clone"),                                    _if_conditional314) {
                                        # 1471 "21obj.c"
                                        node_230=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value414=expression_v13(info))));
                                        if(right_value414) { right_value414 = come_decrement_ref_count2(right_value414, ((struct sNode*)right_value414)->finalize, ((struct sNode*)right_value414)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        # 1473 "21obj.c"
                                        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1473, "struct sNode");
                                        _inf_obj_value11=come_increment_ref_count(((struct sCloneNode*)(right_value416=sCloneNode_initialize((struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(right_value415=(struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "21obj.c", 1473, "sCloneNode")))),(struct sNode*)come_increment_ref_count(node_230),info))));
                                        _inf_value11->_protocol_obj=_inf_obj_value11;
                                        _inf_value11->finalize=(void*)sCloneNode_finalize;
                                        _inf_value11->clone=(void*)sCloneNode_clone;
                                        _inf_value11->compile=(void*)sCloneNode_compile;
                                        _inf_value11->sline=(void*)sNodeBase_sline;
                                        _inf_value11->sname=(void*)sNodeBase_sname;
                                        _inf_value11->terminated=(void*)sCloneNode_terminated;
                                        _inf_value11->kind=(void*)sCloneNode_kind;
                                        __result258__ = __result_obj__ = ((struct sNode*)(right_value420=_inf_value11));
                                        if(node_230) { node_230 = come_decrement_ref_count2(node_230, ((struct sNode*)node_230)->finalize, ((struct sNode*)node_230)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer3(right_value415,sCloneNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value416,sCloneNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(right_value420) { right_value420 = come_decrement_ref_count2(right_value420, ((struct sNode*)right_value420)->finalize, ((struct sNode*)right_value420)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result258__;
                                        if(node_230) { node_230 = come_decrement_ref_count2(node_230, ((struct sNode*)node_230)->finalize, ((struct sNode*)node_230)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        # 1805 "21obj.c"
                                        # 1475 "21obj.c"
                                        if(_if_conditional321=charp_operator_equals(buf,"dupe"),                                        _if_conditional321) {
                                            # 1476 "21obj.c"
                                            node_232=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value421=expression_v13(info))));
                                            if(right_value421) { right_value421 = come_decrement_ref_count2(right_value421, ((struct sNode*)right_value421)->finalize, ((struct sNode*)right_value421)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            # 1478 "21obj.c"
                                            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1478, "struct sNode");
                                            _inf_obj_value12=come_increment_ref_count(((struct sDupeNode*)(right_value423=sDupeNode_initialize((struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(right_value422=(struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "21obj.c", 1478, "sDupeNode")))),(struct sNode*)come_increment_ref_count(node_232),info))));
                                            _inf_value12->_protocol_obj=_inf_obj_value12;
                                            _inf_value12->finalize=(void*)sDupeNode_finalize;
                                            _inf_value12->clone=(void*)sDupeNode_clone;
                                            _inf_value12->compile=(void*)sDupeNode_compile;
                                            _inf_value12->sline=(void*)sNodeBase_sline;
                                            _inf_value12->sname=(void*)sNodeBase_sname;
                                            _inf_value12->terminated=(void*)sDupeNode_terminated;
                                            _inf_value12->kind=(void*)sDupeNode_kind;
                                            __result261__ = __result_obj__ = ((struct sNode*)(right_value427=_inf_value12));
                                            if(node_232) { node_232 = come_decrement_ref_count2(node_232, ((struct sNode*)node_232)->finalize, ((struct sNode*)node_232)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer3(right_value422,sDupeNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value423,sDupeNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(right_value427) { right_value427 = come_decrement_ref_count2(right_value427, ((struct sNode*)right_value427)->finalize, ((struct sNode*)right_value427)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result261__;
                                            if(node_232) { node_232 = come_decrement_ref_count2(node_232, ((struct sNode*)node_232)->finalize, ((struct sNode*)node_232)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        else {
                                            # 1805 "21obj.c"
                                            # 1480 "21obj.c"
                                            if(_if_conditional328=charp_operator_equals(buf,"dummy_heap"),                                            _if_conditional328) {
                                                # 1481 "21obj.c"
                                                node_234=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value428=expression_v13(info))));
                                                if(right_value428) { right_value428 = come_decrement_ref_count2(right_value428, ((struct sNode*)right_value428)->finalize, ((struct sNode*)right_value428)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                # 1483 "21obj.c"
                                                _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1483, "struct sNode");
                                                _inf_obj_value13=come_increment_ref_count(((struct sDummyHeapNode*)(right_value430=sDummyHeapNode_initialize((struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(right_value429=(struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "21obj.c", 1483, "sDummyHeapNode")))),(struct sNode*)come_increment_ref_count(node_234),info))));
                                                _inf_value13->_protocol_obj=_inf_obj_value13;
                                                _inf_value13->finalize=(void*)sDummyHeapNode_finalize;
                                                _inf_value13->clone=(void*)sDummyHeapNode_clone;
                                                _inf_value13->compile=(void*)sDummyHeapNode_compile;
                                                _inf_value13->sline=(void*)sNodeBase_sline;
                                                _inf_value13->sname=(void*)sNodeBase_sname;
                                                _inf_value13->terminated=(void*)sDummyHeapNode_terminated;
                                                _inf_value13->kind=(void*)sDummyHeapNode_kind;
                                                __result264__ = __result_obj__ = ((struct sNode*)(right_value434=_inf_value13));
                                                if(node_234) { node_234 = come_decrement_ref_count2(node_234, ((struct sNode*)node_234)->finalize, ((struct sNode*)node_234)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                come_call_finalizer3(right_value429,sDummyHeapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                come_call_finalizer3(right_value430,sDummyHeapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                if(right_value434) { right_value434 = come_decrement_ref_count2(right_value434, ((struct sNode*)right_value434)->finalize, ((struct sNode*)right_value434)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                return __result264__;
                                                if(node_234) { node_234 = come_decrement_ref_count2(node_234, ((struct sNode*)node_234)->finalize, ((struct sNode*)node_234)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            else {
                                                # 1805 "21obj.c"
                                                # 1485 "21obj.c"
                                                if(_if_conditional335=charp_operator_equals(buf,"gc_inc")&&*info->p==40,                                                _if_conditional335) {
                                                    # 1486 "21obj.c"
                                                    info->p++;
                                                    # 1487 "21obj.c"
                                                    skip_spaces_and_lf(info);
                                                    # 1489 "21obj.c"
                                                    node_236=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value435=expression_v13(info))));
                                                    if(right_value435) { right_value435 = come_decrement_ref_count2(right_value435, ((struct sNode*)right_value435)->finalize, ((struct sNode*)right_value435)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    # 1491 "21obj.c"
                                                    (come_push_stackframe("21obj.c", 1491, 3),__exception_result_var_b2=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b2);
                                                    # 1493 "21obj.c"
                                                    _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1493, "struct sNode");
                                                    _inf_obj_value14=come_increment_ref_count(((struct sGCIncNode*)(right_value437=sGCIncNode_initialize((struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(right_value436=(struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "21obj.c", 1493, "sGCIncNode")))),(struct sNode*)come_increment_ref_count(node_236),info))));
                                                    _inf_value14->_protocol_obj=_inf_obj_value14;
                                                    _inf_value14->finalize=(void*)sGCIncNode_finalize;
                                                    _inf_value14->clone=(void*)sGCIncNode_clone;
                                                    _inf_value14->compile=(void*)sGCIncNode_compile;
                                                    _inf_value14->sline=(void*)sNodeBase_sline;
                                                    _inf_value14->sname=(void*)sNodeBase_sname;
                                                    _inf_value14->terminated=(void*)sGCIncNode_terminated;
                                                    _inf_value14->kind=(void*)sGCIncNode_kind;
                                                    __result267__ = __result_obj__ = ((struct sNode*)(right_value441=_inf_value14));
                                                    if(node_236) { node_236 = come_decrement_ref_count2(node_236, ((struct sNode*)node_236)->finalize, ((struct sNode*)node_236)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    come_call_finalizer3(right_value436,sGCIncNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer3(right_value437,sGCIncNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    if(right_value441) { right_value441 = come_decrement_ref_count2(right_value441, ((struct sNode*)right_value441)->finalize, ((struct sNode*)right_value441)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    return __result267__;
                                                    if(node_236) { node_236 = come_decrement_ref_count2(node_236, ((struct sNode*)node_236)->finalize, ((struct sNode*)node_236)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                else {
                                                    # 1805 "21obj.c"
                                                    # 1495 "21obj.c"
                                                    if(_if_conditional342=charp_operator_equals(buf,"gc_dec")&&*info->p==40,                                                    _if_conditional342) {
                                                        # 1496 "21obj.c"
                                                        info->p++;
                                                        # 1497 "21obj.c"
                                                        skip_spaces_and_lf(info);
                                                        # 1499 "21obj.c"
                                                        node_238=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value442=expression_v13(info))));
                                                        if(right_value442) { right_value442 = come_decrement_ref_count2(right_value442, ((struct sNode*)right_value442)->finalize, ((struct sNode*)right_value442)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        # 1501 "21obj.c"
                                                        (come_push_stackframe("21obj.c", 1501, 4),__exception_result_var_b3=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b3);
                                                        # 1503 "21obj.c"
                                                        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1503, "struct sNode");
                                                        _inf_obj_value15=come_increment_ref_count(((struct sGCDecNode*)(right_value444=sGCDecNode_initialize((struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(right_value443=(struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "21obj.c", 1503, "sGCDecNode")))),(struct sNode*)come_increment_ref_count(node_238),info))));
                                                        _inf_value15->_protocol_obj=_inf_obj_value15;
                                                        _inf_value15->finalize=(void*)sGCDecNode_finalize;
                                                        _inf_value15->clone=(void*)sGCDecNode_clone;
                                                        _inf_value15->compile=(void*)sGCDecNode_compile;
                                                        _inf_value15->sline=(void*)sNodeBase_sline;
                                                        _inf_value15->sname=(void*)sNodeBase_sname;
                                                        _inf_value15->terminated=(void*)sGCDecNode_terminated;
                                                        _inf_value15->kind=(void*)sGCDecNode_kind;
                                                        __result270__ = __result_obj__ = ((struct sNode*)(right_value448=_inf_value15));
                                                        if(node_238) { node_238 = come_decrement_ref_count2(node_238, ((struct sNode*)node_238)->finalize, ((struct sNode*)node_238)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        come_call_finalizer3(right_value443,sGCDecNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer3(right_value444,sGCDecNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                        if(right_value448) { right_value448 = come_decrement_ref_count2(right_value448, ((struct sNode*)right_value448)->finalize, ((struct sNode*)right_value448)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        return __result270__;
                                                        if(node_238) { node_238 = come_decrement_ref_count2(node_238, ((struct sNode*)node_238)->finalize, ((struct sNode*)node_238)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    else {
                                                        # 1805 "21obj.c"
                                                        # 1505 "21obj.c"
                                                        if(_if_conditional349=charp_operator_equals(buf,"isheap")&&*info->p==40,                                                        _if_conditional349) {
                                                            # 1506 "21obj.c"
                                                            info->p++;
                                                            # 1507 "21obj.c"
                                                            skip_spaces_and_lf(info);
                                                            # 1509 "21obj.c"
                                                            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value449=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                            param_type_240=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                                                            param_name_241=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                                                            err_242=multiple_assign_var5->v3;
                                                            come_call_finalizer3(right_value449,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            # 1515 "21obj.c"
                                                            # 1510 "21obj.c"
                                                            if(_if_conditional350=!err_242,                                                            _if_conditional350) {
                                                                # 1511 "21obj.c"
                                                                err_msg(info,"parse_type failed");
                                                                # 1512 "21obj.c"
                                                                exit(2);
                                                            }
                                                            # 1515 "21obj.c"
                                                            type2_243=(struct sType*)come_increment_ref_count(((struct sType*)(right_value450=solve_generics(param_type_240,info->generics_type,info))));
                                                            come_call_finalizer3(right_value450,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                            # 1517 "21obj.c"
                                                            (come_push_stackframe("21obj.c", 1517, 5),__exception_result_var_b4=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b4);
                                                            # 1519 "21obj.c"
                                                            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1519, "struct sNode");
                                                            _inf_obj_value16=come_increment_ref_count(((struct sIsHeap*)(right_value452=sIsHeap_initialize((struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(right_value451=(struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "21obj.c", 1519, "sIsHeap")))),(struct sType*)come_increment_ref_count(type2_243),info))));
                                                            _inf_value16->_protocol_obj=_inf_obj_value16;
                                                            _inf_value16->finalize=(void*)sIsHeap_finalize;
                                                            _inf_value16->clone=(void*)sIsHeap_clone;
                                                            _inf_value16->compile=(void*)sIsHeap_compile;
                                                            _inf_value16->sline=(void*)sNodeBase_sline;
                                                            _inf_value16->sname=(void*)sNodeBase_sname;
                                                            _inf_value16->terminated=(void*)sIsHeap_terminated;
                                                            _inf_value16->kind=(void*)sIsHeap_kind;
                                                            __result273__ = __result_obj__ = ((struct sNode*)(right_value456=_inf_value16));
                                                            come_call_finalizer3(param_type_240,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            param_name_241 = come_decrement_ref_count2(param_name_241, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer3(type2_243,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer3(right_value451,sIsHeap_finalize, 0, 1, 0, 0, __result_obj__);
                                                            come_call_finalizer3(right_value452,sIsHeap_finalize, 0, 1, 0, 0, __result_obj__);
                                                            if(right_value456) { right_value456 = come_decrement_ref_count2(right_value456, ((struct sNode*)right_value456)->finalize, ((struct sNode*)right_value456)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            return __result273__;
                                                            come_call_finalizer3(param_type_240,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            param_name_241 = come_decrement_ref_count2(param_name_241, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer3(type2_243,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        }
                                                        else {
                                                            # 1805 "21obj.c"
                                                            # 1521 "21obj.c"
                                                            if(_if_conditional357=charp_operator_equals(buf,"ispointer")&&*info->p==40,                                                            _if_conditional357) {
                                                                # 1522 "21obj.c"
                                                                info->p++;
                                                                # 1523 "21obj.c"
                                                                skip_spaces_and_lf(info);
                                                                # 1525 "21obj.c"
                                                                multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value457=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                param_type_245=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                                                                param_name_246=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                                                                err_247=multiple_assign_var6->v3;
                                                                come_call_finalizer3(right_value457,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                # 1531 "21obj.c"
                                                                # 1526 "21obj.c"
                                                                if(_if_conditional358=!err_247,                                                                _if_conditional358) {
                                                                    # 1527 "21obj.c"
                                                                    err_msg(info,"parse_type failed");
                                                                    # 1528 "21obj.c"
                                                                    exit(2);
                                                                }
                                                                # 1531 "21obj.c"
                                                                type2_248=(struct sType*)come_increment_ref_count(((struct sType*)(right_value458=solve_generics(param_type_245,info->generics_type,info))));
                                                                come_call_finalizer3(right_value458,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                                # 1533 "21obj.c"
                                                                (come_push_stackframe("21obj.c", 1533, 6),__exception_result_var_b5=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b5);
                                                                # 1535 "21obj.c"
                                                                _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1535, "struct sNode");
                                                                _inf_obj_value17=come_increment_ref_count(((struct sIsPointer*)(right_value460=sIsPointer_initialize((struct sIsPointer*)come_increment_ref_count(((struct sIsPointer*)(right_value459=(struct sIsPointer*)come_calloc(1, sizeof(struct sIsPointer)*(1), "21obj.c", 1535, "sIsPointer")))),(struct sType*)come_increment_ref_count(type2_248),info))));
                                                                _inf_value17->_protocol_obj=_inf_obj_value17;
                                                                _inf_value17->finalize=(void*)sIsPointer_finalize;
                                                                _inf_value17->clone=(void*)sIsPointer_clone;
                                                                _inf_value17->compile=(void*)sIsPointer_compile;
                                                                _inf_value17->sline=(void*)sNodeBase_sline;
                                                                _inf_value17->sname=(void*)sNodeBase_sname;
                                                                _inf_value17->terminated=(void*)sIsPointer_terminated;
                                                                _inf_value17->kind=(void*)sIsPointer_kind;
                                                                __result276__ = __result_obj__ = ((struct sNode*)(right_value464=_inf_value17));
                                                                come_call_finalizer3(param_type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                param_name_246 = come_decrement_ref_count2(param_name_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer3(type2_248,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer3(right_value459,sIsPointer_finalize, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer3(right_value460,sIsPointer_finalize, 0, 1, 0, 0, __result_obj__);
                                                                if(right_value464) { right_value464 = come_decrement_ref_count2(right_value464, ((struct sNode*)right_value464)->finalize, ((struct sNode*)right_value464)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                return __result276__;
                                                                come_call_finalizer3(param_type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                param_name_246 = come_decrement_ref_count2(param_name_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer3(type2_248,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            }
                                                            else {
                                                                # 1805 "21obj.c"
                                                                # 1537 "21obj.c"
                                                                if(_if_conditional365=charp_operator_equals(buf,"using"),                                                                _if_conditional365) {
                                                                    # 1592 "21obj.c"
                                                                    # 1538 "21obj.c"
                                                                    if(_if_conditional366=strmemcmp(info->p,"neo-c"),                                                                    _if_conditional366) {
                                                                        # 1539 "21obj.c"
                                                                        info->p+=strlen("neo-c");
                                                                        # 1540 "21obj.c"
                                                                        skip_spaces_and_lf(info);
                                                                        # 1542 "21obj.c"
                                                                        gComeC=(_Bool)0;
                                                                        # 1544 "21obj.c"
                                                                        _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1544, "struct sNode");
                                                                        _inf_obj_value18=come_increment_ref_count(((struct sNothingNode*)(right_value466=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(right_value465=(struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1544, "sNothingNode")))),info))));
                                                                        _inf_value18->_protocol_obj=_inf_obj_value18;
                                                                        _inf_value18->finalize=(void*)sNothingNode_finalize;
                                                                        _inf_value18->clone=(void*)sNothingNode_clone;
                                                                        _inf_value18->compile=(void*)sNothingNode_compile;
                                                                        _inf_value18->sline=(void*)sNodeBase_sline;
                                                                        _inf_value18->sname=(void*)sNodeBase_sname;
                                                                        _inf_value18->terminated=(void*)sNothingNode_terminated;
                                                                        _inf_value18->kind=(void*)sNothingNode_kind;
                                                                        __result279__ = __result_obj__ = ((struct sNode*)(right_value469=_inf_value18));
                                                                        come_call_finalizer3(right_value465,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                        come_call_finalizer3(right_value466,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                        if(right_value469) { right_value469 = come_decrement_ref_count2(right_value469, ((struct sNode*)right_value469)->finalize, ((struct sNode*)right_value469)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                        return __result279__;
                                                                    }
                                                                    else {
                                                                        # 1592 "21obj.c"
                                                                        # 1546 "21obj.c"
                                                                        if(_if_conditional371=strmemcmp(info->p,"c")||strmemcmp(info->p,"C"),                                                                        _if_conditional371) {
                                                                            # 1547 "21obj.c"
                                                                            info->p+=strlen("c");
                                                                            # 1548 "21obj.c"
                                                                            skip_spaces_and_lf(info);
                                                                            # 1550 "21obj.c"
                                                                            gComeC=(_Bool)1;
                                                                            # 1562 "21obj.c"
                                                                            # 1552 "21obj.c"
                                                                            if(_if_conditional372=*info->p==123,                                                                            _if_conditional372) {
                                                                                # 1553 "21obj.c"
                                                                                node_251=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value470=parse_normal_block(info))));
                                                                                if(right_value470) { right_value470 = come_decrement_ref_count2(right_value470, ((struct sNode*)right_value470)->finalize, ((struct sNode*)right_value470)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                # 1555 "21obj.c"
                                                                                gComeC=(_Bool)0;
                                                                                # 1557 "21obj.c"
                                                                                __result280__ = __result_obj__ = node_251;
                                                                                if(node_251) { node_251 = come_decrement_ref_count2(node_251, ((struct sNode*)node_251)->finalize, ((struct sNode*)node_251)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                return __result280__;
                                                                                if(node_251) { node_251 = come_decrement_ref_count2(node_251, ((struct sNode*)node_251)->finalize, ((struct sNode*)node_251)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                            }
                                                                            else {
                                                                                # 1560 "21obj.c"
                                                                                _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1560, "struct sNode");
                                                                                _inf_obj_value19=come_increment_ref_count(((struct sNothingNode*)(right_value472=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(right_value471=(struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1560, "sNothingNode")))),info))));
                                                                                _inf_value19->_protocol_obj=_inf_obj_value19;
                                                                                _inf_value19->finalize=(void*)sNothingNode_finalize;
                                                                                _inf_value19->clone=(void*)sNothingNode_clone;
                                                                                _inf_value19->compile=(void*)sNothingNode_compile;
                                                                                _inf_value19->sline=(void*)sNodeBase_sline;
                                                                                _inf_value19->sname=(void*)sNodeBase_sname;
                                                                                _inf_value19->terminated=(void*)sNothingNode_terminated;
                                                                                _inf_value19->kind=(void*)sNothingNode_kind;
                                                                                __result283__ = __result_obj__ = ((struct sNode*)(right_value475=_inf_value19));
                                                                                come_call_finalizer3(right_value471,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                come_call_finalizer3(right_value472,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                if(right_value475) { right_value475 = come_decrement_ref_count2(right_value475, ((struct sNode*)right_value475)->finalize, ((struct sNode*)right_value475)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result283__;
                                                                            }
                                                                        }
                                                                        else {
                                                                            # 1592 "21obj.c"
                                                                            # 1563 "21obj.c"
                                                                            if(_if_conditional377=strmemcmp(info->p,"gc"),                                                                            _if_conditional377) {
                                                                                # 1564 "21obj.c"
                                                                                info->p+=strlen("gc");
                                                                                # 1565 "21obj.c"
                                                                                skip_spaces_and_lf(info);
                                                                                # 1567 "21obj.c"
                                                                                _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1567, "struct sNode");
                                                                                _inf_obj_value20=come_increment_ref_count(((struct sNothingNode*)(right_value477=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(right_value476=(struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1567, "sNothingNode")))),info))));
                                                                                _inf_value20->_protocol_obj=_inf_obj_value20;
                                                                                _inf_value20->finalize=(void*)sNothingNode_finalize;
                                                                                _inf_value20->clone=(void*)sNothingNode_clone;
                                                                                _inf_value20->compile=(void*)sNothingNode_compile;
                                                                                _inf_value20->sline=(void*)sNodeBase_sline;
                                                                                _inf_value20->sname=(void*)sNodeBase_sname;
                                                                                _inf_value20->terminated=(void*)sNothingNode_terminated;
                                                                                _inf_value20->kind=(void*)sNothingNode_kind;
                                                                                __result286__ = __result_obj__ = ((struct sNode*)(right_value480=_inf_value20));
                                                                                come_call_finalizer3(right_value476,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                come_call_finalizer3(right_value477,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                if(right_value480) { right_value480 = come_decrement_ref_count2(right_value480, ((struct sNode*)right_value480)->finalize, ((struct sNode*)right_value480)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result286__;
                                                                            }
                                                                            else {
                                                                                # 1592 "21obj.c"
                                                                                # 1569 "21obj.c"
                                                                                if(_if_conditional382=strmemcmp(info->p,"no-gc"),                                                                                _if_conditional382) {
                                                                                    # 1570 "21obj.c"
                                                                                    info->p+=strlen("no-gc");
                                                                                    # 1571 "21obj.c"
                                                                                    skip_spaces_and_lf(info);
                                                                                    # 1574 "21obj.c"
                                                                                    _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1574, "struct sNode");
                                                                                    _inf_obj_value21=come_increment_ref_count(((struct sNothingNode*)(right_value482=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(right_value481=(struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1574, "sNothingNode")))),info))));
                                                                                    _inf_value21->_protocol_obj=_inf_obj_value21;
                                                                                    _inf_value21->finalize=(void*)sNothingNode_finalize;
                                                                                    _inf_value21->clone=(void*)sNothingNode_clone;
                                                                                    _inf_value21->compile=(void*)sNothingNode_compile;
                                                                                    _inf_value21->sline=(void*)sNodeBase_sline;
                                                                                    _inf_value21->sname=(void*)sNodeBase_sname;
                                                                                    _inf_value21->terminated=(void*)sNothingNode_terminated;
                                                                                    _inf_value21->kind=(void*)sNothingNode_kind;
                                                                                    __result289__ = __result_obj__ = ((struct sNode*)(right_value485=_inf_value21));
                                                                                    come_call_finalizer3(right_value481,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    come_call_finalizer3(right_value482,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    if(right_value485) { right_value485 = come_decrement_ref_count2(right_value485, ((struct sNode*)right_value485)->finalize, ((struct sNode*)right_value485)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    return __result289__;
                                                                                }
                                                                                else {
                                                                                    # 1592 "21obj.c"
                                                                                    # 1576 "21obj.c"
                                                                                    if(_if_conditional387=strmemcmp(info->p,"unsafe"),                                                                                    _if_conditional387) {
                                                                                        # 1577 "21obj.c"
                                                                                        info->p+=strlen("unsafe");
                                                                                        # 1578 "21obj.c"
                                                                                        skip_spaces_and_lf(info);
                                                                                        # 1580 "21obj.c"
                                                                                        _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1580, "struct sNode");
                                                                                        _inf_obj_value22=come_increment_ref_count(((struct sNothingNode*)(right_value487=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(right_value486=(struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1580, "sNothingNode")))),info))));
                                                                                        _inf_value22->_protocol_obj=_inf_obj_value22;
                                                                                        _inf_value22->finalize=(void*)sNothingNode_finalize;
                                                                                        _inf_value22->clone=(void*)sNothingNode_clone;
                                                                                        _inf_value22->compile=(void*)sNothingNode_compile;
                                                                                        _inf_value22->sline=(void*)sNodeBase_sline;
                                                                                        _inf_value22->sname=(void*)sNodeBase_sname;
                                                                                        _inf_value22->terminated=(void*)sNothingNode_terminated;
                                                                                        _inf_value22->kind=(void*)sNothingNode_kind;
                                                                                        __result292__ = __result_obj__ = ((struct sNode*)(right_value490=_inf_value22));
                                                                                        come_call_finalizer3(right_value486,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer3(right_value487,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value490) { right_value490 = come_decrement_ref_count2(right_value490, ((struct sNode*)right_value490)->finalize, ((struct sNode*)right_value490)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        return __result292__;
                                                                                    }
                                                                                    else {
                                                                                        # 1592 "21obj.c"
                                                                                        # 1582 "21obj.c"
                                                                                        if(_if_conditional392=strmemcmp(info->p,"no-null-check"),                                                                                        _if_conditional392) {
                                                                                            # 1583 "21obj.c"
                                                                                            info->p+=strlen("no-null-check");
                                                                                            # 1584 "21obj.c"
                                                                                            skip_spaces_and_lf(info);
                                                                                            # 1586 "21obj.c"
                                                                                            _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1586, "struct sNode");
                                                                                            _inf_obj_value23=come_increment_ref_count(((struct sNothingNode*)(right_value492=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(right_value491=(struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1586, "sNothingNode")))),info))));
                                                                                            _inf_value23->_protocol_obj=_inf_obj_value23;
                                                                                            _inf_value23->finalize=(void*)sNothingNode_finalize;
                                                                                            _inf_value23->clone=(void*)sNothingNode_clone;
                                                                                            _inf_value23->compile=(void*)sNothingNode_compile;
                                                                                            _inf_value23->sline=(void*)sNodeBase_sline;
                                                                                            _inf_value23->sname=(void*)sNodeBase_sname;
                                                                                            _inf_value23->terminated=(void*)sNothingNode_terminated;
                                                                                            _inf_value23->kind=(void*)sNothingNode_kind;
                                                                                            __result295__ = __result_obj__ = ((struct sNode*)(right_value495=_inf_value23));
                                                                                            come_call_finalizer3(right_value491,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            come_call_finalizer3(right_value492,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            if(right_value495) { right_value495 = come_decrement_ref_count2(right_value495, ((struct sNode*)right_value495)->finalize, ((struct sNode*)right_value495)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            return __result295__;
                                                                                        }
                                                                                        else {
                                                                                            # 1589 "21obj.c"
                                                                                            err_msg(info,"invalid using");
                                                                                            # 1590 "21obj.c"
                                                                                            exit(2);
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    # 1805 "21obj.c"
                                                                    # 1593 "21obj.c"
                                                                    if(_if_conditional397=charp_operator_equals(buf,"sizeof"),                                                                    _if_conditional397) {
                                                                        # 1594 "21obj.c"
                                                                        (come_push_stackframe("21obj.c", 1594, 7),__exception_result_var_b6=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b6);
                                                                        # 1597 "21obj.c"
                                                                        is_type_name_flag_257=(_Bool)0;
                                                                        # 1614 "21obj.c"
                                                                        {
                                                                            # 1599 "21obj.c"
                                                                            p_258=info->p;
                                                                            # 1600 "21obj.c"
                                                                            sline_259=info->sline;
                                                                            # 1610 "21obj.c"
                                                                            # 1602 "21obj.c"
                                                                            if(_if_conditional398=xisalpha(*info->p)||*info->p==95,                                                                            _if_conditional398) {
                                                                                # 1603 "21obj.c"
                                                                                word_260=(char*)come_increment_ref_count(((char*)(right_value496=parse_word(info))));
                                                                                right_value496 = come_decrement_ref_count2(right_value496, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1608 "21obj.c"
                                                                                # 1605 "21obj.c"
                                                                                if(_if_conditional399=is_type_name(word_260,info),                                                                                _if_conditional399) {
                                                                                    # 1606 "21obj.c"
                                                                                    is_type_name_flag_257=(_Bool)1;
                                                                                }
                                                                                word_260 = come_decrement_ref_count2(word_260, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 1610 "21obj.c"
                                                                            info->p=p_258;
                                                                            # 1611 "21obj.c"
                                                                            info->sline=sline_259;
                                                                        }
                                                                        # 1632 "21obj.c"
                                                                        # 1614 "21obj.c"
                                                                        if(is_type_name_flag_257) {
                                                                            # 1615 "21obj.c"
                                                                            multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(right_value497=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                            type_261=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                                                                            name_262=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                                                                            err_263=multiple_assign_var7->v3;
                                                                            come_call_finalizer3(right_value497,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                            # 1621 "21obj.c"
                                                                            # 1616 "21obj.c"
                                                                            if(_if_conditional401=!err_263,                                                                            _if_conditional401) {
                                                                                # 1617 "21obj.c"
                                                                                err_msg(info,"parse type");
                                                                                # 1618 "21obj.c"
                                                                                exit(2);
                                                                            }
                                                                            # 1621 "21obj.c"
                                                                            (come_push_stackframe("21obj.c", 1621, 8),__exception_result_var_b7=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b7);
                                                                            # 1623 "21obj.c"
                                                                            _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1623, "struct sNode");
                                                                            _inf_obj_value24=come_increment_ref_count(((struct sSizeOfNode*)(right_value499=sSizeOfNode_initialize((struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(right_value498=(struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "21obj.c", 1623, "sSizeOfNode")))),(struct sType*)come_increment_ref_count(type_261),info))));
                                                                            _inf_value24->_protocol_obj=_inf_obj_value24;
                                                                            _inf_value24->finalize=(void*)sSizeOfNode_finalize;
                                                                            _inf_value24->clone=(void*)sSizeOfNode_clone;
                                                                            _inf_value24->compile=(void*)sSizeOfNode_compile;
                                                                            _inf_value24->sline=(void*)sNodeBase_sline;
                                                                            _inf_value24->sname=(void*)sNodeBase_sname;
                                                                            _inf_value24->terminated=(void*)sSizeOfNode_terminated;
                                                                            _inf_value24->kind=(void*)sSizeOfNode_kind;
                                                                            __result298__ = __result_obj__ = ((struct sNode*)(right_value503=_inf_value24));
                                                                            come_call_finalizer3(type_261,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                            name_262 = come_decrement_ref_count2(name_262, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            come_call_finalizer3(right_value498,sSizeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                            come_call_finalizer3(right_value499,sSizeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                            if(right_value503) { right_value503 = come_decrement_ref_count2(right_value503, ((struct sNode*)right_value503)->finalize, ((struct sNode*)right_value503)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            return __result298__;
                                                                            come_call_finalizer3(type_261,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                            name_262 = come_decrement_ref_count2(name_262, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        else {
                                                                            # 1626 "21obj.c"
                                                                            exp_265=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value504=expression_v13(info))));
                                                                            if(right_value504) { right_value504 = come_decrement_ref_count2(right_value504, ((struct sNode*)right_value504)->finalize, ((struct sNode*)right_value504)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            # 1628 "21obj.c"
                                                                            (come_push_stackframe("21obj.c", 1628, 9),__exception_result_var_b8=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b8);
                                                                            # 1630 "21obj.c"
                                                                            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1630, "struct sNode");
                                                                            _inf_obj_value25=come_increment_ref_count(((struct sSizeOfExpNode*)(right_value506=sSizeOfExpNode_initialize((struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(right_value505=(struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "21obj.c", 1630, "sSizeOfExpNode")))),(struct sNode*)come_increment_ref_count(exp_265),info))));
                                                                            _inf_value25->_protocol_obj=_inf_obj_value25;
                                                                            _inf_value25->finalize=(void*)sSizeOfExpNode_finalize;
                                                                            _inf_value25->clone=(void*)sSizeOfExpNode_clone;
                                                                            _inf_value25->compile=(void*)sSizeOfExpNode_compile;
                                                                            _inf_value25->sline=(void*)sNodeBase_sline;
                                                                            _inf_value25->sname=(void*)sNodeBase_sname;
                                                                            _inf_value25->terminated=(void*)sSizeOfExpNode_terminated;
                                                                            _inf_value25->kind=(void*)sSizeOfExpNode_kind;
                                                                            __result301__ = __result_obj__ = ((struct sNode*)(right_value510=_inf_value25));
                                                                            if(exp_265) { exp_265 = come_decrement_ref_count2(exp_265, ((struct sNode*)exp_265)->finalize, ((struct sNode*)exp_265)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                            come_call_finalizer3(right_value505,sSizeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                            come_call_finalizer3(right_value506,sSizeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                            if(right_value510) { right_value510 = come_decrement_ref_count2(right_value510, ((struct sNode*)right_value510)->finalize, ((struct sNode*)right_value510)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            return __result301__;
                                                                            if(exp_265) { exp_265 = come_decrement_ref_count2(exp_265, ((struct sNode*)exp_265)->finalize, ((struct sNode*)exp_265)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                        }
                                                                    }
                                                                    else {
                                                                        # 1805 "21obj.c"
                                                                        # 1633 "21obj.c"
                                                                        if(_if_conditional414=charp_operator_equals(buf,"typeof"),                                                                        _if_conditional414) {
                                                                            # 1634 "21obj.c"
                                                                            (come_push_stackframe("21obj.c", 1634, 10),__exception_result_var_b9=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b9);
                                                                            # 1637 "21obj.c"
                                                                            is_type_name_flag_267=(_Bool)0;
                                                                            # 1654 "21obj.c"
                                                                            {
                                                                                # 1639 "21obj.c"
                                                                                p_268=info->p;
                                                                                # 1640 "21obj.c"
                                                                                sline_269=info->sline;
                                                                                # 1650 "21obj.c"
                                                                                # 1642 "21obj.c"
                                                                                if(_if_conditional415=xisalpha(*info->p)||*info->p==95,                                                                                _if_conditional415) {
                                                                                    # 1643 "21obj.c"
                                                                                    word_270=(char*)come_increment_ref_count(((char*)(right_value511=parse_word(info))));
                                                                                    right_value511 = come_decrement_ref_count2(right_value511, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    # 1648 "21obj.c"
                                                                                    # 1645 "21obj.c"
                                                                                    if(_if_conditional416=is_type_name(word_270,info),                                                                                    _if_conditional416) {
                                                                                        # 1646 "21obj.c"
                                                                                        is_type_name_flag_267=(_Bool)1;
                                                                                    }
                                                                                    word_270 = come_decrement_ref_count2(word_270, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                # 1650 "21obj.c"
                                                                                info->p=p_268;
                                                                                # 1651 "21obj.c"
                                                                                info->sline=sline_269;
                                                                            }
                                                                            # 1672 "21obj.c"
                                                                            # 1654 "21obj.c"
                                                                            if(is_type_name_flag_267) {
                                                                                # 1655 "21obj.c"
                                                                                multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(right_value512=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                                type_271=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                                                                                name_272=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                                                                                err_273=multiple_assign_var8->v3;
                                                                                come_call_finalizer3(right_value512,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                # 1661 "21obj.c"
                                                                                # 1656 "21obj.c"
                                                                                if(_if_conditional418=!err_273,                                                                                _if_conditional418) {
                                                                                    # 1657 "21obj.c"
                                                                                    err_msg(info,"parse type");
                                                                                    # 1658 "21obj.c"
                                                                                    exit(2);
                                                                                }
                                                                                # 1661 "21obj.c"
                                                                                (come_push_stackframe("21obj.c", 1661, 11),__exception_result_var_b10=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b10);
                                                                                # 1663 "21obj.c"
                                                                                _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1663, "struct sNode");
                                                                                _inf_obj_value26=come_increment_ref_count(((struct sTypeOfNode*)(right_value514=sTypeOfNode_initialize((struct sTypeOfNode*)come_increment_ref_count(((struct sTypeOfNode*)(right_value513=(struct sTypeOfNode*)come_calloc(1, sizeof(struct sTypeOfNode)*(1), "21obj.c", 1663, "sTypeOfNode")))),(struct sType*)come_increment_ref_count(type_271),info))));
                                                                                _inf_value26->_protocol_obj=_inf_obj_value26;
                                                                                _inf_value26->finalize=(void*)sTypeOfNode_finalize;
                                                                                _inf_value26->clone=(void*)sTypeOfNode_clone;
                                                                                _inf_value26->compile=(void*)sTypeOfNode_compile;
                                                                                _inf_value26->sline=(void*)sNodeBase_sline;
                                                                                _inf_value26->sname=(void*)sNodeBase_sname;
                                                                                _inf_value26->terminated=(void*)sTypeOfNode_terminated;
                                                                                _inf_value26->kind=(void*)sTypeOfNode_kind;
                                                                                __result304__ = __result_obj__ = ((struct sNode*)(right_value518=_inf_value26));
                                                                                come_call_finalizer3(type_271,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                name_272 = come_decrement_ref_count2(name_272, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                come_call_finalizer3(right_value513,sTypeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                come_call_finalizer3(right_value514,sTypeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                if(right_value518) { right_value518 = come_decrement_ref_count2(right_value518, ((struct sNode*)right_value518)->finalize, ((struct sNode*)right_value518)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result304__;
                                                                                come_call_finalizer3(type_271,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                name_272 = come_decrement_ref_count2(name_272, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            else {
                                                                                # 1666 "21obj.c"
                                                                                exp_275=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value519=expression_v13(info))));
                                                                                if(right_value519) { right_value519 = come_decrement_ref_count2(right_value519, ((struct sNode*)right_value519)->finalize, ((struct sNode*)right_value519)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                # 1668 "21obj.c"
                                                                                (come_push_stackframe("21obj.c", 1668, 12),__exception_result_var_b11=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b11);
                                                                                # 1670 "21obj.c"
                                                                                _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1670, "struct sNode");
                                                                                _inf_obj_value27=come_increment_ref_count(((struct sTypeOfExpNode*)(right_value521=sTypeOfExpNode_initialize((struct sTypeOfExpNode*)come_increment_ref_count(((struct sTypeOfExpNode*)(right_value520=(struct sTypeOfExpNode*)come_calloc(1, sizeof(struct sTypeOfExpNode)*(1), "21obj.c", 1670, "sTypeOfExpNode")))),(struct sNode*)come_increment_ref_count(exp_275),info))));
                                                                                _inf_value27->_protocol_obj=_inf_obj_value27;
                                                                                _inf_value27->finalize=(void*)sTypeOfExpNode_finalize;
                                                                                _inf_value27->clone=(void*)sTypeOfExpNode_clone;
                                                                                _inf_value27->compile=(void*)sTypeOfExpNode_compile;
                                                                                _inf_value27->sline=(void*)sNodeBase_sline;
                                                                                _inf_value27->sname=(void*)sNodeBase_sname;
                                                                                _inf_value27->terminated=(void*)sTypeOfExpNode_terminated;
                                                                                _inf_value27->kind=(void*)sTypeOfExpNode_kind;
                                                                                __result307__ = __result_obj__ = ((struct sNode*)(right_value525=_inf_value27));
                                                                                if(exp_275) { exp_275 = come_decrement_ref_count2(exp_275, ((struct sNode*)exp_275)->finalize, ((struct sNode*)exp_275)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                come_call_finalizer3(right_value520,sTypeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                come_call_finalizer3(right_value521,sTypeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                if(right_value525) { right_value525 = come_decrement_ref_count2(right_value525, ((struct sNode*)right_value525)->finalize, ((struct sNode*)right_value525)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result307__;
                                                                                if(exp_275) { exp_275 = come_decrement_ref_count2(exp_275, ((struct sNode*)exp_275)->finalize, ((struct sNode*)exp_275)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                            }
                                                                        }
                                                                        else {
                                                                            # 1805 "21obj.c"
                                                                            # 1684 "21obj.c"
                                                                            if(_if_conditional431=charp_operator_equals(buf,"_Alignof"),                                                                            _if_conditional431) {
                                                                                # 1685 "21obj.c"
                                                                                (come_push_stackframe("21obj.c", 1685, 13),__exception_result_var_b12=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b12);
                                                                                # 1688 "21obj.c"
                                                                                is_type_name_flag_277=(_Bool)0;
                                                                                # 1705 "21obj.c"
                                                                                {
                                                                                    # 1690 "21obj.c"
                                                                                    p_278=info->p;
                                                                                    # 1691 "21obj.c"
                                                                                    sline_279=info->sline;
                                                                                    # 1701 "21obj.c"
                                                                                    # 1693 "21obj.c"
                                                                                    if(_if_conditional432=xisalpha(*info->p)||*info->p==95,                                                                                    _if_conditional432) {
                                                                                        # 1694 "21obj.c"
                                                                                        word_280=(char*)come_increment_ref_count(((char*)(right_value526=parse_word(info))));
                                                                                        right_value526 = come_decrement_ref_count2(right_value526, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                        # 1699 "21obj.c"
                                                                                        # 1696 "21obj.c"
                                                                                        if(_if_conditional433=is_type_name(word_280,info),                                                                                        _if_conditional433) {
                                                                                            # 1697 "21obj.c"
                                                                                            is_type_name_flag_277=(_Bool)1;
                                                                                        }
                                                                                        word_280 = come_decrement_ref_count2(word_280, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    }
                                                                                    # 1701 "21obj.c"
                                                                                    info->p=p_278;
                                                                                    # 1702 "21obj.c"
                                                                                    info->sline=sline_279;
                                                                                }
                                                                                # 1723 "21obj.c"
                                                                                # 1705 "21obj.c"
                                                                                if(is_type_name_flag_277) {
                                                                                    # 1706 "21obj.c"
                                                                                    multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(right_value527=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                                    type_281=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                                                                                    name_282=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                                                                                    err_283=multiple_assign_var9->v3;
                                                                                    come_call_finalizer3(right_value527,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    # 1712 "21obj.c"
                                                                                    # 1707 "21obj.c"
                                                                                    if(_if_conditional435=!err_283,                                                                                    _if_conditional435) {
                                                                                        # 1708 "21obj.c"
                                                                                        err_msg(info,"parse type");
                                                                                        # 1709 "21obj.c"
                                                                                        exit(2);
                                                                                    }
                                                                                    # 1712 "21obj.c"
                                                                                    (come_push_stackframe("21obj.c", 1712, 14),__exception_result_var_b13=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b13);
                                                                                    # 1714 "21obj.c"
                                                                                    _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1714, "struct sNode");
                                                                                    _inf_obj_value28=come_increment_ref_count(((struct sAlignOfNode*)(right_value529=sAlignOfNode_initialize((struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(right_value528=(struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "21obj.c", 1714, "sAlignOfNode")))),(struct sType*)come_increment_ref_count(type_281),info))));
                                                                                    _inf_value28->_protocol_obj=_inf_obj_value28;
                                                                                    _inf_value28->finalize=(void*)sAlignOfNode_finalize;
                                                                                    _inf_value28->clone=(void*)sAlignOfNode_clone;
                                                                                    _inf_value28->compile=(void*)sAlignOfNode_compile;
                                                                                    _inf_value28->sline=(void*)sNodeBase_sline;
                                                                                    _inf_value28->sname=(void*)sNodeBase_sname;
                                                                                    _inf_value28->terminated=(void*)sAlignOfNode_terminated;
                                                                                    _inf_value28->kind=(void*)sAlignOfNode_kind;
                                                                                    __result310__ = __result_obj__ = ((struct sNode*)(right_value533=_inf_value28));
                                                                                    come_call_finalizer3(type_281,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    name_282 = come_decrement_ref_count2(name_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    come_call_finalizer3(right_value528,sAlignOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    come_call_finalizer3(right_value529,sAlignOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    if(right_value533) { right_value533 = come_decrement_ref_count2(right_value533, ((struct sNode*)right_value533)->finalize, ((struct sNode*)right_value533)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    return __result310__;
                                                                                    come_call_finalizer3(type_281,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    name_282 = come_decrement_ref_count2(name_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                else {
                                                                                    # 1717 "21obj.c"
                                                                                    exp_285=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value534=expression_v13(info))));
                                                                                    if(right_value534) { right_value534 = come_decrement_ref_count2(right_value534, ((struct sNode*)right_value534)->finalize, ((struct sNode*)right_value534)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    # 1719 "21obj.c"
                                                                                    (come_push_stackframe("21obj.c", 1719, 15),__exception_result_var_b14=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b14);
                                                                                    # 1721 "21obj.c"
                                                                                    _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1721, "struct sNode");
                                                                                    _inf_obj_value29=come_increment_ref_count(((struct sAlignOfExpNode*)(right_value536=sAlignOfExpNode_initialize((struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(right_value535=(struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "21obj.c", 1721, "sAlignOfExpNode")))),(struct sNode*)come_increment_ref_count(exp_285),info))));
                                                                                    _inf_value29->_protocol_obj=_inf_obj_value29;
                                                                                    _inf_value29->finalize=(void*)sAlignOfExpNode_finalize;
                                                                                    _inf_value29->clone=(void*)sAlignOfExpNode_clone;
                                                                                    _inf_value29->compile=(void*)sAlignOfExpNode_compile;
                                                                                    _inf_value29->sline=(void*)sNodeBase_sline;
                                                                                    _inf_value29->sname=(void*)sNodeBase_sname;
                                                                                    _inf_value29->terminated=(void*)sAlignOfExpNode_terminated;
                                                                                    _inf_value29->kind=(void*)sAlignOfExpNode_kind;
                                                                                    __result313__ = __result_obj__ = ((struct sNode*)(right_value540=_inf_value29));
                                                                                    if(exp_285) { exp_285 = come_decrement_ref_count2(exp_285, ((struct sNode*)exp_285)->finalize, ((struct sNode*)exp_285)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    come_call_finalizer3(right_value535,sAlignOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    come_call_finalizer3(right_value536,sAlignOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    if(right_value540) { right_value540 = come_decrement_ref_count2(right_value540, ((struct sNode*)right_value540)->finalize, ((struct sNode*)right_value540)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    return __result313__;
                                                                                    if(exp_285) { exp_285 = come_decrement_ref_count2(exp_285, ((struct sNode*)exp_285)->finalize, ((struct sNode*)exp_285)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                }
                                                                            }
                                                                            else {
                                                                                # 1805 "21obj.c"
                                                                                # 1724 "21obj.c"
                                                                                if(_if_conditional448=charp_operator_equals(buf,"__alignof__"),                                                                                _if_conditional448) {
                                                                                    # 1725 "21obj.c"
                                                                                    (come_push_stackframe("21obj.c", 1725, 16),__exception_result_var_b15=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b15);
                                                                                    # 1728 "21obj.c"
                                                                                    is_type_name_flag_287=(_Bool)0;
                                                                                    # 1745 "21obj.c"
                                                                                    {
                                                                                        # 1730 "21obj.c"
                                                                                        p_288=info->p;
                                                                                        # 1731 "21obj.c"
                                                                                        sline_289=info->sline;
                                                                                        # 1741 "21obj.c"
                                                                                        # 1733 "21obj.c"
                                                                                        if(_if_conditional449=xisalpha(*info->p)||*info->p==95,                                                                                        _if_conditional449) {
                                                                                            # 1734 "21obj.c"
                                                                                            word_290=(char*)come_increment_ref_count(((char*)(right_value541=parse_word(info))));
                                                                                            right_value541 = come_decrement_ref_count2(right_value541, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            # 1739 "21obj.c"
                                                                                            # 1736 "21obj.c"
                                                                                            if(_if_conditional450=is_type_name(word_290,info),                                                                                            _if_conditional450) {
                                                                                                # 1737 "21obj.c"
                                                                                                is_type_name_flag_287=(_Bool)1;
                                                                                            }
                                                                                            word_290 = come_decrement_ref_count2(word_290, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        # 1741 "21obj.c"
                                                                                        info->p=p_288;
                                                                                        # 1742 "21obj.c"
                                                                                        info->sline=sline_289;
                                                                                    }
                                                                                    # 1763 "21obj.c"
                                                                                    # 1745 "21obj.c"
                                                                                    if(is_type_name_flag_287) {
                                                                                        # 1746 "21obj.c"
                                                                                        multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(right_value542=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                                        type_291=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                                                                                        name_292=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                                                                                        err_293=multiple_assign_var10->v3;
                                                                                        come_call_finalizer3(right_value542,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        # 1752 "21obj.c"
                                                                                        # 1747 "21obj.c"
                                                                                        if(_if_conditional452=!err_293,                                                                                        _if_conditional452) {
                                                                                            # 1748 "21obj.c"
                                                                                            err_msg(info,"parse type");
                                                                                            # 1749 "21obj.c"
                                                                                            exit(2);
                                                                                        }
                                                                                        # 1752 "21obj.c"
                                                                                        (come_push_stackframe("21obj.c", 1752, 17),__exception_result_var_b16=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b16);
                                                                                        # 1754 "21obj.c"
                                                                                        _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1754, "struct sNode");
                                                                                        _inf_obj_value30=come_increment_ref_count(((struct sAlignOfNode2*)(right_value544=sAlignOfNode2_initialize((struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(right_value543=(struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "21obj.c", 1754, "sAlignOfNode2")))),(struct sType*)come_increment_ref_count(type_291),info))));
                                                                                        _inf_value30->_protocol_obj=_inf_obj_value30;
                                                                                        _inf_value30->finalize=(void*)sAlignOfNode2_finalize;
                                                                                        _inf_value30->clone=(void*)sAlignOfNode2_clone;
                                                                                        _inf_value30->compile=(void*)sAlignOfNode2_compile;
                                                                                        _inf_value30->sline=(void*)sNodeBase_sline;
                                                                                        _inf_value30->sname=(void*)sNodeBase_sname;
                                                                                        _inf_value30->terminated=(void*)sAlignOfNode2_terminated;
                                                                                        _inf_value30->kind=(void*)sAlignOfNode2_kind;
                                                                                        __result316__ = __result_obj__ = ((struct sNode*)(right_value548=_inf_value30));
                                                                                        come_call_finalizer3(type_291,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                        name_292 = come_decrement_ref_count2(name_292, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        come_call_finalizer3(right_value543,sAlignOfNode2_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer3(right_value544,sAlignOfNode2_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value548) { right_value548 = come_decrement_ref_count2(right_value548, ((struct sNode*)right_value548)->finalize, ((struct sNode*)right_value548)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        return __result316__;
                                                                                        come_call_finalizer3(type_291,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                        name_292 = come_decrement_ref_count2(name_292, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    }
                                                                                    else {
                                                                                        # 1757 "21obj.c"
                                                                                        exp_295=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value549=expression_v13(info))));
                                                                                        if(right_value549) { right_value549 = come_decrement_ref_count2(right_value549, ((struct sNode*)right_value549)->finalize, ((struct sNode*)right_value549)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        # 1759 "21obj.c"
                                                                                        (come_push_stackframe("21obj.c", 1759, 18),__exception_result_var_b17=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b17);
                                                                                        # 1761 "21obj.c"
                                                                                        _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1761, "struct sNode");
                                                                                        _inf_obj_value31=come_increment_ref_count(((struct sAlignOfExpNode2*)(right_value551=sAlignOfExpNode2_initialize((struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(right_value550=(struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "21obj.c", 1761, "sAlignOfExpNode2")))),(struct sNode*)come_increment_ref_count(exp_295),info))));
                                                                                        _inf_value31->_protocol_obj=_inf_obj_value31;
                                                                                        _inf_value31->finalize=(void*)sAlignOfExpNode2_finalize;
                                                                                        _inf_value31->clone=(void*)sAlignOfExpNode2_clone;
                                                                                        _inf_value31->compile=(void*)sAlignOfExpNode2_compile;
                                                                                        _inf_value31->sline=(void*)sNodeBase_sline;
                                                                                        _inf_value31->sname=(void*)sNodeBase_sname;
                                                                                        _inf_value31->terminated=(void*)sAlignOfExpNode2_terminated;
                                                                                        _inf_value31->kind=(void*)sAlignOfExpNode2_kind;
                                                                                        __result319__ = __result_obj__ = ((struct sNode*)(right_value555=_inf_value31));
                                                                                        if(exp_295) { exp_295 = come_decrement_ref_count2(exp_295, ((struct sNode*)exp_295)->finalize, ((struct sNode*)exp_295)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                        come_call_finalizer3(right_value550,sAlignOfExpNode2_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer3(right_value551,sAlignOfExpNode2_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value555) { right_value555 = come_decrement_ref_count2(right_value555, ((struct sNode*)right_value555)->finalize, ((struct sNode*)right_value555)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        return __result319__;
                                                                                        if(exp_295) { exp_295 = come_decrement_ref_count2(exp_295, ((struct sNode*)exp_295)->finalize, ((struct sNode*)exp_295)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    }
                                                                                }
                                                                                else {
                                                                                    # 1805 "21obj.c"
                                                                                    # 1764 "21obj.c"
                                                                                    if(_if_conditional465=charp_operator_equals(buf,"_Alignas"),                                                                                    _if_conditional465) {
                                                                                        # 1765 "21obj.c"
                                                                                        (come_push_stackframe("21obj.c", 1765, 19),__exception_result_var_b18=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b18);
                                                                                        # 1768 "21obj.c"
                                                                                        is_type_name_flag_297=(_Bool)0;
                                                                                        # 1785 "21obj.c"
                                                                                        {
                                                                                            # 1770 "21obj.c"
                                                                                            p_298=info->p;
                                                                                            # 1771 "21obj.c"
                                                                                            sline_299=info->sline;
                                                                                            # 1781 "21obj.c"
                                                                                            # 1773 "21obj.c"
                                                                                            if(_if_conditional466=xisalpha(*info->p)||*info->p==95,                                                                                            _if_conditional466) {
                                                                                                # 1774 "21obj.c"
                                                                                                word_300=(char*)come_increment_ref_count(((char*)(right_value556=parse_word(info))));
                                                                                                right_value556 = come_decrement_ref_count2(right_value556, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                # 1779 "21obj.c"
                                                                                                # 1776 "21obj.c"
                                                                                                if(_if_conditional467=is_type_name(word_300,info),                                                                                                _if_conditional467) {
                                                                                                    # 1777 "21obj.c"
                                                                                                    is_type_name_flag_297=(_Bool)1;
                                                                                                }
                                                                                                word_300 = come_decrement_ref_count2(word_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
                                                                                            # 1781 "21obj.c"
                                                                                            info->p=p_298;
                                                                                            # 1782 "21obj.c"
                                                                                            info->sline=sline_299;
                                                                                        }
                                                                                        # 1803 "21obj.c"
                                                                                        # 1785 "21obj.c"
                                                                                        if(is_type_name_flag_297) {
                                                                                            # 1786 "21obj.c"
                                                                                            multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(right_value557=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                                            type_301=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
                                                                                            name_302=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                                                                                            err_303=multiple_assign_var11->v3;
                                                                                            come_call_finalizer3(right_value557,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            # 1792 "21obj.c"
                                                                                            # 1787 "21obj.c"
                                                                                            if(_if_conditional469=!err_303,                                                                                            _if_conditional469) {
                                                                                                # 1788 "21obj.c"
                                                                                                err_msg(info,"parse type");
                                                                                                # 1789 "21obj.c"
                                                                                                exit(2);
                                                                                            }
                                                                                            # 1792 "21obj.c"
                                                                                            (come_push_stackframe("21obj.c", 1792, 20),__exception_result_var_b19=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b19);
                                                                                            # 1794 "21obj.c"
                                                                                            _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1794, "struct sNode");
                                                                                            _inf_obj_value32=come_increment_ref_count(((struct sAlignAsNode*)(right_value559=sAlignAsNode_initialize((struct sAlignAsNode*)come_increment_ref_count(((struct sAlignAsNode*)(right_value558=(struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "21obj.c", 1794, "sAlignAsNode")))),(struct sType*)come_increment_ref_count(type_301),info))));
                                                                                            _inf_value32->_protocol_obj=_inf_obj_value32;
                                                                                            _inf_value32->finalize=(void*)sAlignAsNode_finalize;
                                                                                            _inf_value32->clone=(void*)sAlignAsNode_clone;
                                                                                            _inf_value32->compile=(void*)sAlignAsNode_compile;
                                                                                            _inf_value32->sline=(void*)sNodeBase_sline;
                                                                                            _inf_value32->sname=(void*)sNodeBase_sname;
                                                                                            _inf_value32->terminated=(void*)sAlignAsNode_terminated;
                                                                                            _inf_value32->kind=(void*)sAlignAsNode_kind;
                                                                                            __result322__ = __result_obj__ = ((struct sNode*)(right_value563=_inf_value32));
                                                                                            come_call_finalizer3(type_301,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                            name_302 = come_decrement_ref_count2(name_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            come_call_finalizer3(right_value558,sAlignAsNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            come_call_finalizer3(right_value559,sAlignAsNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            if(right_value563) { right_value563 = come_decrement_ref_count2(right_value563, ((struct sNode*)right_value563)->finalize, ((struct sNode*)right_value563)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            return __result322__;
                                                                                            come_call_finalizer3(type_301,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                            name_302 = come_decrement_ref_count2(name_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        else {
                                                                                            # 1797 "21obj.c"
                                                                                            exp_305=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value564=expression_v13(info))));
                                                                                            if(right_value564) { right_value564 = come_decrement_ref_count2(right_value564, ((struct sNode*)right_value564)->finalize, ((struct sNode*)right_value564)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            # 1799 "21obj.c"
                                                                                            (come_push_stackframe("21obj.c", 1799, 21),__exception_result_var_b20=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b20);
                                                                                            # 1801 "21obj.c"
                                                                                            _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1801, "struct sNode");
                                                                                            _inf_obj_value33=come_increment_ref_count(((struct sAlignAsExpNode*)(right_value566=sAlignAsExpNode_initialize((struct sAlignAsExpNode*)come_increment_ref_count(((struct sAlignAsExpNode*)(right_value565=(struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "21obj.c", 1801, "sAlignAsExpNode")))),(struct sNode*)come_increment_ref_count(exp_305),info))));
                                                                                            _inf_value33->_protocol_obj=_inf_obj_value33;
                                                                                            _inf_value33->finalize=(void*)sAlignAsExpNode_finalize;
                                                                                            _inf_value33->clone=(void*)sAlignAsExpNode_clone;
                                                                                            _inf_value33->compile=(void*)sAlignAsExpNode_compile;
                                                                                            _inf_value33->sline=(void*)sNodeBase_sline;
                                                                                            _inf_value33->sname=(void*)sNodeBase_sname;
                                                                                            _inf_value33->terminated=(void*)sAlignAsExpNode_terminated;
                                                                                            _inf_value33->kind=(void*)sAlignAsExpNode_kind;
                                                                                            __result325__ = __result_obj__ = ((struct sNode*)(right_value570=_inf_value33));
                                                                                            if(exp_305) { exp_305 = come_decrement_ref_count2(exp_305, ((struct sNode*)exp_305)->finalize, ((struct sNode*)exp_305)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                            come_call_finalizer3(right_value565,sAlignAsExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            come_call_finalizer3(right_value566,sAlignAsExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            if(right_value570) { right_value570 = come_decrement_ref_count2(right_value570, ((struct sNode*)right_value570)->finalize, ((struct sNode*)right_value570)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            return __result325__;
                                                                                            if(exp_305) { exp_305 = come_decrement_ref_count2(exp_305, ((struct sNode*)exp_305)->finalize, ((struct sNode*)exp_305)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
    # 1805 "21obj.c"
    __result326__ = __result_obj__ = ((struct sNode*)(right_value571=string_node_v20(buf,head,head_sline,info)));
    if(right_value571) { right_value571 = come_decrement_ref_count2(right_value571, ((struct sNode*)right_value571)->finalize, ((struct sNode*)right_value571)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result326__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional244;
_Bool _if_conditional245;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "tuple3$3sTypephcharphboolp_finalize"
            # 0 "tuple3$3sTypephcharphboolp_finalize"
            if(_if_conditional244=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional244) {
                # 0 "tuple3$3sTypephcharphboolp_finalize"
                come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 2 "tuple3$3sTypephcharphboolp_finalize"
            # 1 "tuple3$3sTypephcharphboolp_finalize"
            if(_if_conditional245=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional245) {
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static void sNewNode_finalize(struct sNewNode* self){
void* __result_obj__;
_Bool _if_conditional263;
_Bool _if_conditional264;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sNewNode_finalize"
                # 0 "sNewNode_finalize"
                if(_if_conditional263=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional263) {
                    # 0 "sNewNode_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 2 "sNewNode_finalize"
                # 1 "sNewNode_finalize"
                if(_if_conditional264=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional264) {
                    # 1 "sNewNode_finalize"
                    come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct sNewNode* sNewNode_clone(struct sNewNode* self){
void* __result_obj__;
_Bool _if_conditional265;
struct sNewNode* __result232__;
void* right_value365;
struct sNewNode* result_217;
_Bool _if_conditional266;
_Bool _if_conditional267;
void* right_value366;
char* __dec_obj147;
_Bool _if_conditional268;
void* right_value367;
struct sType* __dec_obj148;
struct sNewNode* __result233__;
memset(&__result_obj__, 0, sizeof(void*));
right_value365 = (void*)0;
memset(&result_217, 0, sizeof(struct sNewNode*));
right_value366 = (void*)0;
right_value367 = (void*)0;
                # 3 "sNewNode_clone"
                # 2 "sNewNode_clone"
                if(_if_conditional265=self==(void*)0,                _if_conditional265) {
                    # 2 "sNewNode_clone"
                    __result232__ = __result_obj__ = (void*)0;
                    return __result232__;
                }
                # 3 "sNewNode_clone"
                result_217=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value365=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "sNewNode_clone", 3, "sNewNode"))));
                come_call_finalizer3(right_value365,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "sNewNode_clone"
                # 4 "sNewNode_clone"
                if(_if_conditional266=self!=((void*)0),                _if_conditional266) {
                    # 4 "sNewNode_clone"
                    result_217->sline=self->sline;
                }
                # 6 "sNewNode_clone"
                # 5 "sNewNode_clone"
                if(_if_conditional267=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional267) {
                    # 5 "sNewNode_clone"
                    __dec_obj147=result_217->sname;
                    result_217->sname=(char*)come_increment_ref_count(((char*)(right_value366=string_clone(self->sname))));
                    __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value366 = come_decrement_ref_count2(right_value366, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 7 "sNewNode_clone"
                # 6 "sNewNode_clone"
                if(_if_conditional268=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional268) {
                    # 6 "sNewNode_clone"
                    __dec_obj148=result_217->type;
                    result_217->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value367=sType_clone(self->type))));
                    come_call_finalizer3(__dec_obj148,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value367,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 7 "sNewNode_clone"
                __result233__ = __result_obj__ = result_217;
                come_call_finalizer3(result_217,sNewNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result233__;
                come_call_finalizer3(result_217,sNewNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sTrueNode_finalize(struct sTrueNode* self){
void* __result_obj__;
_Bool _if_conditional270;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sTrueNode_finalize"
                # 0 "sTrueNode_finalize"
                if(_if_conditional270=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional270) {
                    # 0 "sTrueNode_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self){
void* __result_obj__;
_Bool _if_conditional271;
struct sTrueNode* __result235__;
void* right_value371;
struct sTrueNode* result_218;
_Bool _if_conditional272;
_Bool _if_conditional273;
void* right_value372;
char* __dec_obj149;
struct sTrueNode* __result236__;
memset(&__result_obj__, 0, sizeof(void*));
right_value371 = (void*)0;
memset(&result_218, 0, sizeof(struct sTrueNode*));
right_value372 = (void*)0;
                # 3 "sTrueNode_clone"
                # 2 "sTrueNode_clone"
                if(_if_conditional271=self==(void*)0,                _if_conditional271) {
                    # 2 "sTrueNode_clone"
                    __result235__ = __result_obj__ = (void*)0;
                    return __result235__;
                }
                # 3 "sTrueNode_clone"
                result_218=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(right_value371=(struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "sTrueNode_clone", 3, "sTrueNode"))));
                come_call_finalizer3(right_value371,sTrueNode_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "sTrueNode_clone"
                # 4 "sTrueNode_clone"
                if(_if_conditional272=self!=((void*)0),                _if_conditional272) {
                    # 4 "sTrueNode_clone"
                    result_218->sline=self->sline;
                }
                # 6 "sTrueNode_clone"
                # 5 "sTrueNode_clone"
                if(_if_conditional273=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional273) {
                    # 5 "sTrueNode_clone"
                    __dec_obj149=result_218->sname;
                    result_218->sname=(char*)come_increment_ref_count(((char*)(right_value372=string_clone(self->sname))));
                    __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value372 = come_decrement_ref_count2(right_value372, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 6 "sTrueNode_clone"
                __result236__ = __result_obj__ = result_218;
                come_call_finalizer3(result_218,sTrueNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result236__;
                come_call_finalizer3(result_218,sTrueNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sFalseNode_finalize(struct sFalseNode* self){
void* __result_obj__;
_Bool _if_conditional275;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sFalseNode_finalize"
                    # 0 "sFalseNode_finalize"
                    if(_if_conditional275=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional275) {
                        # 0 "sFalseNode_finalize"
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self){
void* __result_obj__;
_Bool _if_conditional276;
struct sFalseNode* __result238__;
void* right_value376;
struct sFalseNode* result_219;
_Bool _if_conditional277;
_Bool _if_conditional278;
void* right_value377;
char* __dec_obj150;
struct sFalseNode* __result239__;
memset(&__result_obj__, 0, sizeof(void*));
right_value376 = (void*)0;
memset(&result_219, 0, sizeof(struct sFalseNode*));
right_value377 = (void*)0;
                    # 3 "sFalseNode_clone"
                    # 2 "sFalseNode_clone"
                    if(_if_conditional276=self==(void*)0,                    _if_conditional276) {
                        # 2 "sFalseNode_clone"
                        __result238__ = __result_obj__ = (void*)0;
                        return __result238__;
                    }
                    # 3 "sFalseNode_clone"
                    result_219=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(right_value376=(struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "sFalseNode_clone", 3, "sFalseNode"))));
                    come_call_finalizer3(right_value376,sFalseNode_finalize, 0, 1, 0, 0, __result_obj__);
                    # 5 "sFalseNode_clone"
                    # 4 "sFalseNode_clone"
                    if(_if_conditional277=self!=((void*)0),                    _if_conditional277) {
                        # 4 "sFalseNode_clone"
                        result_219->sline=self->sline;
                    }
                    # 6 "sFalseNode_clone"
                    # 5 "sFalseNode_clone"
                    if(_if_conditional278=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional278) {
                        # 5 "sFalseNode_clone"
                        __dec_obj150=result_219->sname;
                        result_219->sname=(char*)come_increment_ref_count(((char*)(right_value377=string_clone(self->sname))));
                        __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value377 = come_decrement_ref_count2(right_value377, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 6 "sFalseNode_clone"
                    __result239__ = __result_obj__ = result_219;
                    come_call_finalizer3(result_219,sFalseNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result239__;
                    come_call_finalizer3(result_219,sFalseNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sDeleteNode_finalize(struct sDeleteNode* self){
void* __result_obj__;
_Bool _if_conditional280;
_Bool _if_conditional281;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sDeleteNode_finalize"
                        # 0 "sDeleteNode_finalize"
                        if(_if_conditional280=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional280) {
                            # 0 "sDeleteNode_finalize"
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "sDeleteNode_finalize"
                        # 1 "sDeleteNode_finalize"
                        if(_if_conditional281=self!=((void*)0)&&self->node!=((void*)0),                        _if_conditional281) {
                            # 1 "sDeleteNode_finalize"
                            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self){
void* __result_obj__;
_Bool _if_conditional282;
struct sDeleteNode* __result241__;
void* right_value382;
struct sDeleteNode* result_221;
_Bool _if_conditional283;
_Bool _if_conditional284;
void* right_value383;
char* __dec_obj151;
_Bool _if_conditional285;
void* right_value384;
struct sNode* __dec_obj152;
struct sDeleteNode* __result242__;
memset(&__result_obj__, 0, sizeof(void*));
right_value382 = (void*)0;
memset(&result_221, 0, sizeof(struct sDeleteNode*));
right_value383 = (void*)0;
right_value384 = (void*)0;
                        # 3 "sDeleteNode_clone"
                        # 2 "sDeleteNode_clone"
                        if(_if_conditional282=self==(void*)0,                        _if_conditional282) {
                            # 2 "sDeleteNode_clone"
                            __result241__ = __result_obj__ = (void*)0;
                            return __result241__;
                        }
                        # 3 "sDeleteNode_clone"
                        result_221=(struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(right_value382=(struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "sDeleteNode_clone", 3, "sDeleteNode"))));
                        come_call_finalizer3(right_value382,sDeleteNode_finalize, 0, 1, 0, 0, __result_obj__);
                        # 5 "sDeleteNode_clone"
                        # 4 "sDeleteNode_clone"
                        if(_if_conditional283=self!=((void*)0),                        _if_conditional283) {
                            # 4 "sDeleteNode_clone"
                            result_221->sline=self->sline;
                        }
                        # 6 "sDeleteNode_clone"
                        # 5 "sDeleteNode_clone"
                        if(_if_conditional284=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional284) {
                            # 5 "sDeleteNode_clone"
                            __dec_obj151=result_221->sname;
                            result_221->sname=(char*)come_increment_ref_count(((char*)(right_value383=string_clone(self->sname))));
                            __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value383 = come_decrement_ref_count2(right_value383, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 7 "sDeleteNode_clone"
                        # 6 "sDeleteNode_clone"
                        if(_if_conditional285=self!=((void*)0)&&self->node!=((void*)0),                        _if_conditional285) {
                            # 6 "sDeleteNode_clone"
                            __dec_obj152=result_221->node;
                            result_221->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value384=sNode_clone(self->node))));
                            if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count2(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value384) { right_value384 = come_decrement_ref_count2(right_value384, ((struct sNode*)right_value384)->finalize, ((struct sNode*)right_value384)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 7 "sDeleteNode_clone"
                        __result242__ = __result_obj__ = result_221;
                        come_call_finalizer3(result_221,sDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
                        return __result242__;
                        come_call_finalizer3(result_221,sDeleteNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sForceDeleteNode_finalize(struct sForceDeleteNode* self){
void* __result_obj__;
_Bool _if_conditional287;
_Bool _if_conditional288;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sForceDeleteNode_finalize"
                            # 0 "sForceDeleteNode_finalize"
                            if(_if_conditional287=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional287) {
                                # 0 "sForceDeleteNode_finalize"
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "sForceDeleteNode_finalize"
                            # 1 "sForceDeleteNode_finalize"
                            if(_if_conditional288=self!=((void*)0)&&self->node!=((void*)0),                            _if_conditional288) {
                                # 1 "sForceDeleteNode_finalize"
                                if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct sForceDeleteNode* sForceDeleteNode_clone(struct sForceDeleteNode* self){
void* __result_obj__;
_Bool _if_conditional289;
struct sForceDeleteNode* __result244__;
void* right_value389;
struct sForceDeleteNode* result_223;
_Bool _if_conditional290;
_Bool _if_conditional291;
void* right_value390;
char* __dec_obj153;
_Bool _if_conditional292;
void* right_value391;
struct sNode* __dec_obj154;
struct sForceDeleteNode* __result245__;
memset(&__result_obj__, 0, sizeof(void*));
right_value389 = (void*)0;
memset(&result_223, 0, sizeof(struct sForceDeleteNode*));
right_value390 = (void*)0;
right_value391 = (void*)0;
                            # 3 "sForceDeleteNode_clone"
                            # 2 "sForceDeleteNode_clone"
                            if(_if_conditional289=self==(void*)0,                            _if_conditional289) {
                                # 2 "sForceDeleteNode_clone"
                                __result244__ = __result_obj__ = (void*)0;
                                return __result244__;
                            }
                            # 3 "sForceDeleteNode_clone"
                            result_223=(struct sForceDeleteNode*)come_increment_ref_count(((struct sForceDeleteNode*)(right_value389=(struct sForceDeleteNode*)come_calloc(1, sizeof(struct sForceDeleteNode)*(1), "sForceDeleteNode_clone", 3, "sForceDeleteNode"))));
                            come_call_finalizer3(right_value389,sForceDeleteNode_finalize, 0, 1, 0, 0, __result_obj__);
                            # 5 "sForceDeleteNode_clone"
                            # 4 "sForceDeleteNode_clone"
                            if(_if_conditional290=self!=((void*)0),                            _if_conditional290) {
                                # 4 "sForceDeleteNode_clone"
                                result_223->sline=self->sline;
                            }
                            # 6 "sForceDeleteNode_clone"
                            # 5 "sForceDeleteNode_clone"
                            if(_if_conditional291=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional291) {
                                # 5 "sForceDeleteNode_clone"
                                __dec_obj153=result_223->sname;
                                result_223->sname=(char*)come_increment_ref_count(((char*)(right_value390=string_clone(self->sname))));
                                __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value390 = come_decrement_ref_count2(right_value390, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 7 "sForceDeleteNode_clone"
                            # 6 "sForceDeleteNode_clone"
                            if(_if_conditional292=self!=((void*)0)&&self->node!=((void*)0),                            _if_conditional292) {
                                # 6 "sForceDeleteNode_clone"
                                __dec_obj154=result_223->node;
                                result_223->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value391=sNode_clone(self->node))));
                                if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count2(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value391) { right_value391 = come_decrement_ref_count2(right_value391, ((struct sNode*)right_value391)->finalize, ((struct sNode*)right_value391)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            # 7 "sForceDeleteNode_clone"
                            __result245__ = __result_obj__ = result_223;
                            come_call_finalizer3(result_223,sForceDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result245__;
                            come_call_finalizer3(result_223,sForceDeleteNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sBorrowNode_finalize(struct sBorrowNode* self){
void* __result_obj__;
_Bool _if_conditional294;
_Bool _if_conditional295;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sBorrowNode_finalize"
                                # 0 "sBorrowNode_finalize"
                                if(_if_conditional294=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional294) {
                                    # 0 "sBorrowNode_finalize"
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sBorrowNode_finalize"
                                # 1 "sBorrowNode_finalize"
                                if(_if_conditional295=self!=((void*)0)&&self->node!=((void*)0),                                _if_conditional295) {
                                    # 1 "sBorrowNode_finalize"
                                    if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self){
void* __result_obj__;
_Bool _if_conditional296;
struct sBorrowNode* __result247__;
void* right_value396;
struct sBorrowNode* result_225;
_Bool _if_conditional297;
_Bool _if_conditional298;
void* right_value397;
char* __dec_obj155;
_Bool _if_conditional299;
void* right_value398;
struct sNode* __dec_obj156;
struct sBorrowNode* __result248__;
memset(&__result_obj__, 0, sizeof(void*));
right_value396 = (void*)0;
memset(&result_225, 0, sizeof(struct sBorrowNode*));
right_value397 = (void*)0;
right_value398 = (void*)0;
                                # 3 "sBorrowNode_clone"
                                # 2 "sBorrowNode_clone"
                                if(_if_conditional296=self==(void*)0,                                _if_conditional296) {
                                    # 2 "sBorrowNode_clone"
                                    __result247__ = __result_obj__ = (void*)0;
                                    return __result247__;
                                }
                                # 3 "sBorrowNode_clone"
                                result_225=(struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(right_value396=(struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "sBorrowNode_clone", 3, "sBorrowNode"))));
                                come_call_finalizer3(right_value396,sBorrowNode_finalize, 0, 1, 0, 0, __result_obj__);
                                # 5 "sBorrowNode_clone"
                                # 4 "sBorrowNode_clone"
                                if(_if_conditional297=self!=((void*)0),                                _if_conditional297) {
                                    # 4 "sBorrowNode_clone"
                                    result_225->sline=self->sline;
                                }
                                # 6 "sBorrowNode_clone"
                                # 5 "sBorrowNode_clone"
                                if(_if_conditional298=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional298) {
                                    # 5 "sBorrowNode_clone"
                                    __dec_obj155=result_225->sname;
                                    result_225->sname=(char*)come_increment_ref_count(((char*)(right_value397=string_clone(self->sname))));
                                    __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value397 = come_decrement_ref_count2(right_value397, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 7 "sBorrowNode_clone"
                                # 6 "sBorrowNode_clone"
                                if(_if_conditional299=self!=((void*)0)&&self->node!=((void*)0),                                _if_conditional299) {
                                    # 6 "sBorrowNode_clone"
                                    __dec_obj156=result_225->node;
                                    result_225->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value398=sNode_clone(self->node))));
                                    if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value398) { right_value398 = come_decrement_ref_count2(right_value398, ((struct sNode*)right_value398)->finalize, ((struct sNode*)right_value398)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                # 7 "sBorrowNode_clone"
                                __result248__ = __result_obj__ = result_225;
                                come_call_finalizer3(result_225,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
                                return __result248__;
                                come_call_finalizer3(result_225,sBorrowNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sDelegateNode_finalize(struct sDelegateNode* self){
void* __result_obj__;
_Bool _if_conditional301;
_Bool _if_conditional302;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sDelegateNode_finalize"
                                    # 0 "sDelegateNode_finalize"
                                    if(_if_conditional301=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional301) {
                                        # 0 "sDelegateNode_finalize"
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "sDelegateNode_finalize"
                                    # 1 "sDelegateNode_finalize"
                                    if(_if_conditional302=self!=((void*)0)&&self->node!=((void*)0),                                    _if_conditional302) {
                                        # 1 "sDelegateNode_finalize"
                                        if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static struct sDelegateNode* sDelegateNode_clone(struct sDelegateNode* self){
void* __result_obj__;
_Bool _if_conditional303;
struct sDelegateNode* __result250__;
void* right_value403;
struct sDelegateNode* result_227;
_Bool _if_conditional304;
_Bool _if_conditional305;
void* right_value404;
char* __dec_obj157;
_Bool _if_conditional306;
void* right_value405;
struct sNode* __dec_obj158;
struct sDelegateNode* __result251__;
memset(&__result_obj__, 0, sizeof(void*));
right_value403 = (void*)0;
memset(&result_227, 0, sizeof(struct sDelegateNode*));
right_value404 = (void*)0;
right_value405 = (void*)0;
                                    # 3 "sDelegateNode_clone"
                                    # 2 "sDelegateNode_clone"
                                    if(_if_conditional303=self==(void*)0,                                    _if_conditional303) {
                                        # 2 "sDelegateNode_clone"
                                        __result250__ = __result_obj__ = (void*)0;
                                        return __result250__;
                                    }
                                    # 3 "sDelegateNode_clone"
                                    result_227=(struct sDelegateNode*)come_increment_ref_count(((struct sDelegateNode*)(right_value403=(struct sDelegateNode*)come_calloc(1, sizeof(struct sDelegateNode)*(1), "sDelegateNode_clone", 3, "sDelegateNode"))));
                                    come_call_finalizer3(right_value403,sDelegateNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 5 "sDelegateNode_clone"
                                    # 4 "sDelegateNode_clone"
                                    if(_if_conditional304=self!=((void*)0),                                    _if_conditional304) {
                                        # 4 "sDelegateNode_clone"
                                        result_227->sline=self->sline;
                                    }
                                    # 6 "sDelegateNode_clone"
                                    # 5 "sDelegateNode_clone"
                                    if(_if_conditional305=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional305) {
                                        # 5 "sDelegateNode_clone"
                                        __dec_obj157=result_227->sname;
                                        result_227->sname=(char*)come_increment_ref_count(((char*)(right_value404=string_clone(self->sname))));
                                        __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value404 = come_decrement_ref_count2(right_value404, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 7 "sDelegateNode_clone"
                                    # 6 "sDelegateNode_clone"
                                    if(_if_conditional306=self!=((void*)0)&&self->node!=((void*)0),                                    _if_conditional306) {
                                        # 6 "sDelegateNode_clone"
                                        __dec_obj158=result_227->node;
                                        result_227->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value405=sNode_clone(self->node))));
                                        if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value405) { right_value405 = come_decrement_ref_count2(right_value405, ((struct sNode*)right_value405)->finalize, ((struct sNode*)right_value405)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 7 "sDelegateNode_clone"
                                    __result251__ = __result_obj__ = result_227;
                                    come_call_finalizer3(result_227,sDelegateNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result251__;
                                    come_call_finalizer3(result_227,sDelegateNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sShareNode_finalize(struct sShareNode* self){
void* __result_obj__;
_Bool _if_conditional308;
_Bool _if_conditional309;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "sShareNode_finalize"
                                        # 0 "sShareNode_finalize"
                                        if(_if_conditional308=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional308) {
                                            # 0 "sShareNode_finalize"
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "sShareNode_finalize"
                                        # 1 "sShareNode_finalize"
                                        if(_if_conditional309=self!=((void*)0)&&self->node!=((void*)0),                                        _if_conditional309) {
                                            # 1 "sShareNode_finalize"
                                            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
}

static struct sShareNode* sShareNode_clone(struct sShareNode* self){
void* __result_obj__;
_Bool _if_conditional310;
struct sShareNode* __result253__;
void* right_value410;
struct sShareNode* result_229;
_Bool _if_conditional311;
_Bool _if_conditional312;
void* right_value411;
char* __dec_obj159;
_Bool _if_conditional313;
void* right_value412;
struct sNode* __dec_obj160;
struct sShareNode* __result254__;
memset(&__result_obj__, 0, sizeof(void*));
right_value410 = (void*)0;
memset(&result_229, 0, sizeof(struct sShareNode*));
right_value411 = (void*)0;
right_value412 = (void*)0;
                                        # 3 "sShareNode_clone"
                                        # 2 "sShareNode_clone"
                                        if(_if_conditional310=self==(void*)0,                                        _if_conditional310) {
                                            # 2 "sShareNode_clone"
                                            __result253__ = __result_obj__ = (void*)0;
                                            return __result253__;
                                        }
                                        # 3 "sShareNode_clone"
                                        result_229=(struct sShareNode*)come_increment_ref_count(((struct sShareNode*)(right_value410=(struct sShareNode*)come_calloc(1, sizeof(struct sShareNode)*(1), "sShareNode_clone", 3, "sShareNode"))));
                                        come_call_finalizer3(right_value410,sShareNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 5 "sShareNode_clone"
                                        # 4 "sShareNode_clone"
                                        if(_if_conditional311=self!=((void*)0),                                        _if_conditional311) {
                                            # 4 "sShareNode_clone"
                                            result_229->sline=self->sline;
                                        }
                                        # 6 "sShareNode_clone"
                                        # 5 "sShareNode_clone"
                                        if(_if_conditional312=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional312) {
                                            # 5 "sShareNode_clone"
                                            __dec_obj159=result_229->sname;
                                            result_229->sname=(char*)come_increment_ref_count(((char*)(right_value411=string_clone(self->sname))));
                                            __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value411 = come_decrement_ref_count2(right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        # 7 "sShareNode_clone"
                                        # 6 "sShareNode_clone"
                                        if(_if_conditional313=self!=((void*)0)&&self->node!=((void*)0),                                        _if_conditional313) {
                                            # 6 "sShareNode_clone"
                                            __dec_obj160=result_229->node;
                                            result_229->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value412=sNode_clone(self->node))));
                                            if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value412) { right_value412 = come_decrement_ref_count2(right_value412, ((struct sNode*)right_value412)->finalize, ((struct sNode*)right_value412)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        # 7 "sShareNode_clone"
                                        __result254__ = __result_obj__ = result_229;
                                        come_call_finalizer3(result_229,sShareNode_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result254__;
                                        come_call_finalizer3(result_229,sShareNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sCloneNode_finalize(struct sCloneNode* self){
void* __result_obj__;
_Bool _if_conditional315;
_Bool _if_conditional316;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 1 "sCloneNode_finalize"
                                            # 0 "sCloneNode_finalize"
                                            if(_if_conditional315=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional315) {
                                                # 0 "sCloneNode_finalize"
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            # 2 "sCloneNode_finalize"
                                            # 1 "sCloneNode_finalize"
                                            if(_if_conditional316=self!=((void*)0)&&self->node!=((void*)0),                                            _if_conditional316) {
                                                # 1 "sCloneNode_finalize"
                                                if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
}

static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self){
void* __result_obj__;
_Bool _if_conditional317;
struct sCloneNode* __result256__;
void* right_value417;
struct sCloneNode* result_231;
_Bool _if_conditional318;
_Bool _if_conditional319;
void* right_value418;
char* __dec_obj161;
_Bool _if_conditional320;
void* right_value419;
struct sNode* __dec_obj162;
struct sCloneNode* __result257__;
memset(&__result_obj__, 0, sizeof(void*));
right_value417 = (void*)0;
memset(&result_231, 0, sizeof(struct sCloneNode*));
right_value418 = (void*)0;
right_value419 = (void*)0;
                                            # 3 "sCloneNode_clone"
                                            # 2 "sCloneNode_clone"
                                            if(_if_conditional317=self==(void*)0,                                            _if_conditional317) {
                                                # 2 "sCloneNode_clone"
                                                __result256__ = __result_obj__ = (void*)0;
                                                return __result256__;
                                            }
                                            # 3 "sCloneNode_clone"
                                            result_231=(struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(right_value417=(struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "sCloneNode_clone", 3, "sCloneNode"))));
                                            come_call_finalizer3(right_value417,sCloneNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            # 5 "sCloneNode_clone"
                                            # 4 "sCloneNode_clone"
                                            if(_if_conditional318=self!=((void*)0),                                            _if_conditional318) {
                                                # 4 "sCloneNode_clone"
                                                result_231->sline=self->sline;
                                            }
                                            # 6 "sCloneNode_clone"
                                            # 5 "sCloneNode_clone"
                                            if(_if_conditional319=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional319) {
                                                # 5 "sCloneNode_clone"
                                                __dec_obj161=result_231->sname;
                                                result_231->sname=(char*)come_increment_ref_count(((char*)(right_value418=string_clone(self->sname))));
                                                __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value418 = come_decrement_ref_count2(right_value418, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            # 7 "sCloneNode_clone"
                                            # 6 "sCloneNode_clone"
                                            if(_if_conditional320=self!=((void*)0)&&self->node!=((void*)0),                                            _if_conditional320) {
                                                # 6 "sCloneNode_clone"
                                                __dec_obj162=result_231->node;
                                                result_231->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value419=sNode_clone(self->node))));
                                                if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count2(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value419) { right_value419 = come_decrement_ref_count2(right_value419, ((struct sNode*)right_value419)->finalize, ((struct sNode*)right_value419)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            # 7 "sCloneNode_clone"
                                            __result257__ = __result_obj__ = result_231;
                                            come_call_finalizer3(result_231,sCloneNode_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result257__;
                                            come_call_finalizer3(result_231,sCloneNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sDupeNode_finalize(struct sDupeNode* self){
void* __result_obj__;
_Bool _if_conditional322;
_Bool _if_conditional323;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "sDupeNode_finalize"
                                                # 0 "sDupeNode_finalize"
                                                if(_if_conditional322=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional322) {
                                                    # 0 "sDupeNode_finalize"
                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                # 2 "sDupeNode_finalize"
                                                # 1 "sDupeNode_finalize"
                                                if(_if_conditional323=self!=((void*)0)&&self->node!=((void*)0),                                                _if_conditional323) {
                                                    # 1 "sDupeNode_finalize"
                                                    if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
}

static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self){
void* __result_obj__;
_Bool _if_conditional324;
struct sDupeNode* __result259__;
void* right_value424;
struct sDupeNode* result_233;
_Bool _if_conditional325;
_Bool _if_conditional326;
void* right_value425;
char* __dec_obj163;
_Bool _if_conditional327;
void* right_value426;
struct sNode* __dec_obj164;
struct sDupeNode* __result260__;
memset(&__result_obj__, 0, sizeof(void*));
right_value424 = (void*)0;
memset(&result_233, 0, sizeof(struct sDupeNode*));
right_value425 = (void*)0;
right_value426 = (void*)0;
                                                # 3 "sDupeNode_clone"
                                                # 2 "sDupeNode_clone"
                                                if(_if_conditional324=self==(void*)0,                                                _if_conditional324) {
                                                    # 2 "sDupeNode_clone"
                                                    __result259__ = __result_obj__ = (void*)0;
                                                    return __result259__;
                                                }
                                                # 3 "sDupeNode_clone"
                                                result_233=(struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(right_value424=(struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "sDupeNode_clone", 3, "sDupeNode"))));
                                                come_call_finalizer3(right_value424,sDupeNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                # 5 "sDupeNode_clone"
                                                # 4 "sDupeNode_clone"
                                                if(_if_conditional325=self!=((void*)0),                                                _if_conditional325) {
                                                    # 4 "sDupeNode_clone"
                                                    result_233->sline=self->sline;
                                                }
                                                # 6 "sDupeNode_clone"
                                                # 5 "sDupeNode_clone"
                                                if(_if_conditional326=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional326) {
                                                    # 5 "sDupeNode_clone"
                                                    __dec_obj163=result_233->sname;
                                                    result_233->sname=(char*)come_increment_ref_count(((char*)(right_value425=string_clone(self->sname))));
                                                    __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value425 = come_decrement_ref_count2(right_value425, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                # 7 "sDupeNode_clone"
                                                # 6 "sDupeNode_clone"
                                                if(_if_conditional327=self!=((void*)0)&&self->node!=((void*)0),                                                _if_conditional327) {
                                                    # 6 "sDupeNode_clone"
                                                    __dec_obj164=result_233->node;
                                                    result_233->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value426=sNode_clone(self->node))));
                                                    if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count2(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0, (void*)0); }
                                                    if(right_value426) { right_value426 = come_decrement_ref_count2(right_value426, ((struct sNode*)right_value426)->finalize, ((struct sNode*)right_value426)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                }
                                                # 7 "sDupeNode_clone"
                                                __result260__ = __result_obj__ = result_233;
                                                come_call_finalizer3(result_233,sDupeNode_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result260__;
                                                come_call_finalizer3(result_233,sDupeNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sDummyHeapNode_finalize(struct sDummyHeapNode* self){
void* __result_obj__;
_Bool _if_conditional329;
_Bool _if_conditional330;
memset(&__result_obj__, 0, sizeof(void*));
                                                    # 1 "sDummyHeapNode_finalize"
                                                    # 0 "sDummyHeapNode_finalize"
                                                    if(_if_conditional329=self!=((void*)0)&&self->sname!=((void*)0),                                                    _if_conditional329) {
                                                        # 0 "sDummyHeapNode_finalize"
                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 2 "sDummyHeapNode_finalize"
                                                    # 1 "sDummyHeapNode_finalize"
                                                    if(_if_conditional330=self!=((void*)0)&&self->node!=((void*)0),                                                    _if_conditional330) {
                                                        # 1 "sDummyHeapNode_finalize"
                                                        if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
}

static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self){
void* __result_obj__;
_Bool _if_conditional331;
struct sDummyHeapNode* __result262__;
void* right_value431;
struct sDummyHeapNode* result_235;
_Bool _if_conditional332;
_Bool _if_conditional333;
void* right_value432;
char* __dec_obj165;
_Bool _if_conditional334;
void* right_value433;
struct sNode* __dec_obj166;
struct sDummyHeapNode* __result263__;
memset(&__result_obj__, 0, sizeof(void*));
right_value431 = (void*)0;
memset(&result_235, 0, sizeof(struct sDummyHeapNode*));
right_value432 = (void*)0;
right_value433 = (void*)0;
                                                    # 3 "sDummyHeapNode_clone"
                                                    # 2 "sDummyHeapNode_clone"
                                                    if(_if_conditional331=self==(void*)0,                                                    _if_conditional331) {
                                                        # 2 "sDummyHeapNode_clone"
                                                        __result262__ = __result_obj__ = (void*)0;
                                                        return __result262__;
                                                    }
                                                    # 3 "sDummyHeapNode_clone"
                                                    result_235=(struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(right_value431=(struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "sDummyHeapNode_clone", 3, "sDummyHeapNode"))));
                                                    come_call_finalizer3(right_value431,sDummyHeapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    # 5 "sDummyHeapNode_clone"
                                                    # 4 "sDummyHeapNode_clone"
                                                    if(_if_conditional332=self!=((void*)0),                                                    _if_conditional332) {
                                                        # 4 "sDummyHeapNode_clone"
                                                        result_235->sline=self->sline;
                                                    }
                                                    # 6 "sDummyHeapNode_clone"
                                                    # 5 "sDummyHeapNode_clone"
                                                    if(_if_conditional333=self!=((void*)0)&&self->sname!=((void*)0),                                                    _if_conditional333) {
                                                        # 5 "sDummyHeapNode_clone"
                                                        __dec_obj165=result_235->sname;
                                                        result_235->sname=(char*)come_increment_ref_count(((char*)(right_value432=string_clone(self->sname))));
                                                        __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        right_value432 = come_decrement_ref_count2(right_value432, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    }
                                                    # 7 "sDummyHeapNode_clone"
                                                    # 6 "sDummyHeapNode_clone"
                                                    if(_if_conditional334=self!=((void*)0)&&self->node!=((void*)0),                                                    _if_conditional334) {
                                                        # 6 "sDummyHeapNode_clone"
                                                        __dec_obj166=result_235->node;
                                                        result_235->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value433=sNode_clone(self->node))));
                                                        if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count2(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0, (void*)0); }
                                                        if(right_value433) { right_value433 = come_decrement_ref_count2(right_value433, ((struct sNode*)right_value433)->finalize, ((struct sNode*)right_value433)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    }
                                                    # 7 "sDummyHeapNode_clone"
                                                    __result263__ = __result_obj__ = result_235;
                                                    come_call_finalizer3(result_235,sDummyHeapNode_finalize, 0, 0, 1, 0, (void*)0);
                                                    return __result263__;
                                                    come_call_finalizer3(result_235,sDummyHeapNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sGCIncNode_finalize(struct sGCIncNode* self){
void* __result_obj__;
_Bool _if_conditional336;
_Bool _if_conditional337;
memset(&__result_obj__, 0, sizeof(void*));
                                                        # 1 "sGCIncNode_finalize"
                                                        # 0 "sGCIncNode_finalize"
                                                        if(_if_conditional336=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional336) {
                                                            # 0 "sGCIncNode_finalize"
                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
                                                        # 2 "sGCIncNode_finalize"
                                                        # 1 "sGCIncNode_finalize"
                                                        if(_if_conditional337=self!=((void*)0)&&self->node!=((void*)0),                                                        _if_conditional337) {
                                                            # 1 "sGCIncNode_finalize"
                                                            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
}

static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self){
void* __result_obj__;
_Bool _if_conditional338;
struct sGCIncNode* __result265__;
void* right_value438;
struct sGCIncNode* result_237;
_Bool _if_conditional339;
_Bool _if_conditional340;
void* right_value439;
char* __dec_obj167;
_Bool _if_conditional341;
void* right_value440;
struct sNode* __dec_obj168;
struct sGCIncNode* __result266__;
memset(&__result_obj__, 0, sizeof(void*));
right_value438 = (void*)0;
memset(&result_237, 0, sizeof(struct sGCIncNode*));
right_value439 = (void*)0;
right_value440 = (void*)0;
                                                        # 3 "sGCIncNode_clone"
                                                        # 2 "sGCIncNode_clone"
                                                        if(_if_conditional338=self==(void*)0,                                                        _if_conditional338) {
                                                            # 2 "sGCIncNode_clone"
                                                            __result265__ = __result_obj__ = (void*)0;
                                                            return __result265__;
                                                        }
                                                        # 3 "sGCIncNode_clone"
                                                        result_237=(struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(right_value438=(struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "sGCIncNode_clone", 3, "sGCIncNode"))));
                                                        come_call_finalizer3(right_value438,sGCIncNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 5 "sGCIncNode_clone"
                                                        # 4 "sGCIncNode_clone"
                                                        if(_if_conditional339=self!=((void*)0),                                                        _if_conditional339) {
                                                            # 4 "sGCIncNode_clone"
                                                            result_237->sline=self->sline;
                                                        }
                                                        # 6 "sGCIncNode_clone"
                                                        # 5 "sGCIncNode_clone"
                                                        if(_if_conditional340=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional340) {
                                                            # 5 "sGCIncNode_clone"
                                                            __dec_obj167=result_237->sname;
                                                            result_237->sname=(char*)come_increment_ref_count(((char*)(right_value439=string_clone(self->sname))));
                                                            __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            right_value439 = come_decrement_ref_count2(right_value439, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        # 7 "sGCIncNode_clone"
                                                        # 6 "sGCIncNode_clone"
                                                        if(_if_conditional341=self!=((void*)0)&&self->node!=((void*)0),                                                        _if_conditional341) {
                                                            # 6 "sGCIncNode_clone"
                                                            __dec_obj168=result_237->node;
                                                            result_237->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value440=sNode_clone(self->node))));
                                                            if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count2(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0,0, (void*)0); }
                                                            if(right_value440) { right_value440 = come_decrement_ref_count2(right_value440, ((struct sNode*)right_value440)->finalize, ((struct sNode*)right_value440)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        }
                                                        # 7 "sGCIncNode_clone"
                                                        __result266__ = __result_obj__ = result_237;
                                                        come_call_finalizer3(result_237,sGCIncNode_finalize, 0, 0, 1, 0, (void*)0);
                                                        return __result266__;
                                                        come_call_finalizer3(result_237,sGCIncNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sGCDecNode_finalize(struct sGCDecNode* self){
void* __result_obj__;
_Bool _if_conditional343;
_Bool _if_conditional344;
memset(&__result_obj__, 0, sizeof(void*));
                                                            # 1 "sGCDecNode_finalize"
                                                            # 0 "sGCDecNode_finalize"
                                                            if(_if_conditional343=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional343) {
                                                                # 0 "sGCDecNode_finalize"
                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
                                                            # 2 "sGCDecNode_finalize"
                                                            # 1 "sGCDecNode_finalize"
                                                            if(_if_conditional344=self!=((void*)0)&&self->node!=((void*)0),                                                            _if_conditional344) {
                                                                # 1 "sGCDecNode_finalize"
                                                                if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
}

static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self){
void* __result_obj__;
_Bool _if_conditional345;
struct sGCDecNode* __result268__;
void* right_value445;
struct sGCDecNode* result_239;
_Bool _if_conditional346;
_Bool _if_conditional347;
void* right_value446;
char* __dec_obj169;
_Bool _if_conditional348;
void* right_value447;
struct sNode* __dec_obj170;
struct sGCDecNode* __result269__;
memset(&__result_obj__, 0, sizeof(void*));
right_value445 = (void*)0;
memset(&result_239, 0, sizeof(struct sGCDecNode*));
right_value446 = (void*)0;
right_value447 = (void*)0;
                                                            # 3 "sGCDecNode_clone"
                                                            # 2 "sGCDecNode_clone"
                                                            if(_if_conditional345=self==(void*)0,                                                            _if_conditional345) {
                                                                # 2 "sGCDecNode_clone"
                                                                __result268__ = __result_obj__ = (void*)0;
                                                                return __result268__;
                                                            }
                                                            # 3 "sGCDecNode_clone"
                                                            result_239=(struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(right_value445=(struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "sGCDecNode_clone", 3, "sGCDecNode"))));
                                                            come_call_finalizer3(right_value445,sGCDecNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                            # 5 "sGCDecNode_clone"
                                                            # 4 "sGCDecNode_clone"
                                                            if(_if_conditional346=self!=((void*)0),                                                            _if_conditional346) {
                                                                # 4 "sGCDecNode_clone"
                                                                result_239->sline=self->sline;
                                                            }
                                                            # 6 "sGCDecNode_clone"
                                                            # 5 "sGCDecNode_clone"
                                                            if(_if_conditional347=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional347) {
                                                                # 5 "sGCDecNode_clone"
                                                                __dec_obj169=result_239->sname;
                                                                result_239->sname=(char*)come_increment_ref_count(((char*)(right_value446=string_clone(self->sname))));
                                                                __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value446 = come_decrement_ref_count2(right_value446, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            # 7 "sGCDecNode_clone"
                                                            # 6 "sGCDecNode_clone"
                                                            if(_if_conditional348=self!=((void*)0)&&self->node!=((void*)0),                                                            _if_conditional348) {
                                                                # 6 "sGCDecNode_clone"
                                                                __dec_obj170=result_239->node;
                                                                result_239->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value447=sNode_clone(self->node))));
                                                                if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count2(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0,0, (void*)0); }
                                                                if(right_value447) { right_value447 = come_decrement_ref_count2(right_value447, ((struct sNode*)right_value447)->finalize, ((struct sNode*)right_value447)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            }
                                                            # 7 "sGCDecNode_clone"
                                                            __result269__ = __result_obj__ = result_239;
                                                            come_call_finalizer3(result_239,sGCDecNode_finalize, 0, 0, 1, 0, (void*)0);
                                                            return __result269__;
                                                            come_call_finalizer3(result_239,sGCDecNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sIsHeap_finalize(struct sIsHeap* self){
void* __result_obj__;
_Bool _if_conditional351;
_Bool _if_conditional352;
memset(&__result_obj__, 0, sizeof(void*));
                                                                # 1 "sIsHeap_finalize"
                                                                # 0 "sIsHeap_finalize"
                                                                if(_if_conditional351=self!=((void*)0)&&self->sname!=((void*)0),                                                                _if_conditional351) {
                                                                    # 0 "sIsHeap_finalize"
                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                }
                                                                # 2 "sIsHeap_finalize"
                                                                # 1 "sIsHeap_finalize"
                                                                if(_if_conditional352=self!=((void*)0)&&self->type!=((void*)0),                                                                _if_conditional352) {
                                                                    # 1 "sIsHeap_finalize"
                                                                    come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                }
}

static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self){
void* __result_obj__;
_Bool _if_conditional353;
struct sIsHeap* __result271__;
void* right_value453;
struct sIsHeap* result_244;
_Bool _if_conditional354;
_Bool _if_conditional355;
void* right_value454;
char* __dec_obj171;
_Bool _if_conditional356;
void* right_value455;
struct sType* __dec_obj172;
struct sIsHeap* __result272__;
memset(&__result_obj__, 0, sizeof(void*));
right_value453 = (void*)0;
memset(&result_244, 0, sizeof(struct sIsHeap*));
right_value454 = (void*)0;
right_value455 = (void*)0;
                                                                # 3 "sIsHeap_clone"
                                                                # 2 "sIsHeap_clone"
                                                                if(_if_conditional353=self==(void*)0,                                                                _if_conditional353) {
                                                                    # 2 "sIsHeap_clone"
                                                                    __result271__ = __result_obj__ = (void*)0;
                                                                    return __result271__;
                                                                }
                                                                # 3 "sIsHeap_clone"
                                                                result_244=(struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(right_value453=(struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "sIsHeap_clone", 3, "sIsHeap"))));
                                                                come_call_finalizer3(right_value453,sIsHeap_finalize, 0, 1, 0, 0, __result_obj__);
                                                                # 5 "sIsHeap_clone"
                                                                # 4 "sIsHeap_clone"
                                                                if(_if_conditional354=self!=((void*)0),                                                                _if_conditional354) {
                                                                    # 4 "sIsHeap_clone"
                                                                    result_244->sline=self->sline;
                                                                }
                                                                # 6 "sIsHeap_clone"
                                                                # 5 "sIsHeap_clone"
                                                                if(_if_conditional355=self!=((void*)0)&&self->sname!=((void*)0),                                                                _if_conditional355) {
                                                                    # 5 "sIsHeap_clone"
                                                                    __dec_obj171=result_244->sname;
                                                                    result_244->sname=(char*)come_increment_ref_count(((char*)(right_value454=string_clone(self->sname))));
                                                                    __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value454 = come_decrement_ref_count2(right_value454, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                }
                                                                # 7 "sIsHeap_clone"
                                                                # 6 "sIsHeap_clone"
                                                                if(_if_conditional356=self!=((void*)0)&&self->type!=((void*)0),                                                                _if_conditional356) {
                                                                    # 6 "sIsHeap_clone"
                                                                    __dec_obj172=result_244->type;
                                                                    result_244->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value455=sType_clone(self->type))));
                                                                    come_call_finalizer3(__dec_obj172,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                    come_call_finalizer3(right_value455,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                                }
                                                                # 7 "sIsHeap_clone"
                                                                __result272__ = __result_obj__ = result_244;
                                                                come_call_finalizer3(result_244,sIsHeap_finalize, 0, 0, 1, 0, (void*)0);
                                                                return __result272__;
                                                                come_call_finalizer3(result_244,sIsHeap_finalize, 0, 0, 0, 0, (void*)0);
}

static void sIsPointer_finalize(struct sIsPointer* self){
void* __result_obj__;
_Bool _if_conditional359;
_Bool _if_conditional360;
memset(&__result_obj__, 0, sizeof(void*));
                                                                    # 1 "sIsPointer_finalize"
                                                                    # 0 "sIsPointer_finalize"
                                                                    if(_if_conditional359=self!=((void*)0)&&self->sname!=((void*)0),                                                                    _if_conditional359) {
                                                                        # 0 "sIsPointer_finalize"
                                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                    }
                                                                    # 2 "sIsPointer_finalize"
                                                                    # 1 "sIsPointer_finalize"
                                                                    if(_if_conditional360=self!=((void*)0)&&self->type!=((void*)0),                                                                    _if_conditional360) {
                                                                        # 1 "sIsPointer_finalize"
                                                                        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                    }
}

static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self){
void* __result_obj__;
_Bool _if_conditional361;
struct sIsPointer* __result274__;
void* right_value461;
struct sIsPointer* result_249;
_Bool _if_conditional362;
_Bool _if_conditional363;
void* right_value462;
char* __dec_obj173;
_Bool _if_conditional364;
void* right_value463;
struct sType* __dec_obj174;
struct sIsPointer* __result275__;
memset(&__result_obj__, 0, sizeof(void*));
right_value461 = (void*)0;
memset(&result_249, 0, sizeof(struct sIsPointer*));
right_value462 = (void*)0;
right_value463 = (void*)0;
                                                                    # 3 "sIsPointer_clone"
                                                                    # 2 "sIsPointer_clone"
                                                                    if(_if_conditional361=self==(void*)0,                                                                    _if_conditional361) {
                                                                        # 2 "sIsPointer_clone"
                                                                        __result274__ = __result_obj__ = (void*)0;
                                                                        return __result274__;
                                                                    }
                                                                    # 3 "sIsPointer_clone"
                                                                    result_249=(struct sIsPointer*)come_increment_ref_count(((struct sIsPointer*)(right_value461=(struct sIsPointer*)come_calloc(1, sizeof(struct sIsPointer)*(1), "sIsPointer_clone", 3, "sIsPointer"))));
                                                                    come_call_finalizer3(right_value461,sIsPointer_finalize, 0, 1, 0, 0, __result_obj__);
                                                                    # 5 "sIsPointer_clone"
                                                                    # 4 "sIsPointer_clone"
                                                                    if(_if_conditional362=self!=((void*)0),                                                                    _if_conditional362) {
                                                                        # 4 "sIsPointer_clone"
                                                                        result_249->sline=self->sline;
                                                                    }
                                                                    # 6 "sIsPointer_clone"
                                                                    # 5 "sIsPointer_clone"
                                                                    if(_if_conditional363=self!=((void*)0)&&self->sname!=((void*)0),                                                                    _if_conditional363) {
                                                                        # 5 "sIsPointer_clone"
                                                                        __dec_obj173=result_249->sname;
                                                                        result_249->sname=(char*)come_increment_ref_count(((char*)(right_value462=string_clone(self->sname))));
                                                                        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value462 = come_decrement_ref_count2(right_value462, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    }
                                                                    # 7 "sIsPointer_clone"
                                                                    # 6 "sIsPointer_clone"
                                                                    if(_if_conditional364=self!=((void*)0)&&self->type!=((void*)0),                                                                    _if_conditional364) {
                                                                        # 6 "sIsPointer_clone"
                                                                        __dec_obj174=result_249->type;
                                                                        result_249->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value463=sType_clone(self->type))));
                                                                        come_call_finalizer3(__dec_obj174,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                        come_call_finalizer3(right_value463,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                                    }
                                                                    # 7 "sIsPointer_clone"
                                                                    __result275__ = __result_obj__ = result_249;
                                                                    come_call_finalizer3(result_249,sIsPointer_finalize, 0, 0, 1, 0, (void*)0);
                                                                    return __result275__;
                                                                    come_call_finalizer3(result_249,sIsPointer_finalize, 0, 0, 0, 0, (void*)0);
}

static void sSizeOfNode_finalize(struct sSizeOfNode* self){
void* __result_obj__;
_Bool _if_conditional402;
_Bool _if_conditional403;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                # 1 "sSizeOfNode_finalize"
                                                                                # 0 "sSizeOfNode_finalize"
                                                                                if(_if_conditional402=self!=((void*)0)&&self->sname!=((void*)0),                                                                                _if_conditional402) {
                                                                                    # 0 "sSizeOfNode_finalize"
                                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                # 2 "sSizeOfNode_finalize"
                                                                                # 1 "sSizeOfNode_finalize"
                                                                                if(_if_conditional403=self!=((void*)0)&&self->type!=((void*)0),                                                                                _if_conditional403) {
                                                                                    # 1 "sSizeOfNode_finalize"
                                                                                    come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                }
}

static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self){
void* __result_obj__;
_Bool _if_conditional404;
struct sSizeOfNode* __result296__;
void* right_value500;
struct sSizeOfNode* result_264;
_Bool _if_conditional405;
_Bool _if_conditional406;
void* right_value501;
char* __dec_obj181;
_Bool _if_conditional407;
void* right_value502;
struct sType* __dec_obj182;
struct sSizeOfNode* __result297__;
memset(&__result_obj__, 0, sizeof(void*));
right_value500 = (void*)0;
memset(&result_264, 0, sizeof(struct sSizeOfNode*));
right_value501 = (void*)0;
right_value502 = (void*)0;
                                                                                # 3 "sSizeOfNode_clone"
                                                                                # 2 "sSizeOfNode_clone"
                                                                                if(_if_conditional404=self==(void*)0,                                                                                _if_conditional404) {
                                                                                    # 2 "sSizeOfNode_clone"
                                                                                    __result296__ = __result_obj__ = (void*)0;
                                                                                    return __result296__;
                                                                                }
                                                                                # 3 "sSizeOfNode_clone"
                                                                                result_264=(struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(right_value500=(struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "sSizeOfNode_clone", 3, "sSizeOfNode"))));
                                                                                come_call_finalizer3(right_value500,sSizeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                # 5 "sSizeOfNode_clone"
                                                                                # 4 "sSizeOfNode_clone"
                                                                                if(_if_conditional405=self!=((void*)0),                                                                                _if_conditional405) {
                                                                                    # 4 "sSizeOfNode_clone"
                                                                                    result_264->sline=self->sline;
                                                                                }
                                                                                # 6 "sSizeOfNode_clone"
                                                                                # 5 "sSizeOfNode_clone"
                                                                                if(_if_conditional406=self!=((void*)0)&&self->sname!=((void*)0),                                                                                _if_conditional406) {
                                                                                    # 5 "sSizeOfNode_clone"
                                                                                    __dec_obj181=result_264->sname;
                                                                                    result_264->sname=(char*)come_increment_ref_count(((char*)(right_value501=string_clone(self->sname))));
                                                                                    __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value501 = come_decrement_ref_count2(right_value501, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                # 7 "sSizeOfNode_clone"
                                                                                # 6 "sSizeOfNode_clone"
                                                                                if(_if_conditional407=self!=((void*)0)&&self->type!=((void*)0),                                                                                _if_conditional407) {
                                                                                    # 6 "sSizeOfNode_clone"
                                                                                    __dec_obj182=result_264->type;
                                                                                    result_264->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value502=sType_clone(self->type))));
                                                                                    come_call_finalizer3(__dec_obj182,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    come_call_finalizer3(right_value502,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                # 7 "sSizeOfNode_clone"
                                                                                __result297__ = __result_obj__ = result_264;
                                                                                come_call_finalizer3(result_264,sSizeOfNode_finalize, 0, 0, 1, 0, (void*)0);
                                                                                return __result297__;
                                                                                come_call_finalizer3(result_264,sSizeOfNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional408;
_Bool _if_conditional409;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                # 1 "sSizeOfExpNode_finalize"
                                                                                # 0 "sSizeOfExpNode_finalize"
                                                                                if(_if_conditional408=self!=((void*)0)&&self->sname!=((void*)0),                                                                                _if_conditional408) {
                                                                                    # 0 "sSizeOfExpNode_finalize"
                                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                # 2 "sSizeOfExpNode_finalize"
                                                                                # 1 "sSizeOfExpNode_finalize"
                                                                                if(_if_conditional409=self!=((void*)0)&&self->exp!=((void*)0),                                                                                _if_conditional409) {
                                                                                    # 1 "sSizeOfExpNode_finalize"
                                                                                    if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                }
}

static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional410;
struct sSizeOfExpNode* __result299__;
void* right_value507;
struct sSizeOfExpNode* result_266;
_Bool _if_conditional411;
_Bool _if_conditional412;
void* right_value508;
char* __dec_obj183;
_Bool _if_conditional413;
void* right_value509;
struct sNode* __dec_obj184;
struct sSizeOfExpNode* __result300__;
memset(&__result_obj__, 0, sizeof(void*));
right_value507 = (void*)0;
memset(&result_266, 0, sizeof(struct sSizeOfExpNode*));
right_value508 = (void*)0;
right_value509 = (void*)0;
                                                                                # 3 "sSizeOfExpNode_clone"
                                                                                # 2 "sSizeOfExpNode_clone"
                                                                                if(_if_conditional410=self==(void*)0,                                                                                _if_conditional410) {
                                                                                    # 2 "sSizeOfExpNode_clone"
                                                                                    __result299__ = __result_obj__ = (void*)0;
                                                                                    return __result299__;
                                                                                }
                                                                                # 3 "sSizeOfExpNode_clone"
                                                                                result_266=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(right_value507=(struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "sSizeOfExpNode_clone", 3, "sSizeOfExpNode"))));
                                                                                come_call_finalizer3(right_value507,sSizeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                # 5 "sSizeOfExpNode_clone"
                                                                                # 4 "sSizeOfExpNode_clone"
                                                                                if(_if_conditional411=self!=((void*)0),                                                                                _if_conditional411) {
                                                                                    # 4 "sSizeOfExpNode_clone"
                                                                                    result_266->sline=self->sline;
                                                                                }
                                                                                # 6 "sSizeOfExpNode_clone"
                                                                                # 5 "sSizeOfExpNode_clone"
                                                                                if(_if_conditional412=self!=((void*)0)&&self->sname!=((void*)0),                                                                                _if_conditional412) {
                                                                                    # 5 "sSizeOfExpNode_clone"
                                                                                    __dec_obj183=result_266->sname;
                                                                                    result_266->sname=(char*)come_increment_ref_count(((char*)(right_value508=string_clone(self->sname))));
                                                                                    __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value508 = come_decrement_ref_count2(right_value508, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                # 7 "sSizeOfExpNode_clone"
                                                                                # 6 "sSizeOfExpNode_clone"
                                                                                if(_if_conditional413=self!=((void*)0)&&self->exp!=((void*)0),                                                                                _if_conditional413) {
                                                                                    # 6 "sSizeOfExpNode_clone"
                                                                                    __dec_obj184=result_266->exp;
                                                                                    result_266->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value509=sNode_clone(self->exp))));
                                                                                    if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count2(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                    if(right_value509) { right_value509 = come_decrement_ref_count2(right_value509, ((struct sNode*)right_value509)->finalize, ((struct sNode*)right_value509)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                }
                                                                                # 7 "sSizeOfExpNode_clone"
                                                                                __result300__ = __result_obj__ = result_266;
                                                                                come_call_finalizer3(result_266,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
                                                                                return __result300__;
                                                                                come_call_finalizer3(result_266,sSizeOfExpNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sTypeOfNode_finalize(struct sTypeOfNode* self){
void* __result_obj__;
_Bool _if_conditional419;
_Bool _if_conditional420;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                    # 1 "sTypeOfNode_finalize"
                                                                                    # 0 "sTypeOfNode_finalize"
                                                                                    if(_if_conditional419=self!=((void*)0)&&self->sname!=((void*)0),                                                                                    _if_conditional419) {
                                                                                        # 0 "sTypeOfNode_finalize"
                                                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    }
                                                                                    # 2 "sTypeOfNode_finalize"
                                                                                    # 1 "sTypeOfNode_finalize"
                                                                                    if(_if_conditional420=self!=((void*)0)&&self->type!=((void*)0),                                                                                    _if_conditional420) {
                                                                                        # 1 "sTypeOfNode_finalize"
                                                                                        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    }
}

static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self){
void* __result_obj__;
_Bool _if_conditional421;
struct sTypeOfNode* __result302__;
void* right_value515;
struct sTypeOfNode* result_274;
_Bool _if_conditional422;
_Bool _if_conditional423;
void* right_value516;
char* __dec_obj185;
_Bool _if_conditional424;
void* right_value517;
struct sType* __dec_obj186;
struct sTypeOfNode* __result303__;
memset(&__result_obj__, 0, sizeof(void*));
right_value515 = (void*)0;
memset(&result_274, 0, sizeof(struct sTypeOfNode*));
right_value516 = (void*)0;
right_value517 = (void*)0;
                                                                                    # 3 "sTypeOfNode_clone"
                                                                                    # 2 "sTypeOfNode_clone"
                                                                                    if(_if_conditional421=self==(void*)0,                                                                                    _if_conditional421) {
                                                                                        # 2 "sTypeOfNode_clone"
                                                                                        __result302__ = __result_obj__ = (void*)0;
                                                                                        return __result302__;
                                                                                    }
                                                                                    # 3 "sTypeOfNode_clone"
                                                                                    result_274=(struct sTypeOfNode*)come_increment_ref_count(((struct sTypeOfNode*)(right_value515=(struct sTypeOfNode*)come_calloc(1, sizeof(struct sTypeOfNode)*(1), "sTypeOfNode_clone", 3, "sTypeOfNode"))));
                                                                                    come_call_finalizer3(right_value515,sTypeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    # 5 "sTypeOfNode_clone"
                                                                                    # 4 "sTypeOfNode_clone"
                                                                                    if(_if_conditional422=self!=((void*)0),                                                                                    _if_conditional422) {
                                                                                        # 4 "sTypeOfNode_clone"
                                                                                        result_274->sline=self->sline;
                                                                                    }
                                                                                    # 6 "sTypeOfNode_clone"
                                                                                    # 5 "sTypeOfNode_clone"
                                                                                    if(_if_conditional423=self!=((void*)0)&&self->sname!=((void*)0),                                                                                    _if_conditional423) {
                                                                                        # 5 "sTypeOfNode_clone"
                                                                                        __dec_obj185=result_274->sname;
                                                                                        result_274->sname=(char*)come_increment_ref_count(((char*)(right_value516=string_clone(self->sname))));
                                                                                        __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                        right_value516 = come_decrement_ref_count2(right_value516, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    }
                                                                                    # 7 "sTypeOfNode_clone"
                                                                                    # 6 "sTypeOfNode_clone"
                                                                                    if(_if_conditional424=self!=((void*)0)&&self->type!=((void*)0),                                                                                    _if_conditional424) {
                                                                                        # 6 "sTypeOfNode_clone"
                                                                                        __dec_obj186=result_274->type;
                                                                                        result_274->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value517=sType_clone(self->type))));
                                                                                        come_call_finalizer3(__dec_obj186,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                        come_call_finalizer3(right_value517,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    }
                                                                                    # 7 "sTypeOfNode_clone"
                                                                                    __result303__ = __result_obj__ = result_274;
                                                                                    come_call_finalizer3(result_274,sTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
                                                                                    return __result303__;
                                                                                    come_call_finalizer3(result_274,sTypeOfNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional425;
_Bool _if_conditional426;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                    # 1 "sTypeOfExpNode_finalize"
                                                                                    # 0 "sTypeOfExpNode_finalize"
                                                                                    if(_if_conditional425=self!=((void*)0)&&self->sname!=((void*)0),                                                                                    _if_conditional425) {
                                                                                        # 0 "sTypeOfExpNode_finalize"
                                                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    }
                                                                                    # 2 "sTypeOfExpNode_finalize"
                                                                                    # 1 "sTypeOfExpNode_finalize"
                                                                                    if(_if_conditional426=self!=((void*)0)&&self->exp!=((void*)0),                                                                                    _if_conditional426) {
                                                                                        # 1 "sTypeOfExpNode_finalize"
                                                                                        if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    }
}

static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional427;
struct sTypeOfExpNode* __result305__;
void* right_value522;
struct sTypeOfExpNode* result_276;
_Bool _if_conditional428;
_Bool _if_conditional429;
void* right_value523;
char* __dec_obj187;
_Bool _if_conditional430;
void* right_value524;
struct sNode* __dec_obj188;
struct sTypeOfExpNode* __result306__;
memset(&__result_obj__, 0, sizeof(void*));
right_value522 = (void*)0;
memset(&result_276, 0, sizeof(struct sTypeOfExpNode*));
right_value523 = (void*)0;
right_value524 = (void*)0;
                                                                                    # 3 "sTypeOfExpNode_clone"
                                                                                    # 2 "sTypeOfExpNode_clone"
                                                                                    if(_if_conditional427=self==(void*)0,                                                                                    _if_conditional427) {
                                                                                        # 2 "sTypeOfExpNode_clone"
                                                                                        __result305__ = __result_obj__ = (void*)0;
                                                                                        return __result305__;
                                                                                    }
                                                                                    # 3 "sTypeOfExpNode_clone"
                                                                                    result_276=(struct sTypeOfExpNode*)come_increment_ref_count(((struct sTypeOfExpNode*)(right_value522=(struct sTypeOfExpNode*)come_calloc(1, sizeof(struct sTypeOfExpNode)*(1), "sTypeOfExpNode_clone", 3, "sTypeOfExpNode"))));
                                                                                    come_call_finalizer3(right_value522,sTypeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    # 5 "sTypeOfExpNode_clone"
                                                                                    # 4 "sTypeOfExpNode_clone"
                                                                                    if(_if_conditional428=self!=((void*)0),                                                                                    _if_conditional428) {
                                                                                        # 4 "sTypeOfExpNode_clone"
                                                                                        result_276->sline=self->sline;
                                                                                    }
                                                                                    # 6 "sTypeOfExpNode_clone"
                                                                                    # 5 "sTypeOfExpNode_clone"
                                                                                    if(_if_conditional429=self!=((void*)0)&&self->sname!=((void*)0),                                                                                    _if_conditional429) {
                                                                                        # 5 "sTypeOfExpNode_clone"
                                                                                        __dec_obj187=result_276->sname;
                                                                                        result_276->sname=(char*)come_increment_ref_count(((char*)(right_value523=string_clone(self->sname))));
                                                                                        __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                        right_value523 = come_decrement_ref_count2(right_value523, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    }
                                                                                    # 7 "sTypeOfExpNode_clone"
                                                                                    # 6 "sTypeOfExpNode_clone"
                                                                                    if(_if_conditional430=self!=((void*)0)&&self->exp!=((void*)0),                                                                                    _if_conditional430) {
                                                                                        # 6 "sTypeOfExpNode_clone"
                                                                                        __dec_obj188=result_276->exp;
                                                                                        result_276->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value524=sNode_clone(self->exp))));
                                                                                        if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count2(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                        if(right_value524) { right_value524 = come_decrement_ref_count2(right_value524, ((struct sNode*)right_value524)->finalize, ((struct sNode*)right_value524)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    }
                                                                                    # 7 "sTypeOfExpNode_clone"
                                                                                    __result306__ = __result_obj__ = result_276;
                                                                                    come_call_finalizer3(result_276,sTypeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
                                                                                    return __result306__;
                                                                                    come_call_finalizer3(result_276,sTypeOfExpNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sAlignOfNode_finalize(struct sAlignOfNode* self){
void* __result_obj__;
_Bool _if_conditional436;
_Bool _if_conditional437;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                        # 1 "sAlignOfNode_finalize"
                                                                                        # 0 "sAlignOfNode_finalize"
                                                                                        if(_if_conditional436=self!=((void*)0)&&self->sname!=((void*)0),                                                                                        _if_conditional436) {
                                                                                            # 0 "sAlignOfNode_finalize"
                                                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        # 2 "sAlignOfNode_finalize"
                                                                                        # 1 "sAlignOfNode_finalize"
                                                                                        if(_if_conditional437=self!=((void*)0)&&self->type!=((void*)0),                                                                                        _if_conditional437) {
                                                                                            # 1 "sAlignOfNode_finalize"
                                                                                            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                        }
}

static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self){
void* __result_obj__;
_Bool _if_conditional438;
struct sAlignOfNode* __result308__;
void* right_value530;
struct sAlignOfNode* result_284;
_Bool _if_conditional439;
_Bool _if_conditional440;
void* right_value531;
char* __dec_obj189;
_Bool _if_conditional441;
void* right_value532;
struct sType* __dec_obj190;
struct sAlignOfNode* __result309__;
memset(&__result_obj__, 0, sizeof(void*));
right_value530 = (void*)0;
memset(&result_284, 0, sizeof(struct sAlignOfNode*));
right_value531 = (void*)0;
right_value532 = (void*)0;
                                                                                        # 3 "sAlignOfNode_clone"
                                                                                        # 2 "sAlignOfNode_clone"
                                                                                        if(_if_conditional438=self==(void*)0,                                                                                        _if_conditional438) {
                                                                                            # 2 "sAlignOfNode_clone"
                                                                                            __result308__ = __result_obj__ = (void*)0;
                                                                                            return __result308__;
                                                                                        }
                                                                                        # 3 "sAlignOfNode_clone"
                                                                                        result_284=(struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(right_value530=(struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "sAlignOfNode_clone", 3, "sAlignOfNode"))));
                                                                                        come_call_finalizer3(right_value530,sAlignOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        # 5 "sAlignOfNode_clone"
                                                                                        # 4 "sAlignOfNode_clone"
                                                                                        if(_if_conditional439=self!=((void*)0),                                                                                        _if_conditional439) {
                                                                                            # 4 "sAlignOfNode_clone"
                                                                                            result_284->sline=self->sline;
                                                                                        }
                                                                                        # 6 "sAlignOfNode_clone"
                                                                                        # 5 "sAlignOfNode_clone"
                                                                                        if(_if_conditional440=self!=((void*)0)&&self->sname!=((void*)0),                                                                                        _if_conditional440) {
                                                                                            # 5 "sAlignOfNode_clone"
                                                                                            __dec_obj189=result_284->sname;
                                                                                            result_284->sname=(char*)come_increment_ref_count(((char*)(right_value531=string_clone(self->sname))));
                                                                                            __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                            right_value531 = come_decrement_ref_count2(right_value531, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                        }
                                                                                        # 7 "sAlignOfNode_clone"
                                                                                        # 6 "sAlignOfNode_clone"
                                                                                        if(_if_conditional441=self!=((void*)0)&&self->type!=((void*)0),                                                                                        _if_conditional441) {
                                                                                            # 6 "sAlignOfNode_clone"
                                                                                            __dec_obj190=result_284->type;
                                                                                            result_284->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value532=sType_clone(self->type))));
                                                                                            come_call_finalizer3(__dec_obj190,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                            come_call_finalizer3(right_value532,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        }
                                                                                        # 7 "sAlignOfNode_clone"
                                                                                        __result309__ = __result_obj__ = result_284;
                                                                                        come_call_finalizer3(result_284,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
                                                                                        return __result309__;
                                                                                        come_call_finalizer3(result_284,sAlignOfNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional442;
_Bool _if_conditional443;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                        # 1 "sAlignOfExpNode_finalize"
                                                                                        # 0 "sAlignOfExpNode_finalize"
                                                                                        if(_if_conditional442=self!=((void*)0)&&self->sname!=((void*)0),                                                                                        _if_conditional442) {
                                                                                            # 0 "sAlignOfExpNode_finalize"
                                                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        # 2 "sAlignOfExpNode_finalize"
                                                                                        # 1 "sAlignOfExpNode_finalize"
                                                                                        if(_if_conditional443=self!=((void*)0)&&self->exp!=((void*)0),                                                                                        _if_conditional443) {
                                                                                            # 1 "sAlignOfExpNode_finalize"
                                                                                            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                        }
}

static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional444;
struct sAlignOfExpNode* __result311__;
void* right_value537;
struct sAlignOfExpNode* result_286;
_Bool _if_conditional445;
_Bool _if_conditional446;
void* right_value538;
char* __dec_obj191;
_Bool _if_conditional447;
void* right_value539;
struct sNode* __dec_obj192;
struct sAlignOfExpNode* __result312__;
memset(&__result_obj__, 0, sizeof(void*));
right_value537 = (void*)0;
memset(&result_286, 0, sizeof(struct sAlignOfExpNode*));
right_value538 = (void*)0;
right_value539 = (void*)0;
                                                                                        # 3 "sAlignOfExpNode_clone"
                                                                                        # 2 "sAlignOfExpNode_clone"
                                                                                        if(_if_conditional444=self==(void*)0,                                                                                        _if_conditional444) {
                                                                                            # 2 "sAlignOfExpNode_clone"
                                                                                            __result311__ = __result_obj__ = (void*)0;
                                                                                            return __result311__;
                                                                                        }
                                                                                        # 3 "sAlignOfExpNode_clone"
                                                                                        result_286=(struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(right_value537=(struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "sAlignOfExpNode_clone", 3, "sAlignOfExpNode"))));
                                                                                        come_call_finalizer3(right_value537,sAlignOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        # 5 "sAlignOfExpNode_clone"
                                                                                        # 4 "sAlignOfExpNode_clone"
                                                                                        if(_if_conditional445=self!=((void*)0),                                                                                        _if_conditional445) {
                                                                                            # 4 "sAlignOfExpNode_clone"
                                                                                            result_286->sline=self->sline;
                                                                                        }
                                                                                        # 6 "sAlignOfExpNode_clone"
                                                                                        # 5 "sAlignOfExpNode_clone"
                                                                                        if(_if_conditional446=self!=((void*)0)&&self->sname!=((void*)0),                                                                                        _if_conditional446) {
                                                                                            # 5 "sAlignOfExpNode_clone"
                                                                                            __dec_obj191=result_286->sname;
                                                                                            result_286->sname=(char*)come_increment_ref_count(((char*)(right_value538=string_clone(self->sname))));
                                                                                            __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                            right_value538 = come_decrement_ref_count2(right_value538, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                        }
                                                                                        # 7 "sAlignOfExpNode_clone"
                                                                                        # 6 "sAlignOfExpNode_clone"
                                                                                        if(_if_conditional447=self!=((void*)0)&&self->exp!=((void*)0),                                                                                        _if_conditional447) {
                                                                                            # 6 "sAlignOfExpNode_clone"
                                                                                            __dec_obj192=result_286->exp;
                                                                                            result_286->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value539=sNode_clone(self->exp))));
                                                                                            if(__dec_obj192) { __dec_obj192 = come_decrement_ref_count2(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                            if(right_value539) { right_value539 = come_decrement_ref_count2(right_value539, ((struct sNode*)right_value539)->finalize, ((struct sNode*)right_value539)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        }
                                                                                        # 7 "sAlignOfExpNode_clone"
                                                                                        __result312__ = __result_obj__ = result_286;
                                                                                        come_call_finalizer3(result_286,sAlignOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
                                                                                        return __result312__;
                                                                                        come_call_finalizer3(result_286,sAlignOfExpNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sAlignOfNode2_finalize(struct sAlignOfNode2* self){
void* __result_obj__;
_Bool _if_conditional453;
_Bool _if_conditional454;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                            # 1 "sAlignOfNode2_finalize"
                                                                                            # 0 "sAlignOfNode2_finalize"
                                                                                            if(_if_conditional453=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional453) {
                                                                                                # 0 "sAlignOfNode2_finalize"
                                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
                                                                                            # 2 "sAlignOfNode2_finalize"
                                                                                            # 1 "sAlignOfNode2_finalize"
                                                                                            if(_if_conditional454=self!=((void*)0)&&self->type!=((void*)0),                                                                                            _if_conditional454) {
                                                                                                # 1 "sAlignOfNode2_finalize"
                                                                                                come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                            }
}

static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self){
void* __result_obj__;
_Bool _if_conditional455;
struct sAlignOfNode2* __result314__;
void* right_value545;
struct sAlignOfNode2* result_294;
_Bool _if_conditional456;
_Bool _if_conditional457;
void* right_value546;
char* __dec_obj193;
_Bool _if_conditional458;
void* right_value547;
struct sType* __dec_obj194;
struct sAlignOfNode2* __result315__;
memset(&__result_obj__, 0, sizeof(void*));
right_value545 = (void*)0;
memset(&result_294, 0, sizeof(struct sAlignOfNode2*));
right_value546 = (void*)0;
right_value547 = (void*)0;
                                                                                            # 3 "sAlignOfNode2_clone"
                                                                                            # 2 "sAlignOfNode2_clone"
                                                                                            if(_if_conditional455=self==(void*)0,                                                                                            _if_conditional455) {
                                                                                                # 2 "sAlignOfNode2_clone"
                                                                                                __result314__ = __result_obj__ = (void*)0;
                                                                                                return __result314__;
                                                                                            }
                                                                                            # 3 "sAlignOfNode2_clone"
                                                                                            result_294=(struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(right_value545=(struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "sAlignOfNode2_clone", 3, "sAlignOfNode2"))));
                                                                                            come_call_finalizer3(right_value545,sAlignOfNode2_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            # 5 "sAlignOfNode2_clone"
                                                                                            # 4 "sAlignOfNode2_clone"
                                                                                            if(_if_conditional456=self!=((void*)0),                                                                                            _if_conditional456) {
                                                                                                # 4 "sAlignOfNode2_clone"
                                                                                                result_294->sline=self->sline;
                                                                                            }
                                                                                            # 6 "sAlignOfNode2_clone"
                                                                                            # 5 "sAlignOfNode2_clone"
                                                                                            if(_if_conditional457=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional457) {
                                                                                                # 5 "sAlignOfNode2_clone"
                                                                                                __dec_obj193=result_294->sname;
                                                                                                result_294->sname=(char*)come_increment_ref_count(((char*)(right_value546=string_clone(self->sname))));
                                                                                                __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value546 = come_decrement_ref_count2(right_value546, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            # 7 "sAlignOfNode2_clone"
                                                                                            # 6 "sAlignOfNode2_clone"
                                                                                            if(_if_conditional458=self!=((void*)0)&&self->type!=((void*)0),                                                                                            _if_conditional458) {
                                                                                                # 6 "sAlignOfNode2_clone"
                                                                                                __dec_obj194=result_294->type;
                                                                                                result_294->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value547=sType_clone(self->type))));
                                                                                                come_call_finalizer3(__dec_obj194,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                                come_call_finalizer3(right_value547,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            # 7 "sAlignOfNode2_clone"
                                                                                            __result315__ = __result_obj__ = result_294;
                                                                                            come_call_finalizer3(result_294,sAlignOfNode2_finalize, 0, 0, 1, 0, (void*)0);
                                                                                            return __result315__;
                                                                                            come_call_finalizer3(result_294,sAlignOfNode2_finalize, 0, 0, 0, 0, (void*)0);
}

static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self){
void* __result_obj__;
_Bool _if_conditional459;
_Bool _if_conditional460;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                            # 1 "sAlignOfExpNode2_finalize"
                                                                                            # 0 "sAlignOfExpNode2_finalize"
                                                                                            if(_if_conditional459=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional459) {
                                                                                                # 0 "sAlignOfExpNode2_finalize"
                                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
                                                                                            # 2 "sAlignOfExpNode2_finalize"
                                                                                            # 1 "sAlignOfExpNode2_finalize"
                                                                                            if(_if_conditional460=self!=((void*)0)&&self->exp!=((void*)0),                                                                                            _if_conditional460) {
                                                                                                # 1 "sAlignOfExpNode2_finalize"
                                                                                                if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                            }
}

static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self){
void* __result_obj__;
_Bool _if_conditional461;
struct sAlignOfExpNode2* __result317__;
void* right_value552;
struct sAlignOfExpNode2* result_296;
_Bool _if_conditional462;
_Bool _if_conditional463;
void* right_value553;
char* __dec_obj195;
_Bool _if_conditional464;
void* right_value554;
struct sNode* __dec_obj196;
struct sAlignOfExpNode2* __result318__;
memset(&__result_obj__, 0, sizeof(void*));
right_value552 = (void*)0;
memset(&result_296, 0, sizeof(struct sAlignOfExpNode2*));
right_value553 = (void*)0;
right_value554 = (void*)0;
                                                                                            # 3 "sAlignOfExpNode2_clone"
                                                                                            # 2 "sAlignOfExpNode2_clone"
                                                                                            if(_if_conditional461=self==(void*)0,                                                                                            _if_conditional461) {
                                                                                                # 2 "sAlignOfExpNode2_clone"
                                                                                                __result317__ = __result_obj__ = (void*)0;
                                                                                                return __result317__;
                                                                                            }
                                                                                            # 3 "sAlignOfExpNode2_clone"
                                                                                            result_296=(struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(right_value552=(struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "sAlignOfExpNode2_clone", 3, "sAlignOfExpNode2"))));
                                                                                            come_call_finalizer3(right_value552,sAlignOfExpNode2_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            # 5 "sAlignOfExpNode2_clone"
                                                                                            # 4 "sAlignOfExpNode2_clone"
                                                                                            if(_if_conditional462=self!=((void*)0),                                                                                            _if_conditional462) {
                                                                                                # 4 "sAlignOfExpNode2_clone"
                                                                                                result_296->sline=self->sline;
                                                                                            }
                                                                                            # 6 "sAlignOfExpNode2_clone"
                                                                                            # 5 "sAlignOfExpNode2_clone"
                                                                                            if(_if_conditional463=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional463) {
                                                                                                # 5 "sAlignOfExpNode2_clone"
                                                                                                __dec_obj195=result_296->sname;
                                                                                                result_296->sname=(char*)come_increment_ref_count(((char*)(right_value553=string_clone(self->sname))));
                                                                                                __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value553 = come_decrement_ref_count2(right_value553, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            # 7 "sAlignOfExpNode2_clone"
                                                                                            # 6 "sAlignOfExpNode2_clone"
                                                                                            if(_if_conditional464=self!=((void*)0)&&self->exp!=((void*)0),                                                                                            _if_conditional464) {
                                                                                                # 6 "sAlignOfExpNode2_clone"
                                                                                                __dec_obj196=result_296->exp;
                                                                                                result_296->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value554=sNode_clone(self->exp))));
                                                                                                if(__dec_obj196) { __dec_obj196 = come_decrement_ref_count2(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                if(right_value554) { right_value554 = come_decrement_ref_count2(right_value554, ((struct sNode*)right_value554)->finalize, ((struct sNode*)right_value554)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            }
                                                                                            # 7 "sAlignOfExpNode2_clone"
                                                                                            __result318__ = __result_obj__ = result_296;
                                                                                            come_call_finalizer3(result_296,sAlignOfExpNode2_finalize, 0, 0, 1, 0, (void*)0);
                                                                                            return __result318__;
                                                                                            come_call_finalizer3(result_296,sAlignOfExpNode2_finalize, 0, 0, 0, 0, (void*)0);
}

static void sAlignAsNode_finalize(struct sAlignAsNode* self){
void* __result_obj__;
_Bool _if_conditional470;
_Bool _if_conditional471;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                # 1 "sAlignAsNode_finalize"
                                                                                                # 0 "sAlignAsNode_finalize"
                                                                                                if(_if_conditional470=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                _if_conditional470) {
                                                                                                    # 0 "sAlignAsNode_finalize"
                                                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                }
                                                                                                # 2 "sAlignAsNode_finalize"
                                                                                                # 1 "sAlignAsNode_finalize"
                                                                                                if(_if_conditional471=self!=((void*)0)&&self->type!=((void*)0),                                                                                                _if_conditional471) {
                                                                                                    # 1 "sAlignAsNode_finalize"
                                                                                                    come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                                }
}

static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self){
void* __result_obj__;
_Bool _if_conditional472;
struct sAlignAsNode* __result320__;
void* right_value560;
struct sAlignAsNode* result_304;
_Bool _if_conditional473;
_Bool _if_conditional474;
void* right_value561;
char* __dec_obj197;
_Bool _if_conditional475;
void* right_value562;
struct sType* __dec_obj198;
struct sAlignAsNode* __result321__;
memset(&__result_obj__, 0, sizeof(void*));
right_value560 = (void*)0;
memset(&result_304, 0, sizeof(struct sAlignAsNode*));
right_value561 = (void*)0;
right_value562 = (void*)0;
                                                                                                # 3 "sAlignAsNode_clone"
                                                                                                # 2 "sAlignAsNode_clone"
                                                                                                if(_if_conditional472=self==(void*)0,                                                                                                _if_conditional472) {
                                                                                                    # 2 "sAlignAsNode_clone"
                                                                                                    __result320__ = __result_obj__ = (void*)0;
                                                                                                    return __result320__;
                                                                                                }
                                                                                                # 3 "sAlignAsNode_clone"
                                                                                                result_304=(struct sAlignAsNode*)come_increment_ref_count(((struct sAlignAsNode*)(right_value560=(struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "sAlignAsNode_clone", 3, "sAlignAsNode"))));
                                                                                                come_call_finalizer3(right_value560,sAlignAsNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                                # 5 "sAlignAsNode_clone"
                                                                                                # 4 "sAlignAsNode_clone"
                                                                                                if(_if_conditional473=self!=((void*)0),                                                                                                _if_conditional473) {
                                                                                                    # 4 "sAlignAsNode_clone"
                                                                                                    result_304->sline=self->sline;
                                                                                                }
                                                                                                # 6 "sAlignAsNode_clone"
                                                                                                # 5 "sAlignAsNode_clone"
                                                                                                if(_if_conditional474=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                _if_conditional474) {
                                                                                                    # 5 "sAlignAsNode_clone"
                                                                                                    __dec_obj197=result_304->sname;
                                                                                                    result_304->sname=(char*)come_increment_ref_count(((char*)(right_value561=string_clone(self->sname))));
                                                                                                    __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                    right_value561 = come_decrement_ref_count2(right_value561, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                }
                                                                                                # 7 "sAlignAsNode_clone"
                                                                                                # 6 "sAlignAsNode_clone"
                                                                                                if(_if_conditional475=self!=((void*)0)&&self->type!=((void*)0),                                                                                                _if_conditional475) {
                                                                                                    # 6 "sAlignAsNode_clone"
                                                                                                    __dec_obj198=result_304->type;
                                                                                                    result_304->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value562=sType_clone(self->type))));
                                                                                                    come_call_finalizer3(__dec_obj198,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                                    come_call_finalizer3(right_value562,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                                }
                                                                                                # 7 "sAlignAsNode_clone"
                                                                                                __result321__ = __result_obj__ = result_304;
                                                                                                come_call_finalizer3(result_304,sAlignAsNode_finalize, 0, 0, 1, 0, (void*)0);
                                                                                                return __result321__;
                                                                                                come_call_finalizer3(result_304,sAlignAsNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self){
void* __result_obj__;
_Bool _if_conditional476;
_Bool _if_conditional477;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                # 1 "sAlignAsExpNode_finalize"
                                                                                                # 0 "sAlignAsExpNode_finalize"
                                                                                                if(_if_conditional476=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                _if_conditional476) {
                                                                                                    # 0 "sAlignAsExpNode_finalize"
                                                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                }
                                                                                                # 2 "sAlignAsExpNode_finalize"
                                                                                                # 1 "sAlignAsExpNode_finalize"
                                                                                                if(_if_conditional477=self!=((void*)0)&&self->exp!=((void*)0),                                                                                                _if_conditional477) {
                                                                                                    # 1 "sAlignAsExpNode_finalize"
                                                                                                    if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                }
}

static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self){
void* __result_obj__;
_Bool _if_conditional478;
struct sAlignAsExpNode* __result323__;
void* right_value567;
struct sAlignAsExpNode* result_306;
_Bool _if_conditional479;
_Bool _if_conditional480;
void* right_value568;
char* __dec_obj199;
_Bool _if_conditional481;
void* right_value569;
struct sNode* __dec_obj200;
struct sAlignAsExpNode* __result324__;
memset(&__result_obj__, 0, sizeof(void*));
right_value567 = (void*)0;
memset(&result_306, 0, sizeof(struct sAlignAsExpNode*));
right_value568 = (void*)0;
right_value569 = (void*)0;
                                                                                                # 3 "sAlignAsExpNode_clone"
                                                                                                # 2 "sAlignAsExpNode_clone"
                                                                                                if(_if_conditional478=self==(void*)0,                                                                                                _if_conditional478) {
                                                                                                    # 2 "sAlignAsExpNode_clone"
                                                                                                    __result323__ = __result_obj__ = (void*)0;
                                                                                                    return __result323__;
                                                                                                }
                                                                                                # 3 "sAlignAsExpNode_clone"
                                                                                                result_306=(struct sAlignAsExpNode*)come_increment_ref_count(((struct sAlignAsExpNode*)(right_value567=(struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "sAlignAsExpNode_clone", 3, "sAlignAsExpNode"))));
                                                                                                come_call_finalizer3(right_value567,sAlignAsExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                                # 5 "sAlignAsExpNode_clone"
                                                                                                # 4 "sAlignAsExpNode_clone"
                                                                                                if(_if_conditional479=self!=((void*)0),                                                                                                _if_conditional479) {
                                                                                                    # 4 "sAlignAsExpNode_clone"
                                                                                                    result_306->sline=self->sline;
                                                                                                }
                                                                                                # 6 "sAlignAsExpNode_clone"
                                                                                                # 5 "sAlignAsExpNode_clone"
                                                                                                if(_if_conditional480=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                _if_conditional480) {
                                                                                                    # 5 "sAlignAsExpNode_clone"
                                                                                                    __dec_obj199=result_306->sname;
                                                                                                    result_306->sname=(char*)come_increment_ref_count(((char*)(right_value568=string_clone(self->sname))));
                                                                                                    __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                    right_value568 = come_decrement_ref_count2(right_value568, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                }
                                                                                                # 7 "sAlignAsExpNode_clone"
                                                                                                # 6 "sAlignAsExpNode_clone"
                                                                                                if(_if_conditional481=self!=((void*)0)&&self->exp!=((void*)0),                                                                                                _if_conditional481) {
                                                                                                    # 6 "sAlignAsExpNode_clone"
                                                                                                    __dec_obj200=result_306->exp;
                                                                                                    result_306->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value569=sNode_clone(self->exp))));
                                                                                                    if(__dec_obj200) { __dec_obj200 = come_decrement_ref_count2(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                    if(right_value569) { right_value569 = come_decrement_ref_count2(right_value569, ((struct sNode*)right_value569)->finalize, ((struct sNode*)right_value569)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                }
                                                                                                # 7 "sAlignAsExpNode_clone"
                                                                                                __result324__ = __result_obj__ = result_306;
                                                                                                come_call_finalizer3(result_306,sAlignAsExpNode_finalize, 0, 0, 1, 0, (void*)0);
                                                                                                return __result324__;
                                                                                                come_call_finalizer3(result_306,sAlignAsExpNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional482;
_Bool _if_conditional483;
_Bool _if_conditional484;
_Bool _if_conditional485;
_Bool _if_conditional486;
_Bool _if_conditional487;
_Bool _if_conditional488;
void* right_value572;
void* right_value573;
struct sNode* _inf_value34;
struct sNothingNode* _inf_obj_value34;
void* right_value576;
struct sNode* __result329__;
void* right_value577;
struct sNode* __result330__;
memset(&__result_obj__, 0, sizeof(void*));
right_value572 = (void*)0;
right_value573 = (void*)0;
right_value576 = (void*)0;
right_value577 = (void*)0;
    # 1855 "21obj.c"
    # 1810 "21obj.c"
    if(_if_conditional482=charp_operator_equals(buf,"using"),    _if_conditional482) {
        # 1852 "21obj.c"
        # 1811 "21obj.c"
        if(_if_conditional483=strmemcmp(info->p,"neo-c"),        _if_conditional483) {
            # 1812 "21obj.c"
            info->p+=strlen("neo-c");
            # 1813 "21obj.c"
            skip_spaces_and_lf(info);
            # 1815 "21obj.c"
            gComeC=(_Bool)0;
        }
        else {
            # 1852 "21obj.c"
            # 1817 "21obj.c"
            if(_if_conditional484=strmemcmp(info->p,"c")||strmemcmp(info->p,"C"),            _if_conditional484) {
                # 1818 "21obj.c"
                info->p+=strlen("c");
                # 1819 "21obj.c"
                skip_spaces_and_lf(info);
                # 1834 "21obj.c"
                # 1821 "21obj.c"
                if(_if_conditional485=*info->p==123,                _if_conditional485) {
                    # 1822 "21obj.c"
                    info->p++;
                    # 1823 "21obj.c"
                    skip_spaces_and_lf(info);
                    # 1825 "21obj.c"
                    gComeC=(_Bool)1;
                    # 1827 "21obj.c"
                    transpile_toplevel((_Bool)1,info);
                    # 1829 "21obj.c"
                    gComeC=(_Bool)0;
                }
                else {
                    # 1832 "21obj.c"
                    gComeC=(_Bool)1;
                }
            }
            else {
                # 1852 "21obj.c"
                # 1835 "21obj.c"
                if(_if_conditional486=strmemcmp(info->p,"gc"),                _if_conditional486) {
                    # 1836 "21obj.c"
                    info->p+=strlen("gc");
                    # 1837 "21obj.c"
                    skip_spaces_and_lf(info);
                }
                else {
                    # 1852 "21obj.c"
                    # 1839 "21obj.c"
                    if(_if_conditional487=strmemcmp(info->p,"no-gc"),                    _if_conditional487) {
                        # 1840 "21obj.c"
                        info->p+=strlen("no-gc");
                        # 1841 "21obj.c"
                        skip_spaces_and_lf(info);
                    }
                    else {
                        # 1852 "21obj.c"
                        # 1843 "21obj.c"
                        if(_if_conditional488=strmemcmp(info->p,"unsafe"),                        _if_conditional488) {
                            # 1844 "21obj.c"
                            info->p+=strlen("unsafe");
                            # 1845 "21obj.c"
                            skip_spaces_and_lf(info);
                        }
                        else {
                            # 1848 "21obj.c"
                            err_msg(info,"invalid using");
                            # 1849 "21obj.c"
                            exit(2);
                        }
                    }
                }
            }
        }
        # 1852 "21obj.c"
        _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1852, "struct sNode");
        _inf_obj_value34=come_increment_ref_count(((struct sNothingNode*)(right_value573=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(right_value572=(struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1852, "sNothingNode")))),info))));
        _inf_value34->_protocol_obj=_inf_obj_value34;
        _inf_value34->finalize=(void*)sNothingNode_finalize;
        _inf_value34->clone=(void*)sNothingNode_clone;
        _inf_value34->compile=(void*)sNothingNode_compile;
        _inf_value34->sline=(void*)sNodeBase_sline;
        _inf_value34->sname=(void*)sNodeBase_sname;
        _inf_value34->terminated=(void*)sNothingNode_terminated;
        _inf_value34->kind=(void*)sNothingNode_kind;
        __result329__ = __result_obj__ = ((struct sNode*)(right_value576=_inf_value34));
        come_call_finalizer3(right_value572,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value573,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value576) { right_value576 = come_decrement_ref_count2(right_value576, ((struct sNode*)right_value576)->finalize, ((struct sNode*)right_value576)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result329__;
    }
    # 1855 "21obj.c"
    __result330__ = __result_obj__ = ((struct sNode*)(right_value577=top_level_v93(buf,head,head_sline,info)));
    if(right_value577) { right_value577 = come_decrement_ref_count2(right_value577, ((struct sNode*)right_value577)->finalize, ((struct sNode*)right_value577)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result330__;
}

static void sNothingNode_finalize(struct sNothingNode* self){
void* __result_obj__;
_Bool _if_conditional489;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sNothingNode_finalize"
            # 0 "sNothingNode_finalize"
            if(_if_conditional489=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional489) {
                # 0 "sNothingNode_finalize"
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self){
void* __result_obj__;
_Bool _if_conditional490;
struct sNothingNode* __result327__;
void* right_value574;
struct sNothingNode* result_307;
_Bool _if_conditional491;
_Bool _if_conditional492;
void* right_value575;
char* __dec_obj201;
struct sNothingNode* __result328__;
memset(&__result_obj__, 0, sizeof(void*));
right_value574 = (void*)0;
memset(&result_307, 0, sizeof(struct sNothingNode*));
right_value575 = (void*)0;
            # 3 "sNothingNode_clone"
            # 2 "sNothingNode_clone"
            if(_if_conditional490=self==(void*)0,            _if_conditional490) {
                # 2 "sNothingNode_clone"
                __result327__ = __result_obj__ = (void*)0;
                return __result327__;
            }
            # 3 "sNothingNode_clone"
            result_307=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(right_value574=(struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "sNothingNode_clone", 3, "sNothingNode"))));
            come_call_finalizer3(right_value574,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
            # 5 "sNothingNode_clone"
            # 4 "sNothingNode_clone"
            if(_if_conditional491=self!=((void*)0),            _if_conditional491) {
                # 4 "sNothingNode_clone"
                result_307->sline=self->sline;
            }
            # 6 "sNothingNode_clone"
            # 5 "sNothingNode_clone"
            if(_if_conditional492=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional492) {
                # 5 "sNothingNode_clone"
                __dec_obj201=result_307->sname;
                result_307->sname=(char*)come_increment_ref_count(((char*)(right_value575=string_clone(self->sname))));
                __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value575 = come_decrement_ref_count2(right_value575, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 6 "sNothingNode_clone"
            __result328__ = __result_obj__ = result_307;
            come_call_finalizer3(result_307,sNothingNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result328__;
            come_call_finalizer3(result_307,sNothingNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional493;
void* right_value578;
struct tuple3$3sTypephcharphbool* multiple_assign_var12;
struct sType* type3_308;
char* name2_309;
_Bool err_310;
_Bool _if_conditional494;
void* right_value579;
struct sType* inf_type_311;
void* right_value580;
void* right_value581;
struct sNode* _inf_value35;
struct sImplementsNode* _inf_obj_value35;
void* right_value586;
struct sNode* __result333__;
_Bool _if_conditional503;
_Bool _while_condtional22;
void* right_value587;
struct sNode* __result334__;
memset(&__result_obj__, 0, sizeof(void*));
right_value578 = (void*)0;
memset(&type3_308, 0, sizeof(struct sType*));
memset(&name2_309, 0, sizeof(char*));
memset(&err_310, 0, sizeof(_Bool));
memset(&type3_308, 0, sizeof(struct sType*));
memset(&name2_309, 0, sizeof(char*));
memset(&err_310, 0, sizeof(_Bool));
right_value579 = (void*)0;
memset(&inf_type_311, 0, sizeof(struct sType*));
right_value580 = (void*)0;
right_value581 = (void*)0;
right_value586 = (void*)0;
right_value587 = (void*)0;
    # 1882 "21obj.c"
    # 1860 "21obj.c"
    if(_if_conditional493=strmemcmp(info->p,"implements"),    _if_conditional493) {
        # 1861 "21obj.c"
        info->p+=strlen("implements");
        # 1862 "21obj.c"
        skip_spaces_and_lf(info);
        # 1864 "21obj.c"
        multiple_assign_var12=((struct tuple3$3sTypephcharphbool*)(right_value578=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
        type3_308=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
        name2_309=(char*)come_increment_ref_count(multiple_assign_var12->v2);
        err_310=multiple_assign_var12->v3;
        come_call_finalizer3(right_value578,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        # 1870 "21obj.c"
        # 1865 "21obj.c"
        if(_if_conditional494=!err_310,        _if_conditional494) {
            # 1866 "21obj.c"
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            # 1867 "21obj.c"
            exit(2);
        }
        # 1870 "21obj.c"
        inf_type_311=(struct sType*)come_increment_ref_count(((struct sType*)(right_value579=sType_clone(type3_308))));
        come_call_finalizer3(right_value579,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 1872 "21obj.c"
        _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1872, "struct sNode");
        _inf_obj_value35=come_increment_ref_count(((struct sImplementsNode*)(right_value581=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(right_value580=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1872, "sImplementsNode")))),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type_311),info))));
        _inf_value35->_protocol_obj=_inf_obj_value35;
        _inf_value35->finalize=(void*)sImplementsNode_finalize;
        _inf_value35->clone=(void*)sImplementsNode_clone;
        _inf_value35->compile=(void*)sImplementsNode_compile;
        _inf_value35->sline=(void*)sNodeBase_sline;
        _inf_value35->sname=(void*)sNodeBase_sname;
        _inf_value35->terminated=(void*)sImplementsNode_terminated;
        _inf_value35->kind=(void*)sImplementsNode_kind;
        __result333__ = __result_obj__ = ((struct sNode*)(right_value586=_inf_value35));
        come_call_finalizer3(type3_308,sType_finalize, 0, 0, 0, 0, (void*)0);
        name2_309 = come_decrement_ref_count2(name2_309, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(inf_type_311,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        come_call_finalizer3(right_value580,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value581,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value586) { right_value586 = come_decrement_ref_count2(right_value586, ((struct sNode*)right_value586)->finalize, ((struct sNode*)right_value586)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result333__;
        come_call_finalizer3(type3_308,sType_finalize, 0, 0, 0, 0, (void*)0);
        name2_309 = come_decrement_ref_count2(name2_309, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(inf_type_311,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 1882 "21obj.c"
        # 1874 "21obj.c"
        if(_if_conditional503=*info->p==64,        _if_conditional503) {
            # 1875 "21obj.c"
            info->p++;
            # 1879 "21obj.c"
            while(_while_condtional22=xisalnum(*info->p)||*info->p==95,            _while_condtional22) {
                # 1877 "21obj.c"
                info->p++;
            }
            # 1879 "21obj.c"
            skip_spaces_and_lf(info);
        }
    }
    # 1882 "21obj.c"
    __result334__ = __result_obj__ = ((struct sNode*)(right_value587=post_position_operator_v19((struct sNode*)come_increment_ref_count(node),info)));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right_value587) { right_value587 = come_decrement_ref_count2(right_value587, ((struct sNode*)right_value587)->finalize, ((struct sNode*)right_value587)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result334__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sImplementsNode_finalize(struct sImplementsNode* self){
void* __result_obj__;
_Bool _if_conditional495;
_Bool _if_conditional496;
_Bool _if_conditional497;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sImplementsNode_finalize"
            # 0 "sImplementsNode_finalize"
            if(_if_conditional495=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional495) {
                # 0 "sImplementsNode_finalize"
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 2 "sImplementsNode_finalize"
            # 1 "sImplementsNode_finalize"
            if(_if_conditional496=self!=((void*)0)&&self->obj_exp!=((void*)0),            _if_conditional496) {
                # 1 "sImplementsNode_finalize"
                if(self->obj_exp) { self->obj_exp = come_decrement_ref_count2(self->obj_exp, ((struct sNode*)self->obj_exp)->finalize, ((struct sNode*)self->obj_exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 3 "sImplementsNode_finalize"
            # 2 "sImplementsNode_finalize"
            if(_if_conditional497=self!=((void*)0)&&self->inf_type!=((void*)0),            _if_conditional497) {
                # 2 "sImplementsNode_finalize"
                come_call_finalizer3(self->inf_type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self){
void* __result_obj__;
_Bool _if_conditional498;
struct sImplementsNode* __result331__;
void* right_value582;
struct sImplementsNode* result_312;
_Bool _if_conditional499;
_Bool _if_conditional500;
void* right_value583;
char* __dec_obj202;
_Bool _if_conditional501;
void* right_value584;
struct sNode* __dec_obj203;
_Bool _if_conditional502;
void* right_value585;
struct sType* __dec_obj204;
struct sImplementsNode* __result332__;
memset(&__result_obj__, 0, sizeof(void*));
right_value582 = (void*)0;
memset(&result_312, 0, sizeof(struct sImplementsNode*));
right_value583 = (void*)0;
right_value584 = (void*)0;
right_value585 = (void*)0;
            # 3 "sImplementsNode_clone"
            # 2 "sImplementsNode_clone"
            if(_if_conditional498=self==(void*)0,            _if_conditional498) {
                # 2 "sImplementsNode_clone"
                __result331__ = __result_obj__ = (void*)0;
                return __result331__;
            }
            # 3 "sImplementsNode_clone"
            result_312=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(right_value582=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "sImplementsNode_clone", 3, "sImplementsNode"))));
            come_call_finalizer3(right_value582,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
            # 5 "sImplementsNode_clone"
            # 4 "sImplementsNode_clone"
            if(_if_conditional499=self!=((void*)0),            _if_conditional499) {
                # 4 "sImplementsNode_clone"
                result_312->sline=self->sline;
            }
            # 6 "sImplementsNode_clone"
            # 5 "sImplementsNode_clone"
            if(_if_conditional500=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional500) {
                # 5 "sImplementsNode_clone"
                __dec_obj202=result_312->sname;
                result_312->sname=(char*)come_increment_ref_count(((char*)(right_value583=string_clone(self->sname))));
                __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value583 = come_decrement_ref_count2(right_value583, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 7 "sImplementsNode_clone"
            # 6 "sImplementsNode_clone"
            if(_if_conditional501=self!=((void*)0)&&self->obj_exp!=((void*)0),            _if_conditional501) {
                # 6 "sImplementsNode_clone"
                __dec_obj203=result_312->obj_exp;
                result_312->obj_exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value584=sNode_clone(self->obj_exp))));
                if(__dec_obj203) { __dec_obj203 = come_decrement_ref_count2(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value584) { right_value584 = come_decrement_ref_count2(right_value584, ((struct sNode*)right_value584)->finalize, ((struct sNode*)right_value584)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 8 "sImplementsNode_clone"
            # 7 "sImplementsNode_clone"
            if(_if_conditional502=self!=((void*)0)&&self->inf_type!=((void*)0),            _if_conditional502) {
                # 7 "sImplementsNode_clone"
                __dec_obj204=result_312->inf_type;
                result_312->inf_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value585=sType_clone(self->inf_type))));
                come_call_finalizer3(__dec_obj204,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value585,sType_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 8 "sImplementsNode_clone"
            __result332__ = __result_obj__ = result_312;
            come_call_finalizer3(result_312,sImplementsNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result332__;
            come_call_finalizer3(result_312,sImplementsNode_finalize, 0, 0, 0, 0, (void*)0);
}

