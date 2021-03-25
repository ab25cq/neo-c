#ifndef LLVM_COMMON_H
#define LLVM_COMMON_H 1

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wwrite-strings"

extern "C"
{
#include "common.h"
}

#include "llvm/IR/Verifier.h"
#include "llvm/ADT/APFloat.h"
#include "llvm/IR/BasicBlock.h"
#include "llvm/IR/Constants.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/Instructions.h"
#include "llvm/IR/DIBuilder.h"
#include "llvm/IR/Metadata.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Type.h"
#include "llvm/Support/TargetSelect.h"
#include "llvm/IR/Attributes.h"
#include "llvm/IR/PassManager.h"
#include "llvm/IR/Verifier.h"

#include "llvm/ExecutionEngine/ExecutionEngine.h"
#include "llvm/Passes/PassBuilder.h"

#if LLVM_VERSION_MAJOR >= 4
#include "llvm/Bitcode/BitcodeWriter.h"
#else
#include "llvm/Bitcode/ReaderWriter.h"
//#include "llvm/Assembly/PrintModulePass.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/IR/LegacyPassManager.h"
#include "llvm/Pass.h"
#endif


//#include "llvm/Module.h"
//#include "llvm/Function.h"

using namespace llvm;

//#include "llvm/IR/LegacyPassManager.h"
//#include "llvm/IR/DerivedTypes.h"
//#include "llvm/Support/raw_ostream.h"
//#include "llvm/ExecutionEngine/Orc/LambdaResolver.h"
//#include "llvm/Transforms/Scalar.h"
//#include "llvm/ADT/iterator_range.h"
//#include "llvm/ADT/STLExtras.h"
//#include "llvm/ExecutionEngine/JITSymbol.h"
//#include "llvm/ExecutionEngine/RTDyldMemoryManager.h"
//#include "llvm/ExecutionEngine/RuntimeDyld.h"
//#include "llvm/ExecutionEngine/SectionMemoryManager.h"
//#include "llvm/ExecutionEngine/Orc/CompileUtils.h"
//#include "llvm/ExecutionEngine/Orc/IRCompileLayer.h"
//#include "llvm/IR/DataLayout.h"
//#include "llvm/IR/Mangler.h"
#include "llvm/Support/FileSystem.h"
//#include "llvm/Support/SourceMgr.h"
//#include "llvm/Support/MemoryBuffer.h"
//#include "llvm/Support/DynamicLibrary.h"
/*
#if LLVM_VERSION_MAJOR == 3
#include "llvm/ExecutionEngine/Orc/ObjectLinkingLayer.h"
#endif
#include "llvm/Target/TargetMachine.h"
#include "llvm-c/BitWriter.h"
#include "llvm/IRReader/IRReader.h"
#if LLVM_VERSION_MAJOR == 3
#include "llvm/Bitcode/ReaderWriter.h"
#endif
*/
//#include <fstream>
//#include <iostream>
//using namespace llvm::orc;

#include <string>
#include <map>

using namespace llvm;

extern LLVMContext TheContext;
extern IRBuilder<> Builder;
extern Function* gFunction;
extern Module* TheModule;
extern std::unique_ptr<FunctionPassManager> TheFPM;
extern FunctionAnalysisManager TheFAM;

struct LVALUEStruct {
    sNodeType* type;
    Value* value;
    Value* address;
    sVar* var;
    BOOL binded_value;
    BOOL load_field;
};

typedef struct LVALUEStruct LVALUE;

struct sFunctionStruct {
    char mName[VAR_NAME_MAX];
    char mAsmFunName[VAR_NAME_MAX];
    char mRealName[REAL_FUN_NAME_MAX];
    char mStructName[VAR_NAME_MAX];
    int mGenericsFunNum;
    char mSimpleName[VAR_NAME_MAX];

    sNodeType* mResultType;
    char mParamNames[PARAMS_MAX][VAR_NAME_MAX];
    sNodeType* mParamTypes[PARAMS_MAX];
    int mNumParams;

    BOOL mVarArg;

    BOOL mCFFIFunction;

    int mNumMethodGenerics;
    char mMethodGenericsTypeNames[GENERICS_TYPES_MAX][VAR_NAME_MAX];

    char* mBlockText;
    char mSName[PATH_MAX];
    int mSLine;

    int mNumGenerics;
    char mGenericsTypeNames[GENERICS_TYPES_MAX][VAR_NAME_MAX];

    BOOL mGenericsFunction;
    BOOL mInlineFunction;

    Function* mLLVMFunction;

    BOOL mInCLang;
    BOOL mExternal;
    BOOL mStatic;
    int mVersion;

    sNodeType* mGenericsType;
};

typedef struct sFunctionStruct sFunction;

typedef struct LVALUEStruct LVALUE;

extern LVALUE* gLLVMStack;
extern LVALUE* gLLVMStackHead;

extern "C"
{
void push_value_to_stack_ptr(LVALUE* value, sCompileInfo* info);

LVALUE* get_value_from_stack(int offset);

int get_llvm_alignment_from_node_type(sNodeType* node_type);
BOOL create_llvm_type_from_node_type(Type** result_type, sNodeType* node_type, sNodeType* generics_type, sCompileInfo* info);
int create_generics_finalize_method(sNodeType* node_type2, Function** llvm_fun, sCompileInfo* info);

Value* llvm_create_string(char* str);
BOOL cast_right_type_to_left_type(sNodeType* left_type, sNodeType** right_type, LVALUE* rvalue, struct sCompileInfoStruct* info);
void store_address_to_lvtable(int index, Value* address);
Value* load_address_to_lvtable(int index, sNodeType* var_type, sCompileInfo* info);
BOOL get_size_from_node_type(uint64_t* result, sNodeType* node_type, sNodeType* generics_type, sCompileInfo* info);
void std_move(Value* var_address, sNodeType* lvar_type, LVALUE* rvalue, BOOL alloc, sCompileInfo* info);
void prevent_from_right_object_free(LVALUE* llvm_value, sCompileInfo* info);
void remove_from_right_value_object(Value* value, sCompileInfo* info);
Value* clone_object(sNodeType* node_type, Value* address, sCompileInfo* info);
void free_right_value_objects(sCompileInfo* info);
void llvm_change_block(BasicBlock* current_block, BasicBlock** current_block_before, sCompileInfo* info, BOOL no_free_right_objects);
Value* store_lvtable();
void restore_lvtable(Value* lvtable);
Value* get_dummy_value(sNodeType* node_type, sCompileInfo* info);
BOOL call_function(char* fun_name, Value** params, int num_params, char* struct_name, BOOL no_err_output, sNodeType* generics_type, sCompileInfo* info);
void append_heap_object_to_right_value(LVALUE* llvm_value, sCompileInfo* info);
BOOL solve_undefined_strcut_type_when_definision(sNodeType* node_type, sCompileInfo* info);
}
BOOL add_function(char* name, char* real_fun_name, char* asm_fun_name, char** param_names, sNodeType** param_types, int num_params, sNodeType* result_type, int num_method_generics, char** method_generics_type_names, BOOL c_ffi_function, BOOL var_arg, char* block_text, int num_generics, char** generics_type_names, BOOL generics_function, BOOL inline_function, char* sname, int sline, BOOL in_clang, BOOL external, int version, Function** llvm_fun, sCompileInfo* info, BOOL simple_lambda_param, char* struct_name, int generics_fun_num, char* simple_fun_name, sFunction** neo_c_fun);
void create_generics_fun_name(char* real_fun_name, int size_real_fun_name, char* fun_name, sNodeType** method_generics_types, int num_method_generics_types, sNodeType* generics_type, char* struct_name, int generics_fun_num);
BOOL get_const_bool_value_from_llvm_value(BOOL* result, LVALUE* llvm_value);
int create_generics_finalize_method(sNodeType* node_type2, sCompileInfo* info);

extern GlobalVariable* gNCDebugHeapValue;

extern std::map<std::string, std::vector<sFunction*>> gFuncs;
void create_real_fun_name(char* real_fun_name, size_t size_real_fun_name, char* fun_name, char* struct_name);

void createDebugFunctionInfo(int sline, char* fname, sFunction* function, Function* llvm_function, char* module_name);
void finishDebugFunctionInfo();
void setCurrentDebugLocation(int sline);

#endif

