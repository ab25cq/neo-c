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
struct tuple4$4sTypephcharphsNodephcharph
{
    struct sType* v1;
    char* v2;
    struct sNode* v3;
    char* v4;
};
struct list_item$1tuple4$4sTypephcharphsNodephcharphph
{
    struct tuple4$4sTypephcharphsNodephcharph* item;
    struct list_item$1tuple4$4sTypephcharphsNodephcharphph* prev;
    struct list_item$1tuple4$4sTypephcharphsNodephcharphph* next;
};
struct list$1tuple4$4sTypephcharphsNodephcharphph
{
    struct list_item$1tuple4$4sTypephcharphsNodephcharphph* head;
    struct list_item$1tuple4$4sTypephcharphsNodephcharphph* tail;
    int len;
    struct list_item$1tuple4$4sTypephcharphsNodephcharphph* it;
};
struct sStoreNode
{
    int sline;
    char* sname;
    char* name;
    _Bool alloc;
    struct sType* type;
    struct sNode* right_value;
    struct list$1charph* multiple_assign;
    struct list$1tuple4$4sTypephcharphsNodephcharphph* multiple_declare;
    char* array_initializer;
};
struct sLoadNode
{
    int sline;
    char* sname;
    char* name;
};
struct sFunLoadNode
{
    int sline;
    char* sname;
    char* name;
};
struct tuple4$4sTypephcharphvoidpcharph
{
    struct sType* v1;
    char* v2;
    void* v3;
    char* v4;
};
struct tuple4$4sTypephcharphsNodephvoidp
{
    struct sType* v1;
    char* v2;
    struct sNode* v3;
    void* v4;
};
struct tuple4$4sTypephcharphvoidpvoidp
{
    struct sType* v1;
    char* v2;
    void* v3;
    void* v4;
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

struct sNode* parse_global_variable(struct sInfo* info);

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info);

struct sNode* load_var(char* name, struct sInfo* info);

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

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);

struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple4$4sTypephcharphsNodephcharphph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, char* array_initializer, struct sInfo* info);

char* sStoreNode_kind(struct sStoreNode* self);

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info);

static void sNodeBase_finalize(struct sNodeBase* self);
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
static struct list$1tuple4$4sTypephcharphsNodephcharphph* list$1tuple4$4sTypephcharphsNodephcharphphp_clone(struct list$1tuple4$4sTypephcharphsNodephcharphph* self);
static struct list$1tuple4$4sTypephcharphsNodephcharphph* list$1tuple4$4sTypephcharphsNodephcharphph_initialize(struct list$1tuple4$4sTypephcharphsNodephcharphph* self);
static void list$1tuple4$4sTypephcharphsNodephcharphphp_finalize(struct list$1tuple4$4sTypephcharphsNodephcharphph* self);
static void list_item$1tuple4$4sTypephcharphsNodephcharphphp_finalize(struct list_item$1tuple4$4sTypephcharphsNodephcharphph* self);
static struct list$1tuple4$4sTypephcharphsNodephcharphph* list$1tuple4$4sTypephcharphsNodephcharphph_add(struct list$1tuple4$4sTypephcharphsNodephcharphph* self, struct tuple4$4sTypephcharphsNodephcharph* item);
static void tuple4$4sTypephcharphsNodephcharphp_finalize(struct tuple4$4sTypephcharphsNodephcharph* self);
static struct tuple4$4sTypephcharphsNodephcharph* tuple4$4sTypephcharphsNodephcharphp_clone(struct tuple4$4sTypephcharphsNodephcharph* self);
static void tuple4$4sTypephcharphsNodephcharph_finalize(struct tuple4$4sTypephcharphsNodephcharph* self);
static void list$1tuple4$4sTypephcharphsNodephcharphph_finalize(struct list$1tuple4$4sTypephcharphsNodephcharphph* self);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
static struct tuple4$4sTypephcharphsNodephcharph* list$1tuple4$4sTypephcharphsNodephcharphph_begin(struct list$1tuple4$4sTypephcharphsNodephcharphph* self);
static _Bool list$1tuple4$4sTypephcharphsNodephcharphph_end(struct list$1tuple4$4sTypephcharphsNodephcharphph* self);
static struct tuple4$4sTypephcharphsNodephcharph* list$1tuple4$4sTypephcharphsNodephcharphph_next(struct list$1tuple4$4sTypephcharphsNodephcharphph* self);
static void CVALUE_finalize(struct CVALUE* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info);

char* sLoadNode_kind(struct sLoadNode* self);

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info);

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info);

char* sFunLoadNode_kind(struct sFunLoadNode* self);

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info);

static void sFunLoadNode_finalize(struct sFunLoadNode* self);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);

static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct list$1tuple4$4sTypephcharphsNodephcharphph* list$1tuple4$4sTypephcharphsNodephcharphph_push_back(struct list$1tuple4$4sTypephcharphsNodephcharphph* self, struct tuple4$4sTypephcharphsNodephcharph* item);
static struct tuple4$4sTypephcharphvoidpcharph* tuple4$4sTypephcharphvoidpcharph_initialize(struct tuple4$4sTypephcharphvoidpcharph* self, struct sType* v1, char* v2, void* v3, char* v4);
static void tuple4$4sTypephcharphvoidpcharphp_finalize(struct tuple4$4sTypephcharphvoidpcharph* self);
static struct tuple4$4sTypephcharphsNodephvoidp* tuple4$4sTypephcharphsNodephvoidp_initialize(struct tuple4$4sTypephcharphsNodephvoidp* self, struct sType* v1, char* v2, struct sNode* v3, void* v4);
static void tuple4$4sTypephcharphsNodephvoidpp_finalize(struct tuple4$4sTypephcharphsNodephvoidp* self);
static struct tuple4$4sTypephcharphvoidpvoidp* tuple4$4sTypephcharphvoidpvoidp_initialize(struct tuple4$4sTypephcharphvoidpvoidp* self, struct sType* v1, char* v2, void* v3, void* v4);
static void tuple4$4sTypephcharphvoidpvoidpp_finalize(struct tuple4$4sTypephcharphvoidpvoidp* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static void sLoadNode_finalize(struct sLoadNode* self);
static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self);
static void sStoreNode_finalize(struct sStoreNode* self);
static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self);
// inline function
static inline _Bool die(char* msg){
void* __result_obj__;
_Bool __result1__;
memset(&__result_obj__, 0, sizeof(void*));
    perror(msg);
    stackframe();
    exit(4);
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
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1901, "buffer"))))))));
    come_call_finalizer3(right_value0,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value1,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_0,self,sizeof(char)*len);
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
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1908, "buffer"))))))));
    come_call_finalizer3(right_value2,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value3,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
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
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1915, "buffer"))))))));
    come_call_finalizer3(right_value4,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value5,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_2,(char*)self,sizeof(int)*len);
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
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1922, "buffer"))))))));
    come_call_finalizer3(right_value6,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value7,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_3,(char*)self,sizeof(long)*len);
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
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1929, "buffer"))))))));
    come_call_finalizer3(right_value8,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value9,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_4,(char*)self,sizeof(float)*len);
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
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1936, "buffer"))))))));
    come_call_finalizer3(right_value10,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value11,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_5,(char*)self,sizeof(double)*len);
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
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1952, "smart_pointer$1char"))));
    come_call_finalizer3(right_value12,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj1=result_6->memory;
    result_6->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=buffer_clone(self))));
    come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value13,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_6->p=result_6->memory->buf;
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
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1962, "smart_pointer$1char"))));
    come_call_finalizer3(right_value14,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj2=result_7->memory;
    result_7->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=buffer_clone(self))));
    come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value15,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_7->p=(char*)result_7->memory->buf;
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
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 1972, "smart_pointer$1short"))));
    come_call_finalizer3(right_value16,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj3=result_8->memory;
    result_8->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value17=buffer_clone(self))));
    come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value17,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_8->p=(short short*)result_8->memory->buf;
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
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 1982, "smart_pointer$1int"))));
    come_call_finalizer3(right_value18,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj4=result_9->memory;
    result_9->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=buffer_clone(self))));
    come_call_finalizer3(__dec_obj4,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value19,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_9->p=(int*)result_9->memory->buf;
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
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 1992, "smart_pointer$1long"))));
    come_call_finalizer3(right_value20,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj5=result_10->memory;
    result_10->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value21=buffer_clone(self))));
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value21,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_10->p=(long*)result_10->memory->buf;
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
    __result14__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2163, "smart_pointer$1char")))),self,len)));
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
    __result16__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2168, "smart_pointer$1short")))),self,len)));
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
    __result18__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2173, "smart_pointer$1int")))),self,len)));
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
    __result20__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2178, "smart_pointer$1long")))),self,len)));
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
    __result22__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2183, "smart_pointer$1float")))),self,len)));
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
    __result24__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2188, "smart_pointer$1double")))),self,len)));
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
    __result27__ = __result_obj__ = ((struct list$1char*)(right_value50=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count(((struct list$1char*)(right_value46=(struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2193, "list$1char")))),len,self)));
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
    __result30__ = __result_obj__ = ((struct list$1short*)(right_value55=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count(((struct list$1short*)(right_value51=(struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2198, "list$1short")))),len,self)));
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
    __result33__ = __result_obj__ = ((struct list$1int*)(right_value60=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value56=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2203, "list$1int")))),len,self)));
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
    __result36__ = __result_obj__ = ((struct list$1long*)(right_value65=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count(((struct list$1long*)(right_value61=(struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2208, "list$1long")))),len,self)));
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
    __result39__ = __result_obj__ = ((struct list$1float*)(right_value70=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count(((struct list$1float*)(right_value66=(struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2213, "list$1float")))),len,self)));
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
    __result42__ = __result_obj__ = ((struct list$1double*)(right_value75=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count(((struct list$1double*)(right_value71=(struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2218, "list$1double")))),len,self)));
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
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
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
    __result51__ = __result_obj__ = ((char*)(right_value78=xsprintf(msg,self)));
    right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result51__;
}

// body function








static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
void* __result_obj__;
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional1=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional1) {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
void* __result_obj__;
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional2=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional2) {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
void* __result_obj__;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional3=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional3) {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
void* __result_obj__;
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional4=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional4) {
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
        __dec_obj6=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
        come_call_finalizer3(__dec_obj6,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value23,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value24,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(char)*size);
        self->p=(char*)self->memory->buf;
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
        __dec_obj7=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
        come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value27,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value28,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(short short)*size);
        self->p=(short short*)self->memory->buf;
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
        __dec_obj8=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
        come_call_finalizer3(__dec_obj8,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value31,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value32,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(int)*size);
        self->p=(int*)self->memory->buf;
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
        __dec_obj9=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
        come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value35,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value36,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(long)*size);
        self->p=(long*)self->memory->buf;
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
        __dec_obj10=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
        come_call_finalizer3(__dec_obj10,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value39,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value40,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(float)*size);
        self->p=(float*)self->memory->buf;
        __result21__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
        return __result21__;
        come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
void* __result_obj__;
_Bool _if_conditional5;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional5=self!=((void*)0)&&self->memory!=((void*)0),            _if_conditional5) {
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
        __dec_obj11=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
        come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value43,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value44,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(double)*size);
        self->p=(double*)self->memory->buf;
        __result23__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
        return __result23__;
        come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
void* __result_obj__;
_Bool _if_conditional6;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional6=self!=((void*)0)&&self->memory!=((void*)0),            _if_conditional6) {
                come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__;
int i_11;
struct list$1char* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_11, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_11=0;        i_11<num_value;        i_11++        ){
            list$1char_push_back(self,values[i_11]);
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
                if(_if_conditional7=self->len==0,                _if_conditional7) {
                    litem_12=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value47=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 221, "list_item$1char"))));
                    come_call_finalizer3(right_value47,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_12->prev=((void*)0);
                    litem_12->next=((void*)0);
                    litem_12->item=item;
                    self->tail=litem_12;
                    self->head=litem_12;
                }
                else {
                    if(_if_conditional8=self->len==1,                    _if_conditional8) {
                        litem_13=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value48=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 231, "list_item$1char"))));
                        come_call_finalizer3(right_value48,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_13->prev=self->head;
                        litem_13->next=((void*)0);
                        litem_13->item=item;
                        self->tail=litem_13;
                        self->head->next=litem_13;
                    }
                    else {
                        litem_14=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value49=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 241, "list_item$1char"))));
                        come_call_finalizer3(right_value49,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_14->prev=self->tail;
                        litem_14->next=((void*)0);
                        litem_14->item=item;
                        self->tail->next=litem_14;
                        self->tail=litem_14;
                    }
                }
                self->len++;
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
            it_15=self->head;
            while(_while_condtional1=it_15!=((void*)0),            _while_condtional1) {
                prev_it_16=it_15;
                it_15=it_15->next;
                come_call_finalizer3(prev_it_16,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
void* __result_obj__;
int i_17;
struct list$1short* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_17, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_17=0;        i_17<num_value;        i_17++        ){
            list$1short_push_back(self,values[i_17]);
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
                if(_if_conditional9=self->len==0,                _if_conditional9) {
                    litem_18=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value52=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 221, "list_item$1short"))));
                    come_call_finalizer3(right_value52,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_18->prev=((void*)0);
                    litem_18->next=((void*)0);
                    litem_18->item=item;
                    self->tail=litem_18;
                    self->head=litem_18;
                }
                else {
                    if(_if_conditional10=self->len==1,                    _if_conditional10) {
                        litem_19=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value53=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 231, "list_item$1short"))));
                        come_call_finalizer3(right_value53,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_19->prev=self->head;
                        litem_19->next=((void*)0);
                        litem_19->item=item;
                        self->tail=litem_19;
                        self->head->next=litem_19;
                    }
                    else {
                        litem_20=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value54=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 241, "list_item$1short"))));
                        come_call_finalizer3(right_value54,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_20->prev=self->tail;
                        litem_20->next=((void*)0);
                        litem_20->item=item;
                        self->tail->next=litem_20;
                        self->tail=litem_20;
                    }
                }
                self->len++;
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
            it_21=self->head;
            while(_while_condtional2=it_21!=((void*)0),            _while_condtional2) {
                prev_it_22=it_21;
                it_21=it_21->next;
                come_call_finalizer3(prev_it_22,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__;
int i_23;
struct list$1int* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_23, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_23=0;        i_23<num_value;        i_23++        ){
            list$1int_push_back(self,values[i_23]);
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
                if(_if_conditional11=self->len==0,                _if_conditional11) {
                    litem_24=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value57=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 221, "list_item$1int"))));
                    come_call_finalizer3(right_value57,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_24->prev=((void*)0);
                    litem_24->next=((void*)0);
                    litem_24->item=item;
                    self->tail=litem_24;
                    self->head=litem_24;
                }
                else {
                    if(_if_conditional12=self->len==1,                    _if_conditional12) {
                        litem_25=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value58=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 231, "list_item$1int"))));
                        come_call_finalizer3(right_value58,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_25->prev=self->head;
                        litem_25->next=((void*)0);
                        litem_25->item=item;
                        self->tail=litem_25;
                        self->head->next=litem_25;
                    }
                    else {
                        litem_26=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value59=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 241, "list_item$1int"))));
                        come_call_finalizer3(right_value59,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_26->prev=self->tail;
                        litem_26->next=((void*)0);
                        litem_26->item=item;
                        self->tail->next=litem_26;
                        self->tail=litem_26;
                    }
                }
                self->len++;
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
            it_27=self->head;
            while(_while_condtional3=it_27!=((void*)0),            _while_condtional3) {
                prev_it_28=it_27;
                it_27=it_27->next;
                come_call_finalizer3(prev_it_28,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__;
int i_29;
struct list$1long* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_29, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_29=0;        i_29<num_value;        i_29++        ){
            list$1long_push_back(self,values[i_29]);
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
                if(_if_conditional13=self->len==0,                _if_conditional13) {
                    litem_30=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value62=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 221, "list_item$1long"))));
                    come_call_finalizer3(right_value62,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_30->prev=((void*)0);
                    litem_30->next=((void*)0);
                    litem_30->item=item;
                    self->tail=litem_30;
                    self->head=litem_30;
                }
                else {
                    if(_if_conditional14=self->len==1,                    _if_conditional14) {
                        litem_31=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value63=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 231, "list_item$1long"))));
                        come_call_finalizer3(right_value63,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_31->prev=self->head;
                        litem_31->next=((void*)0);
                        litem_31->item=item;
                        self->tail=litem_31;
                        self->head->next=litem_31;
                    }
                    else {
                        litem_32=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value64=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 241, "list_item$1long"))));
                        come_call_finalizer3(right_value64,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_32->prev=self->tail;
                        litem_32->next=((void*)0);
                        litem_32->item=item;
                        self->tail->next=litem_32;
                        self->tail=litem_32;
                    }
                }
                self->len++;
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
            it_33=self->head;
            while(_while_condtional4=it_33!=((void*)0),            _while_condtional4) {
                prev_it_34=it_33;
                it_33=it_33->next;
                come_call_finalizer3(prev_it_34,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__;
int i_35;
struct list$1float* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_35, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_35=0;        i_35<num_value;        i_35++        ){
            list$1float_push_back(self,values[i_35]);
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
                if(_if_conditional15=self->len==0,                _if_conditional15) {
                    litem_36=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value67=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 221, "list_item$1float"))));
                    come_call_finalizer3(right_value67,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_36->prev=((void*)0);
                    litem_36->next=((void*)0);
                    litem_36->item=item;
                    self->tail=litem_36;
                    self->head=litem_36;
                }
                else {
                    if(_if_conditional16=self->len==1,                    _if_conditional16) {
                        litem_37=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value68=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 231, "list_item$1float"))));
                        come_call_finalizer3(right_value68,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_37->prev=self->head;
                        litem_37->next=((void*)0);
                        litem_37->item=item;
                        self->tail=litem_37;
                        self->head->next=litem_37;
                    }
                    else {
                        litem_38=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value69=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 241, "list_item$1float"))));
                        come_call_finalizer3(right_value69,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_38->prev=self->tail;
                        litem_38->next=((void*)0);
                        litem_38->item=item;
                        self->tail->next=litem_38;
                        self->tail=litem_38;
                    }
                }
                self->len++;
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
            it_39=self->head;
            while(_while_condtional5=it_39!=((void*)0),            _while_condtional5) {
                prev_it_40=it_39;
                it_39=it_39->next;
                come_call_finalizer3(prev_it_40,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__;
int i_41;
struct list$1double* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_41, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_41=0;        i_41<num_value;        i_41++        ){
            list$1double_push_back(self,values[i_41]);
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
                if(_if_conditional17=self->len==0,                _if_conditional17) {
                    litem_42=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value72=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 221, "list_item$1double"))));
                    come_call_finalizer3(right_value72,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_42->prev=((void*)0);
                    litem_42->next=((void*)0);
                    litem_42->item=item;
                    self->tail=litem_42;
                    self->head=litem_42;
                }
                else {
                    if(_if_conditional18=self->len==1,                    _if_conditional18) {
                        litem_43=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value73=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 231, "list_item$1double"))));
                        come_call_finalizer3(right_value73,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_43->prev=self->head;
                        litem_43->next=((void*)0);
                        litem_43->item=item;
                        self->tail=litem_43;
                        self->head->next=litem_43;
                    }
                    else {
                        litem_44=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value74=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 241, "list_item$1double"))));
                        come_call_finalizer3(right_value74,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_44->prev=self->tail;
                        litem_44->next=((void*)0);
                        litem_44->item=item;
                        self->tail->next=litem_44;
                        self->tail=litem_44;
                    }
                }
                self->len++;
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
            it_45=self->head;
            while(_while_condtional6=it_45!=((void*)0),            _while_condtional6) {
                prev_it_46=it_45;
                it_45=it_45->next;
                come_call_finalizer3(prev_it_46,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
            }
}










struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple4$4sTypephcharphsNodephcharphph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, char* array_initializer, struct sInfo* info){
void* __result_obj__;
void* right_value79;
void* right_value80;
char* __dec_obj12;
_Bool _if_conditional20;
void* right_value116;
struct sType* __dec_obj36;
struct sType* __dec_obj37;
struct sNode* __dec_obj38;
_Bool _if_conditional116;
void* right_value117;
struct list$1charph* __dec_obj39;
struct list$1charph* __dec_obj40;
_Bool _if_conditional117;
void* right_value129;
struct list$1tuple4$4sTypephcharphsNodephcharphph* __dec_obj48;
struct list$1tuple4$4sTypephcharphsNodephcharphph* __dec_obj49;
char* __dec_obj50;
struct sStoreNode* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value129 = (void*)0;
    ((struct sNodeBase*)(right_value79=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value79,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj12=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value80=__builtin_string(name))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->alloc=alloc;
    ((void*)0);
    if(type) {
        __dec_obj36=self->type;
        self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value116=sType_clone(type))));
        come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value116,sType_finalize, 0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj37=self->type;
        self->type=((void*)0);
        come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __dec_obj38=self->right_value;
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); }
    ((void*)0);
    if(multiple_assign) {
        __dec_obj39=self->multiple_assign;
        self->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value117=list$1charphp_clone(multiple_assign))));
        come_call_finalizer3(__dec_obj39,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value117,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj40=self->multiple_assign;
        self->multiple_assign=((void*)0);
        come_call_finalizer3(__dec_obj40,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    ((void*)0);
    if(multiple_declare) {
        __dec_obj48=self->multiple_declare;
        self->multiple_declare=(struct list$1tuple4$4sTypephcharphsNodephcharphph*)come_increment_ref_count(((struct list$1tuple4$4sTypephcharphsNodephcharphph*)(right_value129=list$1tuple4$4sTypephcharphsNodephcharphphp_clone(multiple_declare))));
        come_call_finalizer3(__dec_obj48,list$1tuple4$4sTypephcharphsNodephcharphph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value129,list$1tuple4$4sTypephcharphsNodephcharphphp_finalize, 0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj49=self->multiple_declare;
        self->multiple_declare=((void*)0);
        come_call_finalizer3(__dec_obj49,list$1tuple4$4sTypephcharphsNodephcharphph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __dec_obj50=self->array_initializer;
    self->array_initializer=(char*)come_increment_ref_count(array_initializer);
    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result76__ = __result_obj__ = self;
    come_call_finalizer3(self,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(multiple_assign,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(multiple_declare,list$1tuple4$4sTypephcharphsNodephcharphphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    array_initializer = come_decrement_ref_count2(array_initializer, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result76__;
    come_call_finalizer3(self,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(multiple_assign,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(multiple_declare,list$1tuple4$4sTypephcharphsNodephcharphphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    array_initializer = come_decrement_ref_count2(array_initializer, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

char* sStoreNode_kind(struct sStoreNode* self){
void* __result_obj__;
void* right_value130;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value130 = (void*)0;
    __result77__ = __result_obj__ = ((char*)(right_value130=__builtin_string("sStoreNode")));
    right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result77__;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value131;
char* array_initializer_87;
_Bool _if_conditional154;
struct sVar* var__91;
_Bool _if_conditional163;
_Bool __result82__;
_Bool _if_conditional164;
_Bool __result83__;
void* right_value132;
struct sType* type_92;
void* right_value133;
void* right_value134;
struct sType* var_type_93;
void* right_value135;
_Bool _if_conditional165;
struct sVar* var__94;
_Bool _if_conditional166;
_Bool __result84__;
_Bool _if_conditional167;
_Bool __result85__;
void* right_value136;
struct sType* type_95;
_Bool _if_conditional168;
struct list$1tuple4$4sTypephcharphsNodephcharphph* o2_saved_96;
struct tuple4$4sTypephcharphsNodephcharph* it_99;
struct tuple4$4sTypephcharphsNodephcharph* multiple_assign_var1;
struct sType* type_102;
char* var_name_103;
struct sNode* right_value_104;
char* initializer_105;
void* right_value137;
_Bool _if_conditional173;
_Bool __result93__;
void* right_value138;
struct sType* left_type_106;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool __result94__;
void* right_value139;
struct CVALUE* __exception_result_var_b1;
struct CVALUE* come_value_107;
void* right_value140;
_Bool _if_conditional178;
void* right_value141;
void* right_value142;
void* right_value143;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool __result95__;
void* right_value144;
struct sType* left_type_108;
_Bool _if_conditional182;
void* right_value145;
_Bool _if_conditional183;
_Bool _if_conditional184;
void* right_value146;
struct list$1sNodeph* o2_saved_109;
struct sNode* it_112;
_Bool _if_conditional189;
void* right_value147;
struct CVALUE* __exception_result_var_b2;
struct CVALUE* come_value_115;
void* right_value148;
void* right_value149;
struct sType* left_type2_116;
_Bool _if_conditional190;
_Bool _if_conditional191;
void* right_value150;
struct list$1sNodeph* o2_saved_117;
struct sNode* it_118;
_Bool _if_conditional192;
void* right_value151;
struct CVALUE* __exception_result_var_b3;
struct CVALUE* come_value_119;
void* right_value152;
void* right_value153;
struct CVALUE* come_value_120;
void* right_value154;
char* __dec_obj51;
void* right_value155;
struct sType* __dec_obj52;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool __result106__;
void* right_value159;
struct CVALUE* __exception_result_var_b4;
struct CVALUE* right_value_124;
struct sType* right_type_125;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
struct sVar* var__126;
_Bool _if_conditional201;
_Bool __result107__;
_Bool _if_conditional202;
int i_127;
struct list$1charph* o2_saved_128;
char* it_131;
_Bool _if_conditional208;
struct sType* right_type2_137;
void* right_value160;
void* right_value161;
struct sType* var_type_138;
_Bool _if_conditional211;
_Bool _if_conditional212;
void* right_value162;
struct list$1sNodeph* o2_saved_139;
struct sNode* it_140;
_Bool _if_conditional213;
void* right_value163;
struct CVALUE* __exception_result_var_b5;
struct CVALUE* come_value_141;
void* right_value164;
_Bool _if_conditional214;
void* right_value165;
void* right_value166;
struct sType* type_142;
void* right_value167;
void* right_value168;
struct sType* var_type_143;
_Bool _if_conditional215;
_Bool _if_conditional216;
void* right_value169;
struct list$1sNodeph* o2_saved_144;
struct sNode* it_145;
_Bool _if_conditional217;
void* right_value170;
struct CVALUE* __exception_result_var_b6;
struct CVALUE* come_value_146;
void* right_value171;
struct sClass* current_stack_frame_struct_147;
_Bool _if_conditional218;
struct sVar* parent_var_148;
_Bool _if_conditional219;
_Bool _if_conditional220;
void* right_value172;
struct CVALUE* come_value_149;
struct sType* left_type_150;
_Bool _if_conditional221;
void* right_value173;
char* c_value_151;
void* right_value174;
char* __dec_obj56;
int right_value_id_152;
_Bool _if_conditional222;
_Bool _if_conditional223;
void* right_value175;
char* c_value_153;
void* right_value176;
char* __dec_obj57;
void* right_value177;
char* __dec_obj58;
void* right_value178;
struct sType* __dec_obj59;
void* right_value179;
void* right_value180;
_Bool __result119__;
_Bool _if_conditional224;
static int num_multiple_var_154=0;
void* right_value181;
char* multiple_var_name_155;
void* right_value182;
void* right_value183;
char* __dec_obj60;
int i_156;
struct list$1charph* o2_saved_157;
char* it_158;
_Bool _if_conditional225;
void* right_value184;
struct sType* right_type2_159;
struct sVar* var__160;
void* right_value185;
struct sType* var_type_161;
_Bool _if_conditional226;
_Bool _if_conditional227;
void* right_value186;
struct list$1sNodeph* o2_saved_162;
struct sNode* it_163;
_Bool _if_conditional228;
void* right_value187;
struct CVALUE* __exception_result_var_b7;
struct CVALUE* come_value_164;
void* right_value188;
void* right_value189;
struct sType* left_type_165;
void* right_value190;
struct CVALUE* right_value2_166;
void* right_value191;
char* __dec_obj61;
void* right_value192;
struct sType* __dec_obj62;
void* right_value193;
struct CVALUE* come_value_167;
void* right_value194;
void* right_value195;
_Bool _if_conditional229;
_Bool _if_conditional230;
void* right_value196;
char* __dec_obj63;
int right_value_id_168;
_Bool _if_conditional231;
void* right_value197;
char* __dec_obj64;
void* right_value198;
struct sType* __dec_obj65;
_Bool _if_conditional232;
void* right_value199;
struct sVar* var__169;
_Bool _if_conditional233;
_Bool _if_conditional234;
_Bool __result120__;
_Bool _if_conditional235;
void* right_value200;
struct sType* __dec_obj66;
void* right_value201;
struct sType* left_type_170;
void* right_value202;
struct CVALUE* come_value_171;
_Bool _if_conditional236;
void* right_value203;
void* right_value204;
_Bool _if_conditional237;
void* right_value205;
void* right_value206;
char* __dec_obj67;
_Bool _if_conditional238;
void* right_value207;
void* right_value208;
_Bool _if_conditional239;
void* right_value209;
void* right_value210;
char* __dec_obj68;
_Bool _if_conditional240;
void* right_value211;
void* right_value212;
_Bool _if_conditional241;
void* right_value213;
char* __dec_obj69;
void* right_value214;
char* __dec_obj70;
int right_value_id_172;
_Bool _if_conditional242;
void* right_value215;
struct sType* __dec_obj71;
_Bool _if_conditional243;
void* right_value216;
void* right_value217;
_Bool _if_conditional244;
void* right_value218;
char* __dec_obj72;
void* right_value219;
char* __dec_obj73;
void* right_value220;
struct sType* __dec_obj74;
void* right_value221;
void* right_value222;
_Bool _if_conditional245;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool __result121__;
void* right_value223;
char* __dec_obj75;
void* right_value224;
struct sType* __dec_obj76;
_Bool _if_conditional248;
_Bool _if_conditional249;
void* right_value225;
void* right_value226;
_Bool __result122__;
memset(&__result_obj__, 0, sizeof(void*));
right_value131 = (void*)0;
memset(&array_initializer_87, 0, sizeof(char*));
memset(&var__91, 0, sizeof(struct sVar*));
right_value132 = (void*)0;
memset(&type_92, 0, sizeof(struct sType*));
right_value133 = (void*)0;
right_value134 = (void*)0;
memset(&var_type_93, 0, sizeof(struct sType*));
right_value135 = (void*)0;
memset(&var__94, 0, sizeof(struct sVar*));
right_value136 = (void*)0;
memset(&type_95, 0, sizeof(struct sType*));
memset(&o2_saved_96, 0, sizeof(struct list$1tuple4$4sTypephcharphsNodephcharphph*));
memset(&it_99, 0, sizeof(struct tuple4$4sTypephcharphsNodephcharph*));
memset(&type_102, 0, sizeof(struct sType*));
memset(&var_name_103, 0, sizeof(char*));
memset(&right_value_104, 0, sizeof(struct sNode*));
memset(&initializer_105, 0, sizeof(char*));
memset(&type_102, 0, sizeof(struct sType*));
memset(&var_name_103, 0, sizeof(char*));
memset(&right_value_104, 0, sizeof(struct sNode*));
memset(&initializer_105, 0, sizeof(char*));
right_value137 = (void*)0;
right_value138 = (void*)0;
memset(&left_type_106, 0, sizeof(struct sType*));
right_value139 = (void*)0;
memset(&come_value_107, 0, sizeof(struct CVALUE*));
right_value140 = (void*)0;
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value144 = (void*)0;
memset(&left_type_108, 0, sizeof(struct sType*));
right_value145 = (void*)0;
right_value146 = (void*)0;
memset(&o2_saved_109, 0, sizeof(struct list$1sNodeph*));
memset(&it_112, 0, sizeof(struct sNode*));
right_value147 = (void*)0;
memset(&come_value_115, 0, sizeof(struct CVALUE*));
right_value148 = (void*)0;
right_value149 = (void*)0;
memset(&left_type2_116, 0, sizeof(struct sType*));
right_value150 = (void*)0;
memset(&o2_saved_117, 0, sizeof(struct list$1sNodeph*));
memset(&it_118, 0, sizeof(struct sNode*));
right_value151 = (void*)0;
memset(&come_value_119, 0, sizeof(struct CVALUE*));
right_value152 = (void*)0;
right_value153 = (void*)0;
memset(&come_value_120, 0, sizeof(struct CVALUE*));
right_value154 = (void*)0;
right_value155 = (void*)0;
right_value159 = (void*)0;
memset(&right_value_124, 0, sizeof(struct CVALUE*));
memset(&right_type_125, 0, sizeof(struct sType*));
memset(&var__126, 0, sizeof(struct sVar*));
memset(&i_127, 0, sizeof(int));
memset(&o2_saved_128, 0, sizeof(struct list$1charph*));
memset(&it_131, 0, sizeof(char*));
memset(&right_type2_137, 0, sizeof(struct sType*));
right_value160 = (void*)0;
right_value161 = (void*)0;
memset(&var_type_138, 0, sizeof(struct sType*));
right_value162 = (void*)0;
memset(&o2_saved_139, 0, sizeof(struct list$1sNodeph*));
memset(&it_140, 0, sizeof(struct sNode*));
right_value163 = (void*)0;
memset(&come_value_141, 0, sizeof(struct CVALUE*));
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
memset(&type_142, 0, sizeof(struct sType*));
right_value167 = (void*)0;
right_value168 = (void*)0;
memset(&var_type_143, 0, sizeof(struct sType*));
right_value169 = (void*)0;
memset(&o2_saved_144, 0, sizeof(struct list$1sNodeph*));
memset(&it_145, 0, sizeof(struct sNode*));
right_value170 = (void*)0;
memset(&come_value_146, 0, sizeof(struct CVALUE*));
right_value171 = (void*)0;
memset(&current_stack_frame_struct_147, 0, sizeof(struct sClass*));
memset(&parent_var_148, 0, sizeof(struct sVar*));
right_value172 = (void*)0;
memset(&come_value_149, 0, sizeof(struct CVALUE*));
memset(&left_type_150, 0, sizeof(struct sType*));
right_value173 = (void*)0;
memset(&c_value_151, 0, sizeof(char*));
right_value174 = (void*)0;
memset(&right_value_id_152, 0, sizeof(int));
right_value175 = (void*)0;
memset(&c_value_153, 0, sizeof(char*));
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
memset(&multiple_var_name_155, 0, sizeof(char*));
right_value182 = (void*)0;
right_value183 = (void*)0;
memset(&i_156, 0, sizeof(int));
memset(&o2_saved_157, 0, sizeof(struct list$1charph*));
memset(&it_158, 0, sizeof(char*));
right_value184 = (void*)0;
memset(&right_type2_159, 0, sizeof(struct sType*));
memset(&var__160, 0, sizeof(struct sVar*));
right_value185 = (void*)0;
memset(&var_type_161, 0, sizeof(struct sType*));
right_value186 = (void*)0;
memset(&o2_saved_162, 0, sizeof(struct list$1sNodeph*));
memset(&it_163, 0, sizeof(struct sNode*));
right_value187 = (void*)0;
memset(&come_value_164, 0, sizeof(struct CVALUE*));
right_value188 = (void*)0;
right_value189 = (void*)0;
memset(&left_type_165, 0, sizeof(struct sType*));
right_value190 = (void*)0;
memset(&right_value2_166, 0, sizeof(struct CVALUE*));
right_value191 = (void*)0;
right_value192 = (void*)0;
right_value193 = (void*)0;
memset(&come_value_167, 0, sizeof(struct CVALUE*));
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
memset(&right_value_id_168, 0, sizeof(int));
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
memset(&var__169, 0, sizeof(struct sVar*));
right_value200 = (void*)0;
right_value201 = (void*)0;
memset(&left_type_170, 0, sizeof(struct sType*));
right_value202 = (void*)0;
memset(&come_value_171, 0, sizeof(struct CVALUE*));
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
right_value211 = (void*)0;
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
memset(&right_value_id_172, 0, sizeof(int));
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value220 = (void*)0;
right_value221 = (void*)0;
right_value222 = (void*)0;
right_value223 = (void*)0;
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
    array_initializer_87=(char*)come_increment_ref_count(((char*)(right_value131=string_clone(self->array_initializer))));
    right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(array_initializer_87) {
        var__91=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
        if(var__91) {
            err_msg(info,"Already appended this var name(%s)(2)",self->name);
            __result82__ = (_Bool)0;
            array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result82__;
        }
        if(_if_conditional164=self->type==((void*)0),        _if_conditional164) {
            err_msg(info,"Require type name(%s)",self->name);
            __result83__ = (_Bool)0;
            array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result83__;
        }
        else {
            type_92=(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=solve_generics(self->type,info->generics_type,info))));
            come_call_finalizer3(right_value132,sType_finalize, 0, 1, 0, 0, __result_obj__);
            type_92->mFunctionParam=(_Bool)0;
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=sType_clone(type_92)))),info);
            come_call_finalizer3(right_value133,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(type_92,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        var__91=get_variable_from_table(info->lv_table,self->name);
        var_type_93=(struct sType*)come_increment_ref_count(((struct sType*)(right_value134=sType_clone(var__91->mType))));
        come_call_finalizer3(right_value134,sType_finalize, 0, 1, 0, 0, __result_obj__);
        var_type_93->mStatic=(_Bool)0;
        add_come_code(info,"%s=%s;\n",((char*)(right_value135=make_define_var(var_type_93,var__91->mCValueName,(_Bool)0,info))),array_initializer_87);
        right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(var_type_93,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional165=self->right_value==((void*)0),        _if_conditional165) {
            var__94=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
            if(var__94) {
                err_msg(info,"Already appended this var name(%s)(1)",self->name);
                __result84__ = (_Bool)0;
                array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result84__;
            }
            if(_if_conditional167=self->type==((void*)0),            _if_conditional167) {
                err_msg(info,"Require concrete variable type(%s)",self->name);
                __result85__ = (_Bool)0;
                array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result85__;
            }
            type_95=(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=solve_generics(self->type,info->generics_type,info))));
            come_call_finalizer3(right_value136,sType_finalize, 0, 1, 0, 0, __result_obj__);
            type_95->mFunctionParam=(_Bool)0;
            if(self->multiple_declare) {
                for(                o2_saved_96=(struct list$1tuple4$4sTypephcharphsNodephcharphph*)come_increment_ref_count((self->multiple_declare)),it_99=list$1tuple4$4sTypephcharphsNodephcharphph_begin((o2_saved_96));                !list$1tuple4$4sTypephcharphsNodephcharphph_end((o2_saved_96));                it_99=list$1tuple4$4sTypephcharphsNodephcharphph_next((o2_saved_96))                ){
                    multiple_assign_var1=it_99;
                    type_102=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
                    var_name_103=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                    right_value_104=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v3);
                    initializer_105=(char*)come_increment_ref_count(multiple_assign_var1->v4);
                    add_variable_to_table(var_name_103,(struct sType*)come_increment_ref_count(((struct sType*)(right_value137=sType_clone(type_102)))),info);
                    come_call_finalizer3(right_value137,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    var__94=get_variable_from_table(info->lv_table,var_name_103);
                    if(_if_conditional173=var__94==((void*)0),                    _if_conditional173) {
                        err_msg(info,"var not found(%s)(ZY) at definition of variable\n",it_99);
                        __result93__ = (_Bool)1;
                        come_call_finalizer3(type_102,sType_finalize, 0, 0, 0, 0, (void*)0);
                        var_name_103 = come_decrement_ref_count2(var_name_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(right_value_104) { right_value_104 = come_decrement_ref_count2(right_value_104, ((struct sNode*)right_value_104)->finalize, ((struct sNode*)right_value_104)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        initializer_105 = come_decrement_ref_count2(initializer_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(o2_saved_96,list$1tuple4$4sTypephcharphsNodephcharphphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_95,sType_finalize, 0, 0, 0, 0, (void*)0);
                        array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result93__;
                    }
                    left_type_106=(struct sType*)come_increment_ref_count(((struct sType*)(right_value138=sType_clone(var__94->mType))));
                    come_call_finalizer3(right_value138,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value_104) {
                        if(_if_conditional175=!node_compile(right_value_104,info),                        _if_conditional175) {
                            __result94__ = (_Bool)0;
                            come_call_finalizer3(type_102,sType_finalize, 0, 0, 0, 0, (void*)0);
                            var_name_103 = come_decrement_ref_count2(var_name_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(right_value_104) { right_value_104 = come_decrement_ref_count2(right_value_104, ((struct sNode*)right_value_104)->finalize, ((struct sNode*)right_value_104)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            initializer_105 = come_decrement_ref_count2(initializer_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(left_type_106,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(o2_saved_96,list$1tuple4$4sTypephcharphsNodephcharphphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(type_95,sType_finalize, 0, 0, 0, 0, (void*)0);
                            array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            return __result94__;
                        }
                        come_value_107=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("07var.c", 105, 0),__exception_result_var_b1=((struct CVALUE*)(right_value139=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b1));
                        come_call_finalizer3(right_value139,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                        dec_stack_ptr(1,info);
                        add_come_code(info,"%s=%s;\n",((char*)(right_value140=make_define_var(left_type_106,var__94->mCValueName,(_Bool)0,info))),come_value_107->c_value);
                        right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(come_value_107,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        if(initializer_105) {
                            add_come_code(info,"%s=%s;\n",((char*)(right_value141=make_define_var(left_type_106,var__94->mCValueName,(_Bool)0,info))),initializer_105);
                            right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value142=make_define_var(left_type_106,var__94->mCValueName,(_Bool)0,info))));
                            right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                    }
                    come_call_finalizer3(type_102,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_103 = come_decrement_ref_count2(var_name_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(right_value_104) { right_value_104 = come_decrement_ref_count2(right_value_104, ((struct sNode*)right_value_104)->finalize, ((struct sNode*)right_value_104)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    initializer_105 = come_decrement_ref_count2(initializer_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_type_106,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_96,list$1tuple4$4sTypephcharphsNodephcharphphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value143=sType_clone(type_95)))),info);
                come_call_finalizer3(right_value143,sType_finalize, 0, 1, 0, 0, __result_obj__);
                var__94=get_variable_from_table(info->lv_table,self->name);
                if(_if_conditional179=var__94==((void*)0),                _if_conditional179) {
                    var__94=get_variable_from_table(info->gv_table,self->name);
                    if(_if_conditional180=var__94==((void*)0),                    _if_conditional180) {
                        err_msg(info,"var not found(%s)(Y) at definition of variable\n",self->name);
                        __result95__ = (_Bool)1;
                        come_call_finalizer3(type_95,sType_finalize, 0, 0, 0, 0, (void*)0);
                        array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result95__;
                    }
                }
                left_type_108=(struct sType*)come_increment_ref_count(((struct sType*)(right_value144=sType_clone(var__94->mType))));
                come_call_finalizer3(right_value144,sType_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional182=list$1sNodeph_length(left_type_108->mArrayNum)>0,                _if_conditional182) {
                    add_come_code(info,"%s;\n",((char*)(right_value145=make_define_var(left_type_108,var__94->mCValueName,(_Bool)0,info))));
                    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional183=!left_type_108->mStatic,                    _if_conditional183) {
                        if(_if_conditional184=list$1sNodeph_length(left_type_108->mArrayNum)>0,                        _if_conditional184) {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__94->mCValueName,((char*)(right_value146=make_type_name_string(left_type_108,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            o2_saved_109=(struct list$1sNodeph*)come_increment_ref_count((left_type_108->mArrayNum)),it_112=list$1sNodeph_begin((o2_saved_109));                            !list$1sNodeph_end((o2_saved_109));                            it_112=list$1sNodeph_next((o2_saved_109))                            ){
                                if(_if_conditional189=!node_compile(it_112,info),                                _if_conditional189) {
                                    err_msg(info,"invalid array num");
                                    exit(1);
                                }
                                come_value_115=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("07var.c", 144, 1),__exception_result_var_b2=((struct CVALUE*)(right_value147=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b2));
                                come_call_finalizer3(right_value147,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                dec_stack_ptr(1,info);
                                add_come_code(info,"*(%s)",come_value_115->c_value);
                                come_call_finalizer3(come_value_115,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            come_call_finalizer3(o2_saved_109,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            add_come_code(info,");\n");
                        }
                        else {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)); /* aaa */\n",var__94->mCValueName,var__94->mCValueName);
                        }
                    }
                }
                else {
                    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value148=make_define_var(left_type_108,var__94->mCValueName,(_Bool)0,info))));
                    right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    left_type2_116=(struct sType*)come_increment_ref_count(((struct sType*)(right_value149=sType_clone(left_type_108))));
                    come_call_finalizer3(right_value149,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    left_type2_116->mStatic=(_Bool)0;
                    if(_if_conditional190=!var__94->mType->mConstant&&!var__94->mType->mStatic,                    _if_conditional190) {
                        if(_if_conditional191=list$1sNodeph_length(left_type2_116->mArrayNum)>0,                        _if_conditional191) {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__94->mCValueName,((char*)(right_value150=make_type_name_string(left_type2_116,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            o2_saved_117=(struct list$1sNodeph*)come_increment_ref_count((left_type2_116->mArrayNum)),it_118=list$1sNodeph_begin((o2_saved_117));                            !list$1sNodeph_end((o2_saved_117));                            it_118=list$1sNodeph_next((o2_saved_117))                            ){
                                if(_if_conditional192=!node_compile(it_118,info),                                _if_conditional192) {
                                    err_msg(info,"invalid array num");
                                    exit(1);
                                }
                                come_value_119=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("07var.c", 170, 2),__exception_result_var_b3=((struct CVALUE*)(right_value151=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b3));
                                come_call_finalizer3(right_value151,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                dec_stack_ptr(1,info);
                                add_come_code(info,"*(%s)",come_value_119->c_value);
                                come_call_finalizer3(come_value_119,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            come_call_finalizer3(o2_saved_117,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            add_come_code(info,");\n");
                        }
                        else {
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__94->mCValueName,((char*)(right_value152=make_type_name_string(left_type2_116,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                    }
                    come_call_finalizer3(left_type2_116,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_value_120=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value153=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 182, "CVALUE"))));
                come_call_finalizer3(right_value153,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                __dec_obj51=come_value_120->c_value;
                come_value_120->c_value=(char*)come_increment_ref_count(((char*)(right_value154=xsprintf("%s",var__94->mCValueName))));
                __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj52=come_value_120->type;
                come_value_120->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value155=sType_clone(left_type_108))));
                come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value155,sType_finalize, 0, 1, 0, 0, __result_obj__);
                come_value_120->var=var__94;
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_120));
                if(_if_conditional196=self->alloc&&!left_type_108->mClass->mNumber&&left_type_108->mPointerNum==0,                _if_conditional196) {
                    var__94->mType->mAllocaValue=(_Bool)1;
                }
                come_call_finalizer3(left_type_108,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_120,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(type_95,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional197=!node_compile(self->right_value,info),            _if_conditional197) {
                __result106__ = (_Bool)0;
                array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result106__;
            }
            right_value_124=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("07var.c", 200, 3),__exception_result_var_b4=((struct CVALUE*)(right_value159=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b4));
            come_call_finalizer3(right_value159,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            right_type_125=right_value_124->type;
            dec_stack_ptr(1,info);
            if(self->multiple_assign) {
                if(right_type_125->mNoSolvedGenericsType->v1) {
                    right_type_125=right_type_125->mNoSolvedGenericsType->v1;
                }
            }
            if(self->alloc) {
                var__126=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
                if(var__126) {
                    err_msg(info,"Already appended this var name(%s)(2)",self->name);
                    __result107__ = (_Bool)0;
                    come_call_finalizer3(right_value_124,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result107__;
                }
                if(self->multiple_assign) {
                    i_127=0;
                    for(                    o2_saved_128=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_131=list$1charph_begin((o2_saved_128));                    !list$1charph_end((o2_saved_128));                    it_131=list$1charph_next((o2_saved_128))                    ){
                        if(_if_conditional208=i_127<list$1sTypeph_length(right_type_125->mGenericsTypes),                        _if_conditional208) {
                            right_type2_137=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_type_125->mGenericsTypes,i_127), "07var.c", 221, 4));
                            right_type2_137->mFunctionParam=(_Bool)0;
                            add_variable_to_table(it_131,(struct sType*)come_increment_ref_count(((struct sType*)(right_value160=sType_clone(right_type2_137)))),info);
                            come_call_finalizer3(right_value160,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            var__126=get_variable_from_table(info->lv_table,it_131);
                            var_type_138=(struct sType*)come_increment_ref_count(((struct sType*)(right_value161=sType_clone(var__126->mType))));
                            come_call_finalizer3(right_value161,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            var_type_138->mStatic=(_Bool)0;
                            if(_if_conditional211=!var_type_138->mConstant&&!var_type_138->mStatic,                            _if_conditional211) {
                                if(_if_conditional212=list$1sNodeph_length(var_type_138->mArrayNum)>0,                                _if_conditional212) {
                                    add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__126->mCValueName,((char*)(right_value162=make_type_name_string(var_type_138,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                                    right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    for(                                    o2_saved_139=(struct list$1sNodeph*)come_increment_ref_count((var_type_138->mArrayNum)),it_140=list$1sNodeph_begin((o2_saved_139));                                    !list$1sNodeph_end((o2_saved_139));                                    it_140=list$1sNodeph_next((o2_saved_139))                                    ){
                                        if(_if_conditional213=!node_compile(it_140,info),                                        _if_conditional213) {
                                            err_msg(info,"invalid array num");
                                            exit(1);
                                        }
                                        come_value_141=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("07var.c", 240, 5),__exception_result_var_b5=((struct CVALUE*)(right_value163=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b5));
                                        come_call_finalizer3(right_value163,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                        dec_stack_ptr(1,info);
                                        add_come_code(info,"*(%s)",come_value_141->c_value);
                                        come_call_finalizer3(come_value_141,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    come_call_finalizer3(o2_saved_139,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    add_come_code(info,");\n");
                                }
                                else {
                                    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__126->mCValueName,((char*)(right_value164=make_type_name_string(var_type_138,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                                    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                            }
                            come_call_finalizer3(var_type_138,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        i_127++;
                    }
                    come_call_finalizer3(o2_saved_128,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional214=self->type==((void*)0),                    _if_conditional214) {
                        right_type_125->mFunctionParam=(_Bool)0;
                        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value165=sType_clone(right_type_125)))),info);
                        come_call_finalizer3(right_value165,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        type_142=(struct sType*)come_increment_ref_count(((struct sType*)(right_value166=solve_generics(self->type,info->generics_type,info))));
                        come_call_finalizer3(right_value166,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        type_142->mFunctionParam=(_Bool)0;
                        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value167=sType_clone(type_142)))),info);
                        come_call_finalizer3(right_value167,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(type_142,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    var__126=get_variable_from_table(info->lv_table,self->name);
                    var_type_143=(struct sType*)come_increment_ref_count(((struct sType*)(right_value168=sType_clone(var__126->mType))));
                    come_call_finalizer3(right_value168,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    var_type_143->mStatic=(_Bool)0;
                    if(_if_conditional215=!var__126->mType->mStatic&&!var_type_143->mConstant&&list$1sNodeph_length(var_type_143->mArrayNum)==0,                    _if_conditional215) {
                        if(_if_conditional216=list$1sNodeph_length(var_type_143->mArrayNum)>0,                        _if_conditional216) {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__126->mCValueName,((char*)(right_value169=make_type_name_string(var_type_143,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            o2_saved_144=(struct list$1sNodeph*)come_increment_ref_count((var_type_143->mArrayNum)),it_145=list$1sNodeph_begin((o2_saved_144));                            !list$1sNodeph_end((o2_saved_144));                            it_145=list$1sNodeph_next((o2_saved_144))                            ){
                                if(_if_conditional217=!node_compile(it_145,info),                                _if_conditional217) {
                                    err_msg(info,"invalid array num");
                                    exit(1);
                                }
                                come_value_146=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("07var.c", 281, 6),__exception_result_var_b6=((struct CVALUE*)(right_value170=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b6));
                                come_call_finalizer3(right_value170,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                dec_stack_ptr(1,info);
                                add_come_code(info,"*(%s)",come_value_146->c_value);
                                come_call_finalizer3(come_value_146,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            come_call_finalizer3(o2_saved_144,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            add_come_code(info,");\n");
                        }
                        else {
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__126->mCValueName,((char*)(right_value171=make_type_name_string(var_type_143,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                    }
                    come_call_finalizer3(var_type_143,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            current_stack_frame_struct_147=info->current_stack_frame_struct;
            if(_if_conditional218=current_stack_frame_struct_147&&map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)==((void*)0),            _if_conditional218) {
                parent_var_148=get_variable_from_table(info->lv_table->mParent,self->name);
                if(_if_conditional219=parent_var_148!=((void*)0),                _if_conditional219) {
                    if(_if_conditional220=string_operator_not_equals(parent_var_148->mFunName,info->come_fun->mName),                    _if_conditional220) {
                        come_value_149=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value172=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 301, "CVALUE"))));
                        come_call_finalizer3(right_value172,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                        left_type_150=parent_var_148->mType;
                        if(_if_conditional221=left_type_150->mPointerNum>0&&right_type_125->mPointerNum>0&&right_type_125->mHeap&&left_type_150->mHeap,                        _if_conditional221) {
                            c_value_151=(char*)come_increment_ref_count(((char*)(right_value173=xsprintf("*(parent->%s)",parent_var_148->mCValueName))));
                            right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            decrement_ref_count_object(parent_var_148->mType,c_value_151,info,(_Bool)0);
                            std_move(left_type_150,right_type_125,right_value_124,info);
                            __dec_obj56=come_value_149->c_value;
                            come_value_149->c_value=(char*)come_increment_ref_count(((char*)(right_value174=xsprintf("(*(parent->%s))=%s",parent_var_148->mCValueName,right_value_124->c_value))));
                            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value_id_152=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_124->c_value));
                            if(_if_conditional222=right_value_id_152!=-1,                            _if_conditional222) {
                                remove_object_from_right_values(right_value_id_152,info);
                            }
                            c_value_151 = come_decrement_ref_count2(c_value_151, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        else {
                            if(_if_conditional223=left_type_150->mPointerNum>0&&right_type_125->mPointerNum>0&&string_operator_equals(right_type_125->mClass->mName,"void")&&left_type_150->mHeap,                            _if_conditional223) {
                                c_value_153=(char*)come_increment_ref_count(((char*)(right_value175=xsprintf("*(parent->%s)",parent_var_148->mCValueName))));
                                right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                decrement_ref_count_object(parent_var_148->mType,c_value_153,info,(_Bool)0);
                                __dec_obj57=come_value_149->c_value;
                                come_value_149->c_value=(char*)come_increment_ref_count(((char*)(right_value176=xsprintf("(*(parent->%s))=%s",parent_var_148->mCValueName,right_value_124->c_value))));
                                __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                c_value_153 = come_decrement_ref_count2(c_value_153, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                __dec_obj58=come_value_149->c_value;
                                come_value_149->c_value=(char*)come_increment_ref_count(((char*)(right_value177=xsprintf("(*(parent->%s))=%s",parent_var_148->mCValueName,right_value_124->c_value))));
                                __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                        __dec_obj59=come_value_149->type;
                        come_value_149->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value178=sType_clone(left_type_150))));
                        come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value178,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        come_value_149->var=((void*)0);
                        check_assign_type(((char*)(right_value180=xsprintf("\%s is assigning to",((char*)(right_value179=string_to_string(self->name)))))),left_type_150,right_type_125,come_value_149,(_Bool)0,(_Bool)1,info);
                        right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        add_come_last_code(info,"%s;\n",come_value_149->c_value);
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_149));
                        __result119__ = (_Bool)1;
                        come_call_finalizer3(come_value_149,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value_124,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result119__;
                        come_call_finalizer3(come_value_149,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            if(self->multiple_assign) {
                multiple_var_name_155=(char*)come_increment_ref_count(((char*)(right_value181=xsprintf("multiple_assign_var%d",++num_multiple_var_154))));
                right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                add_come_code_at_function_head(info,"%s;\n",((char*)(right_value182=make_define_var(right_value_124->type,multiple_var_name_155,(_Bool)0,info))));
                right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                add_come_code(info,"%s=%s;\n",multiple_var_name_155,right_value_124->c_value);
                __dec_obj60=right_value_124->c_value;
                right_value_124->c_value=(char*)come_increment_ref_count(((char*)(right_value183=string_clone(multiple_var_name_155))));
                __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                i_156=0;
                for(                o2_saved_157=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_158=list$1charph_begin((o2_saved_157));                !list$1charph_end((o2_saved_157));                it_158=list$1charph_next((o2_saved_157))                ){
                    if(_if_conditional225=i_156<list$1sTypeph_length(right_type_125->mGenericsTypes),                    _if_conditional225) {
                        right_type2_159=(struct sType*)come_increment_ref_count(((struct sType*)(right_value184=sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_type_125->mGenericsTypes,i_156), "07var.c", 355, 7))))));
                        come_call_finalizer3(right_value184,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        var__160=get_variable_from_table(info->lv_table,it_158);
                        var_type_161=(struct sType*)come_increment_ref_count(((struct sType*)(right_value185=sType_clone(var__160->mType))));
                        come_call_finalizer3(right_value185,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        var_type_161->mStatic=(_Bool)0;
                        if(_if_conditional226=!var_type_161->mConstant,                        _if_conditional226) {
                            if(_if_conditional227=list$1sNodeph_length(var_type_161->mArrayNum)>0,                            _if_conditional227) {
                                add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__160->mCValueName,((char*)(right_value186=make_type_name_string(var_type_161,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                                right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                for(                                o2_saved_162=(struct list$1sNodeph*)come_increment_ref_count((var_type_161->mArrayNum)),it_163=list$1sNodeph_begin((o2_saved_162));                                !list$1sNodeph_end((o2_saved_162));                                it_163=list$1sNodeph_next((o2_saved_162))                                ){
                                    if(_if_conditional228=!node_compile(it_163,info),                                    _if_conditional228) {
                                        err_msg(info,"invalid array num");
                                        exit(1);
                                    }
                                    come_value_164=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("07var.c", 371, 8),__exception_result_var_b7=((struct CVALUE*)(right_value187=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b7));
                                    come_call_finalizer3(right_value187,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                    dec_stack_ptr(1,info);
                                    add_come_code(info,"*(%s)",come_value_164->c_value);
                                    come_call_finalizer3(come_value_164,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                come_call_finalizer3(o2_saved_162,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                add_come_code(info,");\n");
                            }
                            else {
                                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__160->mCValueName,((char*)(right_value188=make_type_name_string(var_type_161,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                                right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                        left_type_165=(struct sType*)come_increment_ref_count(((struct sType*)(right_value189=sType_clone(var__160->mType))));
                        come_call_finalizer3(right_value189,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        right_value2_166=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value190=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 384, "CVALUE"))));
                        come_call_finalizer3(right_value190,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                        __dec_obj61=right_value2_166->c_value;
                        right_value2_166->c_value=(char*)come_increment_ref_count(((char*)(right_value191=xsprintf("%s->v%d",right_value_124->c_value,i_156+1))));
                        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __dec_obj62=right_value2_166->type;
                        right_value2_166->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value192=sType_clone(right_type2_159))));
                        come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value192,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        right_value2_166->var=((void*)0);
                        come_value_167=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value193=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 390, "CVALUE"))));
                        come_call_finalizer3(right_value193,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                        check_assign_type(((char*)(right_value195=xsprintf("\%s is assining to}",((char*)(right_value194=string_to_string(self->name)))))),left_type_165,right_type2_159,come_value_167,(_Bool)0,(_Bool)1,info);
                        right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional229=right_type2_159->mHeap&&left_type_165->mHeap&&left_type_165->mPointerNum>0&&right_type2_159->mPointerNum>0,                        _if_conditional229) {
                            if(self->alloc) {
                                std_move(left_type_165,right_type2_159,right_value2_166,info);
                                __dec_obj63=come_value_167->c_value;
                                come_value_167->c_value=(char*)come_increment_ref_count(((char*)(right_value196=xsprintf("%s=%s",var__160->mCValueName,right_value2_166->c_value))));
                                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            right_value_id_168=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value2_166->c_value));
                            if(_if_conditional231=right_value_id_168!=-1,                            _if_conditional231) {
                                remove_object_from_right_values(right_value_id_168,info);
                            }
                        }
                        else {
                            __dec_obj64=come_value_167->c_value;
                            come_value_167->c_value=(char*)come_increment_ref_count(((char*)(right_value197=xsprintf("%s=%s",var__160->mCValueName,right_value2_166->c_value))));
                            __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        __dec_obj65=come_value_167->type;
                        come_value_167->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value198=sType_clone(left_type_165))));
                        come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value198,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        come_value_167->var=var__160;
                        if(self->alloc) {
                            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value199=make_define_var(left_type_165,var__160->mCValueName,(_Bool)0,info))));
                            right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            add_come_code(info,"%s;\n",come_value_167->c_value);
                        }
                        else {
                            add_come_code(info,"%s;\n",come_value_167->c_value);
                        }
                        come_call_finalizer3(right_type2_159,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(var_type_161,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(left_type_165,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value2_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_167,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    i_156++;
                }
                come_call_finalizer3(o2_saved_157,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                multiple_var_name_155 = come_decrement_ref_count2(multiple_var_name_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                var__169=get_variable_from_table(info->lv_table,self->name);
                if(_if_conditional233=var__169==((void*)0),                _if_conditional233) {
                    var__169=get_variable_from_table(info->gv_table,self->name);
                    if(_if_conditional234=var__169==((void*)0),                    _if_conditional234) {
                        err_msg(info,"var not found(%s)(X) at storing variable\n",self->name);
                        __result120__ = (_Bool)1;
                        come_call_finalizer3(right_value_124,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result120__;
                    }
                }
                if(_if_conditional235=var__169->mType==((void*)0),                _if_conditional235) {
                    __dec_obj66=var__169->mType;
                    var__169->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value200=sType_clone(right_type_125))));
                    come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value200,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                left_type_170=(struct sType*)come_increment_ref_count(((struct sType*)(right_value201=sType_clone(var__169->mType))));
                come_call_finalizer3(right_value201,sType_finalize, 0, 1, 0, 0, __result_obj__);
                come_value_171=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value202=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 443, "CVALUE"))));
                come_call_finalizer3(right_value202,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional236=var__169->mType->mStatic&&!var__169->mGlobal,                _if_conditional236) {
                    check_assign_type(((char*)(right_value204=xsprintf("\%s is assining to",((char*)(right_value203=string_to_string(self->name)))))),left_type_170,right_type_125,right_value_124,(_Bool)0,(_Bool)1,info);
                    right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(self->alloc) {
                        add_come_code_at_function_head(info,"%s=%s;\n",((char*)(right_value205=make_define_var(left_type_170,var__169->mCValueName,(_Bool)0,info))),right_value_124->c_value);
                        right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        add_come_code(info,"%s=%s;\n",var__169->mCValueName,right_value_124->c_value);
                    }
                    __dec_obj67=come_value_171->c_value;
                    come_value_171->c_value=(char*)come_increment_ref_count(((char*)(right_value206=__builtin_string(""))));
                    __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_171));
                    transpiler_clear_last_code(info);
                }
                else {
                    if(var__169->mType->mConstant) {
                        check_assign_type(((char*)(right_value208=xsprintf("\%s is assining to",((char*)(right_value207=string_to_string(self->name)))))),left_type_170,right_type_125,right_value_124,(_Bool)0,(_Bool)1,info);
                        right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(self->alloc) {
                            add_come_code_at_function_head(info,"%s=%s;\n",((char*)(right_value209=make_define_var(left_type_170,var__169->mCValueName,(_Bool)0,info))),right_value_124->c_value);
                            right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            add_come_code_at_function_head(info,"%s=%s;\n",var__169->mCValueName,right_value_124->c_value);
                        }
                        __dec_obj68=come_value_171->c_value;
                        come_value_171->c_value=(char*)come_increment_ref_count(((char*)(right_value210=__builtin_string(""))));
                        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_171));
                        transpiler_clear_last_code(info);
                    }
                    else {
                        if(_if_conditional240=right_type_125->mHeap&&left_type_170->mHeap&&left_type_170->mPointerNum>0&&right_type_125->mPointerNum>0,                        _if_conditional240) {
                            check_assign_type(((char*)(right_value212=xsprintf("\%s is assining to",((char*)(right_value211=string_to_string(self->name)))))),left_type_170,right_type_125,right_value_124,(_Bool)0,(_Bool)1,info);
                            right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(self->alloc) {
                                std_move(left_type_170,right_type_125,right_value_124,info);
                                __dec_obj69=come_value_171->c_value;
                                come_value_171->c_value=(char*)come_increment_ref_count(((char*)(right_value213=xsprintf("%s=%s",var__169->mCValueName,right_value_124->c_value))));
                                __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                decrement_ref_count_object(left_type_170,var__169->mCValueName,info,(_Bool)0);
                                std_move(left_type_170,right_type_125,right_value_124,info);
                                __dec_obj70=come_value_171->c_value;
                                come_value_171->c_value=(char*)come_increment_ref_count(((char*)(right_value214=xsprintf("%s=%s",var__169->mCValueName,right_value_124->c_value))));
                                __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            right_value_id_172=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_124->c_value));
                            if(_if_conditional242=right_value_id_172!=-1,                            _if_conditional242) {
                                remove_object_from_right_values(right_value_id_172,info);
                            }
                            __dec_obj71=come_value_171->type;
                            come_value_171->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value215=sType_clone(left_type_170))));
                            come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value215,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            come_value_171->var=var__169;
                            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_171));
                            add_come_last_code(info,"%s;\n",come_value_171->c_value);
                        }
                        else {
                            if(_if_conditional243=string_operator_equals(right_type_125->mClass->mName,"void")&&left_type_170->mHeap&&left_type_170->mPointerNum>0&&right_type_125->mPointerNum>0,                            _if_conditional243) {
                                check_assign_type(((char*)(right_value217=xsprintf("\%s is assining to",((char*)(right_value216=string_to_string(self->name)))))),left_type_170,right_type_125,right_value_124,(_Bool)0,(_Bool)1,info);
                                right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                if(self->alloc) {
                                    __dec_obj72=come_value_171->c_value;
                                    come_value_171->c_value=(char*)come_increment_ref_count(((char*)(right_value218=xsprintf("%s=%s",var__169->mCValueName,right_value_124->c_value))));
                                    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    decrement_ref_count_object(left_type_170,var__169->mCValueName,info,(_Bool)0);
                                    __dec_obj73=come_value_171->c_value;
                                    come_value_171->c_value=(char*)come_increment_ref_count(((char*)(right_value219=xsprintf("%s=%s",var__169->mCValueName,right_value_124->c_value))));
                                    __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __dec_obj74=come_value_171->type;
                                come_value_171->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value220=sType_clone(left_type_170))));
                                come_call_finalizer3(__dec_obj74,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value220,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                come_value_171->var=var__169;
                                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_171));
                                add_come_last_code(info,"%s;\n",come_value_171->c_value);
                            }
                            else {
                                check_assign_type(((char*)(right_value222=xsprintf("\%s is assining to",((char*)(right_value221=string_to_string(self->name)))))),left_type_170,right_type_125,right_value_124,(_Bool)0,(_Bool)1,info);
                                right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                if(_if_conditional245=left_type_170->mHeap&&!right_value_124->type->mHeap,                                _if_conditional245) {
                                    if(_if_conditional246=string_operator_equals(right_value_124->type->mClass->mName,"void")&&right_value_124->type->mPointerNum==1,                                    _if_conditional246) {
                                    }
                                    else {
                                        if(_if_conditional247=!right_value_124->type->mDelegate&&!right_value_124->type->mShare&&!gComeGC,                                        _if_conditional247) {
                                            err_msg(info,"require right value as heap object(%s)",self->name);
                                            __result121__ = (_Bool)0;
                                            come_call_finalizer3(left_type_170,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(come_value_171,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value_124,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                            array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            return __result121__;
                                        }
                                    }
                                }
                                __dec_obj75=come_value_171->c_value;
                                come_value_171->c_value=(char*)come_increment_ref_count(((char*)(right_value223=xsprintf("%s=%s",var__169->mCValueName,right_value_124->c_value))));
                                __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                __dec_obj76=come_value_171->type;
                                come_value_171->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value224=sType_clone(left_type_170))));
                                come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value224,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                come_value_171->var=var__169;
                                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_171));
                                add_come_last_code(info,"%s;\n",come_value_171->c_value);
                            }
                        }
                    }
                }
                if(_if_conditional248=self->alloc&&!left_type_170->mConstant&&!left_type_170->mStatic,                _if_conditional248) {
                    if(_if_conditional249=list$1sNodeph_length(left_type_170->mArrayNum)>0,                    _if_conditional249) {
                        add_come_code(info,"%s;\n",((char*)(right_value225=make_define_var(left_type_170,var__169->mCValueName,(_Bool)0,info))));
                        right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        add_come_code_at_function_head(info,"%s;\n",((char*)(right_value226=make_define_var(left_type_170,var__169->mCValueName,(_Bool)0,info))));
                        right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
                come_call_finalizer3(left_type_170,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_171,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(right_value_124,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    __result122__ = (_Bool)1;
    array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result122__;
    array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sNodeBase_finalize(struct sNodeBase* self){
void* __result_obj__;
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional19=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional19) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional21;
struct sType* __result52__;
void* right_value81;
struct sType* result_47;
_Bool _if_conditional39;
_Bool _if_conditional40;
void* right_value88;
struct list$1sTypeph* __dec_obj16;
_Bool _if_conditional44;
void* right_value91;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional48;
void* right_value92;
struct tuple1$1sTypeph* __dec_obj19;
_Bool _if_conditional49;
void* right_value93;
char* __dec_obj20;
_Bool _if_conditional50;
void* right_value94;
struct list$1sTypeph* __dec_obj21;
_Bool _if_conditional51;
void* right_value102;
struct list$1sNodeph* __dec_obj25;
_Bool _if_conditional64;
_Bool _if_conditional65;
void* right_value103;
struct list$1sTypeph* __dec_obj26;
_Bool _if_conditional66;
void* right_value110;
struct list$1charph* __dec_obj30;
_Bool _if_conditional70;
void* right_value111;
struct tuple1$1sTypeph* __dec_obj31;
_Bool _if_conditional71;
_Bool _if_conditional72;
void* right_value112;
struct sNode* __dec_obj32;
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
void* right_value113;
struct sNode* __dec_obj33;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
void* right_value114;
char* __dec_obj34;
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
void* right_value115;
char* __dec_obj35;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
struct sType* __result69__;
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
            if(_if_conditional21=self==(void*)0,            _if_conditional21) {
                __result52__ = __result_obj__ = (void*)0;
                return __result52__;
            }
            result_47=(struct sType*)come_increment_ref_count(((struct sType*)(right_value81=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
            come_call_finalizer3(right_value81,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional39=self!=((void*)0),            _if_conditional39) {
                result_47->mClass=self->mClass;
            }
            if(_if_conditional40=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional40) {
                __dec_obj16=result_47->mMultipleTypes;
                result_47->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value88=list$1sTypephp_clone(self->mMultipleTypes))));
                come_call_finalizer3(__dec_obj16,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value88,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional44=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional44) {
                __dec_obj18=result_47->mNoSolvedGenericsType;
                result_47->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value91=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value91,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional48=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional48) {
                __dec_obj19=result_47->mOriginalLoadVarType;
                result_47->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value92=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                come_call_finalizer3(__dec_obj19,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value92,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional49=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional49) {
                __dec_obj20=result_47->mGenericsName;
                result_47->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value93=string_clone(self->mGenericsName))));
                __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional50=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional50) {
                __dec_obj21=result_47->mGenericsTypes;
                result_47->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value94=list$1sTypephp_clone(self->mGenericsTypes))));
                come_call_finalizer3(__dec_obj21,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value94,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional51=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional51) {
                __dec_obj25=result_47->mArrayNum;
                result_47->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value102=list$1sNodephp_clone(self->mArrayNum))));
                come_call_finalizer3(__dec_obj25,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value102,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional64=self!=((void*)0),            _if_conditional64) {
                result_47->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(_if_conditional65=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional65) {
                __dec_obj26=result_47->mParamTypes;
                result_47->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value103=list$1sTypephp_clone(self->mParamTypes))));
                come_call_finalizer3(__dec_obj26,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value103,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional66=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional66) {
                __dec_obj30=result_47->mParamNames;
                result_47->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value110=list$1charphp_clone(self->mParamNames))));
                come_call_finalizer3(__dec_obj30,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value110,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional70=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional70) {
                __dec_obj31=result_47->mResultType;
                result_47->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value111=tuple1$1sTypephp_clone(self->mResultType))));
                come_call_finalizer3(__dec_obj31,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value111,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional71=self!=((void*)0),            _if_conditional71) {
                result_47->mVarArgs=self->mVarArgs;
            }
            if(_if_conditional72=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional72) {
                __dec_obj32=result_47->mAlignas;
                result_47->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value112=sNode_clone(self->mAlignas))));
                if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value112) { right_value112 = come_decrement_ref_count2(right_value112, ((struct sNode*)right_value112)->finalize, ((struct sNode*)right_value112)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional73=self!=((void*)0),            _if_conditional73) {
                result_47->mUnsigned=self->mUnsigned;
            }
            if(_if_conditional74=self!=((void*)0),            _if_conditional74) {
                result_47->mShort=self->mShort;
            }
            if(_if_conditional75=self!=((void*)0),            _if_conditional75) {
                result_47->mLong=self->mLong;
            }
            if(_if_conditional76=self!=((void*)0),            _if_conditional76) {
                result_47->mLongLong=self->mLongLong;
            }
            if(_if_conditional77=self!=((void*)0),            _if_conditional77) {
                result_47->mConstant=self->mConstant;
            }
            if(_if_conditional78=self!=((void*)0),            _if_conditional78) {
                result_47->mRegister=self->mRegister;
            }
            if(_if_conditional79=self!=((void*)0),            _if_conditional79) {
                result_47->mVolatile=self->mVolatile;
            }
            if(_if_conditional80=self!=((void*)0),            _if_conditional80) {
                result_47->mStatic=self->mStatic;
            }
            if(_if_conditional81=self!=((void*)0),            _if_conditional81) {
                result_47->mUniq=self->mUniq;
            }
            if(_if_conditional82=self!=((void*)0),            _if_conditional82) {
                result_47->mRecord=self->mRecord;
            }
            if(_if_conditional83=self!=((void*)0),            _if_conditional83) {
                result_47->mExtern=self->mExtern;
            }
            if(_if_conditional84=self!=((void*)0),            _if_conditional84) {
                result_47->mRestrict=self->mRestrict;
            }
            if(_if_conditional85=self!=((void*)0),            _if_conditional85) {
                result_47->mImmutable=self->mImmutable;
            }
            if(_if_conditional86=self!=((void*)0),            _if_conditional86) {
                result_47->mHeap=self->mHeap;
            }
            if(_if_conditional87=self!=((void*)0),            _if_conditional87) {
                result_47->mDummyHeap=self->mDummyHeap;
            }
            if(_if_conditional88=self!=((void*)0),            _if_conditional88) {
                result_47->mDelegate=self->mDelegate;
            }
            if(_if_conditional89=self!=((void*)0),            _if_conditional89) {
                result_47->mShare=self->mShare;
            }
            if(_if_conditional90=self!=((void*)0),            _if_conditional90) {
                result_47->mClone=self->mClone;
            }
            if(_if_conditional91=self!=((void*)0),            _if_conditional91) {
                result_47->mNoHeap=self->mNoHeap;
            }
            if(_if_conditional92=self!=((void*)0),            _if_conditional92) {
                result_47->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            if(_if_conditional93=self!=((void*)0),            _if_conditional93) {
                result_47->mRefference=self->mRefference;
            }
            if(_if_conditional94=self!=((void*)0),            _if_conditional94) {
                result_47->mException=self->mException;
            }
            if(_if_conditional95=self!=((void*)0),            _if_conditional95) {
                result_47->mPointerNum=self->mPointerNum;
            }
            if(_if_conditional96=self!=((void*)0),            _if_conditional96) {
                result_47->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            if(_if_conditional97=self!=((void*)0),            _if_conditional97) {
                result_47->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            if(_if_conditional98=self!=((void*)0),            _if_conditional98) {
                result_47->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
            }
            if(_if_conditional99=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional99) {
                __dec_obj33=result_47->mSizeNum;
                result_47->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value113=sNode_clone(self->mSizeNum))));
                if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value113) { right_value113 = come_decrement_ref_count2(right_value113, ((struct sNode*)right_value113)->finalize, ((struct sNode*)right_value113)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional100=self!=((void*)0),            _if_conditional100) {
                result_47->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            if(_if_conditional101=self!=((void*)0),            _if_conditional101) {
                result_47->mTypeOfExpression=self->mTypeOfExpression;
            }
            if(_if_conditional102=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional102) {
                __dec_obj34=result_47->mOriginalTypeName;
                result_47->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value114=string_clone(self->mOriginalTypeName))));
                __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional103=self!=((void*)0),            _if_conditional103) {
                result_47->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            if(_if_conditional104=self!=((void*)0),            _if_conditional104) {
                result_47->mFunctionParam=self->mFunctionParam;
            }
            if(_if_conditional105=self!=((void*)0),            _if_conditional105) {
                result_47->mAllocaValue=self->mAllocaValue;
            }
            if(_if_conditional106=self!=((void*)0),            _if_conditional106) {
                result_47->mGenericsStruct=self->mGenericsStruct;
            }
            if(_if_conditional107=self!=((void*)0),            _if_conditional107) {
                result_47->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            if(_if_conditional108=self!=((void*)0),            _if_conditional108) {
                result_47->mComeMemCore=self->mComeMemCore;
            }
            if(_if_conditional109=self!=((void*)0),            _if_conditional109) {
                result_47->mInline=self->mInline;
            }
            if(_if_conditional110=self!=((void*)0),            _if_conditional110) {
                result_47->mNullValue=self->mNullValue;
            }
            if(_if_conditional111=self!=((void*)0),            _if_conditional111) {
                result_47->mGuardValue=self->mGuardValue;
            }
            if(_if_conditional112=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional112) {
                __dec_obj35=result_47->mAsmName;
                result_47->mAsmName=(char*)come_increment_ref_count(((char*)(right_value115=string_clone(self->mAsmName))));
                __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional113=self!=((void*)0),            _if_conditional113) {
                result_47->mArrayPointerType=self->mArrayPointerType;
            }
            if(_if_conditional114=self!=((void*)0),            _if_conditional114) {
                result_47->mLambdaArray=self->mLambdaArray;
            }
            if(_if_conditional115=self!=((void*)0),            _if_conditional115) {
                result_47->mNoNumberArray=self->mNoNumberArray;
            }
            __result69__ = __result_obj__ = result_47;
            come_call_finalizer3(result_47,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result69__;
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
                if(_if_conditional22=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                _if_conditional22) {
                    come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional24=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional24) {
                    come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional26=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional26) {
                    come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional27=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional27) {
                    self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional28=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional28) {
                    come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional29=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional29) {
                    come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional31=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional31) {
                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional32=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional32) {
                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional34=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional34) {
                    come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional35=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional35) {
                    if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional36=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional36) {
                    if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional37=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional37) {
                    self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional38=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional38) {
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
                        it_48=self->head;
                        while(_while_condtional7=it_48!=((void*)0),                        _while_condtional7) {
                            prev_it_49=it_48;
                            it_48=it_48->next;
                            come_call_finalizer3(prev_it_49,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional23=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional23) {
                                    come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional25=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional25) {
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
                        it_50=self->head;
                        while(_while_condtional8=it_50!=((void*)0),                        _while_condtional8) {
                            prev_it_51=it_50;
                            it_50=it_50->next;
                            come_call_finalizer3(prev_it_51,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional30;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional30=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional30) {
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
                        it_52=self->head;
                        while(_while_condtional9=it_52!=((void*)0),                        _while_condtional9) {
                            prev_it_53=it_52;
                            it_52=it_52->next;
                            come_call_finalizer3(prev_it_53,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional33;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional33=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional33) {
                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional41;
struct list$1sTypeph* __result53__;
void* right_value82;
void* right_value83;
struct list$1sTypeph* result_54;
struct list_item$1sTypeph* it_55;
_Bool _while_condtional10;
void* right_value87;
struct list$1sTypeph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
right_value83 = (void*)0;
memset(&result_54, 0, sizeof(struct list$1sTypeph*));
memset(&it_55, 0, sizeof(struct list_item$1sTypeph*));
right_value87 = (void*)0;
                    if(_if_conditional41=self==((void*)0),                    _if_conditional41) {
                        __result53__ = __result_obj__ = ((void*)0);
                        return __result53__;
                    }
                    result_54=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value83=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value82=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 137, "list$1sTypeph"))))))));
                    come_call_finalizer3(right_value82,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value83,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_55=self->head;
                    while(_while_condtional10=it_55!=((void*)0),                    _while_condtional10) {
                        list$1sTypeph_add(result_54,(struct sType*)come_increment_ref_count(((struct sType*)(right_value87=sType_clone(it_55->item)))));
                        come_call_finalizer3(right_value87,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        it_55=it_55->next;
                    }
                    __result56__ = __result_obj__ = result_54;
                    come_call_finalizer3(result_54,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result56__;
                    come_call_finalizer3(result_54,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result54__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result54__;
                        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional42;
void* right_value84;
struct list_item$1sTypeph* litem_56;
struct sType* __dec_obj13;
_Bool _if_conditional43;
void* right_value85;
struct list_item$1sTypeph* litem_57;
struct sType* __dec_obj14;
void* right_value86;
struct list_item$1sTypeph* litem_58;
struct sType* __dec_obj15;
struct list$1sTypeph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1sTypeph*));
right_value85 = (void*)0;
memset(&litem_57, 0, sizeof(struct list_item$1sTypeph*));
right_value86 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional42=self->len==0,                            _if_conditional42) {
                                litem_56=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value84=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 151, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value84,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_56->prev=((void*)0);
                                litem_56->next=((void*)0);
                                __dec_obj13=litem_56->item;
                                litem_56->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_56;
                                self->head=litem_56;
                            }
                            else {
                                if(_if_conditional43=self->len==1,                                _if_conditional43) {
                                    litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value85=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 161, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value85,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_57->prev=self->head;
                                    litem_57->next=((void*)0);
                                    __dec_obj14=litem_57->item;
                                    litem_57->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_57;
                                    self->head->next=litem_57;
                                }
                                else {
                                    litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value86=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 171, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value86,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_58->prev=self->tail;
                                    litem_58->next=((void*)0);
                                    __dec_obj15=litem_58->item;
                                    litem_58->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj15,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    self->tail->next=litem_58;
                                    self->tail=litem_58;
                                }
                            }
                            self->len++;
                            __result55__ = __result_obj__ = self;
                            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                            return __result55__;
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
                    it_59=self->head;
                    while(_while_condtional11=it_59!=((void*)0),                    _while_condtional11) {
                        prev_it_60=it_59;
                        it_59=it_59->next;
                        come_call_finalizer3(prev_it_60,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional45;
struct tuple1$1sTypeph* __result57__;
void* right_value89;
struct tuple1$1sTypeph* result_61;
_Bool _if_conditional47;
void* right_value90;
struct sType* __dec_obj17;
struct tuple1$1sTypeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
memset(&result_61, 0, sizeof(struct tuple1$1sTypeph*));
right_value90 = (void*)0;
                    if(_if_conditional45=self==(void*)0,                    _if_conditional45) {
                        __result57__ = __result_obj__ = (void*)0;
                        return __result57__;
                    }
                    result_61=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value89=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                    come_call_finalizer3(right_value89,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional47=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional47) {
                        __dec_obj17=result_61->v1;
                        result_61->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value90=sType_clone(self->v1))));
                        come_call_finalizer3(__dec_obj17,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value90,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    __result58__ = __result_obj__ = result_61;
                    come_call_finalizer3(result_61,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                    return __result58__;
                    come_call_finalizer3(result_61,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional46;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional46=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional46) {
                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional52;
struct list$1sNodeph* __result59__;
void* right_value95;
void* right_value96;
struct list$1sNodeph* result_62;
struct list_item$1sNodeph* it_63;
_Bool _while_condtional12;
void* right_value101;
struct list$1sNodeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
right_value96 = (void*)0;
memset(&result_62, 0, sizeof(struct list$1sNodeph*));
memset(&it_63, 0, sizeof(struct list_item$1sNodeph*));
right_value101 = (void*)0;
                    if(_if_conditional52=self==((void*)0),                    _if_conditional52) {
                        __result59__ = __result_obj__ = ((void*)0);
                        return __result59__;
                    }
                    result_62=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value96=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value95=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 137, "list$1sNodeph"))))))));
                    come_call_finalizer3(right_value95,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value96,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_63=self->head;
                    while(_while_condtional12=it_63!=((void*)0),                    _while_condtional12) {
                        list$1sNodeph_add(result_62,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value101=sNode_clone(it_63->item)))));
                        if(right_value101) { right_value101 = come_decrement_ref_count2(right_value101, ((struct sNode*)right_value101)->finalize, ((struct sNode*)right_value101)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        it_63=it_63->next;
                    }
                    __result64__ = __result_obj__ = result_62;
                    come_call_finalizer3(result_62,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result64__;
                    come_call_finalizer3(result_62,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result60__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result60__;
                        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional53;
void* right_value97;
struct list_item$1sNodeph* litem_64;
struct sNode* __dec_obj22;
_Bool _if_conditional54;
void* right_value98;
struct list_item$1sNodeph* litem_65;
struct sNode* __dec_obj23;
void* right_value99;
struct list_item$1sNodeph* litem_66;
struct sNode* __dec_obj24;
struct list$1sNodeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
memset(&litem_64, 0, sizeof(struct list_item$1sNodeph*));
right_value98 = (void*)0;
memset(&litem_65, 0, sizeof(struct list_item$1sNodeph*));
right_value99 = (void*)0;
memset(&litem_66, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional53=self->len==0,                            _if_conditional53) {
                                litem_64=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value97=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 151, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value97,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_64->prev=((void*)0);
                                litem_64->next=((void*)0);
                                __dec_obj22=litem_64->item;
                                litem_64->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_64;
                                self->head=litem_64;
                            }
                            else {
                                if(_if_conditional54=self->len==1,                                _if_conditional54) {
                                    litem_65=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value98=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 161, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value98,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_65->prev=self->head;
                                    litem_65->next=((void*)0);
                                    __dec_obj23=litem_65->item;
                                    litem_65->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail=litem_65;
                                    self->head->next=litem_65;
                                }
                                else {
                                    litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value99=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 171, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value99,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_66->prev=self->tail;
                                    litem_66->next=((void*)0);
                                    __dec_obj24=litem_66->item;
                                    litem_66->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail->next=litem_66;
                                    self->tail=litem_66;
                                }
                            }
                            self->len++;
                            __result61__ = __result_obj__ = self;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result61__;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional55;
struct sNode* __result62__;
void* right_value100;
struct sNode* result_67;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
struct sNode* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value100 = (void*)0;
memset(&result_67, 0, sizeof(struct sNode*));
                            if(_if_conditional55=self==(void*)0,                            _if_conditional55) {
                                __result62__ = __result_obj__ = (void*)0;
                                return __result62__;
                            }
                            result_67=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value100=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                            if(right_value100) { right_value100 = come_decrement_ref_count2(right_value100, ((struct sNode*)right_value100)->finalize, ((struct sNode*)right_value100)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            if(_if_conditional56=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional56) {
                                result_67->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            if(_if_conditional57=self!=((void*)0),                            _if_conditional57) {
                                result_67->finalize=self->finalize;
                            }
                            if(_if_conditional58=self!=((void*)0),                            _if_conditional58) {
                                result_67->clone=self->clone;
                            }
                            if(_if_conditional59=self!=((void*)0),                            _if_conditional59) {
                                result_67->compile=self->compile;
                            }
                            if(_if_conditional60=self!=((void*)0),                            _if_conditional60) {
                                result_67->sline=self->sline;
                            }
                            if(_if_conditional61=self!=((void*)0),                            _if_conditional61) {
                                result_67->sname=self->sname;
                            }
                            if(_if_conditional62=self!=((void*)0),                            _if_conditional62) {
                                result_67->terminated=self->terminated;
                            }
                            if(_if_conditional63=self!=((void*)0),                            _if_conditional63) {
                                result_67->kind=self->kind;
                            }
                            __result63__ = __result_obj__ = result_67;
                            if(result_67) { result_67 = come_decrement_ref_count2(result_67, ((struct sNode*)result_67)->finalize, ((struct sNode*)result_67)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result63__;
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
                    it_68=self->head;
                    while(_while_condtional13=it_68!=((void*)0),                    _while_condtional13) {
                        prev_it_69=it_68;
                        it_68=it_68->next;
                        come_call_finalizer3(prev_it_69,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional67;
struct list$1charph* __result65__;
void* right_value104;
void* right_value105;
struct list$1charph* result_70;
struct list_item$1charph* it_71;
_Bool _while_condtional14;
void* right_value109;
struct list$1charph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
right_value105 = (void*)0;
memset(&result_70, 0, sizeof(struct list$1charph*));
memset(&it_71, 0, sizeof(struct list_item$1charph*));
right_value109 = (void*)0;
                    if(_if_conditional67=self==((void*)0),                    _if_conditional67) {
                        __result65__ = __result_obj__ = ((void*)0);
                        return __result65__;
                    }
                    result_70=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value105=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value104=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 137, "list$1charph"))))))));
                    come_call_finalizer3(right_value104,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value105,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_71=self->head;
                    while(_while_condtional14=it_71!=((void*)0),                    _while_condtional14) {
                        list$1charph_add(result_70,(char*)come_increment_ref_count(((char*)(right_value109=string_clone(it_71->item)))));
                        right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        it_71=it_71->next;
                    }
                    __result68__ = __result_obj__ = result_70;
                    come_call_finalizer3(result_70,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result68__;
                    come_call_finalizer3(result_70,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result66__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result66__;
                        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional68;
void* right_value106;
struct list_item$1charph* litem_72;
char* __dec_obj27;
_Bool _if_conditional69;
void* right_value107;
struct list_item$1charph* litem_73;
char* __dec_obj28;
void* right_value108;
struct list_item$1charph* litem_74;
char* __dec_obj29;
struct list$1charph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
memset(&litem_72, 0, sizeof(struct list_item$1charph*));
right_value107 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1charph*));
right_value108 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional68=self->len==0,                            _if_conditional68) {
                                litem_72=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value106=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 151, "list_item$1charph"))));
                                come_call_finalizer3(right_value106,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_72->prev=((void*)0);
                                litem_72->next=((void*)0);
                                __dec_obj27=litem_72->item;
                                litem_72->item=(char*)come_increment_ref_count(item);
                                __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_72;
                                self->head=litem_72;
                            }
                            else {
                                if(_if_conditional69=self->len==1,                                _if_conditional69) {
                                    litem_73=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value107=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 161, "list_item$1charph"))));
                                    come_call_finalizer3(right_value107,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_73->prev=self->head;
                                    litem_73->next=((void*)0);
                                    __dec_obj28=litem_73->item;
                                    litem_73->item=(char*)come_increment_ref_count(item);
                                    __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail=litem_73;
                                    self->head->next=litem_73;
                                }
                                else {
                                    litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value108=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 171, "list_item$1charph"))));
                                    come_call_finalizer3(right_value108,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_74->prev=self->tail;
                                    litem_74->next=((void*)0);
                                    __dec_obj29=litem_74->item;
                                    litem_74->item=(char*)come_increment_ref_count(item);
                                    __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail->next=litem_74;
                                    self->tail=litem_74;
                                }
                            }
                            self->len++;
                            __result67__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result67__;
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
                    it_75=self->head;
                    while(_while_condtional15=it_75!=((void*)0),                    _while_condtional15) {
                        prev_it_76=it_75;
                        it_75=it_75->next;
                        come_call_finalizer3(prev_it_76,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1tuple4$4sTypephcharphsNodephcharphph* list$1tuple4$4sTypephcharphsNodephcharphphp_clone(struct list$1tuple4$4sTypephcharphsNodephcharphph* self){
void* __result_obj__;
_Bool _if_conditional118;
struct list$1tuple4$4sTypephcharphsNodephcharphph* __result70__;
void* right_value118;
void* right_value119;
struct list$1tuple4$4sTypephcharphsNodephcharphph* result_79;
struct list_item$1tuple4$4sTypephcharphsNodephcharphph* it_80;
_Bool _while_condtional17;
void* right_value128;
struct list$1tuple4$4sTypephcharphsNodephcharphph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
right_value119 = (void*)0;
memset(&result_79, 0, sizeof(struct list$1tuple4$4sTypephcharphsNodephcharphph*));
memset(&it_80, 0, sizeof(struct list_item$1tuple4$4sTypephcharphsNodephcharphph*));
right_value128 = (void*)0;
            if(_if_conditional118=self==((void*)0),            _if_conditional118) {
                __result70__ = __result_obj__ = ((void*)0);
                return __result70__;
            }
            result_79=(struct list$1tuple4$4sTypephcharphsNodephcharphph*)come_increment_ref_count(((struct list$1tuple4$4sTypephcharphsNodephcharphph*)(right_value119=list$1tuple4$4sTypephcharphsNodephcharphph_initialize((struct list$1tuple4$4sTypephcharphsNodephcharphph*)come_increment_ref_count(((struct list$1tuple4$4sTypephcharphsNodephcharphph*)(right_value118=(struct list$1tuple4$4sTypephcharphsNodephcharphph*)come_calloc(1, sizeof(struct list$1tuple4$4sTypephcharphsNodephcharphph)*(1), "./neo-c.h", 137, "list$1tuple4$4sTypephcharphsNodephcharphph"))))))));
            come_call_finalizer3(right_value118,list$1tuple4$4sTypephcharphsNodephcharphphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value119,list$1tuple4$4sTypephcharphsNodephcharphphp_finalize, 0, 1, 0, 0, __result_obj__);
            it_80=self->head;
            while(_while_condtional17=it_80!=((void*)0),            _while_condtional17) {
                list$1tuple4$4sTypephcharphsNodephcharphph_add(result_79,(struct tuple4$4sTypephcharphsNodephcharph*)come_increment_ref_count(((struct tuple4$4sTypephcharphsNodephcharph*)(right_value128=tuple4$4sTypephcharphsNodephcharphp_clone(it_80->item)))));
                come_call_finalizer3(right_value128,tuple4$4sTypephcharphsNodephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                it_80=it_80->next;
            }
            __result75__ = __result_obj__ = result_79;
            come_call_finalizer3(result_79,list$1tuple4$4sTypephcharphsNodephcharphphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result75__;
            come_call_finalizer3(result_79,list$1tuple4$4sTypephcharphsNodephcharphphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple4$4sTypephcharphsNodephcharphph* list$1tuple4$4sTypephcharphsNodephcharphph_initialize(struct list$1tuple4$4sTypephcharphsNodephcharphph* self){
void* __result_obj__;
struct list$1tuple4$4sTypephcharphsNodephcharphph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result71__ = __result_obj__ = self;
                come_call_finalizer3(self,list$1tuple4$4sTypephcharphsNodephcharphphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result71__;
                come_call_finalizer3(self,list$1tuple4$4sTypephcharphsNodephcharphphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple4$4sTypephcharphsNodephcharphphp_finalize(struct list$1tuple4$4sTypephcharphsNodephcharphph* self){
void* __result_obj__;
struct list_item$1tuple4$4sTypephcharphsNodephcharphph* it_77;
_Bool _while_condtional16;
struct list_item$1tuple4$4sTypephcharphsNodephcharphph* prev_it_78;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_77, 0, sizeof(struct list_item$1tuple4$4sTypephcharphsNodephcharphph*));
memset(&prev_it_78, 0, sizeof(struct list_item$1tuple4$4sTypephcharphsNodephcharphph*));
                    it_77=self->head;
                    while(_while_condtional16=it_77!=((void*)0),                    _while_condtional16) {
                        prev_it_78=it_77;
                        it_77=it_77->next;
                        come_call_finalizer3(prev_it_78,list_item$1tuple4$4sTypephcharphsNodephcharphphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1tuple4$4sTypephcharphsNodephcharphphp_finalize(struct list_item$1tuple4$4sTypephcharphsNodephcharphph* self){
void* __result_obj__;
_Bool _if_conditional119;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional119=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional119) {
                                come_call_finalizer3(self->item,tuple4$4sTypephcharphsNodephcharphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1tuple4$4sTypephcharphsNodephcharphph* list$1tuple4$4sTypephcharphsNodephcharphph_add(struct list$1tuple4$4sTypephcharphsNodephcharphph* self, struct tuple4$4sTypephcharphsNodephcharph* item){
void* __result_obj__;
_Bool _if_conditional124;
void* right_value120;
struct list_item$1tuple4$4sTypephcharphsNodephcharphph* litem_81;
struct tuple4$4sTypephcharphsNodephcharph* __dec_obj41;
_Bool _if_conditional129;
void* right_value121;
struct list_item$1tuple4$4sTypephcharphsNodephcharphph* litem_82;
struct tuple4$4sTypephcharphsNodephcharph* __dec_obj42;
void* right_value122;
struct list_item$1tuple4$4sTypephcharphsNodephcharphph* litem_83;
struct tuple4$4sTypephcharphsNodephcharph* __dec_obj43;
struct list$1tuple4$4sTypephcharphsNodephcharphph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value120 = (void*)0;
memset(&litem_81, 0, sizeof(struct list_item$1tuple4$4sTypephcharphsNodephcharphph*));
right_value121 = (void*)0;
memset(&litem_82, 0, sizeof(struct list_item$1tuple4$4sTypephcharphsNodephcharphph*));
right_value122 = (void*)0;
memset(&litem_83, 0, sizeof(struct list_item$1tuple4$4sTypephcharphsNodephcharphph*));
                    if(_if_conditional124=self->len==0,                    _if_conditional124) {
                        litem_81=(struct list_item$1tuple4$4sTypephcharphsNodephcharphph*)come_increment_ref_count(((struct list_item$1tuple4$4sTypephcharphsNodephcharphph*)(right_value120=(struct list_item$1tuple4$4sTypephcharphsNodephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple4$4sTypephcharphsNodephcharphph)*(1), "./neo-c.h", 151, "list_item$1tuple4$4sTypephcharphsNodephcharphph"))));
                        come_call_finalizer3(right_value120,list_item$1tuple4$4sTypephcharphsNodephcharphphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_81->prev=((void*)0);
                        litem_81->next=((void*)0);
                        __dec_obj41=litem_81->item;
                        litem_81->item=(struct tuple4$4sTypephcharphsNodephcharph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj41,tuple4$4sTypephcharphsNodephcharphp_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_81;
                        self->head=litem_81;
                    }
                    else {
                        if(_if_conditional129=self->len==1,                        _if_conditional129) {
                            litem_82=(struct list_item$1tuple4$4sTypephcharphsNodephcharphph*)come_increment_ref_count(((struct list_item$1tuple4$4sTypephcharphsNodephcharphph*)(right_value121=(struct list_item$1tuple4$4sTypephcharphsNodephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple4$4sTypephcharphsNodephcharphph)*(1), "./neo-c.h", 161, "list_item$1tuple4$4sTypephcharphsNodephcharphph"))));
                            come_call_finalizer3(right_value121,list_item$1tuple4$4sTypephcharphsNodephcharphphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_82->prev=self->head;
                            litem_82->next=((void*)0);
                            __dec_obj42=litem_82->item;
                            litem_82->item=(struct tuple4$4sTypephcharphsNodephcharph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj42,tuple4$4sTypephcharphsNodephcharphp_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_82;
                            self->head->next=litem_82;
                        }
                        else {
                            litem_83=(struct list_item$1tuple4$4sTypephcharphsNodephcharphph*)come_increment_ref_count(((struct list_item$1tuple4$4sTypephcharphsNodephcharphph*)(right_value122=(struct list_item$1tuple4$4sTypephcharphsNodephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple4$4sTypephcharphsNodephcharphph)*(1), "./neo-c.h", 171, "list_item$1tuple4$4sTypephcharphsNodephcharphph"))));
                            come_call_finalizer3(right_value122,list_item$1tuple4$4sTypephcharphsNodephcharphphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_83->prev=self->tail;
                            litem_83->next=((void*)0);
                            __dec_obj43=litem_83->item;
                            litem_83->item=(struct tuple4$4sTypephcharphsNodephcharph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj43,tuple4$4sTypephcharphsNodephcharphp_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_83;
                            self->tail=litem_83;
                        }
                    }
                    self->len++;
                    __result72__ = __result_obj__ = self;
                    come_call_finalizer3(item,tuple4$4sTypephcharphsNodephcharphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result72__;
                    come_call_finalizer3(item,tuple4$4sTypephcharphsNodephcharphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple4$4sTypephcharphsNodephcharphp_finalize(struct tuple4$4sTypephcharphsNodephcharph* self){
void* __result_obj__;
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional134=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional134) {
                                    come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional135=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional135) {
                                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional136=self!=((void*)0)&&self->v3!=((void*)0),                                _if_conditional136) {
                                    if(self->v3) { self->v3 = come_decrement_ref_count2(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional137=self!=((void*)0)&&self->v4!=((void*)0),                                _if_conditional137) {
                                    self->v4 = come_decrement_ref_count2(self->v4, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct tuple4$4sTypephcharphsNodephcharph* tuple4$4sTypephcharphsNodephcharphp_clone(struct tuple4$4sTypephcharphsNodephcharph* self){
void* __result_obj__;
_Bool _if_conditional138;
struct tuple4$4sTypephcharphsNodephcharph* __result73__;
void* right_value123;
struct tuple4$4sTypephcharphsNodephcharph* result_84;
_Bool _if_conditional143;
void* right_value124;
struct sType* __dec_obj44;
_Bool _if_conditional144;
void* right_value125;
char* __dec_obj45;
_Bool _if_conditional145;
void* right_value126;
struct sNode* __dec_obj46;
_Bool _if_conditional146;
void* right_value127;
char* __dec_obj47;
struct tuple4$4sTypephcharphsNodephcharph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
memset(&result_84, 0, sizeof(struct tuple4$4sTypephcharphsNodephcharph*));
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value126 = (void*)0;
right_value127 = (void*)0;
                    if(_if_conditional138=self==(void*)0,                    _if_conditional138) {
                        __result73__ = __result_obj__ = (void*)0;
                        return __result73__;
                    }
                    result_84=(struct tuple4$4sTypephcharphsNodephcharph*)come_increment_ref_count(((struct tuple4$4sTypephcharphsNodephcharph*)(right_value123=(struct tuple4$4sTypephcharphsNodephcharph*)come_calloc(1, sizeof(struct tuple4$4sTypephcharphsNodephcharph)*(1), "tuple4$4sTypephcharphsNodephcharphp_clone", 3, "tuple4$4sTypephcharphsNodephcharph"))));
                    come_call_finalizer3(right_value123,tuple4$4sTypephcharphsNodephcharph_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional143=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional143) {
                        __dec_obj44=result_84->v1;
                        result_84->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value124=sType_clone(self->v1))));
                        come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value124,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional144=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional144) {
                        __dec_obj45=result_84->v2;
                        result_84->v2=(char*)come_increment_ref_count(((char*)(right_value125=string_clone(self->v2))));
                        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional145=self!=((void*)0)&&self->v3!=((void*)0),                    _if_conditional145) {
                        __dec_obj46=result_84->v3;
                        result_84->v3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value126=sNode_clone(self->v3))));
                        if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value126) { right_value126 = come_decrement_ref_count2(right_value126, ((struct sNode*)right_value126)->finalize, ((struct sNode*)right_value126)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional146=self!=((void*)0)&&self->v4!=((void*)0),                    _if_conditional146) {
                        __dec_obj47=result_84->v4;
                        result_84->v4=(char*)come_increment_ref_count(((char*)(right_value127=string_clone(self->v4))));
                        __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    __result74__ = __result_obj__ = result_84;
                    come_call_finalizer3(result_84,tuple4$4sTypephcharphsNodephcharph_finalize, 0, 0, 1, 0, (void*)0);
                    return __result74__;
                    come_call_finalizer3(result_84,tuple4$4sTypephcharphsNodephcharph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple4$4sTypephcharphsNodephcharph_finalize(struct tuple4$4sTypephcharphsNodephcharph* self){
void* __result_obj__;
_Bool _if_conditional139;
_Bool _if_conditional140;
_Bool _if_conditional141;
_Bool _if_conditional142;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional139=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional139) {
                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional140=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional140) {
                            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional141=self!=((void*)0)&&self->v3!=((void*)0),                        _if_conditional141) {
                            if(self->v3) { self->v3 = come_decrement_ref_count2(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional142=self!=((void*)0)&&self->v4!=((void*)0),                        _if_conditional142) {
                            self->v4 = come_decrement_ref_count2(self->v4, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void list$1tuple4$4sTypephcharphsNodephcharphph_finalize(struct list$1tuple4$4sTypephcharphsNodephcharphph* self){
void* __result_obj__;
struct list_item$1tuple4$4sTypephcharphsNodephcharphph* it_85;
_Bool _while_condtional18;
struct list_item$1tuple4$4sTypephcharphsNodephcharphph* prev_it_86;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_85, 0, sizeof(struct list_item$1tuple4$4sTypephcharphsNodephcharphph*));
memset(&prev_it_86, 0, sizeof(struct list_item$1tuple4$4sTypephcharphsNodephcharphph*));
            it_85=self->head;
            while(_while_condtional18=it_85!=((void*)0),            _while_condtional18) {
                prev_it_86=it_85;
                it_85=it_85->next;
                come_call_finalizer3(prev_it_86,list_item$1tuple4$4sTypephcharphsNodephcharphphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
struct sVar* default_value_88;
unsigned int hash_89;
unsigned int it_90;
_Bool _while_condtional19;
_Bool _if_conditional155;
_Bool _if_conditional156;
struct sVar* __result78__;
_Bool _if_conditional161;
_Bool _if_conditional162;
struct sVar* __result79__;
struct sVar* __result80__;
struct sVar* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_88, 0, sizeof(struct sVar*));
memset(&hash_89, 0, sizeof(unsigned int));
memset(&it_90, 0, sizeof(unsigned int));
            memset(&default_value_88,0,sizeof(struct sVar*));
            hash_89=string_get_hash_key(((char*)key))%self->size;
            it_90=hash_89;
            while(_while_condtional19=(_Bool)1,            _while_condtional19) {
                if(_if_conditional155=self->item_existance[it_90],                _if_conditional155) {
                    if(_if_conditional156=string_equals(self->keys[it_90],key),                    _if_conditional156) {
                        __result78__ = __result_obj__ = self->items[it_90];
                        come_call_finalizer3(default_value_88,sVar_finalize, 0, 0, 0, 0, (void*)0);
                        return __result78__;
                    }
                    it_90++;
                    if(_if_conditional161=it_90>=self->size,                    _if_conditional161) {
                        it_90=0;
                    }
                    else {
                        if(_if_conditional162=it_90==hash_89,                        _if_conditional162) {
                            __result79__ = __result_obj__ = default_value_88;
                            come_call_finalizer3(default_value_88,sVar_finalize, 0, 0, 1, 0, (void*)0);
                            return __result79__;
                        }
                    }
                }
                else {
                    __result80__ = __result_obj__ = default_value_88;
                    come_call_finalizer3(default_value_88,sVar_finalize, 0, 0, 1, 0, (void*)0);
                    return __result80__;
                }
            }
            __result81__ = __result_obj__ = default_value_88;
            come_call_finalizer3(default_value_88,sVar_finalize, 0, 0, 1, 0, (void*)0);
            return __result81__;
            come_call_finalizer3(default_value_88,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional157=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional157) {
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional158=self!=((void*)0)&&self->mCValueName!=((void*)0),                            _if_conditional158) {
                                self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional159=self!=((void*)0)&&self->mType!=((void*)0),                            _if_conditional159) {
                                come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional160=self!=((void*)0)&&self->mFunName!=((void*)0),                            _if_conditional160) {
                                self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct tuple4$4sTypephcharphsNodephcharph* list$1tuple4$4sTypephcharphsNodephcharphph_begin(struct list$1tuple4$4sTypephcharphsNodephcharphph* self){
void* __result_obj__;
_Bool _if_conditional169;
struct tuple4$4sTypephcharphsNodephcharph* result_97;
struct tuple4$4sTypephcharphsNodephcharph* __result86__;
_Bool _if_conditional170;
struct tuple4$4sTypephcharphsNodephcharph* __result87__;
struct tuple4$4sTypephcharphsNodephcharph* result_98;
struct tuple4$4sTypephcharphsNodephcharph* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_97, 0, sizeof(struct tuple4$4sTypephcharphsNodephcharph*));
memset(&result_98, 0, sizeof(struct tuple4$4sTypephcharphsNodephcharph*));
                    if(_if_conditional169=self==((void*)0),                    _if_conditional169) {
                        memset(&result_97,0,sizeof(struct tuple4$4sTypephcharphsNodephcharph*));
                        __result86__ = __result_obj__ = result_97;
                        return __result86__;
                    }
                    self->it=self->head;
                    if(self->it) {
                        __result87__ = __result_obj__ = self->it->item;
                        return __result87__;
                    }
                    memset(&result_98,0,sizeof(struct tuple4$4sTypephcharphsNodephcharph*));
                    __result88__ = __result_obj__ = result_98;
                    return __result88__;
}

static _Bool list$1tuple4$4sTypephcharphsNodephcharphph_end(struct list$1tuple4$4sTypephcharphsNodephcharphph* self){
void* __result_obj__;
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result89__ = self==((void*)0)||self->it==((void*)0);
                    return __result89__;
}

static struct tuple4$4sTypephcharphsNodephcharph* list$1tuple4$4sTypephcharphsNodephcharphph_next(struct list$1tuple4$4sTypephcharphsNodephcharphph* self){
void* __result_obj__;
_Bool _if_conditional171;
struct tuple4$4sTypephcharphsNodephcharph* result_100;
struct tuple4$4sTypephcharphsNodephcharph* __result90__;
_Bool _if_conditional172;
struct tuple4$4sTypephcharphsNodephcharph* __result91__;
struct tuple4$4sTypephcharphsNodephcharph* result_101;
struct tuple4$4sTypephcharphsNodephcharph* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_100, 0, sizeof(struct tuple4$4sTypephcharphsNodephcharph*));
memset(&result_101, 0, sizeof(struct tuple4$4sTypephcharphsNodephcharph*));
                    if(_if_conditional171=self==((void*)0)||self->it==((void*)0),                    _if_conditional171) {
                        memset(&result_100,0,sizeof(struct tuple4$4sTypephcharphsNodephcharph*));
                        __result90__ = __result_obj__ = result_100;
                        return __result90__;
                    }
                    self->it=self->it->next;
                    if(self->it) {
                        __result91__ = __result_obj__ = self->it->item;
                        return __result91__;
                    }
                    memset(&result_101,0,sizeof(struct tuple4$4sTypephcharphsNodephcharph*));
                    __result92__ = __result_obj__ = result_101;
                    return __result92__;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional176;
_Bool _if_conditional177;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional176=self!=((void*)0)&&self->c_value!=((void*)0),                            _if_conditional176) {
                                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional177=self!=((void*)0)&&self->type!=((void*)0),                            _if_conditional177) {
                                come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional181;
int __result96__;
int __result97__;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional181=self==((void*)0),                    _if_conditional181) {
                        __result96__ = 0;
                        return __result96__;
                    }
                    __result97__ = self->len;
                    return __result97__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional185;
struct sNode* result_110;
struct sNode* __result98__;
_Bool _if_conditional186;
struct sNode* __result99__;
struct sNode* result_111;
struct sNode* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_110, 0, sizeof(struct sNode*));
memset(&result_111, 0, sizeof(struct sNode*));
                                if(_if_conditional185=self==((void*)0),                                _if_conditional185) {
                                    memset(&result_110,0,sizeof(struct sNode*));
                                    __result98__ = __result_obj__ = result_110;
                                    return __result98__;
                                }
                                self->it=self->head;
                                if(self->it) {
                                    __result99__ = __result_obj__ = self->it->item;
                                    return __result99__;
                                }
                                memset(&result_111,0,sizeof(struct sNode*));
                                __result100__ = __result_obj__ = result_111;
                                return __result100__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
                                __result101__ = self==((void*)0)||self->it==((void*)0);
                                return __result101__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional187;
struct sNode* result_113;
struct sNode* __result102__;
_Bool _if_conditional188;
struct sNode* __result103__;
struct sNode* result_114;
struct sNode* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_113, 0, sizeof(struct sNode*));
memset(&result_114, 0, sizeof(struct sNode*));
                                if(_if_conditional187=self==((void*)0)||self->it==((void*)0),                                _if_conditional187) {
                                    memset(&result_113,0,sizeof(struct sNode*));
                                    __result102__ = __result_obj__ = result_113;
                                    return __result102__;
                                }
                                self->it=self->it->next;
                                if(self->it) {
                                    __result103__ = __result_obj__ = self->it->item;
                                    return __result103__;
                                }
                                memset(&result_114,0,sizeof(struct sNode*));
                                __result104__ = __result_obj__ = result_114;
                                return __result104__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional193;
void* right_value156;
struct list_item$1CVALUEph* litem_121;
struct CVALUE* __dec_obj53;
_Bool _if_conditional195;
void* right_value157;
struct list_item$1CVALUEph* litem_122;
struct CVALUE* __dec_obj54;
void* right_value158;
struct list_item$1CVALUEph* litem_123;
struct CVALUE* __dec_obj55;
struct list$1CVALUEph* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value156 = (void*)0;
memset(&litem_121, 0, sizeof(struct list_item$1CVALUEph*));
right_value157 = (void*)0;
memset(&litem_122, 0, sizeof(struct list_item$1CVALUEph*));
right_value158 = (void*)0;
memset(&litem_123, 0, sizeof(struct list_item$1CVALUEph*));
                    if(_if_conditional193=self->len==0,                    _if_conditional193) {
                        litem_121=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value156=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 221, "list_item$1CVALUEph"))));
                        come_call_finalizer3(right_value156,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_121->prev=((void*)0);
                        litem_121->next=((void*)0);
                        __dec_obj53=litem_121->item;
                        litem_121->item=(struct CVALUE*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj53,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_121;
                        self->head=litem_121;
                    }
                    else {
                        if(_if_conditional195=self->len==1,                        _if_conditional195) {
                            litem_122=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value157=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 231, "list_item$1CVALUEph"))));
                            come_call_finalizer3(right_value157,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_122->prev=self->head;
                            litem_122->next=((void*)0);
                            __dec_obj54=litem_122->item;
                            litem_122->item=(struct CVALUE*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj54,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_122;
                            self->head->next=litem_122;
                        }
                        else {
                            litem_123=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value158=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 241, "list_item$1CVALUEph"))));
                            come_call_finalizer3(right_value158,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_123->prev=self->tail;
                            litem_123->next=((void*)0);
                            __dec_obj55=litem_123->item;
                            litem_123->item=(struct CVALUE*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj55,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_123;
                            self->tail=litem_123;
                        }
                    }
                    self->len++;
                    __result105__ = __result_obj__ = self;
                    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                    return __result105__;
                    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional194;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional194=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional194) {
                                come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional203;
char* result_129;
char* __result108__;
_Bool _if_conditional204;
char* __result109__;
char* result_130;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_129, 0, sizeof(char*));
memset(&result_130, 0, sizeof(char*));
                        if(_if_conditional203=self==((void*)0),                        _if_conditional203) {
                            memset(&result_129,0,sizeof(char*));
                            __result108__ = __result_obj__ = result_129;
                            return __result108__;
                        }
                        self->it=self->head;
                        if(self->it) {
                            __result109__ = __result_obj__ = self->it->item;
                            return __result109__;
                        }
                        memset(&result_130,0,sizeof(char*));
                        __result110__ = __result_obj__ = result_130;
                        return __result110__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result111__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result111__ = self==((void*)0)||self->it==((void*)0);
                        return __result111__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional205;
char* result_132;
char* __result112__;
_Bool _if_conditional206;
char* __result113__;
char* result_133;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_132, 0, sizeof(char*));
memset(&result_133, 0, sizeof(char*));
                        if(_if_conditional205=self==((void*)0)||self->it==((void*)0),                        _if_conditional205) {
                            memset(&result_132,0,sizeof(char*));
                            __result112__ = __result_obj__ = result_132;
                            return __result112__;
                        }
                        self->it=self->it->next;
                        if(self->it) {
                            __result113__ = __result_obj__ = self->it->item;
                            return __result113__;
                        }
                        memset(&result_133,0,sizeof(char*));
                        __result114__ = __result_obj__ = result_133;
                        return __result114__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional207;
int __result115__;
int __result116__;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional207=self==((void*)0),                            _if_conditional207) {
                                __result115__ = 0;
                                return __result115__;
                            }
                            __result116__ = self->len;
                            return __result116__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional209;
struct list_item$1sTypeph* it_134;
int i_135;
_Bool _while_condtional20;
_Bool _if_conditional210;
struct sType* __result117__;
struct sType* default_value_136;
struct sType* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_134, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_135, 0, sizeof(int));
memset(&default_value_136, 0, sizeof(struct sType*));
                                if(_if_conditional209=position<0,                                _if_conditional209) {
                                    position+=self->len;
                                }
                                it_134=self->head;
                                i_135=0;
                                while(_while_condtional20=it_134!=((void*)0),                                _while_condtional20) {
                                    if(_if_conditional210=position==i_135,                                    _if_conditional210) {
                                        __result117__ = __result_obj__ = it_134->item;
                                        return __result117__;
                                    }
                                    it_134=it_134->next;
                                    i_135++;
                                }
                                memset(&default_value_136,0,sizeof(struct sType*));
                                __result118__ = __result_obj__ = default_value_136;
                                come_call_finalizer3(default_value_136,sType_finalize, 0, 0, 1, 0, (void*)0);
                                return __result118__;
                                come_call_finalizer3(default_value_136,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value227;
void* right_value228;
char* __dec_obj77;
struct sLoadNode* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value227 = (void*)0;
right_value228 = (void*)0;
    ((struct sNodeBase*)(right_value227=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value227,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj77=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value228=__builtin_string(name))));
    __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result123__ = __result_obj__ = self;
    come_call_finalizer3(self,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result123__;
    come_call_finalizer3(self,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

char* sLoadNode_kind(struct sLoadNode* self){
void* __result_obj__;
void* right_value229;
char* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value229 = (void*)0;
    __result124__ = __result_obj__ = ((char*)(right_value229=__builtin_string("sLoadNode")));
    right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result124__;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
void* __result_obj__;
struct sClass* current_stack_frame_struct_173;
_Bool _if_conditional252;
struct sVar* parent_var_174;
_Bool _if_conditional253;
_Bool _if_conditional254;
void* right_value230;
struct CVALUE* come_value_175;
struct sType* type_176;
void* right_value231;
char* __dec_obj78;
void* right_value232;
struct sType* __dec_obj79;
_Bool __result125__;
struct sVar* var__177;
_Bool _if_conditional255;
_Bool _if_conditional256;
struct sFun* fun_181;
_Bool _if_conditional276;
void* right_value233;
struct CVALUE* come_value_182;
void* right_value234;
char* __dec_obj80;
struct sType* __dec_obj81;
_Bool __result130__;
_Bool __result131__;
void* right_value235;
struct CVALUE* come_value_183;
void* right_value236;
char* __dec_obj82;
void* right_value237;
struct sType* __dec_obj83;
_Bool _if_conditional277;
void* right_value238;
struct sType* __dec_obj84;
_Bool __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&current_stack_frame_struct_173, 0, sizeof(struct sClass*));
memset(&parent_var_174, 0, sizeof(struct sVar*));
right_value230 = (void*)0;
memset(&come_value_175, 0, sizeof(struct CVALUE*));
memset(&type_176, 0, sizeof(struct sType*));
right_value231 = (void*)0;
right_value232 = (void*)0;
memset(&var__177, 0, sizeof(struct sVar*));
memset(&fun_181, 0, sizeof(struct sFun*));
right_value233 = (void*)0;
memset(&come_value_182, 0, sizeof(struct CVALUE*));
right_value234 = (void*)0;
right_value235 = (void*)0;
memset(&come_value_183, 0, sizeof(struct CVALUE*));
right_value236 = (void*)0;
right_value237 = (void*)0;
right_value238 = (void*)0;
    current_stack_frame_struct_173=info->current_stack_frame_struct;
    if(_if_conditional252=current_stack_frame_struct_173&&map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)==((void*)0),    _if_conditional252) {
        parent_var_174=get_variable_from_table(info->lv_table->mParent,self->name);
        if(_if_conditional253=parent_var_174!=((void*)0),        _if_conditional253) {
            if(_if_conditional254=string_operator_not_equals(parent_var_174->mFunName,info->come_fun->mName),            _if_conditional254) {
                come_value_175=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value230=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 577, "CVALUE"))));
                come_call_finalizer3(right_value230,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                type_176=parent_var_174->mType;
                __dec_obj78=come_value_175->c_value;
                come_value_175->c_value=(char*)come_increment_ref_count(((char*)(right_value231=xsprintf("(*(parent->%s))",parent_var_174->mCValueName))));
                __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj79=come_value_175->type;
                come_value_175->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value232=sType_clone(type_176))));
                come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value232,sType_finalize, 0, 1, 0, 0, __result_obj__);
                come_value_175->var=((void*)0);
                add_come_last_code(info,"%s;\n",come_value_175->c_value);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_175));
                __result125__ = (_Bool)1;
                come_call_finalizer3(come_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result125__;
                come_call_finalizer3(come_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    var__177=get_variable_from_table(info->lv_table,self->name);
    if(_if_conditional255=var__177==((void*)0),    _if_conditional255) {
        var__177=get_variable_from_table(info->gv_table,self->name);
        if(_if_conditional256=var__177==((void*)0),        _if_conditional256) {
            fun_181=map$2charphsFunphp_operator_load_element(info->funcs,self->name);
            if(fun_181) {
                come_value_182=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value233=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 604, "CVALUE"))));
                come_call_finalizer3(right_value233,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                __dec_obj80=come_value_182->c_value;
                come_value_182->c_value=(char*)come_increment_ref_count(((char*)(right_value234=xsprintf("%s",fun_181->mName))));
                __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj81=come_value_182->type;
                come_value_182->type=(struct sType*)come_increment_ref_count(fun_181->mLambdaType);
                come_call_finalizer3(__dec_obj81,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_182->var=((void*)0);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_182));
                __result130__ = (_Bool)1;
                come_call_finalizer3(come_value_182,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result130__;
                come_call_finalizer3(come_value_182,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"var not found(%s)(Z) at loading variable\n",self->name);
                __result131__ = (_Bool)1;
                return __result131__;
            }
        }
    }
    come_value_183=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value235=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 621, "CVALUE"))));
    come_call_finalizer3(right_value235,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj82=come_value_183->c_value;
    come_value_183->c_value=(char*)come_increment_ref_count(((char*)(right_value236=xsprintf("%s",var__177->mCValueName))));
    __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj83=come_value_183->type;
    come_value_183->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value237=sType_clone(var__177->mType))));
    come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value237,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_183->var=var__177;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_183));
    if(_if_conditional277=list$1sNodeph_length(come_value_183->type->mArrayNum)==1,    _if_conditional277) {
        __dec_obj84=come_value_183->type->mOriginalLoadVarType->v1;
        come_value_183->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value238=sType_clone(come_value_183->type))));
        come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value238,sType_finalize, 0, 1, 0, 0, __result_obj__);
        list$1sNodeph_reset(come_value_183->type->mArrayNum);
        come_value_183->type->mPointerNum++;
        come_value_183->type->mOriginalTypeNamePointerNum=come_value_183->type->mPointerNum;
    }
    __result133__ = (_Bool)1;
    come_call_finalizer3(come_value_183,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result133__;
    come_call_finalizer3(come_value_183,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_178;
unsigned int hash_179;
unsigned int it_180;
_Bool _while_condtional21;
_Bool _if_conditional257;
_Bool _if_conditional258;
struct sFun* __result126__;
_Bool _if_conditional274;
_Bool _if_conditional275;
struct sFun* __result127__;
struct sFun* __result128__;
struct sFun* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_178, 0, sizeof(struct sFun*));
memset(&hash_179, 0, sizeof(unsigned int));
memset(&it_180, 0, sizeof(unsigned int));
                memset(&default_value_178,0,sizeof(struct sFun*));
                hash_179=string_get_hash_key(((char*)key))%self->size;
                it_180=hash_179;
                while(_while_condtional21=(_Bool)1,                _while_condtional21) {
                    if(_if_conditional257=self->item_existance[it_180],                    _if_conditional257) {
                        if(_if_conditional258=string_equals(self->keys[it_180],key),                        _if_conditional258) {
                            __result126__ = __result_obj__ = self->items[it_180];
                            come_call_finalizer3(default_value_178,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            return __result126__;
                        }
                        it_180++;
                        if(_if_conditional274=it_180>=self->size,                        _if_conditional274) {
                            it_180=0;
                        }
                        else {
                            if(_if_conditional275=it_180==hash_179,                            _if_conditional275) {
                                __result127__ = __result_obj__ = default_value_178;
                                come_call_finalizer3(default_value_178,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result127__;
                            }
                        }
                    }
                    else {
                        __result128__ = __result_obj__ = default_value_178;
                        come_call_finalizer3(default_value_178,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result128__;
                    }
                }
                __result129__ = __result_obj__ = default_value_178;
                come_call_finalizer3(default_value_178,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result129__;
                come_call_finalizer3(default_value_178,sFun_finalize, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional259;
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool _if_conditional262;
_Bool _if_conditional263;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool _if_conditional268;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool _if_conditional273;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional259=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional259) {
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional260=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional260) {
                                    come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional261=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional261) {
                                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional262=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional262) {
                                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional263=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional263) {
                                    come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional264=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional264) {
                                    come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional265=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional265) {
                                    come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional268=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional268) {
                                    come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional269=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional269) {
                                    come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional270=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional270) {
                                    come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional271=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional271) {
                                    come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional272=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional272) {
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional273=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional273) {
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional266;
_Bool _if_conditional267;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional266=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional266) {
                                            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional267=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional267) {
                                            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_184;
_Bool _while_condtional22;
struct list_item$1sNodeph* prev_it_185;
struct list$1sNodeph* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_184, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_185, 0, sizeof(struct list_item$1sNodeph*));
            it_184=self->head;
            while(_while_condtional22=it_184!=((void*)0),            _while_condtional22) {
                prev_it_185=it_184;
                it_184=it_184->next;
                come_call_finalizer3(prev_it_185,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result132__ = __result_obj__ = self;
            return __result132__;
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value239;
void* right_value240;
char* __dec_obj85;
struct sFunLoadNode* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
right_value239 = (void*)0;
right_value240 = (void*)0;
    ((struct sNodeBase*)(right_value239=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value239,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj85=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value240=__builtin_string(name))));
    __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result134__ = __result_obj__ = self;
    come_call_finalizer3(self,sFunLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result134__;
    come_call_finalizer3(self,sFunLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

char* sFunLoadNode_kind(struct sFunLoadNode* self){
void* __result_obj__;
void* right_value241;
char* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
right_value241 = (void*)0;
    __result135__ = __result_obj__ = ((char*)(right_value241=__builtin_string("sFunLoadNode")));
    right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result135__;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
void* __result_obj__;
struct sFun* fun_186;
_Bool _if_conditional280;
_Bool __result136__;
void* right_value242;
struct CVALUE* come_value_187;
void* right_value243;
char* __dec_obj86;
struct sType* __dec_obj87;
_Bool __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&fun_186, 0, sizeof(struct sFun*));
right_value242 = (void*)0;
memset(&come_value_187, 0, sizeof(struct CVALUE*));
right_value243 = (void*)0;
    fun_186=map$2charphsFunphp_operator_load_element(info->funcs,self->name);
    if(_if_conditional280=fun_186==((void*)0),    _if_conditional280) {
        err_msg(info,"fun not found(%s) at loading variable\n",self->name);
        __result136__ = (_Bool)0;
        return __result136__;
    }
    else {
        come_value_187=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value242=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 663, "CVALUE"))));
        come_call_finalizer3(right_value242,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj86=come_value_187->c_value;
        come_value_187->c_value=(char*)come_increment_ref_count(((char*)(right_value243=xsprintf("%s",fun_186->mName))));
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj87=come_value_187->type;
        come_value_187->type=(struct sType*)come_increment_ref_count(fun_186->mLambdaType);
        come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_187->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_187));
        come_call_finalizer3(come_value_187,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result137__ = (_Bool)1;
    return __result137__;
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self){
void* __result_obj__;
_Bool _if_conditional278;
_Bool _if_conditional279;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional278=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional278) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional279=self!=((void*)0)&&self->name!=((void*)0),        _if_conditional279) {
            self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value244;
struct sVar* self_188;
void* right_value245;
char* __dec_obj88;
void* right_value246;
struct sType* __dec_obj89;
_Bool _if_conditional281;
void* right_value247;
char* __dec_obj90;
static int n_189=0;
void* right_value248;
char* __dec_obj91;
_Bool _if_conditional282;
void* right_value249;
char* __dec_obj92;
char* __dec_obj93;
void* right_value256;
memset(&__result_obj__, 0, sizeof(void*));
right_value244 = (void*)0;
memset(&self_188, 0, sizeof(struct sVar*));
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value256 = (void*)0;
    self_188=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value244=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 678, "sVar"))));
    come_call_finalizer3(right_value244,sVar_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj88=self_188->mName;
    self_188->mName=(char*)come_increment_ref_count(((char*)(right_value245=__builtin_string(name))));
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj89=self_188->mType;
    self_188->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value246=sType_clone(type))));
    come_call_finalizer3(__dec_obj89,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value246,sType_finalize, 0, 1, 0, 0, __result_obj__);
    if(type->mFunctionParam) {
        __dec_obj90=self_188->mCValueName;
        self_188->mCValueName=(char*)come_increment_ref_count(((char*)(right_value247=__builtin_string(name))));
        __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj91=self_188->mCValueName;
        self_188->mCValueName=(char*)come_increment_ref_count(((char*)(right_value248=xsprintf("%s_%d",name,n_189++))));
        __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    self_188->mBlockLevel=info->block_level;
    self_188->mAllocaValue=(_Bool)0;
    self_188->mFunctionParam=(_Bool)0;
    self_188->mNoFree=(_Bool)0;
    if(info->come_fun) {
        __dec_obj92=self_188->mFunName;
        self_188->mFunName=(char*)come_increment_ref_count(((char*)(right_value249=string_clone(info->come_fun->mName))));
        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj93=self_188->mFunName;
        self_188->mFunName=((void*)0);
        __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    map$2charphsVarph_insert(info->lv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value256=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_188));
    right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(self_188,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional283;
unsigned int hash_207;
unsigned int it_208;
_Bool _while_condtional25;
_Bool _if_conditional295;
_Bool _if_conditional296;
_Bool _if_conditional297;
_Bool _if_conditional317;
_Bool _if_conditional318;
_Bool _if_conditional319;
_Bool _if_conditional320;
_Bool _if_conditional321;
_Bool same_key_exist_225;
char* it2_228;
_Bool _if_conditional326;
_Bool _if_conditional327;
struct map$2charphsVarph* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_207, 0, sizeof(unsigned int));
memset(&it_208, 0, sizeof(unsigned int));
memset(&same_key_exist_225, 0, sizeof(_Bool));
memset(&it2_228, 0, sizeof(char*));
        if(_if_conditional283=self->len*10>=self->size,        _if_conditional283) {
            map$2charphsVarph_rehash(self);
        }
        hash_207=string_get_hash_key(key)%self->size;
        it_208=hash_207;
        while(_while_condtional25=(_Bool)1,        _while_condtional25) {
            if(_if_conditional295=self->item_existance[it_208],            _if_conditional295) {
                if(_if_conditional296=string_equals(self->keys[it_208],key),                _if_conditional296) {
                    if(_if_conditional297=1,                    _if_conditional297) {
                        list$1charp_remove(self->key_list,self->keys[it_208]);
                        self->keys[it_208] = come_decrement_ref_count2(self->keys[it_208], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        self->keys[it_208]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_208]);
                        self->keys[it_208]=key;
                    }
                    if(_if_conditional317=1,                    _if_conditional317) {
                        come_call_finalizer3(self->items[it_208],sVar_finalize, 0, 0, 0, 0, (void*)0);
                        self->items[it_208]=(struct sVar*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_208]=item;
                    }
                    break;
                }
                it_208++;
                if(_if_conditional318=it_208>=self->size,                _if_conditional318) {
                    it_208=0;
                }
                else {
                    if(_if_conditional319=it_208==hash_207,                    _if_conditional319) {
                        printf("unexpected error in map.insert\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                self->item_existance[it_208]=(_Bool)1;
                if(_if_conditional320=1,                _if_conditional320) {
                    self->keys[it_208]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_208]=key;
                }
                if(_if_conditional321=1,                _if_conditional321) {
                    self->items[it_208]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_208]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_225=(_Bool)0;
        for(        it2_228=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_228=list$1charp_next(self->key_list)        ){
            if(_if_conditional326=string_equals(it2_228,key),            _if_conditional326) {
                same_key_exist_225=(_Bool)1;
            }
        }
        if(_if_conditional327=!same_key_exist_225,        _if_conditional327) {
            list$1charp_push_back(self->key_list,key);
        }
        __result161__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
        return __result161__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_190;
void* right_value250;
char** keys_191;
void* right_value251;
struct sVar** items_192;
void* right_value252;
_Bool* item_existance_193;
int len_194;
char* it_197;
struct sVar* default_value_200;
struct sVar* it2_203;
unsigned int hash_204;
int n_205;
_Bool _while_condtional24;
_Bool _if_conditional292;
_Bool _if_conditional293;
_Bool _if_conditional294;
struct sVar* default_value_206;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_190, 0, sizeof(int));
right_value250 = (void*)0;
memset(&keys_191, 0, sizeof(char**));
right_value251 = (void*)0;
memset(&items_192, 0, sizeof(struct sVar**));
right_value252 = (void*)0;
memset(&item_existance_193, 0, sizeof(_Bool*));
memset(&len_194, 0, sizeof(int));
memset(&it_197, 0, sizeof(char*));
memset(&default_value_200, 0, sizeof(struct sVar*));
memset(&it2_203, 0, sizeof(struct sVar*));
memset(&hash_204, 0, sizeof(unsigned int));
memset(&n_205, 0, sizeof(int));
memset(&default_value_206, 0, sizeof(struct sVar*));
                size_190=self->size*10;
                keys_191=(char**)come_increment_ref_count(((char**)(right_value250=(char**)come_calloc(1, sizeof(char*)*(1*(size_190)), "./neo-c.h", 1317, "char*%"))));
                right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                items_192=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value251=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_190)), "./neo-c.h", 1318, "sVar*%"))));
                come_call_finalizer3(right_value251,sVar_finalize, 0, 1, 0, 0, __result_obj__);
                item_existance_193=(_Bool*)come_increment_ref_count(((_Bool*)(right_value252=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_190)), "./neo-c.h", 1319, "bool"))));
                right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                len_194=0;
                for(                it_197=map$2charphsVarph_begin(self);                !map$2charphsVarph_end(self);                it_197=map$2charphsVarph_next(self)                ){
                    memset(&default_value_200,0,sizeof(struct sVar*));
                    it2_203=map$2charphsVarph_at(self,it_197,default_value_200);
                    hash_204=string_get_hash_key(it_197)%size_190;
                    n_205=hash_204;
                    while(_while_condtional24=(_Bool)1,                    _while_condtional24) {
                        if(_if_conditional292=item_existance_193[n_205],                        _if_conditional292) {
                            n_205++;
                            if(_if_conditional293=n_205>=size_190,                            _if_conditional293) {
                                n_205=0;
                            }
                            else {
                                if(_if_conditional294=n_205==hash_204,                                _if_conditional294) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            item_existance_193[n_205]=(_Bool)1;
                            keys_191[n_205]=it_197;
                            items_192[n_205]=map$2charphsVarph_at(self,it_197,default_value_206);
                            len_194++;
                            break;
                        }
                    }
                }
                come_free((char*)self->items);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_free((char*)self->keys);
                self->keys=keys_191;
                self->items=items_192;
                self->item_existance=item_existance_193;
                self->size=size_190;
                self->len=len_194;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional284;
char* result_195;
char* __result138__;
_Bool _if_conditional285;
char* __result139__;
char* result_196;
char* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_195, 0, sizeof(char*));
memset(&result_196, 0, sizeof(char*));
                    if(_if_conditional284=self==((void*)0),                    _if_conditional284) {
                        memset(&result_195,0,sizeof(char*));
                        __result138__ = __result_obj__ = result_195;
                        return __result138__;
                    }
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        __result139__ = __result_obj__ = self->key_list->it->item;
                        return __result139__;
                    }
                    memset(&result_196,0,sizeof(char*));
                    __result140__ = __result_obj__ = result_196;
                    return __result140__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result141__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result141__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result141__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional286;
char* result_198;
char* __result142__;
_Bool _if_conditional287;
char* __result143__;
char* result_199;
char* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_198, 0, sizeof(char*));
memset(&result_199, 0, sizeof(char*));
                    if(_if_conditional286=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional286) {
                        memset(&result_198,0,sizeof(char*));
                        __result142__ = __result_obj__ = result_198;
                        return __result142__;
                    }
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        __result143__ = __result_obj__ = self->key_list->it->item;
                        return __result143__;
                    }
                    memset(&result_199,0,sizeof(char*));
                    __result144__ = __result_obj__ = result_199;
                    return __result144__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_201;
unsigned int it_202;
_Bool _while_condtional23;
_Bool _if_conditional288;
_Bool _if_conditional289;
struct sVar* __result145__;
_Bool _if_conditional290;
_Bool _if_conditional291;
struct sVar* __result146__;
struct sVar* __result147__;
struct sVar* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_201, 0, sizeof(unsigned int));
memset(&it_202, 0, sizeof(unsigned int));
                        hash_201=string_get_hash_key(((char*)key))%self->size;
                        it_202=hash_201;
                        while(_while_condtional23=(_Bool)1,                        _while_condtional23) {
                            if(_if_conditional288=self->item_existance[it_202],                            _if_conditional288) {
                                if(_if_conditional289=string_equals(self->keys[it_202],key),                                _if_conditional289) {
                                    __result145__ = __result_obj__ = self->items[it_202];
                                    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result145__;
                                }
                                it_202++;
                                if(_if_conditional290=it_202>=self->size,                                _if_conditional290) {
                                    it_202=0;
                                }
                                else {
                                    if(_if_conditional291=it_202==hash_201,                                    _if_conditional291) {
                                        __result146__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result146__;
                                    }
                                }
                            }
                            else {
                                __result147__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                return __result147__;
                            }
                        }
                        __result148__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                        return __result148__;
                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_209;
struct list_item$1charp* it_210;
_Bool _while_condtional26;
_Bool _if_conditional298;
struct list$1charp* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_209, 0, sizeof(int));
memset(&it_210, 0, sizeof(struct list_item$1charp*));
                            it2_209=0;
                            it_210=self->head;
                            while(_while_condtional26=it_210!=((void*)0),                            _while_condtional26) {
                                if(_if_conditional298=string_equals(it_210->item,item),                                _if_conditional298) {
                                    list$1charp_delete(self,it2_209,it2_209+1);
                                    break;
                                }
                                it2_209++;
                                it_210=it_210->next;
                            }
                            __result152__ = __result_obj__ = self;
                            return __result152__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional299;
_Bool _if_conditional300;
_Bool _if_conditional301;
int tmp_211;
_Bool _if_conditional302;
_Bool _if_conditional303;
_Bool _if_conditional304;
struct list$1charp* __result149__;
_Bool _if_conditional305;
_Bool _if_conditional306;
struct list_item$1charp* it_214;
int i_215;
_Bool _while_condtional28;
_Bool _if_conditional307;
struct list_item$1charp* prev_it_216;
_Bool _if_conditional308;
_Bool _if_conditional309;
struct list_item$1charp* it_217;
int i_218;
_Bool _while_condtional29;
_Bool _if_conditional310;
_Bool _if_conditional311;
struct list_item$1charp* prev_it_219;
struct list_item$1charp* it_220;
struct list_item$1charp* head_prev_it_221;
struct list_item$1charp* tail_it_222;
int i_223;
_Bool _while_condtional30;
_Bool _if_conditional312;
_Bool _if_conditional313;
_Bool _if_conditional314;
struct list_item$1charp* prev_it_224;
_Bool _if_conditional315;
_Bool _if_conditional316;
struct list$1charp* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_211, 0, sizeof(int));
memset(&it_214, 0, sizeof(struct list_item$1charp*));
memset(&i_215, 0, sizeof(int));
memset(&prev_it_216, 0, sizeof(struct list_item$1charp*));
memset(&it_217, 0, sizeof(struct list_item$1charp*));
memset(&i_218, 0, sizeof(int));
memset(&prev_it_219, 0, sizeof(struct list_item$1charp*));
memset(&it_220, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_221, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_222, 0, sizeof(struct list_item$1charp*));
memset(&i_223, 0, sizeof(int));
memset(&prev_it_224, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional299=head<0,                                        _if_conditional299) {
                                            head+=self->len;
                                        }
                                        if(_if_conditional300=tail<0,                                        _if_conditional300) {
                                            tail+=self->len+1;
                                        }
                                        if(_if_conditional301=head>tail,                                        _if_conditional301) {
                                            tmp_211=tail;
                                            tail=head;
                                            head=tmp_211;
                                        }
                                        if(_if_conditional302=head<0,                                        _if_conditional302) {
                                            head=0;
                                        }
                                        if(_if_conditional303=tail>self->len,                                        _if_conditional303) {
                                            tail=self->len;
                                        }
                                        if(_if_conditional304=head==tail,                                        _if_conditional304) {
                                            __result149__ = __result_obj__ = self;
                                            return __result149__;
                                        }
                                        if(_if_conditional305=head==0&&tail==self->len,                                        _if_conditional305) {
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            if(_if_conditional306=head==0,                                            _if_conditional306) {
                                                it_214=self->head;
                                                i_215=0;
                                                while(_while_condtional28=it_214!=((void*)0),                                                _while_condtional28) {
                                                    if(_if_conditional307=i_215<tail,                                                    _if_conditional307) {
                                                        prev_it_216=it_214;
                                                        it_214=it_214->next;
                                                        i_215++;
                                                        come_call_finalizer3(prev_it_216,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                        self->len--;
                                                    }
                                                    else {
                                                        if(_if_conditional308=i_215==tail,                                                        _if_conditional308) {
                                                            self->head=it_214;
                                                            self->head->prev=((void*)0);
                                                            break;
                                                        }
                                                        else {
                                                            it_214=it_214->next;
                                                            i_215++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if(_if_conditional309=tail==self->len,                                                _if_conditional309) {
                                                    it_217=self->head;
                                                    i_218=0;
                                                    while(_while_condtional29=it_217!=((void*)0),                                                    _while_condtional29) {
                                                        if(_if_conditional310=i_218==head,                                                        _if_conditional310) {
                                                            self->tail=it_217->prev;
                                                            self->tail->next=((void*)0);
                                                        }
                                                        if(_if_conditional311=i_218>=head,                                                        _if_conditional311) {
                                                            prev_it_219=it_217;
                                                            it_217=it_217->next;
                                                            i_218++;
                                                            come_call_finalizer3(prev_it_219,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_217=it_217->next;
                                                            i_218++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    it_220=self->head;
                                                    head_prev_it_221=((void*)0);
                                                    tail_it_222=((void*)0);
                                                    i_223=0;
                                                    while(_while_condtional30=it_220!=((void*)0),                                                    _while_condtional30) {
                                                        if(_if_conditional312=i_223==head,                                                        _if_conditional312) {
                                                            head_prev_it_221=it_220->prev;
                                                        }
                                                        if(_if_conditional313=i_223==tail,                                                        _if_conditional313) {
                                                            tail_it_222=it_220;
                                                        }
                                                        if(_if_conditional314=i_223>=head&&i_223<tail,                                                        _if_conditional314) {
                                                            prev_it_224=it_220;
                                                            it_220=it_220->next;
                                                            i_223++;
                                                            come_call_finalizer3(prev_it_224,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_220=it_220->next;
                                                            i_223++;
                                                        }
                                                    }
                                                    if(_if_conditional315=head_prev_it_221!=((void*)0),                                                    _if_conditional315) {
                                                        head_prev_it_221->next=tail_it_222;
                                                    }
                                                    if(_if_conditional316=tail_it_222!=((void*)0),                                                    _if_conditional316) {
                                                        tail_it_222->prev=head_prev_it_221;
                                                    }
                                                }
                                            }
                                        }
                                        __result151__ = __result_obj__ = self;
                                        return __result151__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_212;
_Bool _while_condtional27;
struct list_item$1charp* prev_it_213;
struct list$1charp* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_212, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_213, 0, sizeof(struct list_item$1charp*));
                                                it_212=self->head;
                                                while(_while_condtional27=it_212!=((void*)0),                                                _while_condtional27) {
                                                    prev_it_213=it_212;
                                                    it_212=it_212->next;
                                                    come_call_finalizer3(prev_it_213,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result150__ = __result_obj__ = self;
                                                return __result150__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional322;
char* result_226;
char* __result153__;
_Bool _if_conditional323;
char* __result154__;
char* result_227;
char* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_226, 0, sizeof(char*));
memset(&result_227, 0, sizeof(char*));
            if(_if_conditional322=self==((void*)0),            _if_conditional322) {
                memset(&result_226,0,sizeof(char*));
                __result153__ = __result_obj__ = result_226;
                return __result153__;
            }
            self->it=self->head;
            if(self->it) {
                __result154__ = __result_obj__ = self->it->item;
                return __result154__;
            }
            memset(&result_227,0,sizeof(char*));
            __result155__ = __result_obj__ = result_227;
            return __result155__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result156__;
memset(&__result_obj__, 0, sizeof(void*));
            __result156__ = self==((void*)0)||self->it==((void*)0);
            return __result156__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional324;
char* result_229;
char* __result157__;
_Bool _if_conditional325;
char* __result158__;
char* result_230;
char* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_229, 0, sizeof(char*));
memset(&result_230, 0, sizeof(char*));
            if(_if_conditional324=self==((void*)0)||self->it==((void*)0),            _if_conditional324) {
                memset(&result_229,0,sizeof(char*));
                __result157__ = __result_obj__ = result_229;
                return __result157__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result158__ = __result_obj__ = self->it->item;
                return __result158__;
            }
            memset(&result_230,0,sizeof(char*));
            __result159__ = __result_obj__ = result_230;
            return __result159__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional328;
void* right_value253;
struct list_item$1charp* litem_231;
_Bool _if_conditional329;
void* right_value254;
struct list_item$1charp* litem_232;
void* right_value255;
struct list_item$1charp* litem_233;
struct list$1charp* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
right_value253 = (void*)0;
memset(&litem_231, 0, sizeof(struct list_item$1charp*));
right_value254 = (void*)0;
memset(&litem_232, 0, sizeof(struct list_item$1charp*));
right_value255 = (void*)0;
memset(&litem_233, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional328=self->len==0,                _if_conditional328) {
                    litem_231=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value253=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 221, "list_item$1charp"))));
                    come_call_finalizer3(right_value253,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_231->prev=((void*)0);
                    litem_231->next=((void*)0);
                    litem_231->item=item;
                    self->tail=litem_231;
                    self->head=litem_231;
                }
                else {
                    if(_if_conditional329=self->len==1,                    _if_conditional329) {
                        litem_232=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value254=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 231, "list_item$1charp"))));
                        come_call_finalizer3(right_value254,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_232->prev=self->head;
                        litem_232->next=((void*)0);
                        litem_232->item=item;
                        self->tail=litem_232;
                        self->head->next=litem_232;
                    }
                    else {
                        litem_233=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value255=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 241, "list_item$1charp"))));
                        come_call_finalizer3(right_value255,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_233->prev=self->tail;
                        litem_233->next=((void*)0);
                        litem_233->item=item;
                        self->tail->next=litem_233;
                        self->tail=litem_233;
                    }
                }
                self->len++;
                __result160__ = __result_obj__ = self;
                return __result160__;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value257;
struct sVar* self_234;
void* right_value258;
char* __dec_obj94;
void* right_value259;
struct sType* __dec_obj95;
void* right_value260;
char* __dec_obj96;
void* right_value261;
memset(&__result_obj__, 0, sizeof(void*));
right_value257 = (void*)0;
memset(&self_234, 0, sizeof(struct sVar*));
right_value258 = (void*)0;
right_value259 = (void*)0;
right_value260 = (void*)0;
right_value261 = (void*)0;
    self_234=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value257=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 707, "sVar"))));
    come_call_finalizer3(right_value257,sVar_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj94=self_234->mName;
    self_234->mName=(char*)come_increment_ref_count(((char*)(right_value258=__builtin_string(name))));
    __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj95=self_234->mType;
    self_234->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value259=sType_clone(type))));
    come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value259,sType_finalize, 0, 1, 0, 0, __result_obj__);
    self_234->mGlobal=(_Bool)1;
    __dec_obj96=self_234->mCValueName;
    self_234->mCValueName=(char*)come_increment_ref_count(((char*)(right_value260=__builtin_string(name))));
    __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self_234->mBlockLevel=info->block_level;
    self_234->mAllocaValue=(_Bool)0;
    self_234->mFunctionParam=(_Bool)0;
    self_234->mNoFree=(_Bool)0;
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value261=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_234));
    right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(self_234,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
void* __result_obj__;
void* right_value262;
struct sVar* self_235;
void* right_value263;
char* __dec_obj97;
void* right_value264;
struct sType* __dec_obj98;
void* right_value265;
char* __dec_obj99;
void* right_value266;
memset(&__result_obj__, 0, sizeof(void*));
right_value262 = (void*)0;
memset(&self_235, 0, sizeof(struct sVar*));
right_value263 = (void*)0;
right_value264 = (void*)0;
right_value265 = (void*)0;
right_value266 = (void*)0;
    self_235=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value262=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 726, "sVar"))));
    come_call_finalizer3(right_value262,sVar_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj97=self_235->mName;
    self_235->mName=(char*)come_increment_ref_count(((char*)(right_value263=__builtin_string(name))));
    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj98=self_235->mType;
    self_235->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value264=sType_clone(type))));
    come_call_finalizer3(__dec_obj98,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value264,sType_finalize, 0, 1, 0, 0, __result_obj__);
    self_235->mGlobal=(_Bool)1;
    __dec_obj99=self_235->mCValueName;
    self_235->mCValueName=(char*)come_increment_ref_count(((char*)(right_value265=__builtin_string(c_value))));
    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self_235->mBlockLevel=info->block_level;
    self_235->mAllocaValue=(_Bool)0;
    self_235->mFunctionParam=(_Bool)0;
    self_235->mNoFree=(_Bool)0;
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value266=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_235));
    right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(self_235,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool is_type_name_flag_236;
_Bool multiple_declare_237;
_Bool _if_conditional330;
char* p_238;
int sline_239;
_Bool _if_conditional331;
void* right_value267;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* type_240;
char* name_241;
_Bool err_242;
_Bool _if_conditional334;
void* right_value268;
struct tuple2$2sTypephcharph* multiple_assign_var3;
struct sType* type_243;
char* name_244;
_Bool _if_conditional337;
_Bool _if_conditional338;
void* right_value269;
_Bool no_output_err_245;
_Bool no_comma_246;
_Bool no_output_come_code_247;
void* right_value270;
struct sNode* exp_248;
_Bool _if_conditional339;
_Bool attr_define_249;
_Bool _if_conditional340;
char* p_250;
int sline_251;
void* right_value271;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* type_252;
char* name_253;
_Bool err_254;
_Bool _if_conditional341;
_Bool multiple_declare2_255;
_Bool _if_conditional342;
char* p_256;
int sline_257;
void* right_value272;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* type_258;
char* name_259;
_Bool err_260;
_Bool _if_conditional343;
_Bool _while_condtional31;
_Bool _while_condtional32;
_Bool _if_conditional344;
void* right_value273;
char* word_261;
_Bool _if_conditional345;
_Bool _if_conditional346;
_Bool _if_conditional347;
_Bool _if_conditional348;
_Bool no_output_err_262;
_Bool no_comma_263;
_Bool no_output_come_code_264;
void* right_value274;
struct sNode* exp_265;
_Bool _if_conditional349;
struct sFun* fun_266;
_Bool _if_conditional350;
void* right_value275;
char* buf2_267;
struct list$1charph* multiple_assign_268;
_Bool _if_conditional351;
void* right_value276;
void* right_value277;
struct list$1charph* __dec_obj100;
void* right_value281;
_Bool _while_condtional33;
void* right_value282;
char* buf3_272;
void* right_value283;
_Bool _if_conditional354;
_Bool no_comma_273;
void* right_value284;
struct sNode* right_value_274;
void* right_value285;
struct sNode* __dec_obj104;
void* right_value286;
void* right_value287;
void* right_value288;
struct sNode* _inf_value1;
struct sStoreNode* _inf_obj_value1;
void* right_value297;
struct sNode* __result165__;
_Bool _if_conditional372;
void* right_value298;
void* right_value299;
struct list$1tuple4$4sTypephcharphsNodephcharphph* multiple_declare_276;
void* right_value300;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* base_type_277;
char* name_278;
_Bool err_279;
_Bool _if_conditional373;
void* right_value301;
struct tuple2$2sTypephcharph* multiple_assign_var7;
struct sType* type2_280;
char* var_name_281;
_Bool _if_conditional374;
_Bool _if_conditional375;
char* head_282;
void* right_value302;
char* tail_283;
void* right_value303;
void* right_value304;
struct buffer* buf_284;
void* right_value305;
char* initializer_285;
void* right_value309;
void* right_value310;
_Bool no_comma_289;
void* right_value311;
struct sNode* exp_290;
void* right_value312;
void* right_value313;
void* right_value314;
void* right_value315;
_Bool _while_condtional34;
void* right_value316;
struct tuple2$2sTypephcharph* multiple_assign_var8;
struct sType* type2_291;
char* var_name_292;
_Bool _if_conditional386;
_Bool _if_conditional387;
char* head_293;
void* right_value317;
char* tail_294;
void* right_value318;
void* right_value319;
struct buffer* buf_295;
void* right_value320;
char* initializer_296;
void* right_value321;
void* right_value322;
_Bool no_comma_297;
void* right_value323;
struct sNode* exp_298;
void* right_value324;
void* right_value325;
void* right_value326;
void* right_value327;
struct sNode* right_node_299;
char* array_initializer_300;
void* right_value328;
char* var_name2_301;
void* right_value329;
void* right_value330;
void* right_value331;
struct sNode* _inf_value2;
struct sStoreNode* _inf_obj_value2;
void* right_value340;
struct sNode* __result172__;
_Bool _if_conditional405;
void* right_value341;
struct tuple3$3sTypephcharphbool* multiple_assign_var9;
struct sType* type_303;
char* name_304;
_Bool err_305;
_Bool _if_conditional406;
void* right_value342;
char* __dec_obj130;
void* right_value346;
void* right_value347;
_Bool _if_conditional418;
void* right_value348;
void* right_value349;
void* right_value350;
struct sNode* _inf_value3;
struct sLoadNode* _inf_obj_value3;
void* right_value354;
struct sNode* self_node_310;
void* right_value355;
struct sNode* right_node_311;
void* right_value356;
struct sNode* __result177__;
void* right_value357;
struct sNode* __result178__;
_Bool _if_conditional425;
void* right_value358;
struct sNode* right_value_312;
void* right_value359;
struct sNode* __dec_obj138;
void* right_value360;
void* right_value361;
void* right_value362;
struct sNode* _inf_value4;
struct sStoreNode* _inf_obj_value4;
void* right_value371;
struct sNode* __result181__;
_Bool _if_conditional443;
void* right_value372;
void* right_value373;
void* right_value374;
struct sNode* _inf_value5;
struct sLoadNode* _inf_obj_value5;
void* right_value378;
struct sNode* node_315;
void* right_value379;
struct sNode* __dec_obj148;
struct sNode* __result184__;
char* word_316;
_Bool _if_conditional450;
void* right_value380;
char* __dec_obj149;
void* right_value381;
char* __dec_obj150;
_Bool is_type_name_flag_317;
_Bool _if_conditional451;
void* right_value382;
struct tuple3$3sTypephcharphbool* multiple_assign_var10;
struct sType* type_318;
char* name_319;
_Bool err_320;
_Bool _if_conditional452;
_Bool _if_conditional453;
_Bool _if_conditional454;
void* right_value383;
void* right_value384;
struct buffer* buf2_321;
_Bool squort_322;
_Bool dquort_323;
int nest_324;
_Bool _while_condtional35;
_Bool _if_conditional455;
_Bool _if_conditional456;
_Bool _if_conditional457;
_Bool _if_conditional458;
_Bool _if_conditional459;
_Bool _if_conditional460;
_Bool _if_conditional461;
_Bool _if_conditional462;
_Bool _if_conditional463;
_Bool _if_conditional464;
_Bool _if_conditional465;
void* right_value385;
char* array_initializer_325;
void* right_value386;
void* right_value387;
struct sNode* _inf_value6;
struct sStoreNode* _inf_obj_value6;
void* right_value396;
struct sNode* __result187__;
void* right_value397;
struct sNode* right_value_327;
void* right_value398;
void* right_value399;
struct list$1sNodeph* right_values_328;
_Bool _while_condtional36;
char* anonymous_var_nameX1555_329;
void* right_value400;
struct sNode* __dec_obj158;
void* right_value401;
void* right_value402;
struct sNode* _inf_value7;
struct sStoreNode* _inf_obj_value7;
void* right_value411;
struct sNode* __result190__;
void* right_value412;
void* right_value413;
struct sNode* _inf_value8;
struct sStoreNode* _inf_obj_value8;
void* right_value422;
struct sNode* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&is_type_name_flag_236, 0, sizeof(_Bool));
memset(&multiple_declare_237, 0, sizeof(_Bool));
memset(&p_238, 0, sizeof(char*));
memset(&sline_239, 0, sizeof(int));
right_value267 = (void*)0;
memset(&type_240, 0, sizeof(struct sType*));
memset(&name_241, 0, sizeof(char*));
memset(&err_242, 0, sizeof(_Bool));
memset(&type_240, 0, sizeof(struct sType*));
memset(&name_241, 0, sizeof(char*));
memset(&err_242, 0, sizeof(_Bool));
right_value268 = (void*)0;
memset(&type_243, 0, sizeof(struct sType*));
memset(&name_244, 0, sizeof(char*));
memset(&type_243, 0, sizeof(struct sType*));
memset(&name_244, 0, sizeof(char*));
right_value269 = (void*)0;
memset(&no_output_err_245, 0, sizeof(_Bool));
memset(&no_comma_246, 0, sizeof(_Bool));
memset(&no_output_come_code_247, 0, sizeof(_Bool));
right_value270 = (void*)0;
memset(&exp_248, 0, sizeof(struct sNode*));
memset(&attr_define_249, 0, sizeof(_Bool));
memset(&p_250, 0, sizeof(char*));
memset(&sline_251, 0, sizeof(int));
right_value271 = (void*)0;
memset(&type_252, 0, sizeof(struct sType*));
memset(&name_253, 0, sizeof(char*));
memset(&err_254, 0, sizeof(_Bool));
memset(&type_252, 0, sizeof(struct sType*));
memset(&name_253, 0, sizeof(char*));
memset(&err_254, 0, sizeof(_Bool));
memset(&multiple_declare2_255, 0, sizeof(_Bool));
memset(&p_256, 0, sizeof(char*));
memset(&sline_257, 0, sizeof(int));
right_value272 = (void*)0;
memset(&type_258, 0, sizeof(struct sType*));
memset(&name_259, 0, sizeof(char*));
memset(&err_260, 0, sizeof(_Bool));
memset(&type_258, 0, sizeof(struct sType*));
memset(&name_259, 0, sizeof(char*));
memset(&err_260, 0, sizeof(_Bool));
right_value273 = (void*)0;
memset(&word_261, 0, sizeof(char*));
memset(&no_output_err_262, 0, sizeof(_Bool));
memset(&no_comma_263, 0, sizeof(_Bool));
memset(&no_output_come_code_264, 0, sizeof(_Bool));
right_value274 = (void*)0;
memset(&exp_265, 0, sizeof(struct sNode*));
memset(&fun_266, 0, sizeof(struct sFun*));
right_value275 = (void*)0;
memset(&buf2_267, 0, sizeof(char*));
memset(&multiple_assign_268, 0, sizeof(struct list$1charph*));
right_value276 = (void*)0;
right_value277 = (void*)0;
right_value281 = (void*)0;
right_value282 = (void*)0;
memset(&buf3_272, 0, sizeof(char*));
right_value283 = (void*)0;
memset(&no_comma_273, 0, sizeof(_Bool));
right_value284 = (void*)0;
memset(&right_value_274, 0, sizeof(struct sNode*));
right_value285 = (void*)0;
right_value286 = (void*)0;
right_value287 = (void*)0;
right_value288 = (void*)0;
right_value297 = (void*)0;
right_value298 = (void*)0;
right_value299 = (void*)0;
memset(&multiple_declare_276, 0, sizeof(struct list$1tuple4$4sTypephcharphsNodephcharphph*));
right_value300 = (void*)0;
memset(&base_type_277, 0, sizeof(struct sType*));
memset(&name_278, 0, sizeof(char*));
memset(&err_279, 0, sizeof(_Bool));
memset(&base_type_277, 0, sizeof(struct sType*));
memset(&name_278, 0, sizeof(char*));
memset(&err_279, 0, sizeof(_Bool));
right_value301 = (void*)0;
memset(&type2_280, 0, sizeof(struct sType*));
memset(&var_name_281, 0, sizeof(char*));
memset(&type2_280, 0, sizeof(struct sType*));
memset(&var_name_281, 0, sizeof(char*));
memset(&head_282, 0, sizeof(char*));
right_value302 = (void*)0;
memset(&tail_283, 0, sizeof(char*));
right_value303 = (void*)0;
right_value304 = (void*)0;
memset(&buf_284, 0, sizeof(struct buffer*));
right_value305 = (void*)0;
memset(&initializer_285, 0, sizeof(char*));
right_value309 = (void*)0;
right_value310 = (void*)0;
memset(&no_comma_289, 0, sizeof(_Bool));
right_value311 = (void*)0;
memset(&exp_290, 0, sizeof(struct sNode*));
right_value312 = (void*)0;
right_value313 = (void*)0;
right_value314 = (void*)0;
right_value315 = (void*)0;
right_value316 = (void*)0;
memset(&type2_291, 0, sizeof(struct sType*));
memset(&var_name_292, 0, sizeof(char*));
memset(&type2_291, 0, sizeof(struct sType*));
memset(&var_name_292, 0, sizeof(char*));
memset(&head_293, 0, sizeof(char*));
right_value317 = (void*)0;
memset(&tail_294, 0, sizeof(char*));
right_value318 = (void*)0;
right_value319 = (void*)0;
memset(&buf_295, 0, sizeof(struct buffer*));
right_value320 = (void*)0;
memset(&initializer_296, 0, sizeof(char*));
right_value321 = (void*)0;
right_value322 = (void*)0;
memset(&no_comma_297, 0, sizeof(_Bool));
right_value323 = (void*)0;
memset(&exp_298, 0, sizeof(struct sNode*));
right_value324 = (void*)0;
right_value325 = (void*)0;
right_value326 = (void*)0;
right_value327 = (void*)0;
memset(&right_node_299, 0, sizeof(struct sNode*));
memset(&array_initializer_300, 0, sizeof(char*));
right_value328 = (void*)0;
memset(&var_name2_301, 0, sizeof(char*));
right_value329 = (void*)0;
right_value330 = (void*)0;
right_value331 = (void*)0;
right_value340 = (void*)0;
right_value341 = (void*)0;
memset(&type_303, 0, sizeof(struct sType*));
memset(&name_304, 0, sizeof(char*));
memset(&err_305, 0, sizeof(_Bool));
memset(&type_303, 0, sizeof(struct sType*));
memset(&name_304, 0, sizeof(char*));
memset(&err_305, 0, sizeof(_Bool));
right_value342 = (void*)0;
right_value346 = (void*)0;
right_value347 = (void*)0;
right_value348 = (void*)0;
right_value349 = (void*)0;
right_value350 = (void*)0;
right_value354 = (void*)0;
memset(&self_node_310, 0, sizeof(struct sNode*));
right_value355 = (void*)0;
memset(&right_node_311, 0, sizeof(struct sNode*));
right_value356 = (void*)0;
right_value357 = (void*)0;
right_value358 = (void*)0;
memset(&right_value_312, 0, sizeof(struct sNode*));
right_value359 = (void*)0;
right_value360 = (void*)0;
right_value361 = (void*)0;
right_value362 = (void*)0;
right_value371 = (void*)0;
right_value372 = (void*)0;
right_value373 = (void*)0;
right_value374 = (void*)0;
right_value378 = (void*)0;
memset(&node_315, 0, sizeof(struct sNode*));
right_value379 = (void*)0;
memset(&word_316, 0, sizeof(char*));
right_value380 = (void*)0;
right_value381 = (void*)0;
memset(&is_type_name_flag_317, 0, sizeof(_Bool));
right_value382 = (void*)0;
memset(&type_318, 0, sizeof(struct sType*));
memset(&name_319, 0, sizeof(char*));
memset(&err_320, 0, sizeof(_Bool));
memset(&type_318, 0, sizeof(struct sType*));
memset(&name_319, 0, sizeof(char*));
memset(&err_320, 0, sizeof(_Bool));
right_value383 = (void*)0;
right_value384 = (void*)0;
memset(&buf2_321, 0, sizeof(struct buffer*));
memset(&squort_322, 0, sizeof(_Bool));
memset(&dquort_323, 0, sizeof(_Bool));
memset(&nest_324, 0, sizeof(int));
right_value385 = (void*)0;
memset(&array_initializer_325, 0, sizeof(char*));
right_value386 = (void*)0;
right_value387 = (void*)0;
right_value396 = (void*)0;
right_value397 = (void*)0;
memset(&right_value_327, 0, sizeof(struct sNode*));
right_value398 = (void*)0;
right_value399 = (void*)0;
memset(&right_values_328, 0, sizeof(struct list$1sNodeph*));
memset(&anonymous_var_nameX1555_329, 0, sizeof(char*));
right_value400 = (void*)0;
right_value401 = (void*)0;
right_value402 = (void*)0;
right_value411 = (void*)0;
right_value412 = (void*)0;
right_value413 = (void*)0;
right_value422 = (void*)0;
    is_type_name_flag_236=is_type_name(buf,info);
    multiple_declare_237=(_Bool)0;
    if(is_type_name_flag_236) {
        p_238=info->p;
        sline_239=info->sline;
        info->p=head;
        info->sline=head_sline;
        if(_if_conditional331=xisalpha(*info->p)||*info->p==95,        _if_conditional331) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(right_value267=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_240=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            name_241=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_242=multiple_assign_var2->v3;
            come_call_finalizer3(right_value267,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(err_242) {
                multiple_assign_var3=((struct tuple2$2sTypephcharph*)(right_value268=parse_variable_name((struct sType*)come_increment_ref_count(type_240),(_Bool)1,info)));
                type_243=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
                name_244=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                come_call_finalizer3(right_value268,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional337=*info->p==61,                _if_conditional337) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(_if_conditional338=*info->p==123,                    _if_conditional338) {
                        ((char*)(right_value269=skip_block(info)));
                        right_value269 = come_decrement_ref_count2(right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        no_output_err_245=info->no_output_err;
                        no_comma_246=info->no_comma;
                        no_output_come_code_247=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_248=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value270=expression_v13(info))));
                        if(right_value270) { right_value270 = come_decrement_ref_count2(right_value270, ((struct sNode*)right_value270)->finalize, ((struct sNode*)right_value270)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        info->no_comma=no_comma_246;
                        info->no_output_err=no_output_err_245;
                        info->no_output_come_code=no_output_come_code_247;
                        if(exp_248) { exp_248 = come_decrement_ref_count2(exp_248, ((struct sNode*)exp_248)->finalize, ((struct sNode*)exp_248)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                }
                if(_if_conditional339=!is_type_name(name_244,info)&&*info->p==44,                _if_conditional339) {
                    multiple_declare_237=(_Bool)1;
                }
                come_call_finalizer3(type_243,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_244 = come_decrement_ref_count2(name_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(type_240,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_241 = come_decrement_ref_count2(name_241, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_238;
        info->sline=sline_239;
    }
    attr_define_249=(_Bool)0;
    if(_if_conditional340=is_type_name_flag_236&&info->defining_class,    _if_conditional340) {
        p_250=info->p;
        sline_251=info->sline;
        info->p=head;
        info->sline=head_sline;
        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value271=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_252=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        name_253=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_254=multiple_assign_var4->v3;
        come_call_finalizer3(right_value271,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional341=err_254&&strmemcmp(info->p,"self"),        _if_conditional341) {
            attr_define_249=(_Bool)1;
        }
        info->p=p_250;
        info->sline=sline_251;
        come_call_finalizer3(type_252,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_253 = come_decrement_ref_count2(name_253, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    multiple_declare2_255=(_Bool)0;
    if(is_type_name_flag_236) {
        p_256=info->p;
        sline_257=info->sline;
        info->p=head;
        info->sline=head_sline;
        multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value272=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
        type_258=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
        name_259=(char*)come_increment_ref_count(multiple_assign_var5->v2);
        err_260=multiple_assign_var5->v3;
        come_call_finalizer3(right_value272,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(_if_conditional343=err_260&&*info->p==44,        _if_conditional343) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            while(_while_condtional31=(_Bool)1,            _while_condtional31) {
                parse_sharp_v5(info);
                while(_while_condtional32=*info->p==42,                _while_condtional32) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                parse_sharp_v5(info);
                if(_if_conditional344=xisalpha(*info->p)||*info->p==95,                _if_conditional344) {
                    parse_sharp_v5(info);
                    word_261=(char*)come_increment_ref_count(((char*)(right_value273=parse_word(info))));
                    right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    parse_sharp_v5(info);
                    if(_if_conditional345=*info->p==61,                    _if_conditional345) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        multiple_declare2_255=(_Bool)1;
                        word_261 = come_decrement_ref_count2(word_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else {
                        if(_if_conditional346=*info->p==44,                        _if_conditional346) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            parse_sharp_v5(info);
                        }
                        else {
                            word_261 = come_decrement_ref_count2(word_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                    }
                    word_261 = come_decrement_ref_count2(word_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    break;
                }
            }
        }
        else {
            if(_if_conditional347=err_260&&*info->p==61,            _if_conditional347) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(_if_conditional348=*info->p==123,                _if_conditional348) {
                }
                else {
                    no_output_err_262=info->no_output_err;
                    no_comma_263=info->no_comma;
                    no_output_come_code_264=info->no_output_come_code;
                    info->no_output_err=(_Bool)1;
                    info->no_comma=(_Bool)1;
                    info->no_output_come_code=(_Bool)1;
                    exp_265=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value274=expression_v13(info))));
                    if(right_value274) { right_value274 = come_decrement_ref_count2(right_value274, ((struct sNode*)right_value274)->finalize, ((struct sNode*)right_value274)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    info->no_comma=no_comma_263;
                    info->no_output_err=no_output_err_262;
                    info->no_output_come_code=no_output_come_code_264;
                    if(_if_conditional349=*info->p==44,                    _if_conditional349) {
                        multiple_declare2_255=(_Bool)1;
                    }
                    if(exp_265) { exp_265 = come_decrement_ref_count2(exp_265, ((struct sNode*)exp_265)->finalize, ((struct sNode*)exp_265)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
            }
        }
        info->p=p_256;
        info->sline=sline_257;
        come_call_finalizer3(type_258,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_259 = come_decrement_ref_count2(name_259, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    fun_266=map$2charphsFunphp_operator_load_element(info->funcs,buf);
    if(_if_conditional350=charp_operator_equals(buf,"var")||charp_operator_equals(buf,"auto"),    _if_conditional350) {
        parse_sharp_v5(info);
        buf2_267=(char*)come_increment_ref_count(((char*)(right_value275=parse_word(info))));
        right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        multiple_assign_268=((void*)0);
        if(_if_conditional351=*info->p==44,        _if_conditional351) {
            __dec_obj100=multiple_assign_268;
            multiple_assign_268=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value277=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value276=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "07var.c", 915, "list$1charph"))))))));
            come_call_finalizer3(__dec_obj100,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value276,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value277,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(multiple_assign_268,(char*)come_increment_ref_count(((char*)(right_value281=string_clone(buf2_267)))));
            right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            while(_while_condtional33=*info->p==44,            _while_condtional33) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                buf3_272=(char*)come_increment_ref_count(((char*)(right_value282=parse_word(info))));
                right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                parse_sharp_v5(info);
                list$1charph_push_back(multiple_assign_268,(char*)come_increment_ref_count(((char*)(right_value283=string_clone(buf3_272)))));
                right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buf3_272 = come_decrement_ref_count2(buf3_272, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        parse_sharp_v5(info);
        if(_if_conditional354=*info->p==61&&*(info->p+1)!=61,        _if_conditional354) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            no_comma_273=info->no_comma;
            info->no_comma=(_Bool)1;
            right_value_274=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value284=expression_v13(info))));
            if(right_value284) { right_value284 = come_decrement_ref_count2(right_value284, ((struct sNode*)right_value284)->finalize, ((struct sNode*)right_value284)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            info->no_comma=no_comma_273;
            parse_sharp_v5(info);
            __dec_obj104=right_value_274;
            right_value_274=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value285=post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_274),info))));
            if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count2(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value285) { right_value285 = come_decrement_ref_count2(right_value285, ((struct sNode*)right_value285)->finalize, ((struct sNode*)right_value285)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 945, "struct sNode");
            _inf_obj_value1=come_increment_ref_count(((struct sStoreNode*)(right_value288=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value286=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 945, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value287=__builtin_string(buf2_267)))),(struct list$1charph*)come_increment_ref_count(multiple_assign_268),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_274),((void*)0),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sStoreNode_finalize;
            _inf_value1->clone=(void*)sStoreNode_clone;
            _inf_value1->compile=(void*)sStoreNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sStoreNode_kind;
            __result165__ = __result_obj__ = ((struct sNode*)(right_value297=_inf_value1));
            if(right_value_274) { right_value_274 = come_decrement_ref_count2(right_value_274, ((struct sNode*)right_value_274)->finalize, ((struct sNode*)right_value_274)->_protocol_obj, 0, 0, 0, (void*)0); } 
            buf2_267 = come_decrement_ref_count2(buf2_267, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(multiple_assign_268,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value286,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value288,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value297) { right_value297 = come_decrement_ref_count2(right_value297, ((struct sNode*)right_value297)->finalize, ((struct sNode*)right_value297)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result165__;
            if(right_value_274) { right_value_274 = come_decrement_ref_count2(right_value_274, ((struct sNode*)right_value_274)->finalize, ((struct sNode*)right_value_274)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            err_msg(info,"var requires a right value(%c)",*info->p);
            exit(1);
        }
        buf2_267 = come_decrement_ref_count2(buf2_267, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(multiple_assign_268,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(multiple_declare_237) {
            info->p=head;
            info->sline=head_sline;
            multiple_declare_276=(struct list$1tuple4$4sTypephcharphsNodephcharphph*)come_increment_ref_count(((struct list$1tuple4$4sTypephcharphsNodephcharphph*)(right_value299=list$1tuple4$4sTypephcharphsNodephcharphph_initialize((struct list$1tuple4$4sTypephcharphsNodephcharphph*)come_increment_ref_count(((struct list$1tuple4$4sTypephcharphsNodephcharphph*)(right_value298=(struct list$1tuple4$4sTypephcharphsNodephcharphph*)come_calloc(1, sizeof(struct list$1tuple4$4sTypephcharphsNodephcharphph)*(1), "07var.c", 1029, "list$1tuple4$4sTypephcharphsNodephcharphph"))))))));
            come_call_finalizer3(right_value298,list$1tuple4$4sTypephcharphsNodephcharphphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value299,list$1tuple4$4sTypephcharphsNodephcharphphp_finalize, 0, 1, 0, 0, __result_obj__);
            multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value300=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            base_type_277=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
            name_278=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            err_279=multiple_assign_var6->v3;
            come_call_finalizer3(right_value300,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional373=!err_279,            _if_conditional373) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            parse_sharp_v5(info);
            multiple_assign_var7=((struct tuple2$2sTypephcharph*)(right_value301=parse_variable_name((struct sType*)come_increment_ref_count(base_type_277),(_Bool)1,info)));
            type2_280=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
            var_name_281=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            come_call_finalizer3(right_value301,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(_if_conditional374=*info->p==61,            _if_conditional374) {
                info->p++;
                skip_spaces_and_lf(info);
                if(_if_conditional375=*info->p==123,                _if_conditional375) {
                    head_282=info->p;
                    ((char*)(right_value302=skip_block(info)));
                    right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    tail_283=info->p;
                    buf_284=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value304=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value303=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 1054, "buffer"))))))));
                    come_call_finalizer3(right_value303,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value304,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                    buffer_append(buf_284,head_282,tail_283-head_282);
                    initializer_285=(char*)come_increment_ref_count(((char*)(right_value305=buffer_to_string(buf_284))));
                    right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1tuple4$4sTypephcharphsNodephcharphph_push_back(multiple_declare_276,(struct tuple4$4sTypephcharphvoidpcharph*)come_increment_ref_count(((struct tuple4$4sTypephcharphvoidpcharph*)(right_value310=tuple4$4sTypephcharphvoidpcharph_initialize((struct tuple4$4sTypephcharphvoidpcharph*)come_increment_ref_count(((struct tuple4$4sTypephcharphvoidpcharph*)(right_value309=(struct tuple4$4sTypephcharphvoidpcharph*)come_calloc(1, sizeof(struct tuple4$4sTypephcharphvoidpcharph)*(1), "07var.c", 1060, "struct tuple4$4sTypephcharphvoidpcharph")))),(struct sType*)come_increment_ref_count(type2_280),(char*)come_increment_ref_count(var_name_281),((void*)0),(char*)come_increment_ref_count(initializer_285))))));
                    right_value309 = come_decrement_ref_count2(right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value310,tuple4$4sTypephcharphvoidpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(buf_284,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    initializer_285 = come_decrement_ref_count2(initializer_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    no_comma_289=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_290=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value311=expression_v13(info))));
                    if(right_value311) { right_value311 = come_decrement_ref_count2(right_value311, ((struct sNode*)right_value311)->finalize, ((struct sNode*)right_value311)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    info->no_comma=no_comma_289;
                    list$1tuple4$4sTypephcharphsNodephcharphph_push_back(multiple_declare_276,(struct tuple4$4sTypephcharphsNodephvoidp*)come_increment_ref_count(((struct tuple4$4sTypephcharphsNodephvoidp*)(right_value313=tuple4$4sTypephcharphsNodephvoidp_initialize((struct tuple4$4sTypephcharphsNodephvoidp*)come_increment_ref_count(((struct tuple4$4sTypephcharphsNodephvoidp*)(right_value312=(struct tuple4$4sTypephcharphsNodephvoidp*)come_calloc(1, sizeof(struct tuple4$4sTypephcharphsNodephvoidp)*(1), "07var.c", 1068, "struct tuple4$4sTypephcharphsNodephvoidp")))),(struct sType*)come_increment_ref_count(type2_280),(char*)come_increment_ref_count(var_name_281),(struct sNode*)come_increment_ref_count(exp_290),((void*)0))))));
                    right_value312 = come_decrement_ref_count2(right_value312, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value313,tuple4$4sTypephcharphsNodephvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(exp_290) { exp_290 = come_decrement_ref_count2(exp_290, ((struct sNode*)exp_290)->finalize, ((struct sNode*)exp_290)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
            }
            else {
                list$1tuple4$4sTypephcharphsNodephcharphph_push_back(multiple_declare_276,(struct tuple4$4sTypephcharphvoidpvoidp*)come_increment_ref_count(((struct tuple4$4sTypephcharphvoidpvoidp*)(right_value315=tuple4$4sTypephcharphvoidpvoidp_initialize((struct tuple4$4sTypephcharphvoidpvoidp*)come_increment_ref_count(((struct tuple4$4sTypephcharphvoidpvoidp*)(right_value314=(struct tuple4$4sTypephcharphvoidpvoidp*)come_calloc(1, sizeof(struct tuple4$4sTypephcharphvoidpvoidp)*(1), "07var.c", 1072, "struct tuple4$4sTypephcharphvoidpvoidp")))),(struct sType*)come_increment_ref_count(type2_280),(char*)come_increment_ref_count(var_name_281),((void*)0),((void*)0))))));
                right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value315,tuple4$4sTypephcharphvoidpvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            while(_while_condtional34=*info->p==44,            _while_condtional34) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                multiple_assign_var8=((struct tuple2$2sTypephcharph*)(right_value316=parse_variable_name((struct sType*)come_increment_ref_count(base_type_277),(_Bool)0,info)));
                type2_291=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                var_name_292=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                come_call_finalizer3(right_value316,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                parse_sharp_v5(info);
                if(_if_conditional386=*info->p==61,                _if_conditional386) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(_if_conditional387=*info->p==123,                    _if_conditional387) {
                        head_293=info->p;
                        ((char*)(right_value317=skip_block(info)));
                        right_value317 = come_decrement_ref_count2(right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        tail_294=info->p;
                        buf_295=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value319=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value318=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 1094, "buffer"))))))));
                        come_call_finalizer3(right_value318,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value319,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                        buffer_append(buf_295,head_293,tail_294-head_293);
                        initializer_296=(char*)come_increment_ref_count(((char*)(right_value320=buffer_to_string(buf_295))));
                        right_value320 = come_decrement_ref_count2(right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        list$1tuple4$4sTypephcharphsNodephcharphph_push_back(multiple_declare_276,(struct tuple4$4sTypephcharphvoidpcharph*)come_increment_ref_count(((struct tuple4$4sTypephcharphvoidpcharph*)(right_value322=tuple4$4sTypephcharphvoidpcharph_initialize((struct tuple4$4sTypephcharphvoidpcharph*)come_increment_ref_count(((struct tuple4$4sTypephcharphvoidpcharph*)(right_value321=(struct tuple4$4sTypephcharphvoidpcharph*)come_calloc(1, sizeof(struct tuple4$4sTypephcharphvoidpcharph)*(1), "07var.c", 1100, "struct tuple4$4sTypephcharphvoidpcharph")))),(struct sType*)come_increment_ref_count(type2_291),(char*)come_increment_ref_count(var_name_292),((void*)0),(char*)come_increment_ref_count(initializer_296))))));
                        right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value322,tuple4$4sTypephcharphvoidpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(buf_295,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        initializer_296 = come_decrement_ref_count2(initializer_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        no_comma_297=info->no_comma;
                        info->no_comma=(_Bool)1;
                        exp_298=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value323=expression_v13(info))));
                        if(right_value323) { right_value323 = come_decrement_ref_count2(right_value323, ((struct sNode*)right_value323)->finalize, ((struct sNode*)right_value323)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        info->no_comma=no_comma_297;
                        list$1tuple4$4sTypephcharphsNodephcharphph_push_back(multiple_declare_276,(struct tuple4$4sTypephcharphsNodephvoidp*)come_increment_ref_count(((struct tuple4$4sTypephcharphsNodephvoidp*)(right_value325=tuple4$4sTypephcharphsNodephvoidp_initialize((struct tuple4$4sTypephcharphsNodephvoidp*)come_increment_ref_count(((struct tuple4$4sTypephcharphsNodephvoidp*)(right_value324=(struct tuple4$4sTypephcharphsNodephvoidp*)come_calloc(1, sizeof(struct tuple4$4sTypephcharphsNodephvoidp)*(1), "07var.c", 1110, "struct tuple4$4sTypephcharphsNodephvoidp")))),(struct sType*)come_increment_ref_count(type2_291),(char*)come_increment_ref_count(var_name_292),(struct sNode*)come_increment_ref_count(exp_298),((void*)0))))));
                        right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value325,tuple4$4sTypephcharphsNodephvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(exp_298) { exp_298 = come_decrement_ref_count2(exp_298, ((struct sNode*)exp_298)->finalize, ((struct sNode*)exp_298)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                }
                else {
                    list$1tuple4$4sTypephcharphsNodephcharphph_push_back(multiple_declare_276,(struct tuple4$4sTypephcharphvoidpvoidp*)come_increment_ref_count(((struct tuple4$4sTypephcharphvoidpvoidp*)(right_value327=tuple4$4sTypephcharphvoidpvoidp_initialize((struct tuple4$4sTypephcharphvoidpvoidp*)come_increment_ref_count(((struct tuple4$4sTypephcharphvoidpvoidp*)(right_value326=(struct tuple4$4sTypephcharphvoidpvoidp*)come_calloc(1, sizeof(struct tuple4$4sTypephcharphvoidpvoidp)*(1), "07var.c", 1114, "struct tuple4$4sTypephcharphvoidpvoidp")))),(struct sType*)come_increment_ref_count(type2_291),(char*)come_increment_ref_count(var_name_292),((void*)0),((void*)0))))));
                    right_value326 = come_decrement_ref_count2(right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value327,tuple4$4sTypephcharphvoidpvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                come_call_finalizer3(type2_291,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_292 = come_decrement_ref_count2(var_name_292, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            right_node_299=((void*)0);
            array_initializer_300=((void*)0);
            var_name2_301=(char*)come_increment_ref_count(((char*)(right_value328=__builtin_string(""))));
            right_value328 = come_decrement_ref_count2(right_value328, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1122, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sStoreNode*)(right_value331=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value329=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1122, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value330=__builtin_string(buf)))),((void*)0),(struct list$1tuple4$4sTypephcharphsNodephcharphph*)come_increment_ref_count(multiple_declare_276),(struct sType*)come_increment_ref_count(base_type_277),(_Bool)1,((void*)0),((void*)0),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sStoreNode_finalize;
            _inf_value2->clone=(void*)sStoreNode_clone;
            _inf_value2->compile=(void*)sStoreNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sNodeBase_terminated;
            _inf_value2->kind=(void*)sStoreNode_kind;
            __result172__ = __result_obj__ = ((struct sNode*)(right_value340=_inf_value2));
            come_call_finalizer3(multiple_declare_276,list$1tuple4$4sTypephcharphsNodephcharphphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(base_type_277,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_278 = come_decrement_ref_count2(name_278, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_280,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_281 = come_decrement_ref_count2(var_name_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_299) { right_node_299 = come_decrement_ref_count2(right_node_299, ((struct sNode*)right_node_299)->finalize, ((struct sNode*)right_node_299)->_protocol_obj, 0, 0, 0, (void*)0); } 
            array_initializer_300 = come_decrement_ref_count2(array_initializer_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            var_name2_301 = come_decrement_ref_count2(var_name2_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value329,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_value330 = come_decrement_ref_count2(right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value331,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value340) { right_value340 = come_decrement_ref_count2(right_value340, ((struct sNode*)right_value340)->finalize, ((struct sNode*)right_value340)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result172__;
            come_call_finalizer3(multiple_declare_276,list$1tuple4$4sTypephcharphsNodephcharphphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(base_type_277,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_278 = come_decrement_ref_count2(name_278, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_280,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_281 = come_decrement_ref_count2(var_name_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_299) { right_node_299 = come_decrement_ref_count2(right_node_299, ((struct sNode*)right_node_299)->finalize, ((struct sNode*)right_node_299)->_protocol_obj, 0, 0, 0, (void*)0); } 
            array_initializer_300 = come_decrement_ref_count2(array_initializer_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            var_name2_301 = come_decrement_ref_count2(var_name2_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(attr_define_249) {
                info->p=head;
                info->sline=head_sline;
                parse_sharp_v5(info);
                multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(right_value341=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_303=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                name_304=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                err_305=multiple_assign_var9->v3;
                come_call_finalizer3(right_value341,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional406=!err_305,                _if_conditional406) {
                    printf("%s %d: parse_type failed\n",info->sname,info->sline);
                    exit(2);
                }
                info->p+=strlen("self.");
                __dec_obj130=name_304;
                name_304=(char*)come_increment_ref_count(((char*)(right_value342=parse_word(info))));
                __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value342 = come_decrement_ref_count2(right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                parse_sharp_v5(info);
                list$1tuple2$2charphsTypephph_add(info->defining_class->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value347=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value346=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "07var.c", 1142, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_304),(struct sType*)come_increment_ref_count(type_303))))));
                right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value347,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional418=*info->p==61&&*(info->p+1)!=61,                _if_conditional418) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1150, "struct sNode");
                    _inf_obj_value3=come_increment_ref_count(((struct sLoadNode*)(right_value350=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value348=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1150, "sLoadNode")))),(char*)come_increment_ref_count(((char*)(right_value349=__builtin_string("self")))),info))));
                    _inf_value3->_protocol_obj=_inf_obj_value3;
                    _inf_value3->finalize=(void*)sLoadNode_finalize;
                    _inf_value3->clone=(void*)sLoadNode_clone;
                    _inf_value3->compile=(void*)sLoadNode_compile;
                    _inf_value3->sline=(void*)sNodeBase_sline;
                    _inf_value3->sname=(void*)sNodeBase_sname;
                    _inf_value3->terminated=(void*)sNodeBase_terminated;
                    _inf_value3->kind=(void*)sLoadNode_kind;
                    self_node_310=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value354=_inf_value3)));
                    come_call_finalizer3(right_value348,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                    right_value349 = come_decrement_ref_count2(right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value350,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value354) { right_value354 = come_decrement_ref_count2(right_value354, ((struct sNode*)right_value354)->finalize, ((struct sNode*)right_value354)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    right_node_311=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value355=expression_v13(info))));
                    if(right_value355) { right_value355 = come_decrement_ref_count2(right_value355, ((struct sNode*)right_value355)->finalize, ((struct sNode*)right_value355)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    __result177__ = __result_obj__ = ((struct sNode*)(right_value356=store_field(self_node_310,(struct sNode*)come_increment_ref_count(right_node_311),(char*)come_increment_ref_count(name_304),info)));
                    if(self_node_310) { self_node_310 = come_decrement_ref_count2(self_node_310, ((struct sNode*)self_node_310)->finalize, ((struct sNode*)self_node_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(right_node_311) { right_node_311 = come_decrement_ref_count2(right_node_311, ((struct sNode*)right_node_311)->finalize, ((struct sNode*)right_node_311)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(type_303,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_304 = come_decrement_ref_count2(name_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(right_value356) { right_value356 = come_decrement_ref_count2(right_value356, ((struct sNode*)right_value356)->finalize, ((struct sNode*)right_value356)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result177__;
                    if(self_node_310) { self_node_310 = come_decrement_ref_count2(self_node_310, ((struct sNode*)self_node_310)->finalize, ((struct sNode*)self_node_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(right_node_311) { right_node_311 = come_decrement_ref_count2(right_node_311, ((struct sNode*)right_node_311)->finalize, ((struct sNode*)right_node_311)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    __result178__ = __result_obj__ = ((struct sNode*)(right_value357=create_null_node(info)));
                    come_call_finalizer3(type_303,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_304 = come_decrement_ref_count2(name_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(right_value357) { right_value357 = come_decrement_ref_count2(right_value357, ((struct sNode*)right_value357)->finalize, ((struct sNode*)right_value357)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result178__;
                }
                come_call_finalizer3(type_303,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_304 = come_decrement_ref_count2(name_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional425=!is_type_name_flag_236&&*info->p==61&&*(info->p+1)!=61&&!info->no_assign,                _if_conditional425) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    right_value_312=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value358=expression_v13(info))));
                    if(right_value358) { right_value358 = come_decrement_ref_count2(right_value358, ((struct sNode*)right_value358)->finalize, ((struct sNode*)right_value358)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    parse_sharp_v5(info);
                    __dec_obj138=right_value_312;
                    right_value_312=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value359=post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_312),info))));
                    if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value359) { right_value359 = come_decrement_ref_count2(right_value359, ((struct sNode*)right_value359)->finalize, ((struct sNode*)right_value359)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    parse_sharp_v5(info);
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1172, "struct sNode");
                    _inf_obj_value4=come_increment_ref_count(((struct sStoreNode*)(right_value362=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value360=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1172, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value361=__builtin_string(buf)))),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_312),((void*)0),info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sStoreNode_finalize;
                    _inf_value4->clone=(void*)sStoreNode_clone;
                    _inf_value4->compile=(void*)sStoreNode_compile;
                    _inf_value4->sline=(void*)sNodeBase_sline;
                    _inf_value4->sname=(void*)sNodeBase_sname;
                    _inf_value4->terminated=(void*)sNodeBase_terminated;
                    _inf_value4->kind=(void*)sStoreNode_kind;
                    __result181__ = __result_obj__ = ((struct sNode*)(right_value371=_inf_value4));
                    if(right_value_312) { right_value_312 = come_decrement_ref_count2(right_value_312, ((struct sNode*)right_value_312)->finalize, ((struct sNode*)right_value_312)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(right_value360,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                    right_value361 = come_decrement_ref_count2(right_value361, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value362,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value371) { right_value371 = come_decrement_ref_count2(right_value371, ((struct sNode*)right_value371)->finalize, ((struct sNode*)right_value371)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result181__;
                    if(right_value_312) { right_value_312 = come_decrement_ref_count2(right_value_312, ((struct sNode*)right_value_312)->finalize, ((struct sNode*)right_value_312)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional443=!is_type_name_flag_236||map$2charphsFunphp_operator_load_element(info->funcs,buf),                    _if_conditional443) {
                        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1175, "struct sNode");
                        _inf_obj_value5=come_increment_ref_count(((struct sLoadNode*)(right_value374=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value372=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1175, "sLoadNode")))),(char*)come_increment_ref_count(((char*)(right_value373=__builtin_string(buf)))),info))));
                        _inf_value5->_protocol_obj=_inf_obj_value5;
                        _inf_value5->finalize=(void*)sLoadNode_finalize;
                        _inf_value5->clone=(void*)sLoadNode_clone;
                        _inf_value5->compile=(void*)sLoadNode_compile;
                        _inf_value5->sline=(void*)sNodeBase_sline;
                        _inf_value5->sname=(void*)sNodeBase_sname;
                        _inf_value5->terminated=(void*)sNodeBase_terminated;
                        _inf_value5->kind=(void*)sLoadNode_kind;
                        node_315=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value378=_inf_value5)));
                        come_call_finalizer3(right_value372,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                        right_value373 = come_decrement_ref_count2(right_value373, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value374,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value378) { right_value378 = come_decrement_ref_count2(right_value378, ((struct sNode*)right_value378)->finalize, ((struct sNode*)right_value378)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        __dec_obj148=node_315;
                        node_315=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value379=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_315),info))));
                        if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count2(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value379) { right_value379 = come_decrement_ref_count2(right_value379, ((struct sNode*)right_value379)->finalize, ((struct sNode*)right_value379)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        __result184__ = __result_obj__ = node_315;
                        if(node_315) { node_315 = come_decrement_ref_count2(node_315, ((struct sNode*)node_315)->finalize, ((struct sNode*)node_315)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result184__;
                        if(node_315) { node_315 = come_decrement_ref_count2(node_315, ((struct sNode*)node_315)->finalize, ((struct sNode*)node_315)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        info->p=head;
                        info->sline=head_sline;
                        if(_if_conditional450=xisalpha(*info->p)||*info->p==95,                        _if_conditional450) {
                            __dec_obj149=word_316;
                            word_316=(char*)come_increment_ref_count(((char*)(right_value380=parse_word(info))));
                            __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value380 = come_decrement_ref_count2(right_value380, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            __dec_obj150=word_316;
                            word_316=(char*)come_increment_ref_count(((char*)(right_value381=__builtin_string(""))));
                            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value381 = come_decrement_ref_count2(right_value381, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        is_type_name_flag_317=is_type_name(word_316,info);
                        info->p=head;
                        info->sline=head_sline;
                        if(is_type_name_flag_317) {
                            parse_sharp_v5(info);
                            multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(right_value382=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                            type_318=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                            name_319=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                            err_320=multiple_assign_var10->v3;
                            come_call_finalizer3(right_value382,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional452=!err_320,                            _if_conditional452) {
                                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                                exit(2);
                            }
                            parse_sharp_v5(info);
                            if(_if_conditional453=*info->p==61,                            _if_conditional453) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                parse_sharp_v5(info);
                                if(_if_conditional454=*info->p==123,                                _if_conditional454) {
                                    buf2_321=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value384=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value383=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 1216, "buffer"))))))));
                                    come_call_finalizer3(right_value383,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value384,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    buffer_append_char(buf2_321,*info->p);
                                    info->p++;
                                    squort_322=(_Bool)0;
                                    dquort_323=(_Bool)0;
                                    nest_324=1;
                                    while(_while_condtional35=1,                                    _while_condtional35) {
                                        if(_if_conditional455=*info->p==0,                                        _if_conditional455) {
                                            err_msg(info,"unexpected source end in array initiailizer");
                                            exit(2);
                                        }
                                        else {
                                            if(_if_conditional456=*info->p==92,                                            _if_conditional456) {
                                                buffer_append_char(buf2_321,*info->p);
                                                info->p++;
                                                if(_if_conditional457=*info->p==10,                                                _if_conditional457) {
                                                    info->sline++;
                                                }
                                                buffer_append_char(buf2_321,*info->p);
                                                info->p++;
                                            }
                                            else {
                                                if(_if_conditional458=!squort_322&&*info->p==34,                                                _if_conditional458) {
                                                    buffer_append_char(buf2_321,*info->p);
                                                    info->p++;
                                                    dquort_323=!dquort_323;
                                                }
                                                else {
                                                    if(_if_conditional459=!dquort_323&&*info->p==39,                                                    _if_conditional459) {
                                                        buffer_append_char(buf2_321,*info->p);
                                                        info->p++;
                                                        squort_322=!squort_322;
                                                    }
                                                    else {
                                                        if(_if_conditional460=squort_322||dquort_323,                                                        _if_conditional460) {
                                                            if(_if_conditional461=*info->p==10,                                                            _if_conditional461) {
                                                                info->sline++;
                                                            }
                                                            buffer_append_char(buf2_321,*info->p);
                                                            info->p++;
                                                        }
                                                        else {
                                                            if(_if_conditional462=*info->p==123,                                                            _if_conditional462) {
                                                                nest_324++;
                                                                buffer_append_char(buf2_321,*info->p);
                                                                info->p++;
                                                            }
                                                            else {
                                                                if(_if_conditional463=*info->p==125,                                                                _if_conditional463) {
                                                                    nest_324--;
                                                                    buffer_append_char(buf2_321,*info->p);
                                                                    info->p++;
                                                                    if(_if_conditional464=nest_324==0,                                                                    _if_conditional464) {
                                                                        skip_spaces_and_lf(info);
                                                                        break;
                                                                    }
                                                                }
                                                                else {
                                                                    if(_if_conditional465=*info->p==10,                                                                    _if_conditional465) {
                                                                        buffer_append_char(buf2_321,*info->p);
                                                                        info->p++;
                                                                        info->sline++;
                                                                    }
                                                                    else {
                                                                        buffer_append_char(buf2_321,*info->p);
                                                                        info->p++;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    array_initializer_325=(char*)come_increment_ref_count(((char*)(right_value385=buffer_to_string(buf2_321))));
                                    right_value385 = come_decrement_ref_count2(right_value385, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1280, "struct sNode");
                                    _inf_obj_value6=come_increment_ref_count(((struct sStoreNode*)(right_value387=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value386=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1280, "sStoreNode")))),(char*)come_increment_ref_count(name_319),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_318),(_Bool)1,((void*)0),(char*)come_increment_ref_count(array_initializer_325),info))));
                                    _inf_value6->_protocol_obj=_inf_obj_value6;
                                    _inf_value6->finalize=(void*)sStoreNode_finalize;
                                    _inf_value6->clone=(void*)sStoreNode_clone;
                                    _inf_value6->compile=(void*)sStoreNode_compile;
                                    _inf_value6->sline=(void*)sNodeBase_sline;
                                    _inf_value6->sname=(void*)sNodeBase_sname;
                                    _inf_value6->terminated=(void*)sNodeBase_terminated;
                                    _inf_value6->kind=(void*)sStoreNode_kind;
                                    __result187__ = __result_obj__ = ((struct sNode*)(right_value396=_inf_value6));
                                    come_call_finalizer3(buf2_321,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    array_initializer_325 = come_decrement_ref_count2(array_initializer_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(type_318,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    name_319 = come_decrement_ref_count2(name_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    word_316 = come_decrement_ref_count2(word_316, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value386,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value387,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(right_value396) { right_value396 = come_decrement_ref_count2(right_value396, ((struct sNode*)right_value396)->finalize, ((struct sNode*)right_value396)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result187__;
                                    come_call_finalizer3(buf2_321,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    array_initializer_325 = come_decrement_ref_count2(array_initializer_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                else {
                                    parse_sharp_v5(info);
                                    right_value_327=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value397=expression_v13(info))));
                                    if(right_value397) { right_value397 = come_decrement_ref_count2(right_value397, ((struct sNode*)right_value397)->finalize, ((struct sNode*)right_value397)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    parse_sharp_v5(info);
                                    right_values_328=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value399=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value398=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "07var.c", 1287, "list$1sNodeph"))))))));
                                    come_call_finalizer3(right_value398,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value399,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    while(_while_condtional36=*info->p==44,                                    _while_condtional36) {
                                        anonymous_var_nameX1555_329 = come_decrement_ref_count2(anonymous_var_nameX1555_329, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    __dec_obj158=right_value_327;
                                    right_value_327=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value400=post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_327),info))));
                                    if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value400) { right_value400 = come_decrement_ref_count2(right_value400, ((struct sNode*)right_value400)->finalize, ((struct sNode*)right_value400)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1294, "struct sNode");
                                    _inf_obj_value7=come_increment_ref_count(((struct sStoreNode*)(right_value402=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value401=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1294, "sStoreNode")))),(char*)come_increment_ref_count(name_319),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_318),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_327),((void*)0),info))));
                                    _inf_value7->_protocol_obj=_inf_obj_value7;
                                    _inf_value7->finalize=(void*)sStoreNode_finalize;
                                    _inf_value7->clone=(void*)sStoreNode_clone;
                                    _inf_value7->compile=(void*)sStoreNode_compile;
                                    _inf_value7->sline=(void*)sNodeBase_sline;
                                    _inf_value7->sname=(void*)sNodeBase_sname;
                                    _inf_value7->terminated=(void*)sNodeBase_terminated;
                                    _inf_value7->kind=(void*)sStoreNode_kind;
                                    __result190__ = __result_obj__ = ((struct sNode*)(right_value411=_inf_value7));
                                    if(right_value_327) { right_value_327 = come_decrement_ref_count2(right_value_327, ((struct sNode*)right_value_327)->finalize, ((struct sNode*)right_value_327)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer3(right_values_328,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(type_318,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    name_319 = come_decrement_ref_count2(name_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    word_316 = come_decrement_ref_count2(word_316, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value401,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value402,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(right_value411) { right_value411 = come_decrement_ref_count2(right_value411, ((struct sNode*)right_value411)->finalize, ((struct sNode*)right_value411)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result190__;
                                    if(right_value_327) { right_value_327 = come_decrement_ref_count2(right_value_327, ((struct sNode*)right_value_327)->finalize, ((struct sNode*)right_value_327)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer3(right_values_328,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                            }
                            else {
                                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1298, "struct sNode");
                                _inf_obj_value8=come_increment_ref_count(((struct sStoreNode*)(right_value413=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value412=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1298, "sStoreNode")))),(char*)come_increment_ref_count(name_319),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_318),(_Bool)1,((void*)0),((void*)0),info))));
                                _inf_value8->_protocol_obj=_inf_obj_value8;
                                _inf_value8->finalize=(void*)sStoreNode_finalize;
                                _inf_value8->clone=(void*)sStoreNode_clone;
                                _inf_value8->compile=(void*)sStoreNode_compile;
                                _inf_value8->sline=(void*)sNodeBase_sline;
                                _inf_value8->sname=(void*)sNodeBase_sname;
                                _inf_value8->terminated=(void*)sNodeBase_terminated;
                                _inf_value8->kind=(void*)sStoreNode_kind;
                                __result193__ = __result_obj__ = ((struct sNode*)(right_value422=_inf_value8));
                                come_call_finalizer3(type_318,sType_finalize, 0, 0, 0, 0, (void*)0);
                                name_319 = come_decrement_ref_count2(name_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                word_316 = come_decrement_ref_count2(word_316, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value412,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value413,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value422) { right_value422 = come_decrement_ref_count2(right_value422, ((struct sNode*)right_value422)->finalize, ((struct sNode*)right_value422)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result193__;
                            }
                            come_call_finalizer3(type_318,sType_finalize, 0, 0, 0, 0, (void*)0);
                            name_319 = come_decrement_ref_count2(name_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        word_316 = come_decrement_ref_count2(word_316, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    err_msg(info,"unexpected word(%s)(1)\n",buf);
    exit(2);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional332;
_Bool _if_conditional333;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional332=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional332) {
                    come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional333=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional333) {
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional335;
_Bool _if_conditional336;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional335=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional335) {
                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional336=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional336) {
                        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional352;
void* right_value278;
struct list_item$1charph* litem_269;
char* __dec_obj101;
_Bool _if_conditional353;
void* right_value279;
struct list_item$1charph* litem_270;
char* __dec_obj102;
void* right_value280;
struct list_item$1charph* litem_271;
char* __dec_obj103;
struct list$1charph* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
right_value278 = (void*)0;
memset(&litem_269, 0, sizeof(struct list_item$1charph*));
right_value279 = (void*)0;
memset(&litem_270, 0, sizeof(struct list_item$1charph*));
right_value280 = (void*)0;
memset(&litem_271, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional352=self->len==0,                _if_conditional352) {
                    litem_269=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value278=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 221, "list_item$1charph"))));
                    come_call_finalizer3(right_value278,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_269->prev=((void*)0);
                    litem_269->next=((void*)0);
                    __dec_obj101=litem_269->item;
                    litem_269->item=(char*)come_increment_ref_count(item);
                    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->tail=litem_269;
                    self->head=litem_269;
                }
                else {
                    if(_if_conditional353=self->len==1,                    _if_conditional353) {
                        litem_270=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value279=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 231, "list_item$1charph"))));
                        come_call_finalizer3(right_value279,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_270->prev=self->head;
                        litem_270->next=((void*)0);
                        __dec_obj102=litem_270->item;
                        litem_270->item=(char*)come_increment_ref_count(item);
                        __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_270;
                        self->head->next=litem_270;
                    }
                    else {
                        litem_271=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value280=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 241, "list_item$1charph"))));
                        come_call_finalizer3(right_value280,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_271->prev=self->tail;
                        litem_271->next=((void*)0);
                        __dec_obj103=litem_271->item;
                        litem_271->item=(char*)come_increment_ref_count(item);
                        __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail->next=litem_271;
                        self->tail=litem_271;
                    }
                }
                self->len++;
                __result162__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result162__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct list$1tuple4$4sTypephcharphsNodephcharphph* list$1tuple4$4sTypephcharphsNodephcharphph_push_back(struct list$1tuple4$4sTypephcharphsNodephcharphph* self, struct tuple4$4sTypephcharphsNodephcharph* item){
void* __result_obj__;
_Bool _if_conditional376;
void* right_value306;
struct list_item$1tuple4$4sTypephcharphsNodephcharphph* litem_286;
struct tuple4$4sTypephcharphsNodephcharph* __dec_obj112;
_Bool _if_conditional377;
void* right_value307;
struct list_item$1tuple4$4sTypephcharphsNodephcharphph* litem_287;
struct tuple4$4sTypephcharphsNodephcharph* __dec_obj113;
void* right_value308;
struct list_item$1tuple4$4sTypephcharphsNodephcharphph* litem_288;
struct tuple4$4sTypephcharphsNodephcharph* __dec_obj114;
struct list$1tuple4$4sTypephcharphsNodephcharphph* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
right_value306 = (void*)0;
memset(&litem_286, 0, sizeof(struct list_item$1tuple4$4sTypephcharphsNodephcharphph*));
right_value307 = (void*)0;
memset(&litem_287, 0, sizeof(struct list_item$1tuple4$4sTypephcharphsNodephcharphph*));
right_value308 = (void*)0;
memset(&litem_288, 0, sizeof(struct list_item$1tuple4$4sTypephcharphsNodephcharphph*));
                        if(_if_conditional376=self->len==0,                        _if_conditional376) {
                            litem_286=(struct list_item$1tuple4$4sTypephcharphsNodephcharphph*)come_increment_ref_count(((struct list_item$1tuple4$4sTypephcharphsNodephcharphph*)(right_value306=(struct list_item$1tuple4$4sTypephcharphsNodephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple4$4sTypephcharphsNodephcharphph)*(1), "./neo-c.h", 221, "list_item$1tuple4$4sTypephcharphsNodephcharphph"))));
                            come_call_finalizer3(right_value306,list_item$1tuple4$4sTypephcharphsNodephcharphphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_286->prev=((void*)0);
                            litem_286->next=((void*)0);
                            __dec_obj112=litem_286->item;
                            litem_286->item=(struct tuple4$4sTypephcharphsNodephcharph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj112,tuple4$4sTypephcharphsNodephcharph_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_286;
                            self->head=litem_286;
                        }
                        else {
                            if(_if_conditional377=self->len==1,                            _if_conditional377) {
                                litem_287=(struct list_item$1tuple4$4sTypephcharphsNodephcharphph*)come_increment_ref_count(((struct list_item$1tuple4$4sTypephcharphsNodephcharphph*)(right_value307=(struct list_item$1tuple4$4sTypephcharphsNodephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple4$4sTypephcharphsNodephcharphph)*(1), "./neo-c.h", 231, "list_item$1tuple4$4sTypephcharphsNodephcharphph"))));
                                come_call_finalizer3(right_value307,list_item$1tuple4$4sTypephcharphsNodephcharphphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_287->prev=self->head;
                                litem_287->next=((void*)0);
                                __dec_obj113=litem_287->item;
                                litem_287->item=(struct tuple4$4sTypephcharphsNodephcharph*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj113,tuple4$4sTypephcharphsNodephcharph_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_287;
                                self->head->next=litem_287;
                            }
                            else {
                                litem_288=(struct list_item$1tuple4$4sTypephcharphsNodephcharphph*)come_increment_ref_count(((struct list_item$1tuple4$4sTypephcharphsNodephcharphph*)(right_value308=(struct list_item$1tuple4$4sTypephcharphsNodephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple4$4sTypephcharphsNodephcharphph)*(1), "./neo-c.h", 241, "list_item$1tuple4$4sTypephcharphsNodephcharphph"))));
                                come_call_finalizer3(right_value308,list_item$1tuple4$4sTypephcharphsNodephcharphphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_288->prev=self->tail;
                                litem_288->next=((void*)0);
                                __dec_obj114=litem_288->item;
                                litem_288->item=(struct tuple4$4sTypephcharphsNodephcharph*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj114,tuple4$4sTypephcharphsNodephcharph_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_288;
                                self->tail=litem_288;
                            }
                        }
                        self->len++;
                        __result166__ = __result_obj__ = self;
                        come_call_finalizer3(item,tuple4$4sTypephcharphsNodephcharphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result166__;
                        come_call_finalizer3(item,tuple4$4sTypephcharphsNodephcharphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple4$4sTypephcharphvoidpcharph* tuple4$4sTypephcharphvoidpcharph_initialize(struct tuple4$4sTypephcharphvoidpcharph* self, struct sType* v1, char* v2, void* v3, char* v4){
void* __result_obj__;
struct sType* __dec_obj115;
char* __dec_obj116;
char* __dec_obj117;
struct tuple4$4sTypephcharphvoidpcharph* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
                        __dec_obj115=self->v1;
                        self->v1=(struct sType*)come_increment_ref_count(v1);
                        come_call_finalizer3(__dec_obj115,sType_finalize, 0, 0, 0, 0, (void*)0);
                        __dec_obj116=self->v2;
                        self->v2=(char*)come_increment_ref_count(v2);
                        __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->v3=v3;
                        __dec_obj117=self->v4;
                        self->v4=(char*)come_increment_ref_count(v4);
                        __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
                        __result167__ = __result_obj__ = self;
                        come_call_finalizer3(self,tuple4$4sTypephcharphvoidpcharphp_finalize, 0, 0, 1, 0, (void*)0);
                        come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        v4 = come_decrement_ref_count2(v4, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result167__;
                        come_call_finalizer3(self,tuple4$4sTypephcharphvoidpcharphp_finalize, 0, 0, 1, 0, (void*)0);
                        come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        v4 = come_decrement_ref_count2(v4, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple4$4sTypephcharphvoidpcharphp_finalize(struct tuple4$4sTypephcharphvoidpcharph* self){
void* __result_obj__;
_Bool _if_conditional378;
_Bool _if_conditional379;
_Bool _if_conditional380;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional378=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional378) {
                                come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional379=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional379) {
                                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional380=self!=((void*)0)&&self->v4!=((void*)0),                            _if_conditional380) {
                                self->v4 = come_decrement_ref_count2(self->v4, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct tuple4$4sTypephcharphsNodephvoidp* tuple4$4sTypephcharphsNodephvoidp_initialize(struct tuple4$4sTypephcharphsNodephvoidp* self, struct sType* v1, char* v2, struct sNode* v3, void* v4){
void* __result_obj__;
struct sType* __dec_obj118;
char* __dec_obj119;
struct sNode* __dec_obj120;
struct tuple4$4sTypephcharphsNodephvoidp* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
                        __dec_obj118=self->v1;
                        self->v1=(struct sType*)come_increment_ref_count(v1);
                        come_call_finalizer3(__dec_obj118,sType_finalize, 0, 0, 0, 0, (void*)0);
                        __dec_obj119=self->v2;
                        self->v2=(char*)come_increment_ref_count(v2);
                        __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                        __dec_obj120=self->v3;
                        self->v3=(struct sNode*)come_increment_ref_count(v3);
                        if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count2(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0, (void*)0); }
                        self->v4=v4;
                        __result168__ = __result_obj__ = self;
                        come_call_finalizer3(self,tuple4$4sTypephcharphsNodephvoidpp_finalize, 0, 0, 1, 0, (void*)0);
                        come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        if(v3) { v3 = come_decrement_ref_count2(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result168__;
                        come_call_finalizer3(self,tuple4$4sTypephcharphsNodephvoidpp_finalize, 0, 0, 1, 0, (void*)0);
                        come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        if(v3) { v3 = come_decrement_ref_count2(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void tuple4$4sTypephcharphsNodephvoidpp_finalize(struct tuple4$4sTypephcharphsNodephvoidp* self){
void* __result_obj__;
_Bool _if_conditional381;
_Bool _if_conditional382;
_Bool _if_conditional383;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional381=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional381) {
                                come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional382=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional382) {
                                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional383=self!=((void*)0)&&self->v3!=((void*)0),                            _if_conditional383) {
                                if(self->v3) { self->v3 = come_decrement_ref_count2(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct tuple4$4sTypephcharphvoidpvoidp* tuple4$4sTypephcharphvoidpvoidp_initialize(struct tuple4$4sTypephcharphvoidpvoidp* self, struct sType* v1, char* v2, void* v3, void* v4){
void* __result_obj__;
struct sType* __dec_obj121;
char* __dec_obj122;
struct tuple4$4sTypephcharphvoidpvoidp* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
                    __dec_obj121=self->v1;
                    self->v1=(struct sType*)come_increment_ref_count(v1);
                    come_call_finalizer3(__dec_obj121,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __dec_obj122=self->v2;
                    self->v2=(char*)come_increment_ref_count(v2);
                    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->v3=v3;
                    self->v4=v4;
                    __result169__ = __result_obj__ = self;
                    come_call_finalizer3(self,tuple4$4sTypephcharphvoidpvoidpp_finalize, 0, 0, 1, 0, (void*)0);
                    come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result169__;
                    come_call_finalizer3(self,tuple4$4sTypephcharphvoidpvoidpp_finalize, 0, 0, 1, 0, (void*)0);
                    come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple4$4sTypephcharphvoidpvoidpp_finalize(struct tuple4$4sTypephcharphvoidpvoidp* self){
void* __result_obj__;
_Bool _if_conditional384;
_Bool _if_conditional385;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional384=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional384) {
                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional385=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional385) {
                            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional407;
void* right_value343;
struct list_item$1tuple2$2charphsTypephph* litem_306;
struct tuple2$2charphsTypeph* __dec_obj131;
_Bool _if_conditional413;
void* right_value344;
struct list_item$1tuple2$2charphsTypephph* litem_307;
struct tuple2$2charphsTypeph* __dec_obj132;
void* right_value345;
struct list_item$1tuple2$2charphsTypephph* litem_308;
struct tuple2$2charphsTypeph* __dec_obj133;
struct list$1tuple2$2charphsTypephph* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
right_value343 = (void*)0;
memset(&litem_306, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value344 = (void*)0;
memset(&litem_307, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value345 = (void*)0;
memset(&litem_308, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                    if(_if_conditional407=self->len==0,                    _if_conditional407) {
                        litem_306=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value343=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 151, "list_item$1tuple2$2charphsTypephph"))));
                        come_call_finalizer3(right_value343,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_306->prev=((void*)0);
                        litem_306->next=((void*)0);
                        __dec_obj131=litem_306->item;
                        litem_306->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj131,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_306;
                        self->head=litem_306;
                    }
                    else {
                        if(_if_conditional413=self->len==1,                        _if_conditional413) {
                            litem_307=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value344=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 161, "list_item$1tuple2$2charphsTypephph"))));
                            come_call_finalizer3(right_value344,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_307->prev=self->head;
                            litem_307->next=((void*)0);
                            __dec_obj132=litem_307->item;
                            litem_307->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj132,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_307;
                            self->head->next=litem_307;
                        }
                        else {
                            litem_308=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value345=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 171, "list_item$1tuple2$2charphsTypephph"))));
                            come_call_finalizer3(right_value345,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_308->prev=self->tail;
                            litem_308->next=((void*)0);
                            __dec_obj133=litem_308->item;
                            litem_308->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj133,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_308;
                            self->tail=litem_308;
                        }
                    }
                    self->len++;
                    __result173__ = __result_obj__ = self;
                    come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result173__;
                    come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional408;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional408=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional408) {
                                come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional416;
_Bool _if_conditional417;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional416=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional416) {
                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional417=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional417) {
                                    come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj134;
struct sType* __dec_obj135;
struct tuple2$2charphsTypeph* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
                    __dec_obj134=self->v1;
                    self->v1=(char*)come_increment_ref_count(v1);
                    __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj135=self->v2;
                    self->v2=(struct sType*)come_increment_ref_count(v2);
                    come_call_finalizer3(__dec_obj135,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __result174__ = __result_obj__ = self;
                    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
                    return __result174__;
                    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void sLoadNode_finalize(struct sLoadNode* self){
void* __result_obj__;
_Bool _if_conditional444;
_Bool _if_conditional445;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional444=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional444) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional445=self!=((void*)0)&&self->name!=((void*)0),                            _if_conditional445) {
                                self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
void* __result_obj__;
_Bool _if_conditional446;
struct sLoadNode* __result182__;
void* right_value375;
struct sLoadNode* result_314;
_Bool _if_conditional447;
_Bool _if_conditional448;
void* right_value376;
char* __dec_obj146;
_Bool _if_conditional449;
void* right_value377;
char* __dec_obj147;
struct sLoadNode* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
right_value375 = (void*)0;
memset(&result_314, 0, sizeof(struct sLoadNode*));
right_value376 = (void*)0;
right_value377 = (void*)0;
                            if(_if_conditional446=self==(void*)0,                            _if_conditional446) {
                                __result182__ = __result_obj__ = (void*)0;
                                return __result182__;
                            }
                            result_314=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value375=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3, "sLoadNode"))));
                            come_call_finalizer3(right_value375,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional447=self!=((void*)0),                            _if_conditional447) {
                                result_314->sline=self->sline;
                            }
                            if(_if_conditional448=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional448) {
                                __dec_obj146=result_314->sname;
                                result_314->sname=(char*)come_increment_ref_count(((char*)(right_value376=string_clone(self->sname))));
                                __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value376 = come_decrement_ref_count2(right_value376, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional449=self!=((void*)0)&&self->name!=((void*)0),                            _if_conditional449) {
                                __dec_obj147=result_314->name;
                                result_314->name=(char*)come_increment_ref_count(((char*)(right_value377=string_clone(self->name))));
                                __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value377 = come_decrement_ref_count2(right_value377, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            __result183__ = __result_obj__ = result_314;
                            come_call_finalizer3(result_314,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result183__;
                            come_call_finalizer3(result_314,sLoadNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sStoreNode_finalize(struct sStoreNode* self){
void* __result_obj__;
_Bool _if_conditional500;
_Bool _if_conditional501;
_Bool _if_conditional502;
_Bool _if_conditional503;
_Bool _if_conditional504;
_Bool _if_conditional505;
_Bool _if_conditional506;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional500=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional500) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional501=self!=((void*)0)&&self->name!=((void*)0),                                    _if_conditional501) {
                                        self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional502=self!=((void*)0)&&self->type!=((void*)0),                                    _if_conditional502) {
                                        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional503=self!=((void*)0)&&self->right_value!=((void*)0),                                    _if_conditional503) {
                                        if(self->right_value) { self->right_value = come_decrement_ref_count2(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional504=self!=((void*)0)&&self->multiple_assign!=((void*)0),                                    _if_conditional504) {
                                        come_call_finalizer3(self->multiple_assign,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional505=self!=((void*)0)&&self->multiple_declare!=((void*)0),                                    _if_conditional505) {
                                        come_call_finalizer3(self->multiple_declare,list$1tuple4$4sTypephcharphsNodephcharphphp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional506=self!=((void*)0)&&self->array_initializer!=((void*)0),                                    _if_conditional506) {
                                        self->array_initializer = come_decrement_ref_count2(self->array_initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
void* __result_obj__;
_Bool _if_conditional507;
struct sStoreNode* __result191__;
void* right_value414;
struct sStoreNode* result_331;
_Bool _if_conditional508;
_Bool _if_conditional509;
void* right_value415;
char* __dec_obj166;
_Bool _if_conditional510;
void* right_value416;
char* __dec_obj167;
_Bool _if_conditional511;
_Bool _if_conditional512;
void* right_value417;
struct sType* __dec_obj168;
_Bool _if_conditional513;
void* right_value418;
struct sNode* __dec_obj169;
_Bool _if_conditional514;
void* right_value419;
struct list$1charph* __dec_obj170;
_Bool _if_conditional515;
void* right_value420;
struct list$1tuple4$4sTypephcharphsNodephcharphph* __dec_obj171;
_Bool _if_conditional516;
void* right_value421;
char* __dec_obj172;
struct sStoreNode* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
right_value414 = (void*)0;
memset(&result_331, 0, sizeof(struct sStoreNode*));
right_value415 = (void*)0;
right_value416 = (void*)0;
right_value417 = (void*)0;
right_value418 = (void*)0;
right_value419 = (void*)0;
right_value420 = (void*)0;
right_value421 = (void*)0;
                                    if(_if_conditional507=self==(void*)0,                                    _if_conditional507) {
                                        __result191__ = __result_obj__ = (void*)0;
                                        return __result191__;
                                    }
                                    result_331=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value414=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3, "sStoreNode"))));
                                    come_call_finalizer3(right_value414,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional508=self!=((void*)0),                                    _if_conditional508) {
                                        result_331->sline=self->sline;
                                    }
                                    if(_if_conditional509=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional509) {
                                        __dec_obj166=result_331->sname;
                                        result_331->sname=(char*)come_increment_ref_count(((char*)(right_value415=string_clone(self->sname))));
                                        __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value415 = come_decrement_ref_count2(right_value415, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional510=self!=((void*)0)&&self->name!=((void*)0),                                    _if_conditional510) {
                                        __dec_obj167=result_331->name;
                                        result_331->name=(char*)come_increment_ref_count(((char*)(right_value416=string_clone(self->name))));
                                        __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value416 = come_decrement_ref_count2(right_value416, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional511=self!=((void*)0),                                    _if_conditional511) {
                                        result_331->alloc=self->alloc;
                                    }
                                    if(_if_conditional512=self!=((void*)0)&&self->type!=((void*)0),                                    _if_conditional512) {
                                        __dec_obj168=result_331->type;
                                        result_331->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value417=sType_clone(self->type))));
                                        come_call_finalizer3(__dec_obj168,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value417,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional513=self!=((void*)0)&&self->right_value!=((void*)0),                                    _if_conditional513) {
                                        __dec_obj169=result_331->right_value;
                                        result_331->right_value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value418=sNode_clone(self->right_value))));
                                        if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count2(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value418) { right_value418 = come_decrement_ref_count2(right_value418, ((struct sNode*)right_value418)->finalize, ((struct sNode*)right_value418)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional514=self!=((void*)0)&&self->multiple_assign!=((void*)0),                                    _if_conditional514) {
                                        __dec_obj170=result_331->multiple_assign;
                                        result_331->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value419=list$1charphp_clone(self->multiple_assign))));
                                        come_call_finalizer3(__dec_obj170,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value419,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional515=self!=((void*)0)&&self->multiple_declare!=((void*)0),                                    _if_conditional515) {
                                        __dec_obj171=result_331->multiple_declare;
                                        result_331->multiple_declare=(struct list$1tuple4$4sTypephcharphsNodephcharphph*)come_increment_ref_count(((struct list$1tuple4$4sTypephcharphsNodephcharphph*)(right_value420=list$1tuple4$4sTypephcharphsNodephcharphphp_clone(self->multiple_declare))));
                                        come_call_finalizer3(__dec_obj171,list$1tuple4$4sTypephcharphsNodephcharphph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value420,list$1tuple4$4sTypephcharphsNodephcharphphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional516=self!=((void*)0)&&self->array_initializer!=((void*)0),                                    _if_conditional516) {
                                        __dec_obj172=result_331->array_initializer;
                                        result_331->array_initializer=(char*)come_increment_ref_count(((char*)(right_value421=string_clone(self->array_initializer))));
                                        __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value421 = come_decrement_ref_count2(right_value421, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    __result192__ = __result_obj__ = result_331;
                                    come_call_finalizer3(result_331,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result192__;
                                    come_call_finalizer3(result_331,sStoreNode_finalize, 0, 0, 0, 0, (void*)0);
}

