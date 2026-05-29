/**
 *   The MIT License (MIT)
 *   Copyright (C) 2016 ZongXian Shen <andy.zsshen@gmail.com>
 *
 *   Permission is hereby granted, free of charge, to any person obtaining a
 *   copy of this software and associated documentation files (the "Software"),
 *   to deal in the Software without restriction, including without limitation
 *   the rights to use, copy, modify, merge, publish, distribute, sublicense,
 *   and/or sell copies of the Software, and to permit persons to whom the
 *   Software is furnished to do so, subject to the following conditions:
 *
 *   The above copyright notice and this permission notice shall be included in
 *   all copies or substantial portions of the Software.
 *
 *   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 *   THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 *   IN THE SOFTWARE.
 */

#include "minux.h"
#include "elf.h"

#define EXIT_FAILURE 1

#ifndef STT_NOTYPE
#define STT_NOTYPE 0
#endif
#ifndef STT_OBJECT
#define STT_OBJECT 1
#endif
#ifndef STT_FUNC
#define STT_FUNC 2
#endif
#ifndef STB_LOCAL
#define STB_LOCAL 0
#endif
#ifndef STB_GLOBAL
#define STB_GLOBAL 1
#endif
#ifndef STB_WEAK
#define STB_WEAK 2
#endif
#ifndef ELF64_ST_TYPE
#define ELF64_ST_TYPE(i) ((i) & 0xf)
#endif
#ifndef ELF64_ST_BIND
#define ELF64_ST_BIND(i) ((i) >> 4)
#endif
#ifndef ELF64_ST_INFO
#define ELF64_ST_INFO(bind, type) (((bind) << 4) + ((type) & 0xf))
#endif

#define DEBUG_LINKER 1

#define SYMBOL_FLAG_GOT_TP 0x1
#define SYMBOL_FLAG_GOT     0x2
#define SYMBOL_FLAG_SYMTAB  0x4

#define max_(a, b) ((a) > (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))

#if DEBUG_LINKER
#define DBG(fmt, ...) do { fprintf(stderr, "[ld2] " fmt, ##__VA_ARGS__); fflush(stderr); } while (0)
#else
#define DBG(fmt, ...) do { } while (0)
#endif

#define uint64 uint64_t
#define uint32 uint32_t
#define ushort unsigned short
#define uint unsigned int
#define uchar unsigned char

static int DebugCountArgs(char** args) 
{
    if (args == NULL) {
        return 0;
    }

    int count = 0;
    while (args[count] != NULL) {
        count++;
    }
    return count;
}

typedef unsigned (*HashMapHash) (void*);
typedef int (*HashMapCompare) (void*, void*);
typedef void (*HashMapCleanKey) (void*);
typedef void (*HashMapCleanValue) (void*);

typedef struct _Pair 
{
    void* key;
    void* value;
} Pair;

typedef struct _SlotNode 
{
    Pair pair_;
    struct _SlotNode* next_;
} SlotNode;

struct _HashMapData 
{
    int size_;
    int idx_prime_;
    unsigned num_slot_;
    unsigned curr_limit_;
    unsigned iter_slot_;
    SlotNode** arr_slot_;
    SlotNode* iter_node_;
    HashMapHash func_hash_;
    HashMapCompare func_cmp_;
    HashMapCleanKey func_clean_key_;
    HashMapCleanValue func_clean_val_;
};

typedef struct _HashMapData HashMapData;

typedef struct _HashMap 
{
    HashMapData *data;
    bool (*put) (struct _HashMap*, void*, void*);
    void* (*get) (struct _HashMap*, void*);
    bool (*contain) (struct _HashMap*, void*);
    bool (*remove) (struct _HashMap*, void*);
    unsigned (*size) (struct _HashMap*);
    void (*first) (struct _HashMap*);
    Pair* (*next) (struct _HashMap*);
    void (*set_hash) (struct _HashMap*, HashMapHash);
    void (*set_compare) (struct _HashMap*, HashMapCompare);
    void (*set_clean_key) (struct _HashMap*, HashMapCleanKey);
    void (*set_clean_value) (struct _HashMap*, HashMapCleanValue);
} HashMap;

HashMap* HashMapInit();
void HashMapDeinit(HashMap* obj);
bool HashMapPut(HashMap* self, void* key, void* value);
void* HashMapGet(HashMap* self, void* key);
bool HashMapContain(HashMap* self, void* key);
bool HashMapRemove(HashMap* self, void* key);
unsigned HashMapSize(HashMap* self);
void HashMapFirst(HashMap* self);
Pair* HashMapNext(HashMap* self);
void HashMapSetHash(HashMap* self, HashMapHash func);
void HashMapSetCompare(HashMap* self, HashMapCompare func);
void HashMapSetCleanKey(HashMap* self, HashMapCleanKey func);
void HashMapSetCleanValue(HashMap* self, HashMapCleanValue func);
void HashMapClean(HashMap *self);

typedef unsigned (*HashSetHash) (void*);

typedef int (*HashSetCompare) (void*, void*);
typedef void (*HashSetCleanKey) (void*);

typedef struct _HashSetSlotNode 
{
    void* key_;
    struct _HashSetSlotNode* next_;
} HashSetSlotNode;

struct _HashSetData 
{
    int idx_prime_;
    unsigned size_;
    unsigned num_slot_;
    unsigned curr_limit_;
    unsigned iter_slot_;
    HashSetSlotNode** arr_slot_;
    HashSetSlotNode* iter_node_;
    HashSetHash func_hash_;
    HashSetCompare func_cmp_;
    HashSetCleanKey func_clean_key_;
};

typedef struct _HashSetData HashSetData;

typedef struct _HashSet 
{
    HashSetData* data;

    bool (*add) (struct _HashSet*, void*);
    bool (*find) (struct _HashSet*, void*);
    bool (*remove) (struct _HashSet*, void*);
    unsigned (*size) (struct _HashSet*);
    void (*first) (struct _HashSet*);
    void* (*next) (struct _HashSet*);
    void (*set_hash) (struct _HashSet*, HashSetHash);
    void (*set_compare) (struct _HashSet*, HashSetCompare);
    void (*set_clean_key) (struct _HashSet*, HashSetCleanKey);
} HashSet;

HashSet* _HashSetInit(int idx_prime);
unsigned _HashSetHash(void* key);
int _HashSetCompare(void* lhs, void* rhs);
void _HashSetReHash(HashSetData* data);

HashSet* HashSetInit();
void HashSetDeinit(HashSet* obj);
bool HashSetAdd(HashSet* self, void* key);
bool HashSetFind(HashSet* self, void* key);
bool HashSetRemove(HashSet* self, void* key);
unsigned HashSetSize(HashSet* self);
void HashSetFirst(HashSet* self);
void* HashSetNext(HashSet* self);
void HashSetSetHash(HashSet* self, HashSetHash func);
void HashSetSetCompare(HashSet* self, HashSetCompare func);
void HashSetSetCleanKey(HashSet* self, HashSetCleanKey func);
HashSet* HashSetUnion(HashSet* lhs, HashSet* rhs);
HashSet* HashSetIntersect(HashSet* lhs, HashSet* rhs);
HashSet* HashSetDifference(HashSet* lhs, HashSet* rhs);

unsigned HashMurMur32(void* key, size_t size);
unsigned HashJenkins(void* key, size_t size);
unsigned HashDjb2(char* key);

unsigned _HashMapHash(void* key);
int _HashMapCompare(void* lhs, void* rhs);
void _HashMapReHash(HashMapData* data);

typedef struct File 
{
    char* Name;
    char* Contents;
    uint64_t contents_len;   //由于有'\0'，添加这个
    struct File* Parent;     //表示它来自于哪个.a文件 , 如果直接.o就是空
} File;

// Elf32_Ehdr Executable header type. One per ELF file.
typedef struct Ehdr_ 
{
    uint8_t Ident[16];      //表示ELF文件的标识信息
    uint16_t  Type;         //表示 ELF 文件的类型，比如可执行文件、共享库等
    uint16_t  Machine;
    uint32_t  Version;
    uint64_t  Entry ;       //表示程序的入口地址
    uint64_t  PhOff ;       //表示程序头表（Program Header Table）的偏移量
    uint64_t  ShOff ;       //表示节表（Section Header Table）的偏移量
    uint32_t  Flags ;       //表示 ELF 文件的标志信息
    uint16_t  EhSize;       //表示 ELF 文件头部的大小  sizeof(Elf32_Ehdr);
    uint16_t  PhEntSize ;   //表示program header table中每个表项的大小，每一个表项描述一个Segment信息
    uint16_t  PhNum ;       //表示program header table中表项的数量
    uint16_t  ShEntSize;    //Section header table中每个表项的大小sizeof(Elf32_Shdr)
    uint16_t  ShNum ;       //num sections
    uint16_t  ShStrndx ;    //表示节表中字符串表的索引，第多少个表项描述的是字符串表......
}Ehdr;

// Elf32_Shdr Section header
typedef struct 
{
    uint32_t Name;          //section名称，是在字符串表节区的索引
    uint32_t Type;
    uint64_t Flags;         //描述杂项属性
    uint64_t Addr;          //如果该section将出现在进程的内存映像中，则该成员给出该section的第一个字节应该驻留的地址。否则，该成员的值为0
    uint64_t Offset;        //该节在elf文件中偏移量
    uint64_t Size;          //该节的大小
    uint32_t Link;          //holds a section header table index link,表示当前节依赖于对应的节
    uint32_t Info;          //该节的附加信息， 如符号表节中存储的第一个global的信息
    uint64_t AddrAlign;     //该节的对齐方式
    uint64_t EntSize;       //某些节区中包含固定大小的项目，如符号表节中每个符号的大小,没有则是0
} Shdr;

typedef struct 
{
    uint32_t Name;          //存储一个指向字符串表的索引来表示对应符号的名称
    uint8_t Info;
    uint8_t Other;
    uint16_t Shndx;         //每个符号都有属于的节，当前成员存储的就是对应节的索引
    uint64_t Val;           //存储对应符号的取值，具体值依赖于上下文，可能是一个指针地址，立即数等
    uint64_t Size;
} ElfSym;

typedef struct 
{
    uint64_t Offset;
    uint32_t Type;
    uint32_t Sym;
    int64_t Addend;
} Rela;

// [Section ] -> [ArHdr][                ][ArHdr][
typedef struct 
{
    char Name[16];
    char Date[12];
    char Uid[6];
    char Gid[6];
    char Mode[8];
    char Size[10];          //即[ArHdr][这部分的size]
    char Fmag[2];
} ArHdr;

typedef struct 
{
    uint32_t Type;
    uint32_t Flags;
    uint64_t Offset;
    uint64_t VAddr;
    uint64_t PAddr;
    uint64_t FileSize;
    uint64_t MemSize;
    uint64_t Align;
} Phdr;

typedef uint8_t ChunkType;

struct ObjectFile_;
struct MergedSection_ ;
struct OutputEhdr_;
struct OutputShdr_;
struct OutputSection_;
struct OutputPhdr_;
struct GotSection_;
struct OutputShStrtab_;
struct OutputStrtab_;
struct OutputSymtab_;
struct Chunk_;

typedef struct ObjectFile_ ObjectFile;
typedef struct InputSection_ InputSection;
typedef struct InputFile_ InputFile;

typedef uint8_t MachineType;

typedef struct 
{
    char* Output;
    MachineType Emulation;
    char** LibraryPaths;
    int LibraryPathsCount;
    char* Entry; // -e ENTRY
} ContextArgs;

typedef struct SectionFragment_ SectionFragment;
typedef struct MergedSection_ MergedSection;

typedef struct 
{
    ContextArgs Args;

    struct ObjectFile_** Objs;
    int ObjsCount;

    HashMap *SymbolMap;  //char*,Symbol*

    struct MergedSection_ **mergedSections;
    int mergedSectionNum;

    struct Chunk_ **chunk;
    int chunkNum;
    char* buf;

    //链接器自己生成了，保存于此
    struct OutputEhdr_* ehdr;
    struct OutputShdr_* shdr;
    struct OutputPhdr_* phdr;
    struct GotSection_* got;
    struct OutputShStrtab_* shstrtab;
    struct OutputStrtab_* strtab;
    struct OutputSymtab_* symtab;
    struct OutputSection_** outputSections;
    int outputSecNum;

    uint64_t TpAddr;
    uint64_t GpAddr;
    uint16_t ShStrtabIndex;
} Context;

typedef struct Symbol_
{
    ObjectFile *file;
    char* name;
    uint64_t value;
    int32_t symIdx;

    //union
    InputSection * inputSection;
    SectionFragment *sectionFragment;

    int32_t gotIdx;
    int32_t gotTpIdx;
    uint32_t flags;
}Symbol;

typedef struct Chunk_
{
    char* name;
    Shdr shdr;
    ChunkType chunkType;
    int32_t rank;

    struct {
        struct InputSection_** members;
        int memberNum;
        uint32_t idx;
    }outpuSec;

    struct {
        HashMap *map;    //string - sectionFragment
    }mergedSec;

    struct {
        Phdr *phdrs;
        int phdrNum;
    }phdrS;

    struct {
        Symbol ** GotTpSyms;
        int TpSymNum;
        Symbol ** GotSyms;
        int GotSymNum;
    }gotSec;

    struct {
        Shdr *entries;
        size_t count;
    }shdrTable;
}Chunk;

typedef struct OutputEhdr_
{
    Chunk *chunk;
}OutputEhdr;

typedef struct OutputShdr_
{
    Chunk *chunk;
}OutputShdr;

typedef struct OutputSection_
{
    Chunk * chunk;
}OutputSection;

typedef struct OutputPhdr_
{
    Chunk *chunk;
}OutputPhdr;

typedef struct GotSection_
{
    Chunk *chunk;
}GotSection;

typedef struct OutputShStrtab_
{
    Chunk *chunk;
    char* data;
    size_t size;
    size_t capacity;
}OutputShStrtab;

typedef struct OutputStrtab_
{
    Chunk *chunk;
    char* data;
    size_t size;
    size_t capacity;
}OutputStrtab;

typedef struct SymtabEntry_
{
    Symbol* sym;
    Chunk* sectionChunk;
    uint32_t nameOffset;
    uint16_t shndx;
    uint8_t info;
    uint8_t other;
    uint64_t size;
} SymtabEntry;

typedef struct OutputSymtab_
{
    Chunk *chunk;
    OutputStrtab* strtab;
    SymtabEntry* entries;
    size_t count;
    size_t capacity;
    size_t localCount;
}OutputSymtab;

// .got 表中的每个条目对应一个全局变量或函数的地址 , 针对tp_addr的偏移量
typedef struct GotEntry_
{
    int64_t idx;
    uint64_t val;
}GotEntry;

//合并后的section
struct MergedSection_
{
    Chunk *chunk;
};

typedef struct Fragment_ 
{
    char* key;
    SectionFragment* val;
}Fragment;

//将merge-able section分成小的数据块
struct SectionFragment_ 
{
    MergedSection* OutputSection;   //进行一个双向关联吧
    uint32_t Offset;      //在section中的offset
    uint32_t P2Align;
    bool IsAlive;
    int strslen;            //保存这个sectionFragment的长度
} ;

//input section拆成一个(? y)包含多个sectionFragment的merge-able section , 再放入merged section
typedef struct MergeableSection
{
    MergedSection * parent;
    uint8_t p2align;
    char** strs;            //fragments的原始数据, 是数据，不一定是字符串 , 还有const原始数据
    int strNum;
    int* strslen;
    uint32_t* fragOffsets;
    int fragOffsetNum;
    SectionFragment ** fragments;
    int fragmentNum;
}MergeableSection;

struct ObjectFile_
{
    InputFile *inputFile;    //这样表示继承
    Shdr *SymtabSec;
    InputSection ** Sections;
    int64_t isecNum;
    uint32_t* SymtabShndxSec;    //
    MergeableSection **mergeableSections;
    size_t mergeableSectionsNum;
};

struct InputSection_
{
    struct ObjectFile_ *objectFile;     //来自于某个文件
    char* contents;
    uint32_t shndx;    //在section header数组中的下标值，为了找到它的section header信息
    uint32_t shsize;
    bool isAlive;      //看看这个inputsection是否放到最终可执行文件中
    uint8_t P2Align;    //power to align , 等于log2的addrAlign

    //在outputsection中的偏移
    uint32_t  offset;       //这个inputsection在它对应的outputsection中的偏移
    struct OutputSection_* outputSection;   //记录一下这个input section属于哪个output section

    uint32_t RelsecIdx;
    Rela* rels;
    int relNum;
};

// InputFile 包含obj file或so file, 作为一个基类
// 用于解析elf文件后存储信息用
struct InputFile_
{
    File *file;
    //ElfSyms 是一个 Sym 结构体的数组
    Shdr* ElfSections;
    int64_t sectionNum;

    char* ShStrtab;
    int64_t FirstGlobal;

    ElfSym *ElfSyms;
    int64_t ElfSymNum;

    char* SymbolStrtab;
    bool isAlive;

    Symbol* Symbols;   // all symbols

    Symbol** LocalSymbols; // local symbols
    int numLocalSymbols;
    
    int64_t numSymbols;
};

#define ChunkTypeUnknown ((ChunkType)0)
#define ChunkTypeEhdr ((ChunkType)1)
#define ChunkTypeShdr ((ChunkType)2)
#define ChunkTypePhdr ((ChunkType)3)
#define ChunkTypeOutputSection ((ChunkType)4)
#define ChunkTypeMergedSection ((ChunkType)5)
#define ChunkTypeGotSection ((ChunkType)6)
#define ChunkTypeShStrtab ((ChunkType)7)
#define ChunkTypeSymtab ((ChunkType)8)
#define ChunkTypeStrtab ((ChunkType)9)

File** ReadArchiveMembers(File* file,int * fileCount);
ObjectFile *CreateObjectFile(Context *ctx,File* file,bool inLib);
void readFile(Context *ctx,File* file);
void ReadInputFiles(Context* ctx,char** remaining);

Chunk *NewChunk();
Shdr *GetShdr(Chunk* c);
void CopyBuf(Chunk* c,Context* ctx);
char* GetName(Chunk* c);
void Update(Chunk* c,Context* ctx);

//-------------ehdr
OutputEhdr *NewOutputEhdr();
void Ehdr_CopyBuf(Chunk *c,Context* ctx);

//----------------shdr
OutputShdr *NewOutputShdr();
void Shdr_UpdateShdr(Chunk* c,Context* ctx);
void Shdr_CopyBuf(Chunk* c,Context* ctx);

//--------------outputsection
OutputSection *GetOutputSection(Context* ctx,char* name,uint64_t typ,uint64_t flags);
OutputSection *NewOutputSection(char* name,uint32_t typ, uint64_t flags, uint32_t idx);
void OutputSec_CopyBuf(Chunk* c,Context* ctx);

//-------------------shstrtab
OutputShStrtab *NewOutputShStrtab();
void ShStrtab_CopyBuf(Chunk* c,Context* ctx);

//-------------------strtab
typedef struct OutputStrtab_ OutputStrtab;
OutputStrtab *NewOutputStrtab(const char* name);
uint32_t StrtabAppend(OutputStrtab* tab, const char* name);
void Strtab_CopyBuf(Chunk* c, Context* ctx);

//-------------------symtab
typedef struct OutputSymtab_ OutputSymtab;
OutputSymtab *NewOutputSymtab(OutputStrtab* strtab);
void BuildOutputSymtab(Context* ctx);
void Symtab_CopyBuf(Chunk* c, Context* ctx);

static bool ShouldEmitSectionHeader(Context* ctx, Chunk* chunk);

//-------------------phdr
OutputPhdr *NewOutputPhdr();
void Phdr_CopyBuf(Chunk* c,Context* ctx);
void Phdr_UpdateShdr(Chunk* c,Context* ctx);

//-------------------got section
GotSection *NewGotSection();
void AddGotTpSymbol(Chunk* chunk, Symbol* sym);
void AddGotSymbol(Chunk* chunk, Symbol* sym);
void GotSec_CopyBuf(Chunk* c,Context* ctx);
GotEntry *GetEntries(Chunk *chunk,Context* ctx,int* num);
uint64_t GetGotAddr(Context* ctx,Symbol* s);
void FinalizeGlobalPointer(Context* ctx);
void AssignOffsets(MergedSection* m);
void MergedSec_CopyBuf(Chunk* c,Context* ctx);

File* NewFile(const char* name);
File* OpenLibrary(const char* filepath);
File* FindLibrary(Context* ctx, const char* name);

Context* NewContext();
void appendLibraryPath(Context* ctx, char* arg);

//SectionFragment
SectionFragment* NewSectionFragment(MergedSection* m);
uint64_t SectionFragment_GetAddr(SectionFragment* s);

//mergedSection
MergedSection *NewMergedSection(char* name , uint64_t flags , uint32_t typ);
MergedSection *GetMergedSectionInstance(Context* ctx, char* name,uint32_t typ,uint64_t flags);
SectionFragment *Insert(MergedSection* m,char* key,uint32_t p2align,int strslen);

//mergeableSection
MergeableSection *NewMergeableSection();

//根据偏移，找到它属于哪个sectionFragment
SectionFragment* GetFragment(const MergeableSection* m, uint32_t offset, uint32_t* fragOffset);

#define MachineTypeNone    ((MachineType)0)
#define MachineTypeRISCV64 ((MachineType)1)

const char* MachineType_String(MachineType m);
MachineType GetMachineTypeFromContents(const char* contents);

char* GetOutputName(char* name, uint64_t flags);

// Format of an ELF executable file

#define ELF_MAGIC 0x464C457FU  // "\x7FELF" in little endian

// Values for Proghdr type
#define ELF_PROG_LOAD           1

// Flag bits for Proghdr flags
#define ELF_PROG_FLAG_EXEC      1
#define ELF_PROG_FLAG_WRITE     2
#define ELF_PROG_FLAG_READ      4

void MarkLiveObjects(Context* ctx);
void ResolveSymbols_pass(Context* ctx);
void RegisterSectionPieces(Context* ctx);
void CreateSyntheticSections(Context* ctx);
uint64_t SetOutputSectionOffsets(Context* ctx);
void BinSections(Context* ctx);
void CollectOutputSections(Context* ctx);
void ComputeSectionSizes(Context* ctx);
void SortOutputSections(Context* ctx);
bool isTbss(Chunk* chunk);
void ComputeMergedSectionSizes(Context* ctx);
void ScanRelocations(Context* ctx);

ObjectFile *NewObjectFile(File* file,bool isAlive);
void Parse(Context *ctx,ObjectFile* o);
void FillUpSymtabShndxSec(ObjectFile* o,Shdr* s);
void InitializeSections(ObjectFile* o,Context* ctx);
void InitializeSymbols(Context *ctx,ObjectFile* o);
void InitializeMergeableSections(ObjectFile * o,Context* ctx);
MergeableSection *splitSection(Context* ctx,InputSection* isec);
int64_t GetShndx(ObjectFile* o, ElfSym* esym, int idx);
void ResolveSymbols(ObjectFile* o);
//typedef void (*FeederFunc)(ObjectFile*);
void markLiveObjs(ObjectFile* o,ObjectFile*** roots,int *rootSize);
void ClearSymbols(ObjectFile* o);
void registerSectionPieces(ObjectFile* o);
void SkipEhframeSections(ObjectFile* o);

//-----------------------
void AddObjectFile(ObjectFile*** Objs, int* ObjsCount, ObjectFile* newObj);
//----------------inputsection
InputSection *NewInputSection(Context *ctx,char* name,ObjectFile* file,uint32_t shndx);
Shdr *shdr_(struct InputSection_* i);
char* Name(struct InputSection_* inputSection);
void WriteTo(struct InputSection_ *i,char* buf,Context* ctx);
Rela *GetRels(InputSection* i);
uint64_t InputSec_GetAddr(InputSection* i);
void ScanRelocations_(Context* ctx,ObjectFile* o);
void ApplyRelocAlloc(InputSection* i,Context* ctx,char* buf);
void writeItype(void* loc, uint32_t val);
void writeStype(void* loc, uint32_t val);
void writeBtype(void* loc, uint32_t val);
void writeUtype(void* loc, uint32_t val);
void writeJtype(void* loc, uint32_t val);
void setRs1(void* loc,uint32_t rs1);

Symbol *NewSymbol(char* name);
Symbol *GetSymbolByName(Context* ctx,char* name);
ElfSym *GetElfSymbol(Symbol* s);
void clear(Symbol* s);
uint64_t Symbol_GetAddr(Symbol* s);
uint64_t GetGotTpAddr(Context* ctx,Symbol* s);

InputFile* NewInputFile(File* file);
char* GetBytesFromIdx(InputFile* inputFile, int64_t idx);
char* GetBytesFromShdr(InputFile* inputFile, Shdr* shdr);
Shdr* FindSection(InputFile* f, uint32_t ty);
void FillUpElfSyms(InputFile* inputFile,Shdr* s);
Ehdr GetEhdr(InputFile* f);

void fatal(const char* format, ...);
char* ReadFile(const char* filename,uint64_t *len);
void Read(void* out, const void* data, size_t size);
char** appendToRemaining(char** remaining, const char* arg,bool l);
char* removePrefix(const char* s, const char* prefix);
bool hasPrefix(const char* s, const char* prefix);
int endsWith(const char *str, const char *suffix);
static unsigned hash_string_key(void* key);
static int compare_string_key(void* lhs, void* rhs);
uint64_t AlignTo(uint64_t val, uint64_t align);
void Write(void* data, size_t dataSize, void* element);

uint32_t Bit_32(uint32_t val, int pos);
uint32_t Bits_32(uint32_t val, uint32_t hi, uint32_t lo);
uint64_t SignExtend(uint64_t val,int size);

typedef uint8_t FileType;

#define FileTypeUnknown ((FileType)0)
#define FileTypeEmpty   ((FileType)1)
#define FileTypeObject  ((FileType)2)
#define FileTypeArchive ((FileType)3)

FileType GetFileType(const char* contents);

#define ELF_MAGIC 0x464C457FU  // "\x7FELF" in little endian


bool CheckMagic(const char* contents);
void WriteMagic(uint8_t * contents);
char* ElfGetName(char* strTab, uint32_t offset);
int GetSize(const ArHdr* a);
bool IsAbs(const ElfSym* s);
bool IsUndef(const ElfSym* s);
bool IsCommon(const ElfSym* s);
bool HasPrefix(const ArHdr* a, const char* s);
bool IsStrtab(const ArHdr* a);
bool IsSymtab(const ArHdr* a);
char* ReadName(const ArHdr* a, char* strTab);

static const char* FileTypeToString(FileType type) 
{
    switch (type) {
        case FileTypeEmpty:
            return "empty";
        case FileTypeObject:
            return "object";
        case FileTypeArchive:
            return "archive";
        case FileTypeUnknown:
        default:
            return "unknown";
    }
}

ObjectFile** RemoveIf(ObjectFile** elems, int* count) 
{
    int num = *count;
    size_t i = 0;
    for (size_t j = 0; j < num; j++) {
        if (!elems[j]->inputFile->isAlive) {
            (*count)--;
            continue;
        }
        elems[i] = elems[j];
        i++;
    }

    return elems;
}

void ResolveSymbols_pass(Context* ctx)
{
    DBG("ResolveSymbols_pass: start (objs=%d)\n", ctx->ObjsCount);
    for(int i=0;i<ctx->ObjsCount;i++){
        ObjectFile *objectFile = ctx->Objs[i];
        DBG("ResolveSymbols_pass: resolving %s (alive=%d)\n",
            objectFile->inputFile->file->Name,
            objectFile->inputFile->isAlive);
        ResolveSymbols(objectFile);
    }

    DBG("ResolveSymbols_pass: MarkLiveObjects start\n");
    MarkLiveObjects(ctx);
    DBG("ResolveSymbols_pass: MarkLiveObjects done\n");

    for(int i=0;i<ctx->ObjsCount;i++){
        ObjectFile *objectFile = ctx->Objs[i];
        if(!objectFile->inputFile->isAlive) {
            DBG("ResolveSymbols_pass: clearing symbols for %s\n",
                objectFile->inputFile->file->Name);
            ClearSymbols(objectFile);
        }
    }

    ctx->Objs = RemoveIf(ctx->Objs,&ctx->ObjsCount);
    DBG("ResolveSymbols_pass: done (objs=%d)\n", ctx->ObjsCount);
}

void MarkLiveObjects(Context* ctx) 
{
    ObjectFile **roots = NULL;
    int rootSize = 0;
    for (int i = 0; i < ctx->ObjsCount; i++) {
        if (ctx->Objs[i]->inputFile->isAlive) {
            roots = realloc(roots, (rootSize + 1) * sizeof(ObjectFile*));
            roots[rootSize] = ctx->Objs[i];
            rootSize++;
        }
    }

    int num = 0;
    int stuck_num = -1;
    int stuck_count = 0;
    DBG("MarkLiveObjects: rootSize=%d\n", rootSize);
    while (num < rootSize) {
        ObjectFile *file = roots[num];
        DBG("MarkLiveObjects: visit root[%d/%d] %s alive=%d\n",
            num, rootSize, file->inputFile->file->Name,
            file->inputFile->isAlive);
        if (!file->inputFile->isAlive) {
            if (stuck_num == num) {
                stuck_count++;
            } else {
                stuck_num = num;
                stuck_count = 1;
            }
            if (stuck_count == 1 || stuck_count % 1000 == 0) {
                DBG("MarkLiveObjects: root[%d] %s unexpectedly not alive (count=%d)\n",
                    num, file->inputFile->file->Name, stuck_count);
            }
            if (stuck_count > 100000) {
                fatal("MarkLiveObjects stuck at root %d (%s)", num, file->inputFile->file->Name);
            }
            continue;
        }

        stuck_num = -1;
        stuck_count = 0;

        markLiveObjs(file, &roots, &rootSize);
        DBG("MarkLiveObjects: after mark, rootSize=%d\n", rootSize);
        num++;
    }
}

void RegisterSectionPieces(Context* ctx)
{
    for (int i = 0; i < ctx->ObjsCount; i++) {
        ObjectFile *file = ctx->Objs[i];
        registerSectionPieces(file);
    }
}

uint64_t SetOutputSectionOffsets(Context* ctx)
{
    uint64_t fileoff = 0;
    int iter = 0;

    while (1) {
        uint64_t oldPhdrSize = ctx->phdr->chunk->shdr.Size;

        uint64_t addr = 0x1000;
        for (int idx = 0; idx < ctx->chunkNum; idx++) {
            Chunk *chunk = ctx->chunk[idx];
            if ((GetShdr(chunk)->Flags & SHF_ALLOC) == 0)
                continue;

            addr = AlignTo(addr, GetShdr(chunk)->AddrAlign);
            GetShdr(chunk)->Addr = addr;
            if (chunk->name && strcmp(chunk->name, ".got") == 0) {
                DBG("SetOutputSectionOffsets: .got size=%lu addr=0x%lx\n",
                    (unsigned long)GetShdr(chunk)->Size,
                    (unsigned long)addr);
            }

            if (!isTbss(chunk)) {
                addr += GetShdr(chunk)->Size;
            }
        }

        size_t i = 0;
        Chunk *first = ctx->chunk[0];

        while (1) {
            Shdr* shdr = GetShdr(ctx->chunk[i]);
            // 偏移地址是当前虚拟地址减去起始虚拟地址
            shdr->Offset = shdr->Addr - GetShdr(first)->Addr;
            i++;

            if (i >= ctx->chunkNum ||
                ((GetShdr(ctx->chunk[i])->Flags & SHF_ALLOC) == 0)) {
                break;
            }
        }

        Shdr *lastShdr = GetShdr(ctx->chunk[i-1]);
        fileoff = lastShdr->Offset + lastShdr->Size;

        for (; i < ctx->chunkNum; i++) {
            fileoff = AlignTo(fileoff, ctx->chunk[i]->shdr.AddrAlign);
            GetShdr(ctx->chunk[i])->Offset = fileoff;
            fileoff += ctx->chunk[i]->shdr.Size;
        }

        // 算完值后重新更新 phdr；如果大小变化则重新迭代
        Phdr_UpdateShdr(ctx->phdr->chunk, ctx);
        Shdr_UpdateShdr(ctx->shdr->chunk, ctx);

        if (ctx->phdr->chunk->shdr.Size == oldPhdrSize) {
            return fileoff;
        }

        if (++iter > 4) {
            fatal("SetOutputSectionOffsets: phdr size failed to converge");
        }
    }
}

// 创建自己合成的section
void CreateSyntheticSections(Context* ctx)
{
    struct OutputEhdr_* outputEhdr = NewOutputEhdr();
    ctx->ehdr = outputEhdr;
    ctx->chunk = realloc(ctx->chunk,sizeof (Chunk*) * (ctx->chunkNum+1));
    ctx->chunk[ctx->chunkNum] = outputEhdr->chunk;
    ctx->chunkNum++;

    struct OutputPhdr_* outputPhdr = NewOutputPhdr();
    ctx->phdr = outputPhdr;
    ctx->chunk = realloc(ctx->chunk,sizeof (Chunk*) * (ctx->chunkNum+1));
    ctx->chunk[ctx->chunkNum] = outputPhdr->chunk;
    ctx->chunkNum++;

    struct OutputShdr_* outputShdr = NewOutputShdr();
    ctx->shdr = outputShdr;
    ctx->chunk = realloc(ctx->chunk,sizeof (Chunk*) * (ctx->chunkNum+1));
    ctx->chunk[ctx->chunkNum] = outputShdr->chunk;
    ctx->chunkNum++;

    struct OutputShStrtab_* shstrtab = NewOutputShStrtab();
    ctx->shstrtab = shstrtab;
    ctx->chunk = realloc(ctx->chunk,sizeof (Chunk*) * (ctx->chunkNum+1));
    ctx->chunk[ctx->chunkNum] = shstrtab->chunk;
    ctx->chunkNum++;

    struct OutputStrtab_* strtab = NewOutputStrtab(".strtab");
    ctx->strtab = strtab;
    ctx->chunk = realloc(ctx->chunk,sizeof (Chunk*) * (ctx->chunkNum+1));
    ctx->chunk[ctx->chunkNum] = strtab->chunk;
    ctx->chunkNum++;

    struct OutputSymtab_* symtab = NewOutputSymtab(strtab);
    ctx->symtab = symtab;
    ctx->chunk = realloc(ctx->chunk,sizeof (Chunk*) * (ctx->chunkNum+1));
    ctx->chunk[ctx->chunkNum] = symtab->chunk;
    ctx->chunkNum++;

    struct GotSection_ *gotSec = NewGotSection();
    ctx->got = gotSec;
    ctx->chunk = realloc(ctx->chunk,sizeof (Chunk*) * (ctx->chunkNum+1));
    ctx->chunk[ctx->chunkNum] = gotSec->chunk;
    ctx->chunkNum++;
}

// 填充output section里面的由input section组成的members数组
void BinSections(Context* ctx)
{
    InputSection ***group = (InputSection***) malloc(sizeof (InputSection**) * ctx->outputSecNum);
    // 初始化 group 数组的每个元素为 NULL
    for (size_t i = 0; i < ctx->outputSecNum; i++) {
        group[i] = NULL;
    }

    for(int i=0;i<ctx->ObjsCount;i++){
        ObjectFile *file = ctx->Objs[i];
        for(int j=0; j< file->isecNum;j++){
            InputSection *isec = file->Sections[j];
            if(isec == NULL || !isec->isAlive){
                continue;
            }

            //idx为这个input section对应的output section的idx
            int64_t idx = isec->outputSection->chunk->outpuSec.idx;
            size_t prevSize = 0;
            if (group[idx] != NULL) {
                while (group[idx][prevSize] != NULL) {
                    prevSize++;
                }
            }

            // 分配新的 group[idx] 大小
            group[idx] = (InputSection**)realloc(group[idx], (prevSize + 2) * sizeof(InputSection*));
            // 将 isec 添加到 group[idx] 的末尾
            group[idx][prevSize] = isec;
            group[idx][prevSize + 1] = NULL;
        }
    }

    for(int idx=0;idx< ctx->outputSecNum;idx++){
        OutputSection *osec = ctx->outputSections[idx];
        osec->chunk->outpuSec.members = group[idx];
        int len = 0;
        if(group[idx] != NULL){
            while (group[idx][len] != NULL) {
                len++;
            }
            osec->chunk->outpuSec.memberNum = len;
        }
    }
}

void CollectOutputSections(Context* ctx)
{
    for(int i =0; i< ctx->outputSecNum;i++){
        OutputSection * osec = ctx->outputSections[i];
        if(osec->chunk->outpuSec.memberNum > 0){
           // printf("n1 %s , size %lu\n",osec->chunk->name,osec->chunk->shdr.Size);
            ctx->chunk = realloc(ctx->chunk,sizeof (Chunk*) * (ctx->chunkNum + 1));
            ctx->chunk[ctx->chunkNum] = osec->chunk;
            ctx->chunkNum++;
        }
    }

    for(int i=0; i<ctx->mergedSectionNum;i++){
        MergedSection *m = ctx->mergedSections[i];
        if(m->chunk->shdr.Size > 0){
           // printf("n2 %s , size %lu\n",m->chunk->name,m->chunk->shdr.Size);
            ctx->chunk = realloc(ctx->chunk,sizeof (Chunk*) * (ctx->chunkNum + 1));
            ctx->chunk[ctx->chunkNum] = m->chunk;
            ctx->chunkNum++;
        }
    }
}

//计算每个output section的input section们的offset
void ComputeSectionSizes(Context* ctx)
{
    for(int i =0; i< ctx->outputSecNum;i++) {
        OutputSection *osec = ctx->outputSections[i];
        uint64_t offset = 0;
        int64_t p2align = 0;

        for(int j=0; j<osec->chunk->outpuSec.memberNum; j++){
            InputSection *isec = osec->chunk->outpuSec.members[j];
            uint32_t memberP2Align = isec->P2Align;
            Shdr *ishdr = shdr_(isec);
            if ((ishdr->Flags & SHF_EXECINSTR) != 0 && memberP2Align < 2) {
                // RISC-V instructions are 4-byte aligned; upgrade poorly-aligned code sections
                memberP2Align = 2;
                isec->P2Align = memberP2Align;
            }
            offset = AlignTo(offset, 1ULL << memberP2Align);
            isec->offset = offset;
          //  printf("__offset %lu\n",offset);
            offset += isec->shsize;
            p2align = max(p2align,memberP2Align);
        }

        uint64_t align = p2align > 0 ? (uint64_t)1 << p2align : 1;
        osec->chunk->shdr.Size = offset;
        osec->chunk->shdr.AddrAlign = align;
    }
}

void getRank(Chunk *chunk,Context* ctx)
{
    uint32_t typ = GetShdr(chunk)->Type;
    uint32_t flags = GetShdr(chunk)->Flags;
    if((flags & SHF_ALLOC) == 0)
        chunk->rank = INT32_MAX - 1;
    else if(chunk == ctx->shdr->chunk)
        chunk->rank = INT32_MAX;
    else if(chunk == ctx->ehdr->chunk)
        chunk->rank = 0;
    else if(chunk == ctx->phdr->chunk)
        chunk->rank = 1;
    else if(typ == SHT_NOTE)
        chunk->rank = 2;
    else {
        int writeable = ((flags & SHF_WRITE) ? 1:0) != 0;
        int notExec = (((flags & SHF_EXECINSTR) ? 1:0) == 0);
        int notTls = (((flags & SHF_TLS) ? 1:0) == 0);
        int isBss = typ == SHT_NOBITS ? 1 :0;

        chunk->rank = writeable << 7 | notExec << 6 | notTls << 5 | isBss << 4;
    }
}

void SortOutputSections(Context* ctx)
{
    for(int i=0;i<ctx->chunkNum;i++){
        getRank(ctx->chunk[i],ctx);
    }

    //qsort(ctx->chunk, ctx->chunkNum, sizeof(Chunk), compareChunks);
    for (size_t i = 0; i < ctx->chunkNum - 1; i++) {
        for (size_t j = 0; j < ctx->chunkNum - i - 1; j++) {
            // 比较相邻的两个元素的 rank 值
            if (ctx->chunk[j]->rank > ctx->chunk[j + 1]->rank) {
                // 交换两个元素的位置
                Chunk *temp = ctx->chunk[j];
                ctx->chunk[j] = ctx->chunk[j + 1];
                ctx->chunk[j + 1] = temp;
            }
        }
    }
}

bool isTbss(Chunk* chunk)
{
    Shdr *shdr = GetShdr(chunk);
    return (shdr->Type == SHT_NOBITS) && ((shdr->Flags & SHF_TLS) !=0);
}

void ComputeMergedSectionSizes(Context* ctx)
{
    for(int i=0;i<ctx->mergedSectionNum;i++){
        MergedSection *m = ctx->mergedSections[i];
        AssignOffsets(m);
    }
}

void ScanRelocations(Context* ctx)
{
    DBG("ScanRelocations: start objs=%d\n", ctx->ObjsCount);
    for(int i=0; i< ctx->ObjsCount;i++){
        DBG("ScanRelocations: object[%d]=%s isecNum=%ld\n",
            i,
            ctx->Objs[i]->inputFile->file->Name,
            ctx->Objs[i]->isecNum);
        ScanRelocations_(ctx, ctx->Objs[i]);
    }
    DBG("ScanRelocations: finished section scan\n");

    Symbol **syms = NULL;
    int numSyms = 0;
   // int count =0;
    for(int i=0; i< ctx->ObjsCount;i++){
        ObjectFile *file = ctx->Objs[i];
        for(int j=0;j<file->inputFile->numSymbols;j++){
            Symbol *sym = &file->inputFile->Symbols[j];
            if (sym == NULL || sym->flags == 0)
                continue;
            syms = (Symbol**) realloc(syms,sizeof (Symbol*) * (numSyms+1));
            syms[numSyms] = sym;
            numSyms++;
        }
    }
    DBG("ScanRelocations: flagged syms=%d\n", numSyms);

    for(int i=0; i<numSyms;i++){
        Symbol *sym = syms[i];
        if((sym->flags & SYMBOL_FLAG_GOT) != 0){
            if (!ctx->got)
                fatal("GOT section missing");
            AddGotSymbol(ctx->got->chunk,sym);
            DBG("ScanRelocations: add GOT for %s\n", sym->name ? sym->name : "<noname>");
        }
        if((sym->flags & SYMBOL_FLAG_GOT_TP) != 0){
            if (!ctx->got)
                fatal("GOT section missing");
            AddGotTpSymbol(ctx->got->chunk,sym);
            DBG("ScanRelocations: add TLS GOT for %s\n", sym->name ? sym->name : "<noname>");
        }
        sym->flags = 0;
    }
    free(syms);
    DBG("ScanRelocations: done\n");
}

InputFile* NewInputFile(File* file)
{
    InputFile *inputFile = (InputFile*) malloc(sizeof (InputFile));
    inputFile->file = file;
    if(!CheckMagic(file->Contents))
        fatal("not an elf file\n");

    Ehdr *ehdr = (Ehdr*) malloc(sizeof (Ehdr));
    Read(ehdr,file->Contents,sizeof (Ehdr));
    char *contents = file->Contents + ehdr->ShOff;
    Shdr *shdr = (Shdr*) malloc(sizeof (Shdr));
    Read(shdr,contents,sizeof (Shdr));

    int numSections = ehdr->ShNum;
    if(numSections == 0)
        numSections = (int)shdr->Size;

    inputFile->ElfSections = (Shdr*)malloc(numSections * sizeof(Shdr));
    inputFile->ElfSections[0] = *shdr;

    inputFile->sectionNum = numSections;
    for (; numSections > 1; --numSections) {
        contents += sizeof(Shdr);
        Read(&inputFile->ElfSections[inputFile->sectionNum - numSections + 1], contents,sizeof (Shdr));
    }

    int64_t shstrndx = ehdr->ShStrndx;
    if (ehdr->ShStrndx == SHN_XINDEX) {
        shstrndx = shdr->Link;
    }

    //注意不能用strcpy，因为全是'\0'
    char* c = GetBytesFromIdx(inputFile,shstrndx);
    uint64_t len = inputFile->ElfSections[shstrndx].Size;
    inputFile->ShStrtab = malloc(len);
    memcpy(inputFile->ShStrtab,c, len);

    //其他的初始化
    inputFile->FirstGlobal = 0;
    inputFile->numLocalSymbols = 0;
    inputFile->LocalSymbols = NULL;
    inputFile->numSymbols = 0;
    inputFile->Symbols = NULL;
    inputFile->ElfSymNum = 0;
    inputFile->ElfSyms = NULL;
    inputFile->SymbolStrtab = NULL;
    return inputFile;
}

// GetBytesFromShdr 返回一个section的数据内容
char* GetBytesFromShdr(InputFile* inputFile, Shdr* shdr)
{
    uint64_t length = shdr->Size;
    char* contents = malloc(length+1);
    memcpy(contents, inputFile->file->Contents + shdr->Offset, length);
    contents[length] = '\0';

    return contents;
}

// GetBytesFromIdx 根据一个section的index拿到对应section的数据内容
char* GetBytesFromIdx(InputFile* inputFile, int64_t idx)
{
    return GetBytesFromShdr(inputFile,&inputFile->ElfSections[idx]);
}

// FindSection 返回第一个Section type对应的section
Shdr* FindSection(InputFile* f, uint32_t ty) 
{
    for (int i = 0; i < f->sectionNum; i++) {
        Shdr* shdr = &(f->ElfSections[i]);
        if (shdr->Type == ty) {
            return shdr;
        }
    }
    return NULL;
}

// FillUpElfSyms 填充符号表表项到inputfile的ElfSyms数组
void FillUpElfSyms(InputFile* inputFile,Shdr* s)
{
    char *bs = GetBytesFromShdr(inputFile,s);
    int numbs = s->Size / sizeof (ElfSym);
    inputFile->ElfSyms = (ElfSym*) malloc(numbs* sizeof(ElfSym));
    inputFile->ElfSymNum = numbs;

    while (numbs > 0){
        Read(&inputFile->ElfSyms[inputFile->ElfSymNum - numbs],bs,sizeof(ElfSym));
        bs += sizeof(ElfSym);
        numbs--;
    }
}

Ehdr GetEhdr(InputFile* f)
{
    Ehdr ehdr;
    Read(&ehdr,f->file->Contents,sizeof (Ehdr));
    return ehdr;
}

SectionFragment* NewSectionFragment(MergedSection* m) 
{
    SectionFragment* fragment = (SectionFragment*)malloc(sizeof(SectionFragment));
    if (fragment != NULL) {
        fragment->OutputSection = m;
        fragment->Offset = UINT32_MAX;
        fragment->P2Align = 0;
        //TODO is alive的初始化
        fragment->strslen = 0;
    }
    return fragment;
}

uint64_t SectionFragment_GetAddr(SectionFragment* s) 
{
    //printf("offset %ld\n",s->OutputSection->chunk->shdr.Addr + s->Offset);
    return s->OutputSection->chunk->shdr.Addr + s->Offset;
}

MergeableSection *NewMergeableSection()
{
    MergeableSection *mergeableSection = (MergeableSection*) malloc(sizeof (MergeableSection));
    mergeableSection->fragOffsets = NULL;
    mergeableSection->fragments = NULL;
    mergeableSection->fragmentNum = 0;
    mergeableSection->p2align = 0;
    mergeableSection->parent = NULL;
    mergeableSection->strs = NULL;
    mergeableSection->strNum = 0;
    mergeableSection->strslen = NULL;
    mergeableSection->fragOffsetNum = 0;
    return mergeableSection;
}

// GetFragment 获取到某个offset下的fragment
// 注意要返回offset距离所在fragment起始处的距离
SectionFragment* GetFragment(const MergeableSection* m, uint32_t offset, uint32_t* fragOffset) 
{
    size_t pos = 0;
    for (size_t i = 0; i < m->fragmentNum; i++) {
        if (offset < m->fragOffsets[i]) {
            break;
        }
        pos++;
    }

    if (pos == 0) {
        return NULL;
    }

    size_t idx = pos - 1;
    *fragOffset = offset - m->fragOffsets[idx];
    return m->fragments[idx];
}

OutputSection *NewOutputSection(char* name,uint32_t typ, uint64_t flags, uint32_t idx)
{
    OutputSection *outputSection = (OutputSection*) malloc(sizeof (OutputSection));
    outputSection->chunk = NewChunk();
    outputSection->chunk->name = name;
    outputSection->chunk->shdr.Type = typ;
    outputSection->chunk->shdr.Flags = flags;

    outputSection->chunk->outpuSec.idx = idx;
    outputSection->chunk->chunkType = ChunkTypeOutputSection;
    return outputSection;
}

void OutputSec_CopyBuf(Chunk* c,Context* ctx)
{
    if(c->shdr.Type == SHT_NOBITS)
        return;

    char* base = ctx->buf + c->shdr.Offset;
    for(int i=0; i< c->outpuSec.memberNum;i++){
        struct InputSection_* isec = c->outpuSec.members[i];
        //printf("isec offset %d\n",isec->offset);
        WriteTo(isec,base+isec->offset,ctx);
    }
}

OutputSection *findOutputSection(Context* ctx,const char* name,uint64_t typ,uint64_t flags)
{
    for(int i = 0; i<ctx->outputSecNum;i++){
        OutputSection *osec = ctx->outputSections[i];
        if(strcmp(osec->chunk->name,name)==0 && osec->chunk->shdr.Type == typ && osec->chunk->shdr.Flags == flags)
            return osec;
    }
    return NULL;
}

// GetOutputSection 单例模式返回一个input section对应的output section
OutputSection *GetOutputSection(Context* ctx,char* name,uint64_t typ,uint64_t flags)
{
    char* outputName = GetOutputName(name,flags);
    flags = flags & ~((uint64_t)SHF_GROUP) & ~((uint64_t)2048 /*SHF_COMPRESSED*/) & ~((uint64_t)SHF_LINK_ORDER);

    OutputSection *osec = findOutputSection(ctx,outputName,typ,flags);
    if(osec!=NULL)
        return osec;

    osec = NewOutputSection(outputName,typ,flags,ctx->outputSecNum);
    ctx->outputSections = (OutputSection**) realloc(ctx->outputSections,sizeof (OutputSection*) * (ctx->outputSecNum+1));
    ctx->outputSections[ctx->outputSecNum] = osec;
    ctx->outputSecNum++;
    return osec;
}

OutputEhdr *NewOutputEhdr()
{
    OutputEhdr *outputEhdr = (OutputEhdr*) malloc(sizeof (OutputEhdr));
    outputEhdr->chunk = NewChunk();
    outputEhdr->chunk->shdr.Flags = SHF_ALLOC;
    outputEhdr->chunk->shdr.Size = sizeof (Ehdr);
    outputEhdr->chunk->shdr.AddrAlign = 8;
    outputEhdr->chunk->chunkType = ChunkTypeEhdr;
    return outputEhdr;
}

static bool symbolHasExecutableAddr(Symbol* sym, ElfSym* esym, bool allowLocal)
{
    if (sym == NULL || esym == NULL) {
        return false;
    }
    if (!allowLocal) {
        uint8_t bind = ELF64_ST_BIND(esym->Info);
        if (bind == STB_LOCAL) {
            return false;
        }
    }
    if (sym->inputSection == NULL) {
        return false;
    }

    Shdr *shdr = shdr_(sym->inputSection);
    if ((shdr->Flags & SHF_EXECINSTR) == 0) {
        return false;
    }

    uint8_t type = ELF64_ST_TYPE(esym->Info);
    if (!(type == STT_FUNC || type == STT_NOTYPE)) {
        return false;
    }

    return true;
}

static uint64_t adjustForLiteralPrefix(Symbol* sym, uint64_t baseAddr)
{
    if (sym == NULL || sym->inputSection == NULL) {
        return baseAddr;
    }

    InputSection *isec = sym->inputSection;
    if (sym->value >= isec->shsize) {
        return baseAddr;
    }

    const char *bytes = isec->contents;
    uint32_t size = isec->shsize;
    uint32_t cursor = sym->value;
    uint64_t sectionBase = InputSec_GetAddr(isec);

    for (; cursor + 4 <= size; cursor += 2) {
        uint32_t word;
        memcpy(&word, bytes + cursor, sizeof(uint32_t));
        if (word != 0 && (word & 0x3u) == 0x3u) {
            return sectionBase + cursor;
        }
    }

    return baseAddr;
}

static Symbol* findDefinedSymbolByName(Context* ctx, const char* name)
{
    if (name == NULL) {
        return NULL;
    }
    if (!HashMapContain(ctx->SymbolMap, (void*)name)) {
        return NULL;
    }

    Symbol *sym = HashMapGet(ctx->SymbolMap, (void*)name);
    if (sym == NULL || sym->file == NULL || sym->inputSection == NULL) {
        return NULL;
    }

    ElfSym *esym = &sym->file->inputFile->ElfSyms[sym->symIdx];
    if (IsUndef(esym) || IsCommon(esym)) {
        return NULL;
    }
    if (!symbolHasExecutableAddr(sym, esym, true)) {
        return NULL;
    }
    return sym;
}

static Symbol* findFirstExecutableSymbol(Context* ctx)
{
    Symbol* best = NULL;
    uint64_t bestAddr = UINT64_MAX;

    for (int i = 0; i < ctx->ObjsCount; i++) {
        ObjectFile *obj = ctx->Objs[i];
        InputFile *in = obj->inputFile;
        if (in == NULL || in->ElfSyms == NULL) {
            continue;
        }

        for (int j = 0; j < in->ElfSymNum; j++) {
            ElfSym *esym = &in->ElfSyms[j];
            if (IsUndef(esym) || IsCommon(esym)) {
                continue;
            }

            Symbol *sym = &in->Symbols[j];
            if (sym == NULL) {
                continue;
            }
            if (!symbolHasExecutableAddr(sym, esym, false)) {
                continue;
            }

            uint64_t addr = adjustForLiteralPrefix(sym, Symbol_GetAddr(sym));
            if (addr == 0) {
                continue;
            }
            if (addr < bestAddr) {
                bestAddr = addr;
                best = sym;
            }
        }
    }

    return best;
}

// 找到第一条执行代码地址
uint64_t getEntryAddr(Context* ctx)
{
    const char* entry_candidates[] = {"_start", "__start", "start", "main", NULL};

    // Explicit -e ENTRY overrides search order
    if (ctx->Args.Entry) {
        Symbol* sym = GetSymbolByName(ctx, ctx->Args.Entry);
        if (sym == NULL) {
            fatal("entry symbol not found: %s\n", ctx->Args.Entry);
        }
        uint64_t addr = adjustForLiteralPrefix(sym, Symbol_GetAddr(sym));
        if (addr == 0)
            fatal("entry symbol has no address: %s\n", ctx->Args.Entry);
        return addr;
    }

    for (const char** cand = entry_candidates; *cand != NULL; ++cand) {
        Symbol* sym = GetSymbolByName(ctx, *cand);
        DBG("sym %s is %p %x\n", *cand, sym, sym->value);
        if (sym == NULL) {
            DBG("getEntryAddr: candidate %s not found or unsuitable\n", *cand);
            continue;
        }
        uint64_t addr = adjustForLiteralPrefix(sym, Symbol_GetAddr(sym));
        DBG("getEntryAddr: candidate %s addr=0x%lx\n", *cand, (unsigned long)addr);
        if (addr != 0) {
            return addr;
        }
    }

    Symbol* fallbackSym = findFirstExecutableSymbol(ctx);
    if (fallbackSym != NULL) {
        uint64_t addr = adjustForLiteralPrefix(fallbackSym, Symbol_GetAddr(fallbackSym));
        DBG("getEntryAddr: fallback symbol %s addr=0x%lx\n",
            fallbackSym->name ? fallbackSym->name : "<noname>",
            (unsigned long)addr);
        if (addr != 0) {
            return addr;
        }
    }

    for(int i=0; i<ctx->outputSecNum;i++){
        OutputSection *osec = ctx->outputSections[i];
        if(strcmp(osec->chunk->name,".text")==0){
            return osec->chunk->shdr.Addr;
        }
    }
    return 0;
}

uint32_t getFlags(Context* ctx)
{
    assert(ctx->ObjsCount > 0);
    uint32_t flags = GetEhdr(ctx->Objs[0]->inputFile).Flags;
    for(int i=1; i< ctx->ObjsCount;i++){
        ObjectFile *obj = ctx->Objs[i];
        if((GetEhdr(obj->inputFile).Flags & 1/*EF_RISCV_RVC*/) !=0){
            flags |= 1/*EF_RISCV_RVC*/;
            break;
        }
    }

    return flags;
}

void Ehdr_CopyBuf(Chunk *c,Context* ctx)
{
    Ehdr *ehdr = (Ehdr*) malloc(sizeof (Ehdr));
    WriteMagic(ehdr->Ident);
    ehdr->Ident[EI_CLASS] = ELFCLASS64;
    ehdr->Ident[EI_DATA] = ELFDATA2LSB;
    ehdr->Ident[EI_VERSION] = EV_CURRENT;
    ehdr->Ident[EI_OSABI] = 0;
    ehdr->Ident[EI_ABIVERSION] = 0;
    ehdr->Type = ET_EXEC;
    ehdr->Machine = 243;      //EM_RISCV
    ehdr->Version = EV_CURRENT;
    ehdr->Entry = getEntryAddr(ctx);
    ehdr->ShOff = ctx->shdr->chunk->shdr.Offset;
    ehdr->PhOff = ctx->phdr->chunk->shdr.Offset;
    ehdr->Flags = getFlags(ctx);
    ehdr->EhSize = sizeof (Ehdr);
    ehdr->PhEntSize = sizeof (Phdr);
    ehdr->PhNum = ctx->phdr->chunk->shdr.Size / sizeof (Phdr);
    ehdr->ShEntSize = sizeof(Shdr);
    if (ctx->shdr->chunk->shdrTable.count >= SHN_LORESERVE) {
        fatal("too many sections");
    }
    if (ctx->ShStrtabIndex >= SHN_LORESERVE) {
        fatal("shstrtab index overflow");
    }
    ehdr->ShNum = (uint16_t)ctx->shdr->chunk->shdrTable.count;
    ehdr->ShStrndx = ctx->ShStrtabIndex;

    char* buf = malloc(sizeof (Ehdr));
    memcpy(buf,ehdr,sizeof (Ehdr));
   // printf("ehdr offset %lu\n",c->shdr.Offset);
    memcpy(ctx->buf+c->shdr.Offset,buf,sizeof (Ehdr));
}

FileType GetFileType(const char* contents)
{
    if (contents == NULL || *contents == '\0') {
        return FileTypeEmpty;
    }

    if (CheckMagic(contents)) {
        uint16_t et;
        Read(&et,contents+16,sizeof(uint16_t));
        switch (et) {
            case 1:  //ET_REL
                return FileTypeObject;
                break;
            default:
                return FileTypeUnknown;
        }
    }

    if (memcmp(contents, "!<arch>\n", 8) == 0) {
        return FileTypeArchive;
    }
    return FileTypeUnknown;
}

OutputPhdr *NewOutputPhdr()
{
    OutputPhdr *outputPhdr = (OutputPhdr*) malloc(sizeof (OutputPhdr));
    outputPhdr->chunk = NewChunk();
    outputPhdr->chunk->shdr.Flags = SHF_ALLOC;
    outputPhdr->chunk->shdr.AddrAlign = 8;
    outputPhdr->chunk->chunkType = ChunkTypePhdr;
    return outputPhdr;
}

bool isTls(Chunk* c)
{
    return (GetShdr(c)->Flags & SHF_TLS) != 0;
}

bool isBss(Chunk* c)
{
    return GetShdr(c)->Type == SHT_NOBITS && !isTls(c);
}

bool isTbss_(Chunk* chunk)
{
    Shdr *shdr = GetShdr(chunk);
    return (shdr->Type == SHT_NOBITS) && ((shdr->Flags & SHF_TLS) !=0);
}

uint32_t toPhdrFlags(Chunk* c)
{
    uint32_t ret = PF_R;
    int write = (GetShdr(c)->Flags & SHF_WRITE) != 0;
    if(write)
        ret |= PF_W;
    if((GetShdr(c)->Flags & SHF_EXECINSTR) != 0)
        ret |= PF_X;
    return ret;
}

Phdr* define(uint64_t typ,uint64_t flags,int64_t minAlign, Chunk* c)
{
    Phdr *phdr = (Phdr*) malloc(sizeof (Phdr));
    phdr->Type = typ;
    phdr->Flags = flags;
    phdr->Align = max_(minAlign,GetShdr(c)->AddrAlign);
    phdr->Offset = GetShdr(c)->Offset;
    if(GetShdr(c)->Type == SHT_NOBITS)
        phdr->FileSize = 0;
    else
        phdr->FileSize = GetShdr(c)->Size;
    phdr->VAddr = GetShdr(c)->Addr;
    phdr->PAddr = GetShdr(c)->Addr;
    phdr->MemSize = GetShdr(c)->Size;
    return phdr;
}

void push(Chunk* c,Phdr* vec,int lenVec)
{
    Phdr *phdr = &vec[lenVec - 1];
    phdr->Align = max_(phdr->Align,GetShdr(c)->AddrAlign);
    if(c->shdr.Type != SHT_NOBITS){
        phdr->FileSize = GetShdr(c)->Addr + GetShdr(c)->Size - phdr->VAddr;
       // printf("(name) :%s , phdr size %lu\n",c->name,phdr->FileSize);
    }
    phdr->MemSize = GetShdr(c)->Addr + GetShdr(c)->Size - phdr->VAddr;
}

Chunk** Chunk_RemoveIf(Chunk** elems, int* count) 
{
    int num = *count;
    size_t i = 0;
    for (size_t j = 0; j < num; j++) {
        if (isTbss_(elems[j])) {
            (*count)--;
            continue;
        }
        elems[i] = elems[j];
        i++;
    }

    return elems;
}

Phdr *createPhdr(Context* ctx, int *num)
{
    Phdr *vec = NULL;

    Chunk **chunks = (Chunk**) malloc(sizeof (Chunk*) * ctx->chunkNum);
    if (chunks == NULL) {
        fatal("failed to allocate chunk buffer for program headers");
    }
    for (int idx = 0; idx < ctx->chunkNum; idx++) {
        chunks[idx] = ctx->chunk[idx];
    }

    int count = ctx->chunkNum;
    chunks = Chunk_RemoveIf(chunks,&count);

    int i = 0;
    while (i < count) {
        Chunk *first = chunks[i];
        if ((GetShdr(first)->Flags & SHF_ALLOC) == 0) {
            i++;
            continue;
        }

        uint32_t segFlags = toPhdrFlags(first);
        Phdr *seg = define(PT_LOAD, segFlags, 4096, first);
        vec = realloc(vec, sizeof(Phdr) * (*num + 1));
        if (vec == NULL) {
            free(seg);
            free(chunks);
            fatal("failed to grow program header table");
        }
        vec[*num] = *seg;
        free(seg);
        Phdr *active = &vec[*num];
        *num += 1;

        i++;

        while (i < count) {
            Chunk *sec = chunks[i];
            if ((GetShdr(sec)->Flags & SHF_ALLOC) == 0) {
                break;
            }

            uint32_t secFlags = toPhdrFlags(sec);
            if ((segFlags & PF_W) != (secFlags & PF_W)) {
                break;
            }

            segFlags |= secFlags;
            active->Flags = segFlags;

            push(sec, vec, *num);
            i++;

            if (isBss(sec)) {
                continue;
            }
        }

        while (i < count) {
            Chunk *sec = chunks[i];
            if (!isBss(sec)) {
                break;
            }
            uint32_t secFlags = toPhdrFlags(sec);
            if ((segFlags & PF_W) != (secFlags & PF_W)) {
                break;
            }
            push(sec, vec, *num);
            i++;
        }

        if (*num > 0) {
            Phdr *load = &vec[*num - 1];
            if (load->MemSize == 0 && load->FileSize == 0) {
                (*num)--;
            }
        }
    }

    free(chunks);
    ctx->TpAddr = 0;
    return vec;
}

void Phdr_UpdateShdr(Chunk* c,Context* ctx)
{
    c->phdrS.phdrNum = 0;
    c->phdrS.phdrs = NULL;
    c->phdrS.phdrs = createPhdr(ctx,&c->phdrS.phdrNum);
    c->shdr.Size = sizeof (Phdr)*c->phdrS.phdrNum;
   // printf("size %lu\n",c->shdr.Size);
}

// 根据chunk获得phdr的flag
// chunk的flag和phdr的flag格式不是一致的，需要进行一个赋值
void Phdr_CopyBuf(Chunk* c,Context* ctx)
{
    Write(ctx->buf+c->shdr.Offset,sizeof (Phdr)*c->phdrS.phdrNum,c->phdrS.phdrs);
}

ObjectFile *NewObjectFile(File* file,bool isAlive)
{
    ObjectFile *objectFile = (ObjectFile*) malloc(sizeof (ObjectFile));
    objectFile->inputFile = NewInputFile(file);
    objectFile->inputFile->isAlive = isAlive;
    objectFile->Sections = NULL;
    objectFile->SymtabSec = NULL;
    objectFile->SymtabShndxSec = NULL;
    objectFile->isecNum = 0;
    objectFile->mergeableSections = NULL;
    objectFile->mergeableSectionsNum = 0;
    return objectFile;
}

//解析目标文件
void Parse(Context *ctx,ObjectFile* o)
{
    DBG("Parse: start %s\n", o->inputFile->file->Name);
    o->SymtabSec = FindSection(o->inputFile,2);  //SHT_SYMTAB
    if(o->SymtabSec != NULL){
        o->inputFile->FirstGlobal = o->SymtabSec->Info;
        FillUpElfSyms(o->inputFile,o->SymtabSec);
        o->inputFile->SymbolStrtab = GetBytesFromIdx(o->inputFile,o->SymtabSec->Link);
    }
    InitializeSections(o,ctx);
    DBG("Parse: sections initialized (%ld)\n", o->isecNum);
    InitializeSymbols(ctx,o);
    DBG("Parse: symbols initialized (ElfSymNum=%ld firstGlobal=%ld)\n", o->inputFile->ElfSymNum, o->inputFile->FirstGlobal);
    InitializeMergeableSections(o,ctx);
    DBG("Parse: mergeable sections initialized\n");
    SkipEhframeSections(o);
    DBG("Parse: completed %s\n", o->inputFile->file->Name);
}

// 添加 ObjectFile 到 Objs 数组
void AddObjectFile(ObjectFile*** Objs, int* ObjsCount, ObjectFile* newObj) 
{
    (*ObjsCount)++; // 增加数组元素个数

    // 动态调整 Objs 数组的大小
    *Objs = (ObjectFile**)realloc(*Objs, (*ObjsCount) * sizeof(ObjectFile*));

    if (*Objs != NULL) {
        // 将新的 ObjectFile 指针添加到数组
        (*Objs)[(*ObjsCount) - 1] = newObj;
    } else {
        // 处理内存分配错误
        printf("Memory allocation error.\n");
        exit(EXIT_FAILURE);
    }
}

//TODO 不造正确性
void FillUpSymtabShndxSec(ObjectFile* o,Shdr* s)
{
    char* bs = GetBytesFromShdr(o->inputFile,s);
    int num = s->Size / s->EntSize;
    o->SymtabShndxSec = malloc(sizeof(uint32_t)*num);
    uint32_t *t = o->SymtabShndxSec;
    while (num > 0){
        uint32_t *sy = malloc(sizeof (uint32_t));
        Read(sy,bs,sizeof (uint32_t));
        memcpy(t,sy,sizeof (uint32_t));
        bs += sizeof (uint32_t);
        t +=sizeof (uint32_t);
        num--;
    }
}

void InitializeSections(ObjectFile* o,Context* ctx)
{
    o->Sections = (InputSection **)calloc(o->inputFile->sectionNum, sizeof(InputSection *));
    o->isecNum = o->inputFile->sectionNum;

    for (int i = 0; i < o->inputFile->sectionNum; ++i) {
        Shdr *shdr = &o->inputFile->ElfSections[i];
        char* name = NULL;
        switch (shdr->Type) {
            //不需要放入可执行文件
            case SHT_GROUP:
            case SHT_SYMTAB:
            case SHT_STRTAB:
            case SHT_REL:
            case SHT_RELA:
            case SHT_NULL:
                break;
            case SHT_SYMTAB_SHNDX:
                printf("SHT_SYMTAB_SHNDX\n");
                FillUpSymtabShndxSec(o,shdr);
                break;
            default:
                name = ElfGetName(o->inputFile->ShStrtab,shdr->Name);
                o->Sections[i] = NewInputSection(ctx,name,o,i);
                break;
        }
    }

    //处理重定向的section
    for(int i=0; i< o->inputFile->sectionNum;i++){
        Shdr *shdr = &o->inputFile->ElfSections[i];
        if(shdr->Type != SHT_RELA)
            continue;

        assert(shdr->Info < o->isecNum);
        InputSection *target = o->Sections[shdr->Info];
        if(target != NULL){
            //没有两个relocation指向同一个section的情况
            //重定向section的section header的info指向 重定位所适用的节区的节区头部索引，比如.rel.text指向.text
            assert(target->RelsecIdx == UINT32_MAX);
            target->RelsecIdx = i;
        }
    }
}

int64_t GetShndx(ObjectFile* o, ElfSym* esym, int idx) 
{
    // 假设你有一个类似的 Assert 函数用于检查条件
    assert(idx >= 0 && idx < o->inputFile->ElfSymNum );

    // 如果 esym 的 Shndx 是 SHN_XINDEX，则返回 SymtabShndxSec 中对应索引的值
    if (esym->Shndx == SHN_XINDEX) {
        return o->SymtabShndxSec[idx];
    }

    // 否则，返回 esym 的 Shndx
    return esym->Shndx;
}

HashMap *name_map;

void InitializeSymbols(Context *ctx,ObjectFile* o)
{
    DBG("InitializeSymbols: start file=%s FirstGlobal=%ld ElfSymNum=%ld\n",
        o->inputFile->file->Name,
        o->inputFile->FirstGlobal,
        o->inputFile->ElfSymNum);
    if(o->SymtabSec == NULL)
        return;

    o->inputFile->Symbols = (Symbol*) malloc(sizeof (Symbol)*o->inputFile->ElfSymNum);
    DBG("InitializeSymbols: allocated Symbols=%p\n", (void*)o->inputFile->Symbols);
    o->inputFile->Symbols[0].file = o;
puts("1\n");
    for(int i=1; i< o->inputFile->ElfSymNum;i++){
        Symbol *tmp = NewSymbol("");
        if (tmp == NULL) {
            fatal("InitializeSymbols: NewSymbol failed at %d", i);
        }
        o->inputFile->Symbols[i]= *tmp;
        free(tmp);
    }
puts("2\n");
    o->inputFile->LocalSymbols = (Symbol **)calloc(o->inputFile->ElfSymNum, sizeof(Symbol *));
    if (o->inputFile->LocalSymbols == NULL) {
        fatal("InitializeSymbols: calloc LocalSymbols failed");
    }
    for(int i=1; i< o->inputFile->FirstGlobal;i++){
        ElfSym* esym = &o->inputFile->ElfSyms[i];
        Symbol *sym = &o->inputFile->Symbols[i];
        
        sym->name  = ElfGetName(o->inputFile->SymbolStrtab,esym->Name);
puts(sym->name);
puts("\n");
        
        sym->file = o;
        sym->value = esym->Val;
        sym->symIdx = i;
printf("esym shndx %d\n", esym->Shndx);
        
        if (!HashMapPut(ctx->SymbolMap,sym->name, sym)) {
            fatal("XXX: HashMapPut failed for %s", sym->name ? sym->name : "<null>");
        }

        //绝对符号没有对应的inputSection
        if(!IsAbs(esym)) {
            sym->inputSection = o->Sections[GetShndx(o,esym,i)];
            sym->sectionFragment = NULL;
        }
    }

puts("3\n");
    for(int i=0; i<o->inputFile->FirstGlobal; i++) {
        ElfSym* esym = &o->inputFile->ElfSyms[i];
        char* name = ElfGetName(o->inputFile->SymbolStrtab,esym->Name);
puts(name);
puts("\n");
        o->inputFile->LocalSymbols[i] = &o->inputFile->Symbols[i];
    }
puts("4\n");
/*
    for(int i=o->inputFile->FirstGlobal; i<o->inputFile->ElfSymNum; i++) {
        ElfSym* esym = &o->inputFile->ElfSyms[i];
        Symbol *sym = &o->inputFile->Symbols[i];
        
        
        sym->name  = ElfGetName(o->inputFile->SymbolStrtab,esym->Name);
        sym->file = o;
        sym->value = esym->Val;
        sym->symIdx = i;
        HashMapRemove(ctx->SymbolMap, sym->name);
        if (!HashMapPut(ctx->SymbolMap,sym->name, sym)) {
            fatal("XXX: HashMapPut failed for %s", sym->name ? sym->name : "<null>");
        }
    }
    */
    for(int i=o->inputFile->FirstGlobal; i<o->inputFile->ElfSymNum; i++) {
        ElfSym* esym = &o->inputFile->ElfSyms[i];
        Symbol *sym = &o->inputFile->Symbols[i];
        
        char* name = ElfGetName(o->inputFile->SymbolStrtab,esym->Name);
        sym->name = name;
        sym->file = o; 
printf("name %p file %p\n", name, sym->file);
        sym->symIdx = i; 
        sym->inputSection = o->Sections[GetShndx(o,esym,i)];
        HashMapRemove(ctx->SymbolMap, name);
        if (!HashMapPut(ctx->SymbolMap,sym->name, sym)) {
            fatal("XXX: HashMapPut failed for %s", sym->name ? sym->name : "<null>");
        }
    }
    o->inputFile->numSymbols = o->inputFile->ElfSymNum;
    DBG("InitializeSymbols: sym done\n");
    
    DBG("InitializeSymbols: done\n");
}

void InitializeMergeableSections(ObjectFile * o,Context* ctx)
{
    DBG("InitializeMergeableSections: start isecNum=%ld\n", o->isecNum);
    o->mergeableSectionsNum = o->isecNum;
    o->mergeableSections = (MergeableSection**)malloc(o->mergeableSectionsNum * sizeof(MergeableSection*));
    if(o->mergeableSections == NULL)
        fatal("null mergeableSections init\n");

    for (int i = 0; i < o->isecNum; i++) {
        InputSection * isec = o->Sections[i];
        if (isec == NULL) {
            DBG("InitializeMergeableSections: sec[%d] NULL\n", i);
        } else {
            Shdr *shdr = shdr_(isec);
            DBG("InitializeMergeableSections: sec[%d] isAlive=%d flags=0x%lx type=%u entsize=%lu size=%lu\n",
                i,
                isec->isAlive,
                (unsigned long)shdr->Flags,
                (unsigned)shdr->Type,
                (unsigned long)shdr->EntSize,
                (unsigned long)shdr->Size);
        }
        if (isec != NULL && isec->isAlive &&
            (shdr_(isec)->Flags & SHF_MERGE) != 0 &&
            (shdr_(isec)->Flags & SHF_ALLOC) != 0) {
            o->mergeableSections[i] = splitSection(ctx, isec);
            isec->isAlive = false;      //被拆了，不再需要了
            if ((i & 0x3ff) == 0) {
                DBG("InitializeMergeableSections: split section idx=%d name=%s\n",
                    i, Name(isec));
            }
        } else {
            o->mergeableSections[i] = NULL;
        }
        if ((i & 0xfff) == 0) {
            DBG("InitializeMergeableSections: progress idx=%d/%ld\n", i, o->isecNum);
        }
    }
    DBG("InitializeMergeableSections: done\n");
}

// 找到字符串结束即all zeors的位置
int findNull(const char* data, uint64_t data_len, int entSize) 
{
    if (entSize <= 0) {
        entSize = 1;
    }
    if (entSize == 1) {
        const char* result = memchr(data, 0, data_len);
        if (result != NULL) {
            return (int)(intptr_t)(result - data);
        }
    } else {
        for (int i = 0; i <= data_len - entSize; i += entSize) {
            const char* bs = data + i;
            int allZeros = 1;
            for (int j = 0; j < entSize; j++) {
                if (bs[j] != 0) {
                    allZeros = 0;
                    break;
                }
            }
            if (allZeros) {
                return i;
            }
        }
    }

    return -1;
}

MergeableSection *splitSection(Context* ctx,InputSection* isec)
{
    MergeableSection *m = NewMergeableSection();
    Shdr *shdr = shdr_(isec);
    char* secName = Name(isec);
    m->parent = GetMergedSectionInstance(ctx,secName,shdr->Type,shdr->Flags);
    m->p2align = isec->P2Align;
    DBG("splitSection: name=%s type=%u flags=0x%lx size=%lu entsize=%lu\n",
        secName,
        (unsigned)shdr->Type,
        (unsigned long)shdr->Flags,
        (unsigned long)shdr->Size,
        (unsigned long)shdr->EntSize);

    char *data = isec->contents;
    uint64_t offset = 0;
    uint64_t data_len = shdr->Size;
    if((shdr->Flags & SHF_STRINGS) != 0){
        //strs
        //每项数据不是固定大小的
        while (data_len > 0) {
            //如果entsize是1 : "hello,world"
            //如果entsize是4 : "H\0\0\0e\0\0\0...." 将每个数据对齐到4
            //处理对齐 , 找到结束位置
            int entSize = shdr->EntSize;
            if (entSize <= 0) {
                entSize = 1;
            }
            int end = findNull(data,data_len,entSize);
            if(end == -1){
                fatal("string is not null terminated");
            }

            uint64_t sz = (uint64_t)end + entSize;
            //char* substr = strndup(data, sz);
            char* substr = malloc(sz +1);
            memcpy(substr,data,sz);
            substr[sz] = '\0';
            //printBytes(substr,sz);

            m->strslen = realloc(m->strslen,sizeof (int) * (m->strNum + 1));
            m->strs = realloc(m->strs, (m->strNum + 1) * sizeof(char*));
            m->fragOffsets = realloc(m->fragOffsets, (m->fragOffsetNum + 1) * sizeof(uint32_t));

            if (substr == NULL || m->strs == NULL || m->fragOffsets == NULL) {
                fatal("null !\n");
            }

            m->strs[m->strNum] = substr;
            m->strslen[m->strNum] = sz;
            m->fragOffsets[m->fragOffsetNum] = offset;

            data += sz;
            offset += sz;
            data_len -= sz;

            m->strNum++;m->fragOffsetNum++;
            if ((m->strNum & 0x7f) == 0) {
                DBG("splitSection: string progress fragments=%d remaining=%lu\n",
                    m->strNum, (unsigned long)data_len);
            }
        }
        DBG("splitSection: string section done fragments=%d\n", m->strNum);
    }else {
        //const数据
        //一项一项数据进行处理，每个数据固定EntSize大
        int entSize = shdr->EntSize;
        if (entSize <= 0) {
            entSize = shdr->Size > 0 ? shdr->Size : 1;
        }
        if (shdr->Size % entSize != 0) {
            fatal("section size is not multiple of entsize");
        }

        while (data_len > 0) {
            char* substr = malloc((entSize + 1) * sizeof(char));
            memcpy(substr, data, entSize);
            substr[entSize] = '\0';

            m->strslen = realloc(m->strslen,sizeof (int) * (m->strNum + 1));
            m->strs = realloc(m->strs, (m->strNum + 1) * sizeof(char*));
            m->fragOffsets = realloc(m->fragOffsets, (m->fragOffsetNum + 1) * sizeof(uint32_t));

            if (substr == NULL || m->strs == NULL || m->fragOffsets == NULL) {
                fatal("null !\n");
            }

            m->strs[m->strNum] = substr;
            m->fragOffsets[m->fragOffsetNum] = offset;
            m->strslen[m->strNum] = entSize;

            offset += entSize;
            data += entSize;
            data_len -= entSize;
            m->strNum++;m->fragOffsetNum++;
        }
        DBG("splitSection: const section done fragments=%d\n", m->strNum);
    }
    return m;
}

InputSection *GetSection(ObjectFile* o,ElfSym* esym,int idx)
{
    return o->Sections[GetShndx(o,esym,idx)];
}

void ResolveSymbols(ObjectFile* o)
{
    DBG("ResolveSymbols: %s start\n", o->inputFile->file->Name);
    for(int i=o->inputFile->FirstGlobal; i<o->inputFile->numSymbols; i++) {
        ElfSym* esym = &o->inputFile->ElfSyms[i];
        Symbol *sym = &o->inputFile->Symbols[i];
        if (sym == NULL) {
            continue;
        }

        if(IsUndef(esym)){
            continue;
        }

        InputSection *isec = NULL;
        if(!IsAbs(esym)){
            isec = GetSection(o,esym,i);
            if(isec == NULL) {
                continue;
            }
        }
        
        if(sym->file == NULL){
            sym->file = o;
            sym->inputSection = isec;
            sym->sectionFragment = NULL;
            sym->value = esym->Val;
            sym->symIdx = i;
            DBG("ResolveSymbols: set %s file=%s val=0x%lx\n",
                sym->name ? sym->name : "<noname>",
                sym->file && sym->file->inputFile ? sym->file->inputFile->file->Name : "<none>",
                (unsigned long)sym->value);
        }
    }
    DBG("ResolveSymbols: %s done\n", o->inputFile->file->Name);
}

void markLiveObjs(ObjectFile* o,ObjectFile***roots,int *rootSize)
{
    assert(o->inputFile->isAlive);
    DBG("markLiveObjs: scanning %s\n", o->inputFile->file->Name);
    for(int i=o->inputFile->FirstGlobal; i<o->inputFile->ElfSymNum; i++) {
        Symbol *sym = o->inputFile->LocalSymbols[i];
        ElfSym *esym = &o->inputFile->ElfSyms[i];

        if(sym == NULL || sym->file == NULL){
            continue;
        }

        if(IsUndef(esym) && !sym->file->inputFile->isAlive){
            sym->file->inputFile->isAlive = true;
            *roots = realloc(*roots, (*rootSize + 1) * sizeof(ObjectFile*));
            (*roots)[*rootSize] = sym->file;
            DBG("markLiveObjs: %s needs %s via symbol %s\n",
                o->inputFile->file->Name,
                sym->file->inputFile->file->Name,
                sym->name ? sym->name : "<noname>");
            *rootSize += 1;
        }
    }
}

void ClearSymbols(ObjectFile* o)
{
    for(int i=o->inputFile->FirstGlobal; i<o->inputFile->ElfSymNum; i++) {
        Symbol *sym = o->inputFile->LocalSymbols[i];
        if(sym != NULL && sym->file == o)
            clear(sym);
    }
}

void registerSectionPieces(ObjectFile* o)
{
    //printf("new obj num %zu\n",o->mergeableSectionsNum);
    for(int i=0; i< o->mergeableSectionsNum;i++){
        MergeableSection * m = o->mergeableSections[i];
        if(m == NULL)
            continue;

        m->fragments = (SectionFragment**) malloc(sizeof (SectionFragment*) * m->strNum);
        m->fragmentNum = m->strNum;

//        printf("same m1\n");
//        printf("addr %p\n",(void*)m->parent);
        for(int j = 0; j<m->strNum ;j++){
            m->fragments[j] = Insert(m->parent,m->strs[j],m->p2align,m->strslen[j]);
        }
        //printf("same m2\n");
    }

    //因为symbol可能要改成属于一个fragment , 进行处理
    for(int i = 1;i<o->inputFile->ElfSymNum;i++){
        Symbol *sym = o->inputFile->LocalSymbols[i];
        if (sym == NULL)
            continue;
        ElfSym *esym = &o->inputFile->ElfSyms[i];

        if(IsAbs(esym) || IsUndef(esym) || IsCommon(esym))
            continue;

        MergeableSection *m = o->mergeableSections[GetShndx(o,esym,i)];
        if(m == NULL)
            continue;

        uint32_t fragOffset;
        SectionFragment *frag = GetFragment(m,esym->Val,&fragOffset);

        if (frag == NULL) {
            fatal("bad symbol value");
        }

        sym->sectionFragment = frag;
        sym->inputSection = NULL;
        sym->value = fragOffset;
    }
}

//跳过.eh_frame，就不处理异常了
void SkipEhframeSections(ObjectFile* o)
{
    for(int i=0;i < o->isecNum;i++){
        InputSection *isec = o->Sections[i];
        if(isec != NULL && isec->isAlive && strcmp(Name(isec),".eh_frame")==0){
            isec->isAlive = false;
        }
    }
}

void ScanRelocations__(Context* ctx,InputSection* isec);

void ScanRelocations_(Context* ctx,ObjectFile* o)
{
    DBG("ScanRelocations_: file=%s\n", o->inputFile->file->Name);
    for(int i=0;i < o->isecNum;i++) {
        InputSection *isec = o->Sections[i];
        if (isec == NULL) {
            DBG("ScanRelocations_: section[%d] NULL\n", i);
            continue;
        }
        if (!isec->isAlive) {
            DBG("ScanRelocations_: section[%d] name=%s skipped (dead)\n",
                i, Name(isec));
            continue;
        }
        if ((shdr_(isec)->Flags & SHF_ALLOC) == 0) {
            DBG("ScanRelocations_: section[%d] name=%s skipped (flags=0x%lx)\n",
                i, Name(isec), (unsigned long)shdr_(isec)->Flags);
            continue;
        }
        DBG("ScanRelocations_: section[%d] name=%s flags=0x%lx\n",
            i,
            Name(isec),
            (unsigned long)shdr_(isec)->Flags);
        ScanRelocations__(ctx,isec);
    }
    DBG("ScanRelocations_: done %s\n", o->inputFile->file->Name);
}

File** appendFile(File** files, File* newFile, int* count) 
{
    *count += 1;
    files = (File**)realloc(files, (*count + 1) * sizeof(File*));
    files[*count - 1] = newFile;
    files[*count] = NULL;
    return files;
}

// ReadArchiveMembers 静态库可以被看作是一组目标文件（.o 或 .obj 文件）的组合
// 读取并返回归档的静态文件中的所有目标文件
// [!<arch>\n][Section ][Section ]......
// [Section ] -> [ArHdr][                ][ArHdr][                ]
File** ReadArchiveMembers(File* file,int * fileCount) 
{
    if (GetFileType(file->Contents) != FileTypeArchive) {
        return NULL;
    }

    DBG("ReadArchiveMembers: file=%s size=%lu\n", file->Name, (unsigned long)file->contents_len);

    //读取位置跳过文件头
    int pos = 8;
    uint8_t* strTab = NULL;
    File** files = NULL;

    //考虑align 2，为1即可停下
    while (file->contents_len - pos > 1){
        if (pos % 2 == 1) {
            pos++;
        }

        //拿到ArHdr header
        ArHdr *hdr = (ArHdr*) malloc(sizeof (ArHdr));
        Read(hdr,file->Contents+pos,sizeof(ArHdr));

        int dataStart = pos + sizeof(ArHdr);
        int memberSize = GetSize(hdr);
        DBG("ReadArchiveMembers: hdr raw='%.16s' size=%d pos=%d\n", hdr->Name, memberSize, pos);
        pos = dataStart + memberSize;
        int dataEnd = pos;

        uint8_t* contents = (uint8_t*)malloc(dataEnd - dataStart);
        memcpy(contents, file->Contents + dataStart, dataEnd - dataStart);

        if (IsSymtab(hdr)) {
            continue;
        } else if (IsStrtab(hdr)) {
            strTab = malloc(dataEnd-dataStart);
            memcpy(strTab,contents,dataEnd-dataStart);
            continue;
        }

        //如果section既不是arch独有的symtab也不是strtab , 就是原来obj文件本身的内容
        File* newFile = (File*)malloc(sizeof(File) + 1);
        char* name = ReadName(hdr,(char *)strTab);
       // printf("%s %lu\n",name,strlen(name));
        newFile->Name = name;
        newFile->Contents = (char*) malloc(dataEnd-dataStart);
        memcpy(newFile->Contents,contents,dataEnd-dataStart);
        newFile->contents_len = dataEnd - dataStart;
        newFile->Parent = file;
        //printf("%s\n",name);

        DBG("ReadArchiveMembers: member '%s' size=%d\n", newFile->Name, memberSize);

        files = appendFile(files, newFile, fileCount);
    }
    return files;
}


void ReadInputFiles(Context* ctx,char** remaining)
{
    name_map = HashMapInit();
    if (name_map == NULL) {
        fatal("failed to initialize name map");
    }
    HashMapSetHash(name_map, hash_string_key);
    HashMapSetCompare(name_map, compare_string_key);
    HashMapSetCleanKey(name_map, free);
    DBG("ReadInputFiles: start (%d entries)\n", DebugCountArgs(remaining));
    for(int i =0;remaining[i];i++){
        char* arg = remaining[i];
        DBG("ReadInputFiles: arg[%d]=%s\n", i, arg);
        if(hasPrefix(arg,"-l")){
          //  printf("a   .%s \n ",arg);
            char* filename = removePrefix(arg,"-l");
            DBG("ReadInputFiles: resolving library '%s'\n", filename);
            File *f = FindLibrary(ctx,filename);
            DBG("ReadInputFiles: library '%s' => %s\n", filename, f ? f->Name : "<not found>");
            readFile(ctx, f);
           // printf("%d\n",ctx->ObjsCount);
        } else{
           // printf("%s  \n",arg);
            File* file = NewFile(arg);
            if (file == NULL) {
                fatal("failed to open %s", arg);
            }
            DBG("ReadInputFiles: loading file '%s'\n", file->Name);
            readFile(ctx, file);
           // printf("%d\n",ctx->ObjsCount);
        }
    }
    DBG("ReadInputFiles: done (objs=%d)\n", ctx->ObjsCount);
}

void readFile(Context *ctx,File* file)
{
    if (file == NULL) {
        fatal("readFile: null file pointer");
    }
    FileType ft = GetFileType(file->Contents);
    DBG("readFile: %s type=%s\n", file->Name, FileTypeToString(ft));
    int fileCount = 0;
    File **aFiles = NULL;
    switch (ft) {
        case FileTypeObject:
            DBG("file name o :%s\n",file->Name);
            AddObjectFile(&ctx->Objs,&ctx->ObjsCount, CreateObjectFile(ctx,file,false));
            DBG("readFile: added object %s (total=%d)\n", file->Name, ctx->ObjsCount);
            break;
        case FileTypeArchive:
            aFiles = ReadArchiveMembers(file,&fileCount);
            DBG("readFile: archive %s yielded %d members\n", file->Name, fileCount);
            for(int i = 0;i<fileCount;i++){
                File *child = aFiles[i];
                assert(GetFileType(child->Contents) == FileTypeObject);
                AddObjectFile(&ctx->Objs,&ctx->ObjsCount, CreateObjectFile(ctx,child,true));
                DBG("readFile: added archive member %s (total=%d)\n", child->Name, ctx->ObjsCount);
            }
            break;
        default:
            fatal("unknown file type\n");
    }
}

ObjectFile *CreateObjectFile(Context *ctx,File* file,bool inLib)
{
    //TODO CheckFileCompatibility
    ObjectFile * objectFile = NewObjectFile(file,!inLib);
    DBG("CreateObjectFile: %s inLib=%d alive=%d\n", file->Name, inLib, objectFile->inputFile->isAlive);
    Parse(ctx,objectFile);
    DBG("CreateObjectFile: %s parsed (isecNum=%ld)\n", file->Name, objectFile->isecNum);
    return objectFile;
}

OutputShdr *NewOutputShdr()
{
    OutputShdr *outputShdr = (OutputShdr*) malloc(sizeof (OutputShdr));
    outputShdr->chunk = NewChunk();
    outputShdr->chunk->shdr.AddrAlign = 8;
    outputShdr->chunk->chunkType = ChunkTypeShdr;
    return outputShdr;
}

static void ShStrtabEnsureCapacity(OutputShStrtab* tab, size_t required)
{
    if (required <= tab->capacity)
        return;

    size_t newCap = tab->capacity ? tab->capacity : 64;
    while (newCap < required) {
        if (newCap > SIZE_MAX / 2) {
            newCap = required;
            break;
        }
        newCap *= 2;
    }

    char* newData = realloc(tab->data, newCap);
    if (newData == NULL) {
        fatal("failed to grow shstrtab");
    }

    tab->data = newData;
    tab->capacity = newCap;
}

static void ShStrtabReset(OutputShStrtab* tab)
{
    if (tab->data == NULL) {
        tab->capacity = 64;
        tab->data = malloc(tab->capacity);
        if (tab->data == NULL) {
            fatal("failed to allocate shstrtab buffer");
        }
    }
    tab->data[0] = '\0';
    tab->size = 1;
    tab->chunk->shdr.Size = tab->size;
}

OutputShStrtab *NewOutputShStrtab()
{
    OutputShStrtab *tab = (OutputShStrtab*) malloc(sizeof (OutputShStrtab));
    if (tab == NULL) {
        fatal("failed to allocate shstrtab");
    }

    tab->chunk = NewChunk();
    tab->chunk->chunkType = ChunkTypeShStrtab;
    tab->chunk->shdr.Type = SHT_STRTAB;
    tab->chunk->shdr.Flags = 0;
    tab->chunk->shdr.AddrAlign = 1;
    tab->chunk->shdr.EntSize = 0;
    tab->chunk->shdr.Info = 0;
    tab->chunk->shdr.Link = 0;

    const char* name = ".shstrtab";
    size_t len = strlen(name) + 1;
    tab->chunk->name = (char*)malloc(len);
    if (tab->chunk->name == NULL) {
        fatal("failed to allocate shstrtab name");
    }
    memcpy(tab->chunk->name, name, len);

    tab->data = NULL;
    tab->size = 0;
    tab->capacity = 0;
    ShStrtabReset(tab);
    return tab;
}

static uint32_t ShStrtabAppend(OutputShStrtab* tab, const char* name)
{
    if (name == NULL || name[0] == '\0') {
        return 0;
    }

    size_t len = strlen(name) + 1;
    if (tab->size + len > UINT32_MAX) {
        fatal("shstrtab overflow");
    }

    ShStrtabEnsureCapacity(tab, tab->size + len);
    uint32_t offset = (uint32_t)tab->size;
    memcpy(tab->data + tab->size, name, len);
    tab->size += len;
    tab->chunk->shdr.Size = tab->size;
    return offset;
}

void ShStrtab_CopyBuf(Chunk* c,Context* ctx)
{
    if (ctx->shstrtab == NULL || ctx->shstrtab->chunk != c) {
        return;
    }

    if (ctx->shstrtab->size == 0) {
        return;
    }

    memcpy(ctx->buf + c->shdr.Offset, ctx->shstrtab->data, ctx->shstrtab->size);
}

static void StrtabEnsureCapacity(OutputStrtab* tab, size_t required)
{
    if (required <= tab->capacity)
        return;

    size_t newCap = tab->capacity ? tab->capacity : 64;
    while (newCap < required) {
        if (newCap > SIZE_MAX / 2) {
            newCap = required;
            break;
        }
        newCap *= 2;
    }

    char* newData = realloc(tab->data, newCap);
    if (newData == NULL) {
        fatal("failed to grow strtab");
    }

    tab->data = newData;
    tab->capacity = newCap;
}

static void StrtabReset(OutputStrtab* tab)
{
    if (tab->data == NULL) {
        tab->capacity = 64;
        tab->data = malloc(tab->capacity);
        if (tab->data == NULL) {
            fatal("failed to allocate strtab buffer");
        }
    }
    tab->data[0] = '\0';
    tab->size = 1;
    tab->chunk->shdr.Size = tab->size;
}

OutputStrtab *NewOutputStrtab(const char* name)
{
    OutputStrtab *tab = (OutputStrtab*)malloc(sizeof(OutputStrtab));
    if (tab == NULL) {
        fatal("failed to allocate strtab");
    }

    tab->chunk = NewChunk();
    tab->chunk->chunkType = ChunkTypeStrtab;
    tab->chunk->shdr.Type = SHT_STRTAB;
    tab->chunk->shdr.Flags = 0;
    tab->chunk->shdr.AddrAlign = 1;
    tab->chunk->shdr.EntSize = 0;
    tab->chunk->shdr.Info = 0;
    tab->chunk->shdr.Link = 0;

    size_t len = strlen(name) + 1;
    tab->chunk->name = (char*)malloc(len);
    if (tab->chunk->name == NULL) {
        fatal("failed to allocate strtab name");
    }
    memcpy(tab->chunk->name, name, len);

    tab->data = NULL;
    tab->size = 0;
    tab->capacity = 0;
    StrtabReset(tab);
    return tab;
}

uint32_t StrtabAppend(OutputStrtab* tab, const char* name)
{
    if (name == NULL || name[0] == '\0') {
        return 0;
    }

    size_t len = strlen(name) + 1;
    if (tab->size + len > UINT32_MAX) {
        fatal("strtab overflow");
    }

    StrtabEnsureCapacity(tab, tab->size + len);
    uint32_t offset = (uint32_t)tab->size;
    memcpy(tab->data + tab->size, name, len);
    tab->size += len;
    tab->chunk->shdr.Size = tab->size;
    return offset;
}

void Strtab_CopyBuf(Chunk* c, Context* ctx)
{
    if (ctx->strtab == NULL || ctx->strtab->chunk != c) {
        return;
    }
    if (ctx->strtab->size == 0) {
        return;
    }
    memcpy(ctx->buf + c->shdr.Offset, ctx->strtab->data, ctx->strtab->size);
}

static void SymtabEnsureCapacity(OutputSymtab* tab, size_t required)
{
    if (required <= tab->capacity)
        return;

    size_t newCap = tab->capacity ? tab->capacity : 64;
    while (newCap < required) {
        if (newCap > SIZE_MAX / 2) {
            newCap = required;
            break;
        }
        newCap *= 2;
    }

    SymtabEntry* newEntries = realloc(tab->entries, newCap * sizeof(SymtabEntry));
    if (newEntries == NULL) {
        fatal("failed to grow symtab");
    }
    tab->entries = newEntries;
    tab->capacity = newCap;
}

static void SymtabReset(OutputSymtab* tab)
{
    tab->count = 0;
    tab->localCount = 0;
}

static SymtabEntry* SymtabAddEntry(OutputSymtab* tab)
{
    SymtabEnsureCapacity(tab, tab->count + 1);
    SymtabEntry* rec = &tab->entries[tab->count++];
    memset(rec, 0, sizeof(SymtabEntry));
    return rec;
}

static Chunk* GetSymbolSectionChunk(Symbol* sym)
{
    if (sym == NULL)
        return NULL;
    if (sym->sectionFragment != NULL)
        return sym->sectionFragment->OutputSection->chunk;
    if (sym->inputSection != NULL && sym->inputSection->outputSection != NULL)
        return sym->inputSection->outputSection->chunk;
    return NULL;
}

static uint16_t GetSectionIndexByChunk(Context* ctx, Chunk* target)
{
    if (ctx == NULL || target == NULL)
        return 0;

    uint16_t idx = 1;
    for (int i = 0; i < ctx->chunkNum; i++) {
        Chunk *chunk = ctx->chunk[i];
        if (!ShouldEmitSectionHeader(ctx, chunk))
            continue;
        if (chunk == target)
            return idx;
        idx++;
    }
    return 0;
}

OutputSymtab *NewOutputSymtab(OutputStrtab* strtab)
{
    OutputSymtab *tab = (OutputSymtab*)malloc(sizeof(OutputSymtab));
    if (tab == NULL) {
        fatal("failed to allocate symtab");
    }
    tab->chunk = NewChunk();
    tab->chunk->chunkType = ChunkTypeSymtab;
    tab->chunk->shdr.Type = SHT_SYMTAB;
    tab->chunk->shdr.Flags = 0;
    tab->chunk->shdr.AddrAlign = 8;
    tab->chunk->shdr.EntSize = sizeof(Elf64_Sym);
    tab->chunk->shdr.Info = 0;
    tab->chunk->shdr.Link = 0;
    tab->chunk->name = malloc(strlen(".symtab") + 1);
    if (tab->chunk->name == NULL) {
        fatal("failed to allocate symtab name");
    }
    strcpy(tab->chunk->name, ".symtab");

    tab->strtab = strtab;
    tab->entries = NULL;
    tab->count = 0;
    tab->capacity = 0;
    tab->localCount = 0;
    return tab;
}

static uint8_t SymbolInfoForLocal(const ElfSym* esym)
{
    uint8_t type = esym ? ELF64_ST_TYPE(esym->Info) : STT_NOTYPE;
    return ELF64_ST_INFO(STB_LOCAL, type);
}

void BuildOutputSymtab(Context* ctx)
{
    if (ctx == NULL || ctx->symtab == NULL || ctx->strtab == NULL)
        return;

    OutputSymtab* tab = ctx->symtab;

    StrtabReset(ctx->strtab);
    SymtabReset(tab);

    // Clear previously emitted markers
    HashMapFirst(ctx->SymbolMap);
    for (Pair* p = HashMapNext(ctx->SymbolMap); p != NULL; p = HashMapNext(ctx->SymbolMap)) {
        Symbol* sym = (Symbol*)p->value;
        if (sym)
            sym->flags &= ~SYMBOL_FLAG_SYMTAB;
    }
    for (int i = 0; i < ctx->ObjsCount; i++) {
        ObjectFile *obj = ctx->Objs[i];
        InputFile *in = obj->inputFile;
        if (!in || !in->Symbols)
            continue;
        int64_t limit = in->FirstGlobal;
        if (limit > in->ElfSymNum)
            limit = in->ElfSymNum;
        for (int64_t idx = 1; idx < limit; idx++) {
            in->Symbols[idx].flags &= ~SYMBOL_FLAG_SYMTAB;
        }
    }

    // Null symbol entry
    SymtabAddEntry(tab);
    tab->localCount = 1;

    // Collect local symbols from each object file
puts("local symbols\n");
    for (int i = 0; i < ctx->ObjsCount; i++) {
        ObjectFile *obj = ctx->Objs[i];
        InputFile *in = obj->inputFile;
        if (in == NULL || in->ElfSyms == NULL)
            continue;
        int64_t firstGlobal = in->FirstGlobal;
        if (firstGlobal > in->ElfSymNum)
            firstGlobal = in->ElfSymNum;
        for (int64_t idx = 1; idx < firstGlobal; idx++) {
            ElfSym *esym = &in->ElfSyms[idx];
            if (IsUndef(esym) || IsCommon(esym))
                continue;
            uint8_t bind = ELF64_ST_BIND(esym->Info);
            if (bind != STB_LOCAL)
                continue;
            Symbol *sym = &in->Symbols[idx];
puts(sym->name);
puts("\n");
            if (sym == NULL || sym->file != obj)
                continue;

            if (sym->flags & SYMBOL_FLAG_SYMTAB)
                continue;

            SymtabEntry* rec = SymtabAddEntry(tab);
            rec->sym = sym;
            rec->info = SymbolInfoForLocal(esym);
            rec->other = esym->Other;
            rec->size = esym->Size;
            rec->nameOffset = (sym->name && sym->name[0]) ? StrtabAppend(ctx->strtab, sym->name) : 0;
            if (IsAbs(esym))
                rec->shndx = SHN_ABS;
            else if (IsCommon(esym))
                rec->shndx = SHN_COMMON;
            else {
                rec->sectionChunk = GetSymbolSectionChunk(sym);
                rec->shndx = 0;
            }
            tab->localCount++;
            sym->flags |= SYMBOL_FLAG_SYMTAB;
        }
    }

  // Collect global/weak symbols from symbol map
  HashMapFirst(ctx->SymbolMap);
puts("global/weak symbols\n");
  for (Pair* p = HashMapNext(ctx->SymbolMap); p != NULL; p = HashMapNext(ctx->SymbolMap)) {
    Symbol* sym = (Symbol*)p->value;
puts(sym->name);
puts("\n");
    if (sym == NULL || sym->file == NULL || sym->symIdx < 0) {
puts("CONTINUE1\n");
printf("sym %p, sym->file %p, sym->SymIdx %d\n", sym, sym->file, sym->symIdx);
        continue;
    }
    ElfSym* esym = &sym->file->inputFile->ElfSyms[sym->symIdx];
    if (IsUndef(esym) || IsCommon(esym)) {
puts("CONTINUE2\n");
printf("IsUndef %d IsCommon %d\n", IsUndef(esym), IsCommon(esym));
        continue;
    }
    uint8_t bind = ELF64_ST_BIND(esym->Info);
    if (bind == STB_LOCAL) {
puts("CONTINUE3\n");
        continue;
    }
    if (sym->flags & SYMBOL_FLAG_SYMTAB) {
puts("CONTINUE4\n");
        continue;
    }

    SymtabEntry* rec = SymtabAddEntry(tab);
    rec->sym = sym;
    rec->info = esym->Info;
    rec->other = esym->Other;
    rec->size = esym->Size;
    rec->nameOffset = (sym->name && sym->name[0]) ? StrtabAppend(ctx->strtab, sym->name) : 0;
    if (IsAbs(esym))
        rec->shndx = SHN_ABS;
    else if (IsCommon(esym))
        rec->shndx = SHN_COMMON;
    else {
        rec->sectionChunk = GetSymbolSectionChunk(sym);
        rec->shndx = 0;
    }
    sym->flags |= SYMBOL_FLAG_SYMTAB;
  }

  // Fallback: walk all objects to ensure every defined global/weak symbol is emitted,
  // even if the symbol map missed it for some reason.
puts("Fallback\n");
  for (int i = 0; i < ctx->ObjsCount; i++) {
    ObjectFile *obj = ctx->Objs[i];
    InputFile *in = obj->inputFile;
    if (in == NULL || in->ElfSyms == NULL)
        continue;
    int64_t start = 1;  // skip null symbol
    for (int64_t idx = start; idx < in->ElfSymNum; idx++) {
        ElfSym *esym = &in->ElfSyms[idx];
        if (IsUndef(esym) || IsCommon(esym))
            continue;
        uint8_t bind = ELF64_ST_BIND(esym->Info);
        if (bind == STB_LOCAL)
            continue;
        Symbol *sym = in->LocalSymbols ? in->LocalSymbols[idx] : NULL;
        if (sym == NULL || sym->file == NULL || sym->symIdx < 0) {
            continue;
        }
        if (sym->flags & SYMBOL_FLAG_SYMTAB) {
            continue;
        }

        SymtabEntry* rec = SymtabAddEntry(tab);
        rec->sym = sym;
        rec->info = esym->Info;
        rec->other = esym->Other;
        rec->size = esym->Size;
        rec->nameOffset = (sym->name && sym->name[0]) ? StrtabAppend(ctx->strtab, sym->name) : 0;
        if (IsAbs(esym))
            rec->shndx = SHN_ABS;
        else if (IsCommon(esym))
            rec->shndx = SHN_COMMON;
        else {
            rec->sectionChunk = GetSymbolSectionChunk(sym);
            rec->shndx = 0;
        }
        sym->flags |= SYMBOL_FLAG_SYMTAB;
     }
  }

  if (tab->localCount > tab->count)
      tab->localCount = tab->count;

  // Resolve section indices for entries that reference sections
  for (size_t i = 1; i < tab->count; i++) {
        SymtabEntry* rec = &tab->entries[i];
        if (rec->shndx == 0) {
            if (rec->sectionChunk != NULL) {
                uint16_t idx = GetSectionIndexByChunk(ctx, rec->sectionChunk);
                rec->shndx = idx ? idx : SHN_ABS;
            } else {
                rec->shndx = SHN_ABS;
            }
        }
    }

    tab->chunk->shdr.Size = tab->count * sizeof(Elf64_Sym);
    tab->chunk->shdr.Info = (uint32_t)tab->localCount;
    uint16_t strtabIndex = GetSectionIndexByChunk(ctx, ctx->strtab->chunk);
    if (strtabIndex == 0)
        fatal(".strtab section header index not found");
    tab->chunk->shdr.Link = strtabIndex;
    tab->chunk->shdr.EntSize = sizeof(Elf64_Sym);
    ctx->strtab->chunk->shdr.Size = ctx->strtab->size;
}

/*
void BuildOutputSymtab(Context* ctx)
{
    if (ctx == NULL || ctx->symtab == NULL || ctx->strtab == NULL)
        return;

    OutputSymtab* tab = ctx->symtab;

    StrtabReset(ctx->strtab);
    SymtabReset(tab);

    // Clear previously emitted markers
    HashMapFirst(ctx->SymbolMap);
    for (Pair* p = HashMapNext(ctx->SymbolMap); p != NULL; p = HashMapNext(ctx->SymbolMap)) {
        Symbol* sym = (Symbol*)p->value;
        if (sym)
            sym->flags &= ~SYMBOL_FLAG_SYMTAB;
    }
    for (int i = 0; i < ctx->ObjsCount; i++) {
        ObjectFile *obj = ctx->Objs[i];
        InputFile *in = obj->inputFile;
        if (!in || !in->Symbols)
            continue;
        int64_t limit = in->FirstGlobal;
        if (limit > in->ElfSymNum)
            limit = in->ElfSymNum;
        for (int64_t idx = 1; idx < limit; idx++) {
            in->Symbols[idx].flags &= ~SYMBOL_FLAG_SYMTAB;
        }
    }

    // Null symbol entry
    SymtabAddEntry(tab);
    tab->localCount = 1;

    // Collect local symbols from each object file
    for (int i = 0; i < ctx->ObjsCount; i++) {
        ObjectFile *obj = ctx->Objs[i];
        InputFile *in = obj->inputFile;
        if (in == NULL || in->ElfSyms == NULL)
            continue;
        int64_t firstGlobal = in->FirstGlobal;
        if (firstGlobal > in->ElfSymNum)
            firstGlobal = in->ElfSymNum;
        for (int64_t idx = 1; idx < firstGlobal; idx++) {
            ElfSym *esym = &in->ElfSyms[idx];
            if (IsUndef(esym) || IsCommon(esym))
                continue;
            uint8_t bind = ELF64_ST_BIND(esym->Info);
            if (bind != STB_LOCAL)
                continue;
            Symbol *sym = &in->Symbols[idx];
            if (sym == NULL || sym->file != obj)
                continue;

            if (sym->flags & SYMBOL_FLAG_SYMTAB)
                continue;

            SymtabEntry* rec = SymtabAddEntry(tab);
            rec->sym = sym;
            rec->info = SymbolInfoForLocal(esym);
            rec->other = esym->Other;
            rec->size = esym->Size;
            rec->nameOffset = (sym->name && sym->name[0]) ? StrtabAppend(ctx->strtab, sym->name) : 0;
            if (IsAbs(esym))
                rec->shndx = SHN_ABS;
            else if (IsCommon(esym))
                rec->shndx = SHN_COMMON;
            else {
                rec->sectionChunk = GetSymbolSectionChunk(sym);
                rec->shndx = 0;
            }
            tab->localCount++;
            sym->flags |= SYMBOL_FLAG_SYMTAB;
        }
    }

    // Collect global/weak symbols from symbol map
    HashMapFirst(ctx->SymbolMap);
    for (Pair* p = HashMapNext(ctx->SymbolMap); p != NULL; p = HashMapNext(ctx->SymbolMap)) {
        Symbol* sym = (Symbol*)p->value;
        if (sym == NULL || sym->file == NULL || sym->symIdx < 0)
            continue;
        ElfSym* esym = &sym->file->inputFile->ElfSyms[sym->symIdx];
        if (IsUndef(esym) || IsCommon(esym))
            continue;
        uint8_t bind = ELF64_ST_BIND(esym->Info);
        if (bind == STB_LOCAL)
            continue;
        if (sym->flags & SYMBOL_FLAG_SYMTAB)
            continue;

        SymtabEntry* rec = SymtabAddEntry(tab);
        rec->sym = sym;
        rec->info = esym->Info;
        rec->other = esym->Other;
        rec->size = esym->Size;
        rec->nameOffset = (sym->name && sym->name[0]) ? StrtabAppend(ctx->strtab, sym->name) : 0;
        if (IsAbs(esym))
            rec->shndx = SHN_ABS;
        else if (IsCommon(esym))
            rec->shndx = SHN_COMMON;
        else {
            rec->sectionChunk = GetSymbolSectionChunk(sym);
            rec->shndx = 0;
        }
        sym->flags |= SYMBOL_FLAG_SYMTAB;
    }

    if (tab->localCount > tab->count)
        tab->localCount = tab->count;

    // Resolve section indices for entries that reference sections
    for (size_t i = 1; i < tab->count; i++) {
        SymtabEntry* rec = &tab->entries[i];
        if (rec->shndx == 0) {
            if (rec->sectionChunk != NULL) {
                uint16_t idx = GetSectionIndexByChunk(ctx, rec->sectionChunk);
                rec->shndx = idx ? idx : SHN_ABS;
            } else {
                rec->shndx = SHN_ABS;
            }
        }
    }

    tab->chunk->shdr.Size = tab->count * sizeof(Elf64_Sym);
    tab->chunk->shdr.Info = (uint32_t)tab->localCount;
    uint16_t strtabIndex = GetSectionIndexByChunk(ctx, ctx->strtab->chunk);
    if (strtabIndex == 0)
        fatal(".strtab section header index not found");
    tab->chunk->shdr.Link = strtabIndex;
    tab->chunk->shdr.EntSize = sizeof(Elf64_Sym);
    ctx->strtab->chunk->shdr.Size = ctx->strtab->size;
}
*/

void Symtab_CopyBuf(Chunk* c, Context* ctx)
{
    if (ctx == NULL || ctx->symtab == NULL || ctx->symtab->chunk != c)
        return;
    OutputSymtab* tab = ctx->symtab;
    if (tab->count == 0)
        return;

    Elf64_Sym* out = (Elf64_Sym*)(ctx->buf + c->shdr.Offset);
    for (size_t i = 0; i < tab->count; i++) {
        SymtabEntry* rec = &tab->entries[i];
        Elf64_Sym* dst = &out[i];
        memset(dst, 0, sizeof(Elf64_Sym));
        dst->st_name = rec->nameOffset;
        dst->st_info = rec->info;
        dst->st_other = rec->other;
        dst->st_shndx = rec->shndx;
        dst->st_size = rec->size;
        if (rec->sym != NULL)
            dst->st_value = Symbol_GetAddr(rec->sym);
    }
}

static bool ShouldEmitSectionHeader(Context* ctx, Chunk* chunk)
{
    if (chunk == NULL) {
        return false;
    }

    if (chunk == ctx->ehdr->chunk || chunk == ctx->phdr->chunk || chunk == ctx->shdr->chunk) {
        return false;
    }

    switch (chunk->chunkType) {
        case ChunkTypeOutputSection:
        case ChunkTypeMergedSection:
        case ChunkTypeGotSection:
        case ChunkTypeShStrtab:
        case ChunkTypeSymtab:
        case ChunkTypeStrtab:
            break;
        default:
            return false;
    }

    if (chunk->shdr.Type == SHT_NULL && chunk->chunkType != ChunkTypeShStrtab) {
        return false;
    }

    return true;
}

void Shdr_UpdateShdr(Chunk* c,Context* ctx)
{
    if (ctx->shstrtab == NULL) {
        return;
    }

    OutputShStrtab* tab = ctx->shstrtab;
    ShStrtabReset(tab);

    size_t sectionCount = 1; // NULL section
    for (int i = 0; i < ctx->chunkNum; i++) {
        Chunk *chunk = ctx->chunk[i];
        if (ShouldEmitSectionHeader(ctx, chunk)) {
            sectionCount++;
        }
    }

    if (c->shdrTable.entries != NULL) {
        free(c->shdrTable.entries);
        c->shdrTable.entries = NULL;
        c->shdrTable.count = 0;
    }

    c->shdrTable.entries = (Shdr*)calloc(sectionCount, sizeof(Shdr));
    if (c->shdrTable.entries == NULL) {
        fatal("failed to allocate section headers");
    }
    c->shdrTable.count = sectionCount;

    size_t idx = 1;
    ctx->ShStrtabIndex = 0;

    for (int i = 0; i < ctx->chunkNum; i++) {
        Chunk *chunk = ctx->chunk[i];
        if (!ShouldEmitSectionHeader(ctx, chunk)) {
            continue;
        }

        if (idx >= sectionCount) {
            break;
        }

        Shdr sh = chunk->shdr;
        sh.Name = ShStrtabAppend(tab, chunk->name);

        if (chunk == tab->chunk) {
            if (idx >= SHN_LORESERVE) {
                fatal("section index overflow");
            }
            ctx->ShStrtabIndex = (uint16_t)idx;
        }

        c->shdrTable.entries[idx] = sh;
        idx++;
    }

    if (ctx->ShStrtabIndex == 0) {
        fatal(".shstrtab section header not generated");
    }

    if (idx != c->shdrTable.count) {
        c->shdrTable.count = idx;
    }

    c->shdr.Size = c->shdrTable.count * sizeof(Shdr);
    c->shdr.AddrAlign = 8;
    c->shdr.Type = SHT_NULL;
    c->shdr.Flags = 0;
    c->shdr.Link = 0;
    c->shdr.Info = 0;
    c->shdr.EntSize = sizeof(Shdr);

    tab->chunk->shdr.Size = tab->size;
}

void Shdr_CopyBuf(Chunk* c,Context* ctx)
{
    if (c->shdrTable.entries == NULL || c->shdrTable.count == 0) {
        return;
    }

    memcpy(ctx->buf + c->shdr.Offset, c->shdrTable.entries, c->shdrTable.count * sizeof(Shdr));
}

Chunk *NewChunk()
{
    Chunk *chunk = (Chunk*) malloc(sizeof (Chunk));
    //AddrAlign对齐量为1，以一个字节为对齐,Addr必须被align值整除
    chunk->shdr.AddrAlign = 1;
    chunk->shdr.Addr = 0;
    chunk->shdr.Name = 0;
    chunk->shdr.Size = 0;
    chunk->shdr.EntSize = 0;
    chunk->shdr.Type = 0;
    chunk->shdr.Offset = 0;
    chunk->shdr.Link = 0;
    chunk->shdr.Info = 0;
    chunk->shdr.Flags = 0;
    chunk->chunkType  = 0;
    chunk->name = NULL;

    chunk->outpuSec.members = NULL;
    chunk->outpuSec.memberNum = 0;
    chunk->outpuSec.idx = 0;
//     chunk->idx = 0;
//     chunk->members = NULL;
//     chunk->memberNum = 0;
    chunk->mergedSec.map = HashMapInit();
    chunk->phdrS.phdrNum = 0;
    chunk->phdrS.phdrs = NULL;
    chunk->gotSec.GotTpSyms = NULL;
    chunk->gotSec.TpSymNum = 0;
    chunk->gotSec.GotSyms = NULL;
    chunk->gotSec.GotSymNum = 0;
    chunk->gotSec.GotSyms = NULL;
    chunk->gotSec.GotSymNum = 0;

    chunk->rank = -1;
    chunk->chunkType = 0;
    chunk->shdrTable.entries = NULL;
    chunk->shdrTable.count = 0;

    return chunk;
}

Shdr *GetShdr(Chunk* c)
{
    return &c->shdr;
}

void CopyBuf(Chunk* c,Context* ctx)
{
    if(c->chunkType == ChunkTypeEhdr)
        Ehdr_CopyBuf(c,ctx);
    else if(c->chunkType == ChunkTypeShdr)
        Shdr_CopyBuf(c,ctx);
    else if(c->chunkType == ChunkTypeOutputSection)
        OutputSec_CopyBuf(c,ctx);
    else if(c->chunkType == ChunkTypeMergedSection)
        MergedSec_CopyBuf(c,ctx);
    else if(c->chunkType == ChunkTypePhdr)
        Phdr_CopyBuf(c,ctx);
    else if(c->chunkType == ChunkTypeGotSection)
        GotSec_CopyBuf(c,ctx);
    else if(c->chunkType == ChunkTypeShStrtab)
        ShStrtab_CopyBuf(c,ctx);
    else if(c->chunkType == ChunkTypeStrtab)
        Strtab_CopyBuf(c,ctx);
    else if(c->chunkType == ChunkTypeSymtab)
        Symtab_CopyBuf(c,ctx);
}

void Update(Chunk* c,Context* ctx)
{
    if(c->chunkType == ChunkTypeEhdr)
        ;
    else if(c->chunkType == ChunkTypeShdr)
        Shdr_UpdateShdr(c,ctx);
    else if(c->chunkType == ChunkTypeOutputSection)
        ;
    else if(c->chunkType == ChunkTypePhdr)
        Phdr_UpdateShdr(c,ctx);
    else if(c->chunkType == ChunkTypeMergedSection)
        ;
}

char* GetName(Chunk* c)
{
    return c->name;
}

// Shdr 返回一个section对应的section header的信息
Shdr *shdr_(InputSection* i)
{
    assert(i->shndx < i->objectFile->inputFile->sectionNum);
    return &i->objectFile->inputFile->ElfSections[i->shndx];
}

//1 2 4 8 16
//1 10 100 1000 10000
uint8_t toP2Align(uint64_t align) 
{
    if (align == 0) {
        return 0;
    }
    return __builtin_ctzll(align);
}

InputSection *NewInputSection(Context *ctx,char* name,ObjectFile* file,uint32_t shndx)
{
    InputSection *inputSection = (InputSection*) malloc(sizeof (InputSection));
    inputSection->objectFile = file;
    inputSection->shndx = shndx;
    inputSection->isAlive = true;
    inputSection->offset = UINT32_MAX;
    inputSection->RelsecIdx = UINT32_MAX;
    inputSection->shsize = UINT32_MAX;
    inputSection->relNum = 0;
    inputSection->rels = NULL;

    Shdr *shdr = shdr_(inputSection);
    inputSection->contents = malloc(shdr->Size+1);
    memcpy(inputSection->contents, file->inputFile->file->Contents + shdr->Offset, shdr->Size);
    inputSection->contents[shdr->Size] = '\0';

    assert((shdr->Flags & (uint64_t )2048) == 0);  //SHF_COMPRESSED
    inputSection->shsize = shdr->Size;
    inputSection->isAlive = true;
    inputSection->P2Align = toP2Align(shdr->AddrAlign);
    if ((shdr->Flags & SHF_EXECINSTR) != 0 && inputSection->P2Align < 2) {
        // Ensure code sections request at least 4-byte alignment when merged
        inputSection->P2Align = 2;
    }

    inputSection->outputSection = GetOutputSection(ctx,name,shdr->Type,shdr->Flags);

    return inputSection;
}

// Name 拿到这个inputSection的名字
char* Name(InputSection* inputSection)
{
    return ElfGetName(inputSection->objectFile->inputFile->ShStrtab,shdr_(inputSection)->Name);
}

void CopyContents(InputSection* i,char* buf)
{
    memcpy(buf,i->contents,i->shsize);
}

void WriteTo(InputSection *i,char* buf,Context* ctx)
{
    if(shdr_(i)->Type == SHT_NOBITS || i->shsize == 0)
        return;

    CopyContents(i,buf);

    if((shdr_(i)->Flags & SHF_ALLOC) != 0){
        ApplyRelocAlloc(i,ctx,buf);
    }
}

//static void writeLo12(void* loc, uint32_t diff);

int gLO;

void ApplyRelocAlloc(InputSection* isec,Context* ctx,char* base)
{
    Rela *rels = GetRels(isec);
 //   printf("new\n before: ");
//    uint32_t value1;
//    memcpy(&value1, base, sizeof(uint32_t));
//    printf("test!__  %u\n",value1);
    for(int a = 0; a < isec->relNum;a++){
        Rela rel = rels[a];
        if(rel.Type == 0/*R_RISCV_NONE*/ ||
            rel.Type == 51 /*R_RISCV_RELAX*/){
            continue;
        }

        Symbol *sym = isec->objectFile->inputFile->LocalSymbols[rel.Sym];
        if (sym == NULL)
            continue;
        if (ctx && sym->name && sym->name[0] != '\0') {
            Symbol *canon = GetSymbolByName(ctx, sym->name);
            if (canon) {
                isec->objectFile->inputFile->LocalSymbols[rel.Sym] = canon;
                sym = canon;
            }
        }
        if(sym->file == NULL)
            continue;
        char* loc = base + rel.Offset;

        if(sym->file == NULL)
            continue;

        uint64_t S = Symbol_GetAddr(sym);
        uint64_t A = rel.Addend;
        uint64_t P = InputSec_GetAddr(isec) + rel.Offset;
        DBG("SUCK name %s S %x A %x P %x rel.Type %d\n", sym->name, S, A, P, rel.Type);

        uint32_t tmp = 0;
        uint64_t tmp_64 =0;
        uint64_t val = 0;
        uint64_t value1;
        switch (rel.Type) {
            case 1/*R_RISCV_32*/:
                tmp = S+A;
                Write(loc,sizeof (uint32_t),&tmp);
                break;
            case 2/*R_RISCV_64*/:
                tmp_64 = S+A;
                Write(loc,sizeof (uint64_t),&tmp_64);
                break;
            case 16/*R_RISCV_BRANCH*/:
                tmp = S+A-P;
                writeBtype(loc,tmp);
                break;
            case 17/*R_RISCV_JAL*/:
                tmp = S+A-P;
                writeJtype(loc,tmp);
                break;
            case 18/*R_RISCV_CALL*/:
            case 19/*R_RISCV_CALL_PLT*/:
                tmp = S+A-P;
                writeUtype(loc,tmp);
                writeItype((loc + 4),tmp);
                break;
            case 20/*R_RISCV_GOT_HI20*/: {
                if (sym->gotIdx < 0) {
                    if (!ctx->got)
                        fatal("GOT section missing");
                    AddGotSymbol(ctx->got->chunk, sym);
                }
                tmp = GetGotAddr(ctx,sym) + A - P;
                uint32_t hi = (uint32_t)(((tmp + 0x800) >> 12) & 0xfffff);
                hi = hi << 12;
                int64_t lo = tmp - (hi << 12);
                gLO = lo;
                writeUtype(loc,(uint32_t)hi);
                }
                break;
            case 21/*R_RISCV_TLS_GOT_HI20*/:
                if (sym->gotTpIdx < 0) {
                    if (!ctx->got)
                        fatal("GOT section missing");
                    AddGotTpSymbol(ctx->got->chunk, sym);
                }
                tmp = GetGotAddr(ctx,sym) + A - P;
                uint32_t hi = (uint32_t)(((tmp + 0x800) >> 12) & 0xfffff);
                hi = hi << 12;
                int64_t lo = tmp - (hi << 12);
                gLO = lo;
                writeUtype(loc,(uint32_t)hi);
/*
                tmp = GetGotTpAddr(ctx,sym) + A -P;
                writeUtype(loc,(uint32_t)tmp);
                //writeLo12(loc + 4,(uint32_t)tmp);
*/
                break;
                
            case 23/*R_RISCV_PCREL_HI20*/: {
                int64_t tmp = (int64_t)S + A - P;
                uint32_t hi = (uint32_t)(((tmp + 0x800) >> 12) & 0xfffff);
                writeUtype(loc, hi << 12);
                gLO = tmp - ((int64_t)hi << 12);   // 後続の PCREL_LO12_* 用
                }
                break;
                
            case 26/*R_RISCV_HI20*/: {
                int64_t tmp = (int64_t)S + A;
                uint32_t hi = (uint32_t)(((tmp + 0x800) >> 12) & 0xfffff);
                writeUtype(loc, hi << 12);
                }
                break;
                
            case 27/*R_RISCV_LO12_I*/:
            case 28/*R_RISCV_LO12_S*/:
                val = S+A;
                if(rel.Type == 27)
                    writeItype(loc,(uint64_t)val);
                else
                    writeStype(loc,(uint64_t)val);

                if(SignExtend(val,11) == val)
                    setRs1(loc,0);
                break;
            case 37/*R_RISCV_GPREL_I*/:
            case 38/*R_RISCV_GPREL_S*/:
                if (ctx->GpAddr == 0)
                    fatal("GP-relative relocation but gp is unset");
                val = S + A - ctx->GpAddr;
                if(rel.Type == 37)
                    writeItype(loc,(uint32_t)val);
                else
                    writeStype(loc,(uint32_t)val);
                break;
            case 30/*R_RISCV_TPREL_LO12_I*/:
            case 31/*R_RISCV_TPREL_LO12_S*/:
DBG("30");
                val = S+A-ctx->TpAddr;
                if(rel.Type == 30)
                    writeItype(loc,(uint32_t)val);
                else
                    writeStype(loc,(uint32_t)val);

                if(SignExtend(val,11) == val)
                    setRs1(loc,4);
                break;
            default:
                //printf("other !\n");
                break;
        }
    }

    for(int a = 0; a < isec->relNum;a++) {
        Rela rel = rels[a];
        Symbol *sym = isec->objectFile->inputFile->LocalSymbols[rel.Sym];
        if (sym == NULL)
            continue;
        if (ctx && sym->name && sym->name[0] != '\0') {
            Symbol *canon = GetSymbolByName(ctx, sym->name);
            if (canon) {
                isec->objectFile->inputFile->LocalSymbols[rel.Sym] = canon;
                sym = canon;
            }
        }
        if(sym->file == NULL)
            continue;
        char* loc = base + rel.Offset;
        uint64_t target;
        if (sym->gotIdx >= 0)
            target = GetGotAddr(ctx, sym);
        else if (sym->gotTpIdx >= 0)
            target = GetGotTpAddr(ctx, sym);
        else
            target = Symbol_GetAddr(sym);
        target += rel.Addend;
        uint64_t P = InputSec_GetAddr(isec) + rel.Offset;
        int64_t diff = (int64_t)(target - P);
        uint32_t hi = (uint32_t)(((diff + 0x800) >> 12) & 0xfffff);
        
        switch (rel.Type) {
            case 24/*R_RISCV_PCREL_LO12_I*/:
                writeItype(loc,(uint32_t)gLO);
                //writeItype(loc,(uint32_t)diff);
                break;
            case 25/*R_RISCV_PCREL_LO12_S*/:
                writeItype(loc,(uint32_t)gLO);
                //writeStype(loc,(uint32_t)diff);
                break;
        default:
        }
    }

    for(int a = 0; a < isec->relNum;a++) {
        Rela rel = rels[a];
        char *loc = base + rel.Offset;
        uint32_t val = 0;
        uint32_t tmp = 0;
        switch (rel.Type) {
            case 23/*R_RISCV_PCREL_HI20*/:
            case 21/*R_RISCV_TLS_GOT_HI20*/:
                Read(&val,loc,sizeof(uint32_t));
                Read(&tmp,isec->contents + rel.Offset,sizeof (uint32_t));
                Write(loc,sizeof (uint32_t),&tmp);
                writeUtype(loc,val);
                break;
        }
    }
}

Rela *GetRels(InputSection* i)
{
    if(i->RelsecIdx == UINT32_MAX || i->rels != NULL){
        return i->rels;
    }

    char* bs = GetBytesFromShdr(i->objectFile->inputFile,&i->objectFile->inputFile->ElfSections[i->RelsecIdx]);
    uint64_t numbs = (i->objectFile->inputFile->ElfSections[i->RelsecIdx].Size) / sizeof (Rela);
    uint64_t total = numbs;
    DBG("GetRels: section=%s relocs=%lu\n", Name(i), (unsigned long)numbs);
    i->rels = (Rela*) malloc(sizeof (Rela) * numbs);
    while (numbs > 0){
        Read(&i->rels[i->relNum],bs,sizeof(Rela));
        bs += sizeof(Rela);
        numbs--;
        i->relNum++;
//        if ((i->relNum & 0x3ff) == 0) {
            DBG("GetRels: section=%s loaded=%d/%lu\n",
                Name(i),
                i->relNum,
                (unsigned long)total);
//        }
    }
    return i->rels;
}

uint64_t InputSec_GetAddr(InputSection* i)
{
    return i->outputSection->chunk->shdr.Addr + i->offset;
}

void ScanRelocations__(Context* ctx,InputSection* isec)
{
    GetRels(isec);
    DBG("ScanRelocations__: section=%s relNum=%d\n",
        Name(isec),
        isec->relNum);
    for(int i=0; i<isec->relNum;i++){
        if ((i & 0x7ff) == 0) {
            DBG("ScanRelocations__: section=%s progress=%d/%d\n",
                Name(isec), i, isec->relNum);
        }
        Rela rel = isec->rels[i];
        Symbol *sym = isec->objectFile->inputFile->LocalSymbols[rel.Sym];
        if (sym == NULL)
            continue;
        if (ctx && sym->name && sym->name[0] != '\0') {
            Symbol *canon = GetSymbolByName(ctx, sym->name);
            if (canon) {
                DBG("ScanRelocations__: canonical %s file=%s\n",
                    sym->name,
                    canon->file && canon->file->inputFile ? canon->file->inputFile->file->Name : "<none>");
                isec->objectFile->inputFile->LocalSymbols[rel.Sym] = canon;
                sym = canon;
            }
        }
        if(sym->file == NULL)
            continue;

        if(rel.Type == 21/*R_RISCV_TLS_GOT_HI20*/){
            DBG("ScanRelocations__: TLS GOT sym=%s\n", sym->name ? sym->name : "<noname>");
            sym->flags |= SYMBOL_FLAG_GOT_TP;
        } else if (rel.Type == 20/*R_RISCV_GOT_HI20*/) {
            DBG("ScanRelocations__: GOT sym=%s\n", sym->name ? sym->name : "<noname>");
            sym->flags |= SYMBOL_FLAG_GOT;
        }
    }
    //printf("relNUm %d\n",isec->relNum);
}

uint32_t itype(uint32_t val)
{
    return val << 20;
}

uint32_t stype(uint32_t val)
{
    return Bits_32(val,11,5) << 25 | Bits_32(val,4,0) << 7;
}

uint32_t btype(uint32_t val)
{
    return Bit_32(val,12) << 31 | Bits_32(val,10,5) << 25 |
            Bits_32(val,4,1) << 8 | Bit_32(val,11) << 7;
}

uint32_t utype(uint32_t val)
{
    return (val + 0x800) & 0xfffff000;
}

uint32_t jtype(uint32_t val)
{
    return Bit_32(val,20) << 31 | Bits_32(val,10,1) << 21 |
            Bit_32(val,11) << 20 | Bits_32(val,19,12) << 12;
}

static void writeLo12(void* loc, uint32_t diff)
{
    uint32_t inst;
    Read(&inst, loc, sizeof(uint32_t));
    uint32_t opcode = inst & 0x7f;
    if (opcode == 0x23) {
        writeStype(loc, diff);
    } else {
        writeItype(loc, diff);
    }
}

void writeItype(void* loc, uint32_t val) 
{
    uint32_t mask = 0b00000000000011111111111111111111;
    uint32_t v ;
    Read(&v,loc,sizeof (uint32_t));
    v = (v & mask) | itype(val);
    Write(loc,sizeof (uint32_t),&v);
}

void writeStype(void* loc, uint32_t val) 
{
    uint32_t mask = 0b0000001111111111111000001111111;
    uint32_t v ;
    Read(&v,loc,sizeof (uint32_t));
    v = (v & mask) | stype(val);
    Write(loc,sizeof (uint32_t),&v);
}

void writeBtype(void* loc, uint32_t val) 
{
    uint32_t mask = 0b0000001111111111111000001111111;
    uint32_t v ;
    Read(&v,loc,sizeof (uint32_t));
    v = (v & mask) | btype(val);
    Write(loc,sizeof (uint32_t),&v);
}

void writeUtype(void* loc, uint32_t val) 
{
    uint32_t mask = 0b0000000000000000000111111111111;
    uint32_t v ;
    Read(&v,loc,sizeof (uint32_t));
    v = (v & mask) | utype(val);
    Write(loc,sizeof (uint32_t),&v);
}

void writeJtype(void* loc, uint32_t val) 
{
    uint32_t mask = 0b0000000000000000000111111111111;
    uint32_t v ;
    Read(&v,loc,sizeof (uint32_t));
    v = (v & mask) | jtype(val);
    Write(loc,sizeof (uint32_t),&v);
}

void setRs1(void* loc,uint32_t rs1)
{
    uint32_t mask = 0b1111111111100000111111111111111;
    uint32_t v ;
    Read(&v,loc,sizeof (uint32_t));
    v = v & mask;
    Write(loc,sizeof (uint32_t),&v);

    Read(&v,loc,sizeof (uint32_t));
    v = v | rs1 << 15;
    Write(loc,sizeof (uint32_t),&v);
}

Symbol *NewSymbol(char* name)
{
    Symbol *symbol = (Symbol*) malloc(sizeof (Symbol));
    if (symbol == NULL) {
        DBG("NewSymbol: malloc failed for %s\n", name ? name : "<null>");
        return NULL;
    }
    symbol->name = name;
    DBG("NewSymbol: name is %s\n", name);
    symbol->symIdx = -1;
    symbol->file = NULL;
    symbol->inputSection = NULL;
    symbol->value = 0;
    symbol->sectionFragment = NULL;
    symbol->flags = 0;
    symbol->gotIdx = -1;
    symbol->gotTpIdx = -1;
    return symbol;
}

Symbol *GetSymbolByName(Context* ctx,char* name)
{
    //如果symbolMap中已存，直接拿
    if(HashMapContain(ctx->SymbolMap,name)){
        DBG("GetSymbolByName: hit %s\n", name ? name : "<null>");
        return HashMapGet(ctx->SymbolMap,name);
    }

    //否则创建一个新symbol，目前还是初始化状态
    Symbol *sym = NewSymbol(name);
    if (sym == NULL) {
        fatal("GetSymbolByName: NewSymbol failed for %s", name ? name : "<null>");
    }
    if (!HashMapPut(ctx->SymbolMap,name, sym)) {
        fatal("GetSymbolByName: HashMapPut failed for %s", name ? name : "<null>");
    }
    DBG("GetSymbolByName: miss %s new=%p\n", name ? name : "<null>", (void*)sym);
    return HashMapGet(ctx->SymbolMap,name);
}

//返回这个symbol对应的一个Elf32_Sym条目
ElfSym *GetElfSymbol(Symbol* s)
{
    assert(s->symIdx < s->file->inputFile->ElfSymNum);
    return &s->file->inputFile->ElfSyms[s->symIdx];
}

void clear(Symbol* s)
{
    s->file = NULL;
    s->symIdx = -1;
    s->inputSection = NULL;
    s->sectionFragment = NULL;
}

uint64_t Symbol_GetAddr(Symbol* s)
{
    if(s->sectionFragment != NULL)
        return SectionFragment_GetAddr(s->sectionFragment) + s->value;

    if(s->inputSection != NULL)
        return InputSec_GetAddr(s->inputSection) + s->value;

    return s->value;
}

uint64_t GetGotTpAddr(Context* ctx,Symbol* s)
{
    return ctx->got->chunk->shdr.Addr + s->gotTpIdx * 8;
}

//thread local storage TLS段也会把数据存到.got , libC中很多

GotSection *NewGotSection()
{
    GotSection *gotSection = (GotSection*) malloc(sizeof (GotSection));
    gotSection->chunk = NewChunk();
    gotSection->chunk->name = malloc(sizeof (".got") + 1);
    strcpy(gotSection->chunk->name,".got");
    gotSection->chunk->shdr.Type = SHT_PROGBITS;
    gotSection->chunk->shdr.Flags = SHF_ALLOC | SHF_WRITE;
    gotSection->chunk->shdr.AddrAlign = 8;
    gotSection->chunk->chunkType = ChunkTypeGotSection;
    return gotSection;
}

//向GotTpSyms中增加一个元素
void AddGotTpSymbol(Chunk* chunk, Symbol* sym)
{
    if (sym->gotTpIdx >= 0)
        return;
    sym->gotTpIdx = chunk->shdr.Size / 8;
    chunk->shdr.Size += 8;
    if (chunk->shdr.AddrAlign < 8)
        chunk->shdr.AddrAlign = 8;
    chunk->gotSec.GotTpSyms = realloc(chunk->gotSec.GotTpSyms,sizeof (Symbol*) * (chunk->gotSec.TpSymNum + 1));
    chunk->gotSec.GotTpSyms[chunk->gotSec.TpSymNum] = sym;
    chunk->gotSec.TpSymNum++;
}

void AddGotSymbol(Chunk* chunk, Symbol* sym)
{
    if (sym->gotIdx >= 0)
        return;
    sym->gotIdx = chunk->shdr.Size / 8;
    chunk->shdr.Size += 8;
    if (chunk->shdr.AddrAlign < 8)
        chunk->shdr.AddrAlign = 8;
    chunk->gotSec.GotSyms = realloc(chunk->gotSec.GotSyms,sizeof (Symbol*) * (chunk->gotSec.GotSymNum + 1));
    chunk->gotSec.GotSyms[chunk->gotSec.GotSymNum] = sym;
    chunk->gotSec.GotSymNum++;
    DBG("AddGotSymbol: %s idx=%d file=%s\n",
        sym->name ? sym->name : "<noname>",
        sym->gotIdx,
        sym->file && sym->file->inputFile ? sym->file->inputFile->file->Name : "<none>");
}

GotEntry *GetEntries(Chunk *chunk,Context* ctx,int* num)
{
    GotEntry *entries = NULL;
    for(int i =0; i< chunk->gotSec.TpSymNum;i++){
        Symbol *sym = chunk->gotSec.GotTpSyms[i];
        uint32_t idx = sym->gotTpIdx;
        entries = (GotEntry*) realloc(entries,sizeof (GotEntry) * ((*num) + 1));
        GotEntry gotEntry ;
        gotEntry.idx = idx;
        gotEntry.val = Symbol_GetAddr(sym) -ctx->TpAddr;
        entries[*num] = gotEntry;
        (*num)++;
    }
    return entries;
}

void GotSec_CopyBuf(Chunk* c,Context* ctx)
{
    char* base = ctx->buf + c->shdr.Offset;

    DBG("GotSec_CopyBuf: chunk size=%lu offset=0x%lx\n",
        (unsigned long)c->shdr.Size,
        (unsigned long)c->shdr.Offset);

    for(int i =0; i< c->gotSec.GotSymNum;i++){
        Symbol *sym = c->gotSec.GotSyms[i];
        if (sym == NULL || sym->gotIdx < 0)
            continue;
        uint64_t val = Symbol_GetAddr(sym);
        DBG("GotSec_CopyBuf: %s idx=%d val=0x%lx\n",
            sym->name ? sym->name : "<noname>",
            sym->gotIdx,
            (unsigned long)val);
        Write(base + sym->gotIdx * 8,sizeof (uint64_t),&val);
    }

    int num =0 ;
    GotEntry *entries = GetEntries(c,ctx,&num);
    for(int i=0; i< num;i++){
        GotEntry ent = entries[i];
        Write(base + ent.idx*8 ,sizeof (uint64_t),&ent.val);
    }
    free(entries);
}

uint64_t GetGotAddr(Context* ctx,Symbol* s)
{
    if (s->gotIdx < 0)
        fatal("symbol has no GOT entry");
    return ctx->got->chunk->shdr.Addr + (uint64_t)s->gotIdx * 8;
}

static uint64_t findWritableAllocBase(Context* ctx) 
{
    uint64_t base = UINT64_MAX;
    for (int i = 0; i < ctx->chunkNum; i++) {
        Chunk *chunk = ctx->chunk[i];
        Shdr *shdr = GetShdr(chunk);
        if ((shdr->Flags & SHF_ALLOC) == 0)
            continue;
        if ((shdr->Flags & SHF_WRITE) == 0)
            continue;
        if (shdr->Size == 0)
            continue;
        if (shdr->Addr < base)
            base = shdr->Addr;
    }
    if (base == UINT64_MAX)
        return 0;
    return base;
}

void FinalizeGlobalPointer(Context* ctx)
{
    uint64_t base = findWritableAllocBase(ctx);
    if (base == 0 && ctx->got && (ctx->got->chunk->shdr.Flags & SHF_ALLOC))
        base = ctx->got->chunk->shdr.Addr;
    if (base == 0)
        return;

    ctx->GpAddr = base + 0x800;

    if (!HashMapContain(ctx->SymbolMap, "__global_pointer$"))
        return;
    Symbol *gp = HashMapGet(ctx->SymbolMap, "__global_pointer$");
    if (!gp)
        return;

    gp->value = ctx->GpAddr;
    gp->inputSection = NULL;
    gp->sectionFragment = NULL;
}

Context* NewContext()
{
    DBG("NewContext: start\n");
    Context* ctx = (Context*)malloc(sizeof(Context));
    if (ctx == NULL) {
        DBG("NewContext: malloc failed\n");
        return NULL;
    }
    DBG("NewContext: ctx=%p size=%llu\n", (void*)ctx, (unsigned long long)sizeof(Context));

    ctx->Args.Output = "a.out";
    ctx->Args.Emulation = 0;
    ctx->Args.LibraryPathsCount=0;
    ctx->Args.Entry = NULL;
    DBG("NewContext: initializing SymbolMap\n");
    ctx->SymbolMap = HashMapInit();
    if (ctx->SymbolMap == NULL) {
        DBG("NewContext: HashMapInit failed\n");
        fatal("failed to initialize symbol map");
    }
    HashMapSetHash(ctx->SymbolMap, hash_string_key);
    HashMapSetCompare(ctx->SymbolMap, compare_string_key);
    DBG("NewContext: SymbolMap=%p\n", (void*)ctx->SymbolMap);
    ctx->Args.LibraryPaths = NULL;
    ctx->ObjsCount = 0;
    ctx->Objs = NULL;
    ctx->mergedSectionNum = 0;
    ctx->mergedSections = NULL;

    ctx->chunk = NULL;
    ctx->chunkNum = 0;
    ctx->buf = NULL;
    ctx->ehdr = NULL;
    ctx->shdr = NULL;
    ctx->phdr = NULL;
    ctx->outputSections = NULL;
    ctx->outputSecNum = 0;
    ctx->TpAddr = 0;
    ctx->GpAddr = 0;
    ctx->got = NULL;
    ctx->shstrtab = NULL;
    ctx->strtab = NULL;
    ctx->symtab = NULL;
    ctx->ShStrtabIndex = 0;
    DBG("NewContext: done\n");
    return ctx;
}

// 实现追加字符串的函数
void appendLibraryPath(Context* ctx, char* arg) 
{

    ctx->Args.LibraryPaths = (char**)realloc(ctx->Args.LibraryPaths, (ctx->Args.LibraryPathsCount + 1) * sizeof(char*));

    ctx->Args.LibraryPaths[ctx->Args.LibraryPathsCount] = (char*)malloc((strlen(arg) + 1) * sizeof(char));

    strcpy(ctx->Args.LibraryPaths[ctx->Args.LibraryPathsCount], arg);

    ++ctx->Args.LibraryPathsCount;
}

File* NewFile(const char* filename) 
{
    File* file = (File*)malloc(sizeof(File));
    char* contents = ReadFile(filename,&file->contents_len);
    if (contents == NULL) {
        return NULL;
    }

    file->Name = strdup(filename);
    file->Contents = contents;

    return file;
}

File* OpenLibrary(const char* filepath) 
{
    File* library = (File*)malloc(sizeof(File));
    char* contents = ReadFile(filepath, &library->contents_len);
    if (contents == NULL) {
        return NULL;
    }
    if (library == NULL) {
      //  free(contents);
        return NULL;
    }

    library->Name = strdup(filepath);
    library->Contents = contents;

    return library;
}

// FindLibrary 返回一个.a文件的file
File* FindLibrary(Context* ctx, const char* name) 
{
    for (size_t i = 0; i < ctx->Args.LibraryPathsCount; i++) {
        const char* dir = ctx->Args.LibraryPaths[i];
        size_t stemSize = strlen(dir) + strlen("/lib") + strlen(name) + strlen(".a") + 1;
        char* stem = (char*)malloc(stemSize);
        if (stem == NULL) {
            fatal("Failed to allocate memory");
            return NULL;
        }

        snprintf(stem, stemSize, "%s/lib%s.a", dir, name);

        File* library = OpenLibrary(stem);

        if (library != NULL) {
           // printf("lib : %s\n",stem);
            free(stem);
            return library;
        }
        free(stem);
    }

    fatal("Library not found");
    return NULL;
}

MergedSection *NewMergedSection(char* name , uint64_t flags , uint32_t typ)
{
    MergedSection *mergedSection = (MergedSection*) malloc(sizeof (MergedSection));
    //mergedSection->map = HashMapInit();
    mergedSection->chunk = NewChunk();

    //直接赋值
    mergedSection->chunk->name = name;
    mergedSection->chunk->shdr.Flags = flags;
    mergedSection->chunk->shdr.Type = typ;
    mergedSection->chunk->chunkType = ChunkTypeMergedSection;
    return mergedSection;
}

//单例
MergedSection* find(Context* ctx,char* name,uint32_t typ,uint64_t flags) 
{
    for (size_t i = 0; i < ctx->mergedSectionNum; i++) {
        MergedSection* osec = ctx->mergedSections[i];
        if (strcmp(name, osec->chunk->name) == 0 && flags == osec->chunk->shdr.Flags &&
            typ == osec->chunk->shdr.Type) {
            return osec;
        }
    }
    return NULL;
}

//单例模式找到一个name section对应的merged section
MergedSection *GetMergedSectionInstance(Context* ctx, char* name,uint32_t typ,uint64_t flags)
{
    name = GetOutputName(name,flags);

    flags = flags & ~(SHF_GROUP) & ~(SHF_MERGE) &
            ~(SHF_STRINGS) & ~(2048);

    MergedSection *osec = find(ctx,name,typ,flags);
    if(osec != NULL)
        return osec;

    //v printf("nnnnname %s\n",name);
    osec = NewMergedSection(name,flags,typ);
    ctx->mergedSections = (struct MergedSection_**)realloc(ctx->mergedSections, (ctx->mergedSectionNum + 1) * sizeof(struct MergedSection_*));
    if(ctx->mergedSections == NULL)
        fatal("null mergedSection");
    ctx->mergedSections[ctx->mergedSectionNum] = osec;
    ctx->mergedSectionNum++;
    return osec;
}

void printBytes(const char* str, size_t length) 
{
    printf("%s\t",str);
    printf("Bytes__: ");
    for (size_t i = 0; i < length; i++) {
        printf("%02X ", (unsigned char)str[i]);
    }
    printf("finish\n");
}

char* checke(HashMap* map,char* key,int len)
{
    HashMapFirst(map);
    for(Pair *p = HashMapNext(map); p!=NULL; p= HashMapNext(map)){
        SectionFragment *frag = p->value;
        if(frag->strslen == len && memcmp(p->key,key,len)==0)
            return p->key;
    }
    return NULL;
}

// Insert 向merged section插一个section fragment
// key是split section中的原数据
SectionFragment *Insert(MergedSection* m,char* key,uint32_t p2align,int strslen)
{
    SectionFragment *frag = NULL;

    char* kk = checke(m->chunk->mergedSec.map,key,strslen);
    if(kk == NULL){
        frag = NewSectionFragment(m);
        frag->strslen = strslen;
        HashMapPut(m->chunk->mergedSec.map,key,frag);
        //printBytes(key,strslen);
        //printf("key is %s , file %s\n",key,m->chunk->name);
    } else {
        frag = HashMapGet(m->chunk->mergedSec.map,kk);
    }

    if(frag->P2Align < p2align){
        frag->P2Align = p2align;
    }

    return frag;
}

// AssignOffsets 计算各个section fragment的offset
void AssignOffsets(MergedSection* m)
{
    Fragment **fragments;
    fragments = (Fragment**) malloc(sizeof (Fragment*) * HashMapSize(m->chunk->mergedSec.map));
    HashMapFirst(m->chunk->mergedSec.map);

    int numFragments = 0;
    for(Pair* p = HashMapNext(m->chunk->mergedSec.map); p!=NULL; p = HashMapNext(m->chunk->mergedSec.map)){
        Fragment *fragment = (Fragment*) malloc(sizeof (Fragment));
        //fragment->key = HashMapGet(mergedMap,p->key);
        fragment->key = p->key;
        fragment->val = p->value;
        fragments[numFragments] = fragment;
        numFragments++;
    }

    //sort.SliceStable(fragments, func(i, j int) bool {
    //		x := fragments[i]
    //		y := fragments[j]
    //		if x.Val.P2Align != y.Val.P2Align {
    //			return x.Val.P2Align < y.Val.P2Align
    //		}
    //		if len(x.Key) != len(y.Key) {
    //			return len(x.Key) < len(y.Key)
    //		}
    //
    //		return x.Key < y.Key
    //	})

   // printf("n %d\n",numFragments);
    //对fragment进行排序
    for (int i = 0; i < numFragments - 1; i++) {
        for (int j = 0; j < numFragments - i - 1; j++) {
            Fragment* x = fragments[j];
            Fragment* y = fragments[j + 1];

            //1.首先对齐小的排在前面
            if (x->val->P2Align != y->val->P2Align) {
                if (x->val->P2Align > y->val->P2Align) {
                    // 交换两个元素的位置
                    Fragment* temp = fragments[j];
                    fragments[j] = fragments[j + 1];
                    fragments[j + 1] = temp;
                }
            }
            //2.key长度小的排在前面
            else if (x->val->strslen != y->val->strslen) {
                if (x->val->strslen > y->val->strslen) {
                    // 交换两个元素的位置
                    Fragment* temp = fragments[j];
                    fragments[j] = fragments[j + 1];
                    fragments[j + 1] = temp;
                }
            }
            else if (memcmp(x->key, y->key,x->val->strslen) > 0) {
                // 交换两个元素的位置
                Fragment* temp = fragments[j];
                fragments[j] = fragments[j + 1];
                fragments[j + 1] = temp;
            }

        }
    }

    uint64_t offset = 0;
    uint64_t p2align = 0;
    //printf("num %d\n",numFragments);
    for(int i=0; i< numFragments;i++){
        Fragment *frag = fragments[i];
        offset = AlignTo(offset, 1 << frag->val->P2Align);
        //printf("name %s , offset %lu\n",m->chunk->name,offset);
        frag->val->Offset = offset;
        //printf("name %s , offset %d\n",frag->key,offset);
        //printBytes(frag->key,frag->val->strslen);
        offset += frag->val->strslen;
        if(p2align < frag->val->P2Align){
            p2align = frag->val->P2Align;
        }
    }

    m->chunk->shdr.Size = AlignTo(offset,1<<p2align);
    m->chunk->shdr.AddrAlign = 1<<p2align;
}

void MergedSec_CopyBuf(Chunk* c,Context* ctx)
{
    char* buf = ctx->buf + c->shdr.Offset;

    HashMapFirst(c->mergedSec.map);
    for(Pair* p = HashMapNext(c->mergedSec.map); p!=NULL; p = HashMapNext(c->mergedSec.map)){
        //char* key = HashMapGet(mergedMap,p->key);
        SectionFragment *frag = p->value;
        memcpy(buf+frag->Offset,p->key,frag->strslen);
    }
}

char* GetOutputName(char* name, uint64_t flags) 
{
    const char* prefixes_[] = {
            ".text.", ".data.rel.ro.", ".data.", ".rodata.", ".bss.rel.ro.", ".bss.",
            ".init_array.", ".fini_array.", ".tbss.", ".tdata.", ".gcc_except_table.",
            ".ctors.", ".dtors."
    };

    //merge-able section一定是readonly的
    if ((strcmp(name, ".rodata") == 0 || strncmp(name, ".rodata.", 8) == 0) && (flags & SHF_MERGE) != 0) {
        if ((flags & SHF_STRINGS) != 0) {
            return ".rodata.str";
        } else {
            return ".rodata.cst";
        }
    }

    //.text或者.text.1 .text.* , 返回.text
    //即都将这些section映射到.text
    //多对一的映射，即多个inputsection映射到一个outputsection中
    size_t prefixesCount = sizeof(prefixes_) / sizeof(prefixes_[0]);
    for (size_t i = 0; i < prefixesCount; i++) {
        const char* prefix = prefixes_[i];
        size_t prefixLength = strlen(prefix);
        char* stem = malloc(strlen(prefix));
        strncpy(stem,prefix, strlen(prefix)-1);
        stem[strlen(prefix) - 1] = '\0';

        if (prefixLength > 0) {
            prefixLength--;
            if (strcmp(name, stem) == 0 || strncmp(name, prefix, prefixLength) == 0) {
               // printf("_stem %s\n",stem);
                return stem;
            }
        } else {
            //prefixLength = 0
            //printf("prefixLength : %zu\n",prefixLength);
            if (strcmp(name, stem) == 0) {
               // printf("_stem %s\n",stem);
                return stem;
            }
        }
    }

   // printf("_name %s\n",name);
    return name;
}

const char* MachineType_String(MachineType m) 
{
    switch (m) {
        case MachineTypeRISCV64:
            return "riscv64";
    }

    return "none";
}

MachineType GetMachineTypeFromContents(const char* contents)
{
    FileType ft = GetFileType(contents);

    switch (ft) {
        case FileTypeObject: {
            uint16_t machine;
            Read(&machine, contents + 18, sizeof(uint16_t));
            if (machine == 243) { // Replace with actual value of elf.EM_RISCV
                uint8_t class = contents[4];
                switch (class) {
                    case 2: // Replace with actual value of elf.ELFCLASS64
                        return MachineTypeRISCV64;
                }
            }
        }
        break;
        default:
            return MachineTypeNone;
    }
    return MachineTypeNone;
}

void fatal(const char* format, ...) 
{
    va_list args;
    va_start(args, format);

    printf("fatal: ");
    vprintf(format, args);
    printf("\n");

    va_end(args);

    exit(1);
}

// Function to read the entire content of a file into a dynamically allocated buffer
char* ReadFile(const char* filename,uint64_t *len) 
{
    FILE* file;
    char* buffer;
    size_t file_size;

    // Open the file
    file = fopen(filename, "rb");
    if (file == NULL) {
        //perror("Error opening file");
        return NULL;
    }

    // Find the size of the file
    fseek(file, 0, SEEK_END);
    file_size = ftell(file);
    rewind(file);

    // Allocate memory for the entire content
    buffer = (char*)malloc(file_size + 1);
    if (buffer == NULL) {
        perror("Memory allocation failed");
        fclose(file);
        return NULL;
    }

    // Read the file into the buffer
    if (fread(buffer, 1, file_size, file) != file_size) {
        perror("Error reading file");
        free(buffer);
        fclose(file);
        return NULL;
    }

    // Null-terminate the buffer
    buffer[file_size] = '\0';
    *len = file_size;

    // Close the file
    fclose(file);
    return buffer;
}

void Read(void* out, const void* data, size_t size) 
{
    // Assuming little-endian format
    memcpy(out, data, size);
}

char** appendToRemaining(char** remaining, const char* arg,bool l) 
{
    size_t length = 0;

    // 计算 remaining 的长度
    while (remaining && remaining[length] != NULL) {
        length++;
    }

    // 分配新的内存来存储扩展后的 remaining
    char** newRemaining = (char**)realloc(remaining, sizeof(char*) * (length + 2));

    char* newEntry = NULL;
    if(l){
        // 在新的 remaining 中添加 "-l"+arg
        newEntry = (char*)malloc(strlen(arg) + 3); // 预留 3 字节用于 "-l" 前缀
        strcpy(newEntry, "-l");
        strcat(newEntry, arg);
    } else {
        // 预留结尾的 '\0'
        newEntry = (char*)malloc(strlen(arg) + 1);
        strcpy(newEntry,arg);
    }
    newRemaining[length] = newEntry;
    newRemaining[length + 1] = NULL; // remaining 最后一个元素置为 NULL

    return newRemaining;
}

// 移除字符串前缀
char* removePrefix(const char* s, const char* prefix) 
{
    size_t prefixLen = strlen(prefix);
    size_t sLen = strlen(s);

    // 检查 s 是否以 prefix 开头
    if (strncmp(s, prefix, prefixLen) == 0) {
        // 动态分配内存以存储移除前缀后的字符串
        char* result = (char*)malloc(sLen - prefixLen + 1);
        strcpy(result, s + prefixLen);
        return result;
    }

    // 如果不是以 prefix 开头，动态分配内存以存储原始字符串
    char* result = (char*)malloc(sLen + 1);
    strcpy(result, s);
    return result;
}

// 检查字符串是否以指定前缀开头
bool hasPrefix(const char* s, const char* prefix) 
{
    size_t prefixLen = strlen(prefix);

    // 检查 s 是否以 prefix 开头
    if (strncmp(s, prefix, prefixLen) == 0) {
        return true;
    }

    return false;
}

int endsWith(const char *str, const char *suffix) 
{
    int str_len = strlen(str);
    int suffix_len = strlen(suffix);

    if (str_len >= suffix_len && strcmp(str + str_len - suffix_len, suffix) == 0) {
        return 1; // 字符串以指定后缀结尾
    } else {
        return 0; // 字符串不以指定后缀结尾
    }
}

static unsigned hash_string_key(void* key) 
{
    if (key == NULL) {
        return 0;
    }

    const unsigned char* s = (const unsigned char*)key;
    unsigned hashValue = 2166136261u;
    while (*s) {
        hashValue ^= *s++;
        hashValue *= 16777619u;
    }
    return hashValue;
}

static int compare_string_key(void* lhs, void* rhs) 
{
    if (lhs == rhs) {
        return 0;
    }
    if (lhs == NULL) {
        return -1;
    }
    if (rhs == NULL) {
        return 1;
    }
    return strcmp((const char*)lhs, (const char*)rhs);
}

uint64_t AlignTo(uint64_t val, uint64_t align) 
{
    if (align == 0) {
        return val;
    }

    return (val + align - 1) & /*clear bit*/(~(align - 1));
}

void Write(void* data, size_t dataSize, void* element) 
{
    memcpy(data, element, dataSize);
}

uint32_t Bit_32(uint32_t val, int pos) 
{
    return (val >> pos) & 1;
}

uint32_t Bits_32(uint32_t val, uint32_t hi, uint32_t lo) 
{
    return (val >> lo) & ((1 << (hi - lo + 1)) - 1);
}

uint64_t SignExtend(uint64_t val,int size)
{
    return (uint64_t)((int64_t)(val << (63 - size)) >> (63-size));
}

char** dashes(const char* name) 
{
    // 分配足够的内存来存储带有单破折号和双破折号的参数
    char** result = (char**)malloc(3 * sizeof(char*));
    result[0] = (char*)malloc((strlen(name) + 2) * sizeof(char));
    result[1] = (char*)malloc((strlen(name) + 3) * sizeof(char));
    result[2] = NULL;

    // 填充参数
    sprintf(result[0], "-%s", name);
    sprintf(result[1], "--%s", name);

    return result;
}
int readFlag(const char* name, char*** args) 
{
    char** opts = dashes(name);

    for (int i = 0; opts[i]; i++) {
        if (*args[0] && strcmp(*args[0], opts[i]) == 0) {
            (*args)++;

          //  printf("flag : %s\n",name);
            return 1; // 找到选项
        }
    }

    return 0; // 未找到选项
}

// 实现 readArg 函数
int readArg(const char* name, char*** args, char** arg) 
{
    char** opts = dashes(name);


    for(int i = 0; opts[i]; i++){
//        char* t1 = *(args[0]);
//        char* t2 = opts[i];
        if(strcmp(*(args[0]),opts[i])==0){
            if(strlen(*(args[0])) == 1)
                fatal("arg missing\n");
            *arg = (*args)[1];
            (*args) += 2;

//            printf("\nname : %s\n",name);
//            printf("args : %s\n",*arg);
            return 1;
        }

        char* prefix =opts[i];
        if (name[1] != '\0') {
            // 对于长选项，在前缀后添加 '=' 符号
            size_t len = strlen(opts[i]) + 2; // 包括字符串结束符 '\0' 和 '=' 符号
            char* tempPrefix = (char*)malloc(len);
            snprintf(tempPrefix, len, "%s=", opts[i]);
            prefix = tempPrefix;
        }

        if (strncmp((*args)[0], prefix, strlen(prefix)) == 0) {
            *arg = (*args)[0] + strlen(prefix);
            (*args) += 1;

//            printf("\nname : %s\n",name);
//            printf("args : %s\n",*arg);
            return 1;
        }
    }

    return 0; // 未找到选项
}

char** parseArgs(int argc, char* argv[],Context* ctx)
{
    char** remaining = NULL;
    //忽略第一个
    argv += 1;

    while (argv[0] != NULL){
        char *arg;
        if(readArg("output",&argv,&arg) || readArg("o",&argv,&arg)){
            ctx->Args.Output = malloc(strlen(arg)+1);
            strcpy(ctx->Args.Output,arg);
        } else if(readArg("m",&argv,&arg)){
            if(strcmp(arg,"elf64lriscv")==0){
                ctx->Args.Emulation = MachineTypeRISCV64;
                printf("%s\n",MachineType_String(ctx->Args.Emulation));
            } else
                fatal("unknown -m arg\n");
        } else if(readArg("e",&argv,&arg)){
            ctx->Args.Entry = malloc(strlen(arg)+1);
            strcpy(ctx->Args.Entry,arg);
        }else if (readArg("L",&argv,&arg)) {
//            printf("%s\n",argv[0]);
//            printf("arg : %s\n",arg);
            appendLibraryPath(ctx,arg);
        } else if (readArg("l",&argv,&arg)) {
            remaining = appendToRemaining(remaining,arg,true);
        }
        else if (readArg("sysroot",&argv,&arg) ||
                 readFlag("static",&argv) ||
                readArg("z",&argv,&arg) ||
                readArg("plugin",&argv,&arg) ||
                 readArg("plugin-opt",&argv,&arg) ||
                 readFlag("as-needed",&argv) ||
                 readFlag("start-group",&argv) ||
                 readFlag("end-group",&argv) ||
                 readArg("hash-style",&argv,&arg) ||
                 readArg("build-id",&argv,&arg) ||
                 readFlag("s",&argv) ||
                 readFlag("no-relax",&argv) ||
                 readFlag("v",&argv) || readFlag("version",&argv)){
            // Ignored
        } else{
            if(argv[0][0] == '-'){
                printf("%s\n",argv[0]);
                fatal("wrong arg!!!!\n");
            }

            //.so不处理了
            if(!endsWith(argv[0],"so")){
                remaining = appendToRemaining(remaining,argv[0],false);
            }
            argv += 1;
        }
    }

    //TODO filepath clean
//    for(int j = 0;j<ctx->Args.LibraryPathsCount;j++){
//
//    }
    return remaining;
}

int main(int argc, char* argv[]) 
{
    DBG("main: argc=%d\n", argc);
    if(argc < 2) fatal("less args\n");

    Context *ctx = NewContext();
    DBG("main: context initialized\n");
    char **remaining = parseArgs(argc,argv,ctx);
    DBG("main: parseArgs done, remaining=%d\n", DebugCountArgs(remaining));

    if (ctx->Args.Emulation == MachineTypeNone) {
        for (int i = 0; remaining[i]!=NULL; i++) {
            const char* filename = remaining[i];
            if (filename[0] == '-' && filename[1] != '\0') {
                continue;
            }

            File* file= NewFile(filename);
            ctx->Args.Emulation = GetMachineTypeFromContents(file->Contents);
            DBG("main: probed %s -> emulation=%d\n", filename, ctx->Args.Emulation);
            if (ctx->Args.Emulation != MachineTypeNone) {
                break;
            }
        }
    }

/*
    if (ctx->Args.Emulation != MachineTypeRISCV64) {
        printf("%d\n",ctx->Args.Emulation);
        fatal("unknown emulation type");
    }
*/

    DBG("main: emulation resolved (%d)\n", ctx->Args.Emulation);

//    for (size_t i = 0; remaining[i] != NULL; ++i) {
//        printf("%s\n", remaining[i]);
//    }

    DBG("main: ReadInputFiles start\n");
    ReadInputFiles(ctx,remaining);
    DBG("main: ReadInputFiles done, objs=%d\n", ctx->ObjsCount);
    DBG("%d\n",ctx->ObjsCount);
    DBG("symbols :%d\n", HashMapSize(ctx->SymbolMap));
    HashMapFirst(ctx->SymbolMap);
/*
    for(Pair* p = HashMapNext(ctx->SymbolMap); p!=NULL; p = HashMapNext(ctx->SymbolMap)){
        DBG("%s\n",p->key);
    }
    for(int i=0;i<ctx->ObjsCount;i++){
        printf("%d : %s\n",i,ctx->Objs[i]->inputFile->file->Name);
    }
*/
    DBG("main: ResolveSymbols_pass start\n");
    ResolveSymbols_pass(ctx);
    DBG("main: ResolveSymbols_pass done, objs=%d\n", ctx->ObjsCount);
//    for(int i=0;i<ctx->ObjsCount;i++){
//        printf("%s\n",ctx->Objs[i]->inputFile->file->Name);
//    }
    DBG("main: RegisterSectionPieces start\n");
    RegisterSectionPieces(ctx);
    DBG("main: ComputeMergedSectionSizes start\n");
    ComputeMergedSectionSizes(ctx);
    DBG("main: CreateSyntheticSections start\n");
    CreateSyntheticSections(ctx);
    DBG("main: BinSections start\n");
    BinSections(ctx);
    DBG("main: CollectOutputSections start\n");
    CollectOutputSections(ctx);
    DBG("main: ScanRelocations start\n");
    ScanRelocations(ctx);
    DBG("main: ComputeSectionSizes start\n");
    ComputeSectionSizes(ctx);
//    for(int i=0; i<ctx->chunkNum;i++) {
//        Chunk *c = ctx->chunk[i];
//        printf("i %d name %s , type %d\n",i,c->name,c->chunkType);
//    }

    DBG("main: SortOutputSections start\n");
    SortOutputSections(ctx);

    DBG("main: BuildOutputSymtab start\n");
    BuildOutputSymtab(ctx);

    for(int i=0; i<ctx->chunkNum;i++){
        Chunk *c = ctx->chunk[i];
       // printf("i %d name %s , type %d\n",i,c->name,c->chunkType);
        DBG("main: Update chunk %d (%s type=%d)\n", i, c->name ? c->name : "<anon>", c->chunkType);
        Update(c,ctx);
    }

    DBG("main: SetOutputSectionOffsets start\n");
    uint64_t fileoff = SetOutputSectionOffsets(ctx);
    DBG("main: SetOutputSectionOffsets done, fileoff=%lu\n", fileoff);

    FinalizeGlobalPointer(ctx);

    ctx->buf = calloc(1, fileoff);
    //printf("%s\n",ctx->Args.Output);
    DBG("main: opening output '%s'\n", ctx->Args.Output);
    int file = open(ctx->Args.Output, O_RDWR | O_CREAT, 0777);
    assert(file != -1);

    for(int i=0; i< ctx->chunkNum;i++){
        Chunk *c = ctx->chunk[i];
        DBG("main: CopyBuf chunk %d (%s type=%d)\n", i, c->name ? c->name : "<anon>", c->chunkType);
        CopyBuf(c,ctx);
    }
    write(file, ctx->buf, fileoff);
    close(file);

    DBG("main: done\n");
    return 0;
}

unsigned HashMurMur32(void* key, size_t size)
{
    if (!key || size == 0)
        return 0;

    const unsigned c1 = 0xcc9e2d51;
    const unsigned c2 = 0x1b873593;
    const unsigned r1 = 15;
    const unsigned r2 = 13;
    const unsigned m = 5;
    const unsigned n = 0xe6546b64;

    unsigned hash = 0xdeadbeef;

    const int nblocks = size / 4;
    const unsigned *blocks = (const unsigned*)key;
    int i;
    for (i = 0; i < nblocks; i++) {
        unsigned k = blocks[i];
        k *= c1;
        k = (k << r1) | (k >> (32 - r1));
        k *= c2;

        hash ^= k;
        hash = ((hash << r2) | (hash >> (32 - r2))) * m + n;
    }

    const uint8_t *tail = (const uint8_t*) (key + nblocks * 4);
    unsigned k1 = 0;

    switch (size & 3) {
        case 3:
            k1 ^= tail[2] << 16;
        case 2:
            k1 ^= tail[1] << 8;
        case 1:
            k1 ^= tail[0];

            k1 *= c1;
            k1 = (k1 << r1) | (k1 >> (32 - r1));
            k1 *= c2;
            hash ^= k1;
    }

    hash ^= size;
    hash ^= (hash >> 16);
    hash *= 0x85ebca6b;
    hash ^= (hash >> 13);
    hash *= 0xc2b2ae35;
    hash ^= (hash >> 16);

    return hash;
}

unsigned HashDjb2(char* key)
{
    unsigned hash = 5381;
    int c;

    while (c = *key++)
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

    return hash;
}

static const unsigned magic_primes[] = {
    769, 1543, 3079, 6151, 12289, 24593, 49157, 98317, 196613, 393241, 786433,
    1572869, 3145739, 6291469, 12582917, 25165843, 50331653, 100663319,
    201326611, 402653189, 805306457, 1610612741,
};

static const int num_prime = sizeof(magic_primes) / sizeof(unsigned);

#define HASH_LOAD_FACTOR_NUM 3
#define HASH_LOAD_FACTOR_DEN 4

static unsigned compute_capacity_from_entries(unsigned entries) {
    if (entries == 0) {
        return 0;
    }
    unsigned long long num = (unsigned long long)entries * HASH_LOAD_FACTOR_DEN + (HASH_LOAD_FACTOR_NUM - 1);
    return (unsigned)(num / HASH_LOAD_FACTOR_NUM);
}

static unsigned compute_limit_from_slots(unsigned slots) {
    unsigned long long num = (unsigned long long)slots * HASH_LOAD_FACTOR_NUM;
    return (unsigned)(num / HASH_LOAD_FACTOR_DEN);
}

///////////////////////////////////////////////////////////////////////////
#define likely(x)       __builtin_expect(!!(x), 1)
#define unlikely(x)     __builtin_expect(!!(x), 0)


HashSet* HashSetInit()
{
    return _HashSetInit(0);
}

void HashSetDeinit(HashSet* obj)
{
    if (unlikely(!obj))
        return;

    HashSetData* data = obj->data;
    HashSetSlotNode** arr_slot = data->arr_slot_;
    HashSetCleanKey func_clean_key = data->func_clean_key_;

    unsigned num_slot = data->num_slot_;
    unsigned i;
    for (i = 0 ; i < num_slot ; ++i) {
        HashSetSlotNode* pred;
        HashSetSlotNode* curr = arr_slot[i];
        while (curr) {
            pred = curr;
            curr = curr->next_;
            if (func_clean_key)
                func_clean_key(pred->key_);
            free(pred);
        }
    }

    free(arr_slot);
    free(data);
    free(obj);
    return;
}

bool HashSetAdd(HashSet* self, void* key)
{
    /* Check the loading factor for rehashing. */
    HashSetData* data = self->data;
    if (data->size_ >= data->curr_limit_)
        _HashSetReHash(data);

    /* Calculate the slot index. */
    unsigned hash = data->func_hash_(key);
    hash = hash % data->num_slot_;

    /* Check if the key conflicts with a certain one stored in the set. If yes,
       replace that one. */
    HashSetCompare func_cmp = data->func_cmp_;
    HashSetSlotNode** arr_slot = data->arr_slot_;
    HashSetSlotNode* curr = arr_slot[hash];
    while (curr) {
        if (func_cmp(key, curr->key_) == 0) {
            if (data->func_clean_key_)
                data->func_clean_key_(curr->key_);
            curr->key_ = key;
            return true;
        }
        curr = curr->next_;
    }

    /* Insert the new key into the slot list. */
    HashSetSlotNode* node = (HashSetSlotNode*)malloc(sizeof(HashSetSlotNode));
    if (unlikely(!node))
        return false;

    node->key_ = key;
    if (!(arr_slot[hash])) {
        node->next_ = NULL;
        arr_slot[hash] = node;
    } else {
        node->next_ = arr_slot[hash];
        arr_slot[hash] = node;
    }
    ++(data->size_);

    return true;
}

bool HashSetFind(HashSet* self, void* key)
{
    HashSetData* data = self->data;

    /* Calculate the slot index. */
    unsigned hash = data->func_hash_(key);
    hash = hash % data->num_slot_;

    /* Search the slot list to check if the specified key exists. */
    HashSetCompare func_cmp = data->func_cmp_;
    HashSetSlotNode* curr = data->arr_slot_[hash];
    while (curr) {
        if (func_cmp(key, curr->key_) == 0)
            return true;
        curr = curr->next_;
    }

    return false;
}

bool HashSetRemove(HashSet* self, void* key)
{
    HashSetData* data = self->data;

    /* Calculate the slot index. */
    unsigned hash = data->func_hash_(key);
    hash = hash % data->num_slot_;

    /* Search the slot list for the remove target. */
    HashSetCompare func_cmp = data->func_cmp_;
    HashSetSlotNode* pred = NULL;
    HashSetSlotNode** arr_slot = data->arr_slot_;
    HashSetSlotNode* curr = arr_slot[hash];
    while (curr) {
        if (func_cmp(key, curr->key_) == 0) {
            if (data->func_clean_key_)
                data->func_clean_key_(curr->key_);

            if (!pred)
                arr_slot[hash] = curr->next_;
            else
                pred->next_ = curr->next_;

            free(curr);
            --(data->size_);
            return true;
        }
        pred = curr;
        curr = curr->next_;
    }

    return false;
}

unsigned HashSetSize(HashSet* self)
{
    return self->data->size_;
}

void HashSetFirst(HashSet* self)
{
    HashSetData* data = self->data;
    data->iter_slot_ = 0;
    data->iter_node_ = data->arr_slot_[0];
    return;
}

void* HashSetNext(HashSet* self)
{
    HashSetData* data = self->data;

    HashSetSlotNode** arr_slot = data->arr_slot_;
    while (data->iter_slot_ < data->num_slot_) {
        if (data->iter_node_) {
            void* key = data->iter_node_->key_;
            data->iter_node_ = data->iter_node_->next_;
            return key;
        }
        ++(data->iter_slot_);
        if (data->iter_slot_ == data->num_slot_)
            break;
        data->iter_node_ = arr_slot[data->iter_slot_];
    }
    return NULL;
}

void HashSetSetHash(HashSet* self, HashSetHash func)
{
    self->data->func_hash_ = func;
}

void HashSetSetCompare(HashSet* self, HashSetCompare func)
{
    self->data->func_cmp_ = func;
}

void HashSetSetCleanKey(HashSet* self, HashSetCleanKey func)
{
    self->data->func_clean_key_ = func;
}

HashSet* HashSetUnion(HashSet* lhs, HashSet* rhs)
{
    /* Predict the required slot size for the result set. */
    unsigned size_lhs = lhs->data->size_;
    unsigned size_rhs = rhs->data->size_;
    unsigned size_slot = compute_capacity_from_entries(size_lhs + size_rhs);
    int idx_prime = 0;
    while (idx_prime < num_prime) {
        if (size_slot < magic_primes[idx_prime])
            break;
        ++idx_prime;
    }
    if (idx_prime == num_prime)
        --idx_prime;

    /* Initialize the result set. */
    HashSet* result = _HashSetInit(idx_prime);
    if (!result)
        return NULL;

    HashSetData* data_lhs = lhs->data;
    HashSetData* data_result = result->data;
    data_result->func_hash_ = data_lhs->func_hash_;
    data_result->func_cmp_ = data_lhs->func_cmp_;

    /* Collect the first source set. */
    HashSetSlotNode** arr_slot = data_lhs->arr_slot_;
    unsigned num_slot = data_lhs->num_slot_;
    unsigned i;
    for (i = 0 ; i < num_slot ; ++i) {
        HashSetSlotNode* pred;
        HashSetSlotNode* curr = arr_slot[i];
        while (curr) {
            pred = curr;
            curr = curr->next_;
            bool status = HashSetAdd(result, pred->key_);
            if (!status) {
                HashSetDeinit(result);
                return NULL;
            }
        }
    }

    /* Merge the second source set. */
    HashSetData* data_rhs = rhs->data;
    arr_slot = data_rhs->arr_slot_;
    num_slot = data_rhs->num_slot_;
    for (i = 0 ; i < num_slot ; ++i) {
        HashSetSlotNode* pred;
        HashSetSlotNode* curr = arr_slot[i];
        while (curr) {
            pred = curr;
            curr = curr->next_;
            bool status = HashSetAdd(result, pred->key_);
            if (!status) {
                HashSetDeinit(result);
                return NULL;
            }
        }
    }

    return result;
}

HashSet* HashSetIntersect(HashSet* lhs, HashSet* rhs)
{
    /* Predict the required slot size for the result set. */
    unsigned size_lhs = lhs->data->size_;
    unsigned size_rhs = rhs->data->size_;
    unsigned size_elem;
    HashSet *set_src, *set_tge;
    if (size_lhs < size_rhs) {
        size_elem = size_lhs;
        set_src = lhs;
        set_tge = rhs;
    } else {
        size_elem = size_rhs;
        set_src = rhs;
        set_tge = lhs;
    }
    unsigned size_slot = compute_capacity_from_entries(size_elem);
    int idx_prime = 0;
    while (idx_prime < num_prime) {
        if (size_slot < magic_primes[idx_prime])
            break;
        ++idx_prime;
    }
    if (idx_prime == num_prime)
        --idx_prime;

    /* Initialize the result set. */
    HashSet* result = _HashSetInit(idx_prime);
    if (!result)
        return NULL;

    HashSetData* data_src = set_src->data;
    HashSetData* data_result = result->data;
    data_result->func_hash_ = data_src->func_hash_;
    data_result->func_cmp_ = data_src->func_cmp_;

    /* Collect the keys belonged to both source sets. */
    HashSetSlotNode** arr_slot = data_src->arr_slot_;
    unsigned num_slot = data_src->num_slot_;
    unsigned i;
    for (i = 0 ; i < num_slot ; ++i) {
        HashSetSlotNode* pred;
        HashSetSlotNode* curr = arr_slot[i];
        while (curr) {
            pred = curr;
            curr = curr->next_;
            void* key = pred->key_;
            bool status = HashSetFind(set_tge, key);
            if (!status)
                continue;
            status = HashSetAdd(result, key);
            if (!status) {
                HashSetDeinit(result);
                return NULL;
            }
        }
    }

    return result;
}

HashSet* HashSetDifference(HashSet* lhs, HashSet* rhs)
{
    /* Predict the required slot size for the result set. */
    unsigned size_lhs = lhs->data->size_;
    unsigned size_rhs = rhs->data->size_;
    unsigned size_elem = (size_lhs > size_rhs)? size_lhs : size_rhs;
    unsigned size_slot = compute_capacity_from_entries(size_elem);
    int idx_prime = 0;
    while (idx_prime < num_prime) {
        if (size_slot < magic_primes[idx_prime])
            break;
        ++idx_prime;
    }
    if (idx_prime == num_prime)
        --idx_prime;

    /* Create the result set. */
    HashSet* result = _HashSetInit(idx_prime);
    if (!result)
        return NULL;

    HashSetData* data_lhs = lhs->data;
    HashSetData* data_result = result->data;
    data_result->func_hash_ = data_lhs->func_hash_;
    data_result->func_cmp_ = data_lhs->func_cmp_;

    /* Collect the keys only belonged to the first source set. */
    HashSetSlotNode** arr_slot = data_lhs->arr_slot_;
    unsigned num_slot = data_lhs->num_slot_;
    unsigned i;
    for (i = 0 ; i < num_slot ; ++i) {
        HashSetSlotNode* pred;
        HashSetSlotNode* curr = arr_slot[i];
        while (curr) {
            pred = curr;
            curr = curr->next_;
            void* key = pred->key_;
            bool status = HashSetFind(rhs, key);
            if (status)
                continue;
            status = HashSetAdd(result, key);
            if (!status) {
                HashSetDeinit(result);
                return NULL;
            }
        }
    }

    return result;
}

HashSet* _HashSetInit(int idx_prime)
{
    HashSet* obj = (HashSet*)malloc(sizeof(HashSet));
    if (unlikely(!obj))
        return NULL;

    HashSetData* data = (HashSetData*)malloc(sizeof(HashSetData));
    if (unlikely(!data)) {
        free(obj);
        return NULL;
    }

    HashSetSlotNode** arr_slot = (HashSetSlotNode**)malloc(sizeof(HashSetSlotNode*) * magic_primes[0]);
    if (unlikely(!arr_slot)) {
        free(data);
        free(obj);
        return NULL;
    }
    unsigned i;
    for (i = 0 ; i < magic_primes[0] ; ++i)
        arr_slot[i] = NULL;

    data->size_ = 0;
    data->idx_prime_ = 0;
    data->num_slot_ = magic_primes[0];
    data->curr_limit_ = compute_limit_from_slots(magic_primes[0]);
    data->arr_slot_ = arr_slot;
    data->func_hash_ = _HashSetHash;
    data->func_cmp_ = _HashSetCompare;
    data->func_clean_key_ = NULL;

    obj->data = data;
    obj->add = HashSetAdd;
    obj->find = HashSetFind;
    obj->remove = HashSetRemove;
    obj->size = HashSetSize;
    obj->first = HashSetFirst;
    obj->next = HashSetNext;
    obj->set_hash = HashSetSetHash;
    obj->set_compare = HashSetSetCompare;
    obj->set_clean_key = HashSetSetCleanKey;

    return obj;
}

unsigned _HashSetHash(void* key)
{
    return (unsigned)(uintptr_t)key;
}

int _HashSetCompare(void* lhs, void* rhs)
{
    if ((intptr_t)lhs == (intptr_t)rhs)
        return 0;
    return ((intptr_t)lhs > (intptr_t)rhs)? 1 : (-1);
}

void _HashSetReHash(HashSetData* data)
{
    unsigned num_slot_new;

    /* Consume the next prime for slot array extension. */
    if (likely(data->idx_prime_ < (num_prime - 1))) {
        ++(data->idx_prime_);
        num_slot_new = magic_primes[data->idx_prime_];
    }
    /* If the prime list is completely consumed, we simply extend the slot array
       with treble capacity.*/
    else {
        data->idx_prime_ = num_prime;
        num_slot_new = data->num_slot_ * 3;
    }

    /* Try to allocate the new slot array. The rehashing should be canceled due
       to insufficient memory space.  */
    HashSetSlotNode** arr_slot_new = (HashSetSlotNode**)malloc(sizeof(HashSetSlotNode*) * num_slot_new);
    if (unlikely(!arr_slot_new)) {
        if (data->idx_prime_ < num_prime)
            --(data->idx_prime_);
        return;
    }

    unsigned i;
    for (i = 0 ; i < num_slot_new ; ++i)
        arr_slot_new[i] = NULL;

    HashSetHash func_hash = data->func_hash_;
    HashSetSlotNode** arr_slot = data->arr_slot_;
    unsigned num_slot = data->num_slot_;
    for (i = 0 ; i < num_slot ; ++i) {
        HashSetSlotNode* pred;
        HashSetSlotNode* curr = arr_slot[i];
        while (curr) {
            pred = curr;
            curr = curr->next_;

            /* Migrate each key value pair to the new slot. */
            unsigned hash = func_hash(pred->key_);
            hash = hash % num_slot_new;
            if (!arr_slot_new[hash]) {
                pred->next_ = NULL;
                arr_slot_new[hash] = pred;
            } else {
                pred->next_ = arr_slot_new[hash];
                arr_slot_new[hash] = pred;
            }
        }
    }

    free(arr_slot);
    data->arr_slot_ = arr_slot_new;
    data->num_slot_ = num_slot_new;
    data->curr_limit_ = compute_limit_from_slots(num_slot_new);
    return;
}

#define likely(x)       __builtin_expect(!!(x), 1)
#define unlikely(x)     __builtin_expect(!!(x), 0)

HashMap* HashMapInit()
{
    DBG("HashMapInit: start\n");
    HashMap* obj = (HashMap*)malloc(sizeof(HashMap));
    DBG("HashMapInit: malloc obj=%p size=%llu\n", (void*)obj, (unsigned long long)sizeof(HashMap));
    if (unlikely(!obj))
        return NULL;

    HashMapData* data = (HashMapData*)malloc(sizeof(HashMapData));
    DBG("HashMapInit: malloc data=%p size=%llu\n", (void*)data, (unsigned long long)sizeof(HashMapData));
    if (unlikely(!data)) {
        free(obj);
        return NULL;
    }

    SlotNode** arr_slot = (SlotNode**)malloc(sizeof(SlotNode*) * magic_primes[0]);
    DBG("HashMapInit: malloc arr_slot=%p count=%u elem=%llu\n", (void*)arr_slot, magic_primes[0], (unsigned long long)sizeof(SlotNode*));
    if (unlikely(!arr_slot)) {
        free(data);
        free(obj);
        return NULL;
    }
    unsigned i;
    for (i = 0 ; i < magic_primes[0] ; ++i)
        arr_slot[i] = NULL;
    DBG("HashMapInit: cleared %u slots\n", magic_primes[0]);

    data->size_ = 0;
    DBG("HashMapInit: data->size_=0\n");
    data->idx_prime_ = 0;
    DBG("HashMapInit: data->idx_prime_=0\n");
    data->num_slot_ = magic_primes[0];
    DBG("HashMapInit: data->num_slot_=%u\n", data->num_slot_);
    data->curr_limit_ = compute_limit_from_slots(magic_primes[0]);
    DBG("HashMapInit: data->curr_limit_=%u\n", data->curr_limit_);
    data->arr_slot_ = arr_slot;
    DBG("HashMapInit: data->arr_slot_=%p\n", (void*)data->arr_slot_);
    data->func_hash_ = _HashMapHash;
    DBG("HashMapInit: func_hash set\n");
    data->func_cmp_ = _HashMapCompare;
    DBG("HashMapInit: func_cmp set\n");
    data->func_clean_key_ = NULL;
    DBG("HashMapInit: func_clean_key NULL\n");
    data->func_clean_val_ = NULL;
    DBG("HashMapInit: func_clean_val NULL\n");

    DBG("HashMapInit: configured num_slot=%u curr_limit=%u\n", data->num_slot_, data->curr_limit_);

    obj->data = data;
    obj->put = HashMapPut;
    obj->get = HashMapGet;
    obj->contain = HashMapContain;
    obj->remove = HashMapRemove;
    obj->size = HashMapSize;
    obj->first = HashMapFirst;
    obj->next = HashMapNext;
    obj->set_hash = HashMapSetHash;
    obj->set_compare = HashMapSetCompare;
    obj->set_clean_key = HashMapSetCleanKey;
    obj->set_clean_value = HashMapSetCleanValue;

    DBG("HashMapInit: ready obj=%p data=%p slots=%u\n", (void*)obj, (void*)data, data->num_slot_);
    return obj;
}

void HashMapDeinit(HashMap* obj)
{
    if (unlikely(!obj))
        return;

    HashMapData* data = obj->data;
    SlotNode** arr_slot = data->arr_slot_;
    HashMapCleanKey func_clean_key = data->func_clean_key_;
    HashMapCleanValue func_clean_val = data->func_clean_val_;

    unsigned num_slot = data->num_slot_;
    unsigned i;
    for (i = 0 ; i < num_slot ; ++i) {
        SlotNode* pred;
        SlotNode* curr = arr_slot[i];
        while (curr) {
            pred = curr;
            curr = curr->next_;
            if (func_clean_key)
                func_clean_key(pred->pair_.key);
            if (func_clean_val)
                func_clean_val(pred->pair_.value);
            free(pred);
        }
    }

    free(arr_slot);
    free(data);
    free(obj);
    return;
}

bool HashMapPut(HashMap* self, void* key, void* value)
{
    /* Check the loading factor for rehashing. */
    HashMapData* data = self->data;
    if (data->size_ >= data->curr_limit_)
        _HashMapReHash(data);

    /* Calculate the slot index. */
    unsigned hash = data->func_hash_(key);
    hash = hash % data->num_slot_;

    /* Check if the pair conflicts with a certain one stored in the map. If yes,
       replace that one. */
    HashMapCompare func_cmp = data->func_cmp_;
    SlotNode** arr_slot = data->arr_slot_;
    SlotNode* curr = arr_slot[hash];
    while (curr) {
        if (func_cmp(key, curr->pair_.key) == 0) {
            if (data->func_clean_key_)
                data->func_clean_key_(curr->pair_.key);
            if (data->func_clean_val_)
                data->func_clean_val_(curr->pair_.value);
            curr->pair_.key = key;
            curr->pair_.value = value;
            return true;
        }
        curr = curr->next_;
    }

    /* Insert the new pair into the slot list. */
    SlotNode* node = (SlotNode*)malloc(sizeof(SlotNode));
    if (unlikely(!node))
        return false;

    node->pair_.key = key;
    node->pair_.value = value;
    if (!(arr_slot[hash])) {
        node->next_ = NULL;
        arr_slot[hash] = node;
    } else {
        node->next_ = arr_slot[hash];
        arr_slot[hash] = node;
    }
    ++(data->size_);

    return true;
}

void* HashMapGet(HashMap* self, void* key)
{
    HashMapData* data = self->data;

    /* Calculate the slot index. */
    unsigned hash = data->func_hash_(key);
    hash = hash % data->num_slot_;

    /* Search the slot list to check if there is a pair having the same key
       with the designated one. */
    HashMapCompare func_cmp = data->func_cmp_;
    SlotNode* curr = data->arr_slot_[hash];
    while (curr) {
        if (func_cmp(key, curr->pair_.key) == 0)
            return curr->pair_.value;
        curr = curr->next_;
    }

    return NULL;
}

bool HashMapContain(HashMap* self, void* key)
{
    HashMapData* data = self->data;

    /* Calculate the slot index. */
    unsigned hash = data->func_hash_(key);
    hash = hash % data->num_slot_;

    /* Search the slot list to check if there is a pair having the same key
       with the designated one. */
    HashMapCompare func_cmp = data->func_cmp_;
    SlotNode* curr = data->arr_slot_[hash];
    while (curr) {
        if (func_cmp(key, curr->pair_.key) == 0)
            return true;
        curr = curr->next_;
    }

    return false;
}

bool HashMapRemove(HashMap* self, void* key)
{
    HashMapData* data = self->data;

    /* Calculate the slot index. */
    unsigned hash = data->func_hash_(key);
    hash = hash % data->num_slot_;

    /* Search the slot list for the deletion target. */
    HashMapCompare func_cmp = data->func_cmp_;
    SlotNode* pred = NULL;
    SlotNode** arr_slot = data->arr_slot_;
    SlotNode* curr = arr_slot[hash];
    while (curr) {
        if (func_cmp(key, curr->pair_.key) == 0) {
            if (data->func_clean_key_)
                data->func_clean_key_(curr->pair_.key);
            if (data->func_clean_val_)
                data->func_clean_val_(curr->pair_.value);

            if (!pred)
                arr_slot[hash] = curr->next_;
            else
                pred->next_ = curr->next_;

            free(curr);
            --(data->size_);
            return true;
        }
        pred = curr;
        curr = curr->next_;
    }

    return false;
}

unsigned HashMapSize(HashMap* self)
{
    return self->data->size_;
}

void HashMapFirst(HashMap* self)
{
    HashMapData* data = self->data;
    data->iter_slot_ = 0;
    data->iter_node_ = data->arr_slot_[0];
    return;
}

Pair* HashMapNext(HashMap* self)
{
    HashMapData* data = self->data;

    SlotNode** arr_slot = data->arr_slot_;
    while (data->iter_slot_ < data->num_slot_) {
        if (data->iter_node_) {
            Pair* ptr_pair = &(data->iter_node_->pair_);
            data->iter_node_ = data->iter_node_->next_;
            return ptr_pair;
        }
        ++(data->iter_slot_);
        if (data->iter_slot_ == data->num_slot_)
            break;
        data->iter_node_ = arr_slot[data->iter_slot_];
    }
    return NULL;
}

void HashMapSetHash(HashMap* self, HashMapHash func)
{
    self->data->func_hash_ = func;
}

void HashMapSetCompare(HashMap* self, HashMapCompare func)
{
    self->data->func_cmp_ = func;
}

void HashMapSetCleanKey(HashMap* self, HashMapCleanKey func)
{
    self->data->func_clean_key_ = func;
}

void HashMapSetCleanValue(HashMap* self, HashMapCleanValue func)
{
    self->data->func_clean_val_ = func;
}

void HashMapClean(HashMap *self)
{
    if(self == NULL){
        return;
    }
    //assert(self != NULL);
    HashMapFirst(self);
    for(Pair* pair = HashMapNext(self); pair!=NULL ;  pair = HashMapNext(self)){
        HashMapRemove(self,pair->key);
    }
}

unsigned _HashMapHash(void* key)
{
    return (unsigned)(intptr_t)key;
}

int _HashMapCompare(void* lhs, void* rhs)
{
    if ((intptr_t)lhs == (intptr_t)rhs)
        return 0;
    return ((intptr_t)lhs > (intptr_t)rhs)? 1 : (-1);
}

void _HashMapReHash(HashMapData* data)
{
    unsigned num_slot_new;

    /* Consume the next prime for slot array extension. */
    if (likely(data->idx_prime_ < (num_prime - 1))) {
        ++(data->idx_prime_);
        num_slot_new = magic_primes[data->idx_prime_];
    }
    /* If the prime list is completely consumed, we simply extend the slot array
       with treble capacity.*/
    else {
        data->idx_prime_ = num_prime;
        num_slot_new = data->num_slot_ * 3;
    }

    /* Try to allocate the new slot array. The rehashing should be canceled due
       to insufficient memory space.  */
    SlotNode** arr_slot_new = (SlotNode**)malloc(sizeof(SlotNode*) * num_slot_new);
    if (unlikely(!arr_slot_new)) {
        if (data->idx_prime_ < num_prime)
            --(data->idx_prime_);
        return;
    }

    unsigned i;
    for (i = 0 ; i < num_slot_new ; ++i)
        arr_slot_new[i] = NULL;

    HashMapHash func_hash = data->func_hash_;
    SlotNode** arr_slot = data->arr_slot_;
    unsigned num_slot = data->num_slot_;
    for (i = 0 ; i < num_slot ; ++i) {
        SlotNode* pred;
        SlotNode* curr = arr_slot[i];
        while (curr) {
            pred = curr;
            curr = curr->next_;

            /* Migrate each key value pair to the new slot. */
            unsigned hash = func_hash(pred->pair_.key);
            hash = hash % num_slot_new;
            if (!arr_slot_new[hash]) {
                pred->next_ = NULL;
                arr_slot_new[hash] = pred;
            } else {
                pred->next_ = arr_slot_new[hash];
                arr_slot_new[hash] = pred;
            }
        }
    }

    free(arr_slot);
    data->arr_slot_ = arr_slot_new;
    data->num_slot_ = num_slot_new;
    data->curr_limit_ = compute_limit_from_slots(num_slot_new);
    return;
}

extern HashMap *name_map;

bool CheckMagic(const char* contents) 
{
    const unsigned char magic[] = {0x7F, 'E', 'L', 'F'};
    size_t magicSize = sizeof(magic) / sizeof(magic[0]);

    return memcmp(contents, magic, magicSize) == 0;
}

void WriteMagic(uint8_t * contents) 
{
    const char magic[] = {0x7F, 'E', 'L', 'F'};
    size_t magicSize = sizeof(magic) / sizeof(magic[0]);

    memcpy(contents, magic, magicSize);
}

//获取一个section对应的名字 , 延展在section strtab和symbol strtab中根据name偏移拿到对应名字
char* ElfGetName(char* strTab, uint32_t offset) 
{
    uint32_t length = 0;
    while (strTab[offset + length] != '\0') {
        length++;
    }
    char* name = (char*)malloc(length + 1);
    memcpy(name, strTab + offset, length);
    name[length] = '\0';

    if (HashMapContain(name_map, name)) {
        char* interned = HashMapGet(name_map, name);
        free(name);
        return interned;
    }

    if (!HashMapPut(name_map, name, name)) {
        fatal("ElfGetName: HashMapPut failed");
    }
    return name;
}

int GetSize(const ArHdr* a) 
{
    char sizeStr[11];
    strncpy(sizeStr, a->Size, sizeof(sizeStr) - 1);
    sizeStr[sizeof(sizeStr) - 1] = '\0';
    int size = atoi(sizeStr);
    return size;
}

//返回判断这一个符号是不是绝对符号,即值确定，不需要重定向, 不指向任何section
bool IsAbs(const ElfSym* s) 
{
    return s->Shndx == 65521; // Assuming elf.SHN_ABS is defined as 0
}

//未定义符号，需要链接器来找
bool IsUndef(const ElfSym* s) 
{
    return s->Shndx == 0; // Assuming elf.SHN_UNDEF is defined as 65521
}

//比如a.o和b.o中都声明或定义了一个全局变量，在a.o中进行定义，在b.o中进行声明，那么这个符号在b.o中就是common symbol
// 链接器最终处理时，只会加入a.o中的common symbol
bool IsCommon(const ElfSym* s) 
{
    return s->Shndx == 65522; // Assuming elf.SHN_COMMON is defined as 65522
}

bool HasPrefix(const ArHdr* a, const char* s) 
{
    return strncmp(a->Name, s, strlen(s)) == 0;
}

//一个archive通常只有一个strtab , strtab归档文件里面obj的名字
bool IsStrtab(const ArHdr* a) 
{
    return HasPrefix(a, "// ");
}

bool IsSymtab(const ArHdr* a) 
{
    return HasPrefix(a, "/ ") || HasPrefix(a, "/SYM64/ ");
}

//得到obj的文件名，如果名字不长，直接放在arhdr的name里，如果文件名字长，name放不下，才去strtab里找
char* ReadName(const ArHdr* a, char* strTab) 
{
    // Long filename
    if (a->Name[0] == '/') {
        int start = atoi(a->Name + 1);
        int end = start;
        char* endPtr = strstr(strTab + start, "/\n");
        if (endPtr != NULL) {
            end += (endPtr - (strTab + start));
        }
        char* filename = (char*)malloc(end - start + 1);
        memcpy(filename, strTab + start, end - start);
        filename[end - start] = '\0';
        return filename;
    }

    // Short filename
    char* endPtr = strchr(a->Name, '/');
   // Assert(endPtr != NULL);
    int end = endPtr - a->Name;
    char* filename = (char*)malloc(end + 1);
    memcpy(filename, a->Name, end);
    filename[end] = '\0';
    return filename;
}
