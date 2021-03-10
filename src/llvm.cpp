#include "llvm_common.hpp"
#include <libgen.h>
#include <sys/stat.h>
#include <fcntl.h>

using namespace std;

LLVMContext TheContext;
IRBuilder<> Builder(TheContext);
Module* TheModule;
std::unique_ptr<FunctionPassManager> TheFPM;
std::map<std::string, BasicBlock*> TheLabels;
FunctionAnalysisManager TheFAM(false);
CGSCCAnalysisManager cGSCCAnalysisManager(false);
ModuleAnalysisManager moduleAnalysisManager(false);
std::map<std::string, std::pair<Type*, sNodeType*>> gLLVMStructType;

GlobalVariable* gLVTableValue;

GlobalVariable* gNCDebugHeapValue;

#if LLVM_VERSION_MAJOR >= 7
LoopAnalysisManager loopAnalysisManager(false);
#endif

LVALUE* gLLVMStack;
LVALUE* gLLVMStackHead;
//Function* gNeoCMainFunction;
Function* gFunction;

struct DebugInfo {
    DICompileUnit* TheCU;
    DIType* DblTy;
    std::vector<DIScope*> LexicalBlock;

};

DebugInfo KSDbgInfo;

DIBuilder* DBuilder;

static void emitLocaltion(DebugInfo* info, int sline)
{
    Builder.SetCurrentDebugLocation(DebugLoc());

    DIScope* scope;

    if(info->LexicalBlock.empty()) {
        scope = info->TheCU;
    }
    else {
        scope = info->LexicalBlock.back();
    }

    Builder.SetCurrentDebugLocation(DebugLoc::get(sline, 0, scope));
}


static DIType* create_debug_type(sNodeType* node_type) 
{

#if LLVM_VERSION_MAJOR >= 5
    DIType* result = nullptr;
    
    if(node_type->mPointerNum > 0) {
        result = DBuilder->createBasicType("pointer", 64, dwarf::DW_ATE_address);
    }
    else if(node_type->mArrayDimentionNum > 0) {
        result = DBuilder->createBasicType("pointer", 64, dwarf::DW_ATE_address);
    }
    else if(type_identify_with_class_name(node_type, "int")) {
        result = DBuilder->createBasicType("int", 32, dwarf::DW_ATE_signed);
    }
    else if(type_identify_with_class_name(node_type, "char")) {
        result = DBuilder->createBasicType("char", 8, dwarf::DW_ATE_signed);
    }
    else if(type_identify_with_class_name(node_type, "short")) {
        result = DBuilder->createBasicType("short", 16, dwarf::DW_ATE_signed);
    }
    else if(type_identify_with_class_name(node_type, "long")) {
        result = DBuilder->createBasicType("long", 64, dwarf::DW_ATE_signed);
    }
    else if(type_identify_with_class_name(node_type, "float")) {
        result = DBuilder->createBasicType("float", 32, dwarf::DW_ATE_float);
    }
    else if(type_identify_with_class_name(node_type, "_Float16") || type_identify_with_class_name(node_type, "_Float16x")) 
    {
        result = DBuilder->createBasicType("float", 16, dwarf::DW_ATE_float);
    }
    else if(type_identify_with_class_name(node_type, "_Float32") || type_identify_with_class_name(node_type, "_Float32x")) 
    {
        result = DBuilder->createBasicType("float", 32, dwarf::DW_ATE_float);
    }
    else if(type_identify_with_class_name(node_type, "_Float64") || type_identify_with_class_name(node_type, "_Float64x")) 
    {
        result = DBuilder->createBasicType("float", 64, dwarf::DW_ATE_float);
    }
    else if(type_identify_with_class_name(node_type, "_Float128") || type_identify_with_class_name(node_type, "_Float128x")) 
    {
        result = DBuilder->createBasicType("float", 128, dwarf::DW_ATE_float);
    }
else {
result = DBuilder->createBasicType("int", 32, dwarf::DW_ATE_lo_user);
}

    return result;
#else 
    DIType* result = nullptr;
    
    if(node_type->mPointerNum > 0) {
        result = DBuilder->createBasicType("pointer", 64, 8, dwarf::DW_ATE_address);
    }
    else if(node_type->mArrayDimentionNum > 0) {
        result = DBuilder->createBasicType("pointer", 64, 8, dwarf::DW_ATE_address);
    }
    else if(type_identify_with_class_name(node_type, "int")) {
        result = DBuilder->createBasicType("int", 32, 4, dwarf::DW_ATE_signed);
    }
    else if(type_identify_with_class_name(node_type, "char")) {
        result = DBuilder->createBasicType("char", 8, 4, dwarf::DW_ATE_signed);
    }
    else if(type_identify_with_class_name(node_type, "short")) {
        result = DBuilder->createBasicType("short", 16, 4, dwarf::DW_ATE_signed);
    }
    else if(type_identify_with_class_name(node_type, "long")) {
        result = DBuilder->createBasicType("long", 64, 8, dwarf::DW_ATE_signed);
    }
    else if(type_identify_with_class_name(node_type, "float")) {
        result = DBuilder->createBasicType("float", 32, 4, dwarf::DW_ATE_float);
    }
else {
result = DBuilder->createBasicType("int", 32, 4, dwarf::DW_ATE_lo_user);
}

    return result;
#endif
}

static DISubroutineType* createDebugFunctionType(sFunction* function, DIFile* unit)
{
    SmallVector<Metadata *, 8> EltTys;

    sNodeType* result_type = function->mResultType;
    DIType* debug_result_type = create_debug_type(result_type);

    EltTys.push_back(debug_result_type);

    for(int i = 0; i<function->mNumParams; i++) {
        sNodeType* arg_type = function->mParamTypes[i];
        DIType* debug_arg_type = create_debug_type(result_type);

        EltTys.push_back(debug_arg_type);
    }

    return DBuilder->createSubroutineType(DBuilder->getOrCreateTypeArray(EltTys));
}

void setCurrentDebugLocation(int sline)
{
    emitLocaltion(&KSDbgInfo, sline);
}

void createDebugFunctionInfo(int sline, char* fname, sFunction* function, Function* llvm_function, char* module_name)
{
    DebugInfo* info = &KSDbgInfo;

    DIFile* unit = DBuilder->createFile(KSDbgInfo.TheCU->getFilename()
                    , KSDbgInfo.TheCU->getDirectory());

    std::string fname2 = fname;
    std::string linkage_name = fname;

    DISubroutineType* subrouting_type 
        = createDebugFunctionType(function, unit);

//    DITemplateParameterArray retained_nodes = subrouting_type->getTemplateParams();

#if LLVM_VERSION_MAJOR >= 9
    DISubprogram* sp = DBuilder->createFunction(
        unit, fname2, linkage_name, unit, sline
        , subrouting_type, sline);
#else
    DISubprogram* sp = DBuilder->createFunction(
        unit, fname2, linkage_name, unit, sline
        , subrouting_type, false, true, sline
        , llvm::DINode::DIFlags::FlagAccessibility, false, nullptr);
#endif

    llvm_function->setSubprogram(sp);

    KSDbgInfo.LexicalBlock.push_back(sp);

    emitLocaltion(&KSDbgInfo, sline);
}

void finishDebugFunctionInfo()
{
    KSDbgInfo.LexicalBlock.pop_back();
}

extern "C"
{

void llvm_init()
{
    InitializeNativeTarget();
    InitializeNativeTargetAsmPrinter();
    InitializeNativeTargetAsmParser();
}

void llvm_final()
{
}

void push_value_to_stack_ptr(LVALUE* value, sCompileInfo* info)
{
    *gLLVMStack= *value;
    gLLVMStack++;

    info->stack_num++;
}

void dec_stack_ptr(int value, sCompileInfo* info)
{
    gLLVMStack -= value;

    info->stack_num -= value;
}

void arrange_stack(sCompileInfo* info, int top)
{
    if(info->stack_num > top) {
        dec_stack_ptr(info->stack_num-top, info);
    }
    if(info->stack_num < top) {
        fprintf(stderr, "%s %d: unexpected stack value. The stack num is %d. top is %d\n", info->sname, info->sline, info->stack_num, top);
        exit(2);
    }
}

LVALUE* get_value_from_stack(int offset)
{
    return gLLVMStack + offset;
}

static Type* get_lvtable_type()
{
    char buf[128];

    snprintf(buf, 128, "char*[%d]", LOCAL_VARIABLE_MAX);

    sNodeType* lvtable_node_type = create_node_type_with_class_name(buf);

    Type* lvtable_type;
    if(!create_llvm_type_from_node_type(&lvtable_type, lvtable_node_type, lvtable_node_type, NULL))
    {
        fprintf(stderr, "unexpected err\n");
        exit(2);
    }

    return lvtable_type;
}

void create_internal_functions()
{
    Type* result_type;
    std::vector<Type *> type_params;
    Type* param1_type;
    Type* param2_type;
    Type* param3_type;
    Type* param4_type;
    Type* param5_type;
    Type* param6_type;
    Type* param7_type;
    Type* param8_type;
    Type* param9_type;
    Type* param10_type;
    Type* param11_type;
    Type* param12_type;
    Type* param13_type;
    Type* param14_type;
    Type* param15_type;
    FunctionType* function_type;

/*
    /// malloc ///
    type_params.clear();
    
    result_type = PointerType::get(Type::getVoidTy(TheContext), 0);

    param1_type = IntegerType::get(TheContext, 64);
    type_params.push_back(param1_type);

    function_type = FunctionType::get(result_type, type_params, false);
    Function::Create(function_type, Function::ExternalLinkage, "malloc", TheModule);
*/

/*
    /// free ///
    type_params.clear();
    
    result_type = Type::getVoidTy(TheContext);

    param1_type = PointerType::get(Type::getVoidTy(TheContext), 0);
    type_params.push_back(param1_type);

    function_type = FunctionType::get(result_type, type_params, false);
    Function::Create(function_type, Function::ExternalLinkage, "ncfree", TheModule);
*/

    Type* lvtable_type = get_lvtable_type();

    gLVTableValue = new GlobalVariable(*TheModule, lvtable_type, false, GlobalValue::InternalLinkage, 0, "gLVTable");
#if LLVM_VERSION_MAJOR >= 11
    gLVTableValue->setAlignment(MaybeAlign(8));
#else
    gLVTableValue->setAlignment(8);
#endif

    ConstantAggregateZero* initializer = ConstantAggregateZero::get(lvtable_type);

    gLVTableValue->setInitializer(initializer);

    gNCDebugHeapValue = new GlobalVariable(*TheModule, IntegerType::get(TheContext, 32), false, GlobalVariable::ExternalLinkage, 0, "gNCDebugHeap");

    Value* lvtable_value2 = Builder.CreateCast(Instruction::BitCast, gLVTableValue, PointerType::get(PointerType::get(IntegerType::get(TheContext, 8), 0), 0));
}

Value* load_address_to_lvtable(int index, sNodeType* var_type, sCompileInfo* info)
{
    Value* lvtable_value2 = Builder.CreateCast(Instruction::BitCast, gLVTableValue, PointerType::get(PointerType::get(IntegerType::get(TheContext, 8), 0), 0));

    Value* lvalue = lvtable_value2;
    Value* rvalue = ConstantInt::get(TheContext, llvm::APInt(32, index));
    Value* element_address_value = Builder.CreateGEP(lvalue, rvalue);

    Value* pointer_value = Builder.CreateAlignedLoad(element_address_value, 8);

    int alignment = get_llvm_alignment_from_node_type(var_type);

    Type* llvm_type;
    (void)create_llvm_type_from_node_type(&llvm_type, var_type, var_type, info);

    Value* pointer_value2 = Builder.CreateCast(Instruction::BitCast, pointer_value, PointerType::get(llvm_type, 0));

    return pointer_value2;
}

Value* store_lvtable()
{
    Type* lvtable_type = get_lvtable_type();

    Value* lvtable = Builder.CreateAlloca(lvtable_type, 0, "lvtable");

    Function* fun = TheModule->getFunction("llvm.memcpy.p0i8.p0i8.i64");

    if(fun == nullptr) {
        fprintf(stderr, "require llvm.memcpy.p0i8.p0i8.i6\n");
        exit(2);
    }

    std::vector<Value*> params2;

    Value* param = lvtable;
    param = Builder.CreateCast(Instruction::BitCast, param, PointerType::get(IntegerType::get(TheContext, 8), 0));
    params2.push_back(param);

    Value* param2 = gLVTableValue;
    param2 = Builder.CreateCast(Instruction::BitCast, param2, PointerType::get(IntegerType::get(TheContext, 8), 0));
    params2.push_back(param2);

    Value* param3 = ConstantInt::get(TheContext, llvm::APInt(64, sizeof(char*)*LOCAL_VARIABLE_MAX, true));
    params2.push_back(param3);

    Value* param4 = ConstantInt::get(TheContext, llvm::APInt(1, 0, true)); 
    params2.push_back(param4);

    Builder.CreateCall(fun, params2);

    return lvtable;
}

void restore_lvtable(Value* lvtable)
{
    Function* fun = TheModule->getFunction("llvm.memcpy.p0i8.p0i8.i64");

    if(fun == nullptr) {
        fprintf(stderr, "require llvm.memcpy.p0i8.p0i8.i64\n");
        exit(2);
    }

    std::vector<Value*> params2;

    Value* param = gLVTableValue;
    param = Builder.CreateCast(Instruction::BitCast, param, PointerType::get(IntegerType::get(TheContext, 8), 0));
    params2.push_back(param);

    Value* param2 = lvtable;
    param2 = Builder.CreateCast(Instruction::BitCast, param2, PointerType::get(IntegerType::get(TheContext, 8), 0));
    params2.push_back(param2);

    Value* param3 = ConstantInt::get(TheContext, llvm::APInt(64, sizeof(char*)*LOCAL_VARIABLE_MAX, true));
    params2.push_back(param3);

    Value* param4 = ConstantInt::get(TheContext, llvm::APInt(1, 0, true)); 
    params2.push_back(param4);

    Builder.CreateCall(fun, params2);
}

void store_address_to_lvtable(int index, Value* address)
{
    Value* lvtable_value2 = Builder.CreateCast(Instruction::BitCast, gLVTableValue, PointerType::get(PointerType::get(IntegerType::get(TheContext, 8), 0), 0));

    Value* lvalue = lvtable_value2;
    Value* rvalue = ConstantInt::get(TheContext, llvm::APInt(32, index));
    Value* element_address_value = Builder.CreateGEP(lvalue, rvalue);
    Value* address2 = Builder.CreateCast(Instruction::BitCast, address, PointerType::get(IntegerType::get(TheContext, 8), 0));

    Builder.CreateAlignedStore(address2, element_address_value, 8);
}

Function* create_llvm_function(const std::string& name)
{
    std::vector<Type *> params;

    Type* result_type = IntegerType::get(TheContext, 32);
    FunctionType* function_type = FunctionType::get(result_type, params, false);

    Function* function = Function::Create(function_type, Function::ExternalLinkage, name, TheModule);

    return function;
}

void declare_builtin_functions()
{
    Type* param1_type;
    Type* param2_type;
    Type* param3_type;
    Type* param4_type;
    Type* param5_type;
    Type* param6_type;
    Type* param7_type;
    Type* param8_type;
    Type* param9_type;
    Type* result_type;

    std::vector<Type *> params;

    FunctionType* function_type;

    /// va_list ///
    params.clear();

    StructType* struct_type = StructType::create(TheContext, "__builtin_va_list");

    std::vector<Type*> fields;
#ifdef __X86_64_CPU__
    param1_type = IntegerType::get(TheContext,32);
    fields.push_back(param1_type);

    param2_type = IntegerType::get(TheContext,32);
    fields.push_back(param2_type);

    param3_type = PointerType::get(IntegerType::get(TheContext,8), 0);
    fields.push_back(param3_type);

    param4_type = PointerType::get(IntegerType::get(TheContext,8), 0);
    fields.push_back(param4_type);

    if(struct_type->isOpaque()) {
        struct_type->setBody(fields, false);
    }

    sCLClass* va_list_struct = alloc_struct("__builtin_va_list", FALSE);

    int num_fields = 4;
    char* field_names[STRUCT_FIELD_MAX];
    sNodeType* fields2[STRUCT_FIELD_MAX];

    field_names[0] = "field";
    fields2[0] = create_node_type_with_class_name("int");

    field_names[1] = "field";
    fields2[1] = create_node_type_with_class_name("int");

    field_names[2] = "field";
    fields2[2] = create_node_type_with_class_name("char*");

    field_names[3] = "field";
    fields2[3] = create_node_type_with_class_name("char*");

    add_fields_to_struct(va_list_struct, num_fields, field_names, fields2);

    sNodeType* node_type = create_node_type_with_class_pointer(va_list_struct);

    std::pair<Type*, sNodeType*> pair_value;

    pair_value.first = struct_type;
    pair_value.second = clone_node_type(node_type);

    gLLVMStructType["__builtin_va_list"] = pair_value;
#elif __AARCH64_CPU__
    param1_type = PointerType::get(IntegerType::get(TheContext,8), 0);
    fields.push_back(param1_type);

    param2_type = PointerType::get(IntegerType::get(TheContext,8), 0);
    fields.push_back(param2_type);

    param3_type = PointerType::get(IntegerType::get(TheContext,8), 0);
    fields.push_back(param3_type);

    param4_type = IntegerType::get(TheContext,32);
    fields.push_back(param4_type);

    param5_type = IntegerType::get(TheContext,32);
    fields.push_back(param5_type);

    if(struct_type->isOpaque()) {
        struct_type->setBody(fields, false);
    }

    sCLClass* va_list_struct = alloc_struct("__builtin_va_list", FALSE);

    int num_fields = 5;
    char* field_names[STRUCT_FIELD_MAX];
    sNodeType* fields2[STRUCT_FIELD_MAX];

    field_names[0] = "field";
    fields2[0] = create_node_type_with_class_name("char*");

    field_names[1] = "field";
    fields2[1] = create_node_type_with_class_name("char*");

    field_names[2] = "field";
    fields2[2] = create_node_type_with_class_name("char*");

    field_names[3] = "field";
    fields2[3] = create_node_type_with_class_name("int");

    field_names[4] = "field";
    fields2[4] = create_node_type_with_class_name("int");

    add_fields_to_struct(va_list_struct, num_fields, field_names, fields2);

    sNodeType* node_type = create_node_type_with_class_pointer(va_list_struct);

    std::pair<Type*, sNodeType*> pair_value;

    pair_value.first = struct_type;
    pair_value.second = clone_node_type(node_type);

    gLLVMStructType["__builtin_va_list"] = pair_value;
#else
    param1_type = PointerType::get(IntegerType::get(TheContext,8), 0);
    fields.push_back(param1_type);

    param2_type = PointerType::get(IntegerType::get(TheContext,8), 0);
    fields.push_back(param2_type);

    param3_type = PointerType::get(IntegerType::get(TheContext,8), 0);
    fields.push_back(param3_type);

    param4_type = IntegerType::get(TheContext,32);
    fields.push_back(param4_type);

    param5_type = IntegerType::get(TheContext,32);
    fields.push_back(param5_type);

    if(struct_type->isOpaque()) {
        struct_type->setBody(fields, false);
    }

    sCLClass* va_list_struct = alloc_struct("__builtin_va_list", FALSE);

    int num_fields = 5;
    char* field_names[STRUCT_FIELD_MAX];
    sNodeType* fields2[STRUCT_FIELD_MAX];

    field_names[0] = "field";
    fields2[0] = create_node_type_with_class_name("char*");

    field_names[1] = "field";
    fields2[1] = create_node_type_with_class_name("char*");

    field_names[2] = "field";
    fields2[2] = create_node_type_with_class_name("char*");

    field_names[3] = "field";
    fields2[3] = create_node_type_with_class_name("int");

    field_names[4] = "field";
    fields2[4] = create_node_type_with_class_name("int");

    add_fields_to_struct(va_list_struct, num_fields, field_names, fields2);

    sNodeType* node_type = create_node_type_with_class_pointer(va_list_struct);

    std::pair<Type*, sNodeType*> pair_value;

    pair_value.first = struct_type;
    pair_value.second = clone_node_type(node_type);

    gLLVMStructType["__builtin_va_list"] = pair_value;
#endif

    /// memcpy ///
    params.clear();

    {
        std::vector<Type *> llvm_param_types;
        sNodeType* param_types[PARAMS_MAX];
        char param_names[PARAMS_MAX][VAR_NAME_MAX];

        sNodeType* result_type = create_node_type_with_class_name("void");

        int num_params = 4;
        xstrncpy(param_names[0], "p", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("char*");
        xstrncpy(param_names[1], "p2", VAR_NAME_MAX);
        param_types[1] = create_node_type_with_class_name("char*");
        xstrncpy(param_names[2], "len", VAR_NAME_MAX);
        param_types[2] = create_node_type_with_class_name("long");
        xstrncpy(param_names[3], "v", VAR_NAME_MAX);
        param_types[3] = create_node_type_with_class_name("bool");

        BOOL var_arg = FALSE;

        char method_generics_type_names[GENERICS_TYPES_MAX][VAR_NAME_MAX];

        memset(method_generics_type_names, 0, sizeof(char)*GENERICS_TYPES_MAX*VAR_NAME_MAX);

        char generics_type_names[GENERICS_TYPES_MAX][VAR_NAME_MAX];

        memset(generics_type_names, 0, sizeof(char)*GENERICS_TYPES_MAX*VAR_NAME_MAX);

        Function* llvm_fun;
        sFunction* neo_c_fun = NULL;

        char* param_names2[PARAMS_MAX];
        int i;
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }
        char* method_generics_type_names2[GENERICS_TYPES_MAX];
        int num_method_generics = 0;
        for(i=0; i<num_method_generics; i++) {
            method_generics_type_names2[i] = method_generics_type_names[i];
        }
        char* generics_type_names2[GENERICS_TYPES_MAX];
        int num_generics = 0;
        for(i=0; i<num_generics; i++) {
            generics_type_names2[i] = generics_type_names[i];
        }
        add_function("__builtin_memcpy", "__builtin_memcpy", "", param_names2, param_types, num_params, result_type, 0, method_generics_type_names2, TRUE, var_arg, NULL, 0, generics_type_names2, FALSE, FALSE, NULL, 0, TRUE, TRUE, 0, &llvm_fun, NULL, FALSE, NULL, -1, "__builtin_memcpy", &neo_c_fun);
    }

    /// llvm.memcpy.p0i8.p0i8.i64 ///
    params.clear();

    {
        std::vector<Type *> llvm_param_types;
        sNodeType* param_types[PARAMS_MAX];
        char param_names[PARAMS_MAX][VAR_NAME_MAX];

        sNodeType* result_type = create_node_type_with_class_name("void");

        int num_params = 4;
        xstrncpy(param_names[0], "p", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("char*");
        xstrncpy(param_names[1], "p2", VAR_NAME_MAX);
        param_types[1] = create_node_type_with_class_name("char*");
        xstrncpy(param_names[2], "len", VAR_NAME_MAX);
        param_types[2] = create_node_type_with_class_name("long");
        xstrncpy(param_names[3], "v", VAR_NAME_MAX);
        param_types[3] = create_node_type_with_class_name("bool");

        BOOL var_arg = FALSE;

        char method_generics_type_names[GENERICS_TYPES_MAX][VAR_NAME_MAX];

        memset(method_generics_type_names, 0, sizeof(char)*GENERICS_TYPES_MAX*VAR_NAME_MAX);

        char generics_type_names[GENERICS_TYPES_MAX][VAR_NAME_MAX];

        memset(generics_type_names, 0, sizeof(char)*GENERICS_TYPES_MAX*VAR_NAME_MAX);

        Function* llvm_fun;
        sFunction* neo_c_fun = NULL;

        char* param_names2[PARAMS_MAX];
        int i;
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }
        char* method_generics_type_names2[GENERICS_TYPES_MAX];
        int num_method_generics = 0;
        for(i=0; i<num_method_generics; i++) {
            method_generics_type_names2[i] = method_generics_type_names[i];
        }
        char* generics_type_names2[GENERICS_TYPES_MAX];
        int num_generics = 0;
        for(i=0; i<num_generics; i++) {
            generics_type_names2[i] = generics_type_names[i];
        }
        add_function("llvm.memcpy.p0i8.p0i8.i64", "llvm.memcpy.p0i8.p0i8.i64", "", param_names2, param_types, num_params, result_type, 0, method_generics_type_names2, TRUE, var_arg, NULL, 0, generics_type_names2, FALSE, FALSE, NULL, 0, TRUE, TRUE, 0, &llvm_fun, NULL, FALSE, NULL, -1, "llvm.memcpy.p0i8.p0i8.i64", &neo_c_fun);
    }

    /// memset ///
    params.clear();

    {
        std::vector<Type *> llvm_param_types;
        sNodeType* param_types[PARAMS_MAX];
        char param_names[PARAMS_MAX][VAR_NAME_MAX];

        sNodeType* result_type = create_node_type_with_class_name("void");

        int num_params = 4;
        xstrncpy(param_names[0], "p", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("char*");
        xstrncpy(param_names[1], "p2", VAR_NAME_MAX);
        param_types[1] = create_node_type_with_class_name("char*");
        xstrncpy(param_names[2], "len", VAR_NAME_MAX);
        param_types[2] = create_node_type_with_class_name("long");
        xstrncpy(param_names[3], "v", VAR_NAME_MAX);
        param_types[3] = create_node_type_with_class_name("bool");

        BOOL var_arg = FALSE;

        char method_generics_type_names[GENERICS_TYPES_MAX][VAR_NAME_MAX];

        memset(method_generics_type_names, 0, sizeof(char)*GENERICS_TYPES_MAX*VAR_NAME_MAX);

        char generics_type_names[GENERICS_TYPES_MAX][VAR_NAME_MAX];

        memset(generics_type_names, 0, sizeof(char)*GENERICS_TYPES_MAX*VAR_NAME_MAX);

        Function* llvm_fun;
        sFunction* neo_c_fun = NULL;

        char* param_names2[PARAMS_MAX];
        int i;
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }
        char* method_generics_type_names2[GENERICS_TYPES_MAX];
        int num_method_generics = 0;
        for(i=0; i<num_method_generics; i++) {
            method_generics_type_names2[i] = method_generics_type_names[i];
        }
        char* generics_type_names2[GENERICS_TYPES_MAX];
        int num_generics = 0;
        for(i=0; i<num_generics; i++) {
            generics_type_names2[i] = generics_type_names[i];
        }
        add_function("__builtin_memset", "__builtin_memset", "", param_names2, param_types, num_params, result_type, 0, method_generics_type_names2, TRUE, var_arg, NULL, 0, generics_type_names2, FALSE, FALSE, NULL, 0, TRUE, TRUE, 0, &llvm_fun, NULL, FALSE, NULL, -1, "__builtin_memset", &neo_c_fun);
        add_function("llvm.memset.p0i8.i64", "llvm.memset.p0i8.i64", "", param_names2, param_types, num_params, result_type, 0, method_generics_type_names2, TRUE, var_arg, NULL, 0, generics_type_names2, FALSE, FALSE, NULL, 0, TRUE, TRUE, 0, &llvm_fun, NULL, FALSE, NULL, -1, "llvm.memset.p0i8.i64", &neo_c_fun);
    }

    /// memmove ///
    params.clear();

    {
        std::vector<Type *> llvm_param_types;
        sNodeType* param_types[PARAMS_MAX];
        char param_names[PARAMS_MAX][VAR_NAME_MAX];

        sNodeType* result_type = create_node_type_with_class_name("void");

        int num_params = 4;
        xstrncpy(param_names[0], "p", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("char*");
        xstrncpy(param_names[1], "p2", VAR_NAME_MAX);
        param_types[1] = create_node_type_with_class_name("char*");
        xstrncpy(param_names[2], "len", VAR_NAME_MAX);
        param_types[2] = create_node_type_with_class_name("long");
        xstrncpy(param_names[3], "v", VAR_NAME_MAX);
        param_types[3] = create_node_type_with_class_name("bool");

        BOOL var_arg = FALSE;

        char method_generics_type_names[GENERICS_TYPES_MAX][VAR_NAME_MAX];

        memset(method_generics_type_names, 0, sizeof(char)*GENERICS_TYPES_MAX*VAR_NAME_MAX);

        char generics_type_names[GENERICS_TYPES_MAX][VAR_NAME_MAX];

        memset(generics_type_names, 0, sizeof(char)*GENERICS_TYPES_MAX*VAR_NAME_MAX);

        Function* llvm_fun;
        sFunction* neo_c_fun = NULL;

        char* param_names2[PARAMS_MAX];
        int i;
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }
        char* method_generics_type_names2[GENERICS_TYPES_MAX];
        int num_method_generics = 0;
        for(i=0; i<num_method_generics; i++) {
            method_generics_type_names2[i] = method_generics_type_names[i];
        }
        char* generics_type_names2[GENERICS_TYPES_MAX];
        int num_generics = 0;
        for(i=0; i<num_generics; i++) {
            generics_type_names2[i] = generics_type_names[i];
        }
        add_function("__builtin_memmove", "__builtin_memmove", "", param_names2, param_types, num_params, result_type, 0, method_generics_type_names2, TRUE, var_arg, NULL, 0, generics_type_names2, FALSE, FALSE, NULL, 0, TRUE, TRUE, 0, &llvm_fun, NULL, FALSE, NULL, -1, "__builtin_memmove", &neo_c_fun);
        add_function("llvm.memmove.p0i8.p0i8.i64", "llvm.memmove.p0i8.p0i8.i64", "llvm.memmove.p0i8.p0i8.i64", param_names2, param_types, num_params, result_type, 0, method_generics_type_names2, TRUE, var_arg, NULL, 0, generics_type_names2, FALSE, FALSE, NULL, 0, TRUE, TRUE, 0, &llvm_fun, NULL, FALSE, NULL, -1, "llvm.memmove.p0i8.p0i8.i64", &neo_c_fun);
    }

    /// bswap16 ///
    params.clear();

    {
        std::vector<Type *> llvm_param_types;
        sNodeType* param_types[PARAMS_MAX];
        char param_names[PARAMS_MAX][VAR_NAME_MAX];

        sNodeType* result_type = create_node_type_with_class_name("short");
        result_type->mUnsigned = TRUE;

        int num_params = 1;
        xstrncpy(param_names[0], "v", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("short");
        param_types[0]->mUnsigned = TRUE;

        BOOL var_arg = FALSE;

        char method_generics_type_names[GENERICS_TYPES_MAX][VAR_NAME_MAX];

        memset(method_generics_type_names, 0, sizeof(char)*GENERICS_TYPES_MAX*VAR_NAME_MAX);

        char generics_type_names[GENERICS_TYPES_MAX][VAR_NAME_MAX];

        memset(generics_type_names, 0, sizeof(char)*GENERICS_TYPES_MAX*VAR_NAME_MAX);

        Function* llvm_fun;
        sFunction* neo_c_fun = NULL;

        char* param_names2[PARAMS_MAX];
        int i;
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }
        char* method_generics_type_names2[GENERICS_TYPES_MAX];
        int num_method_generics = 0;
        for(i=0; i<num_method_generics; i++) {
            method_generics_type_names2[i] = method_generics_type_names[i];
        }
        char* generics_type_names2[GENERICS_TYPES_MAX];
        int num_generics = 0;
        for(i=0; i<num_generics; i++) {
            generics_type_names2[i] = generics_type_names[i];
        }
        add_function("__builtin_bswap16", "__builtin_bswap16", "", param_names2, param_types, num_params, result_type, 0, method_generics_type_names2, TRUE, var_arg, NULL, 0, generics_type_names2, FALSE, FALSE, NULL, 0, TRUE, TRUE, 0, &llvm_fun, NULL, FALSE, NULL, -1, "__builtin_bswap16", &neo_c_fun);
    }

    /// bswap64 ///
    params.clear();

    {
        std::vector<Type *> llvm_param_types;
        sNodeType* param_types[PARAMS_MAX];
        char param_names[PARAMS_MAX][VAR_NAME_MAX];

        sNodeType* result_type = create_node_type_with_class_name("long");
        result_type->mUnsigned = TRUE;

        int num_params = 1;
        xstrncpy(param_names[0], "v", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("long");
        param_types[0]->mUnsigned = TRUE;

        BOOL var_arg = FALSE;

        char method_generics_type_names[GENERICS_TYPES_MAX][VAR_NAME_MAX];

        memset(method_generics_type_names, 0, sizeof(char)*GENERICS_TYPES_MAX*VAR_NAME_MAX);

        char generics_type_names[GENERICS_TYPES_MAX][VAR_NAME_MAX];

        memset(generics_type_names, 0, sizeof(char)*GENERICS_TYPES_MAX*VAR_NAME_MAX);

        Function* llvm_fun;
        sFunction* neo_c_fun = NULL;

        char* param_names2[PARAMS_MAX];
        int i;
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }
        char* method_generics_type_names2[GENERICS_TYPES_MAX];
        int num_method_generics = 0;
        for(i=0; i<num_method_generics; i++) {
            method_generics_type_names2[i] = method_generics_type_names[i];
        }
        char* generics_type_names2[GENERICS_TYPES_MAX];
        int num_generics = 0;
        for(i=0; i<num_generics; i++) {
            generics_type_names2[i] = generics_type_names[i];
        }
        add_function("__builtin_bswap64", "__builtin_bswap64", "", param_names2, param_types, num_params, result_type, 0, method_generics_type_names2, TRUE, var_arg, NULL, 0, generics_type_names2, FALSE, FALSE, NULL, 0, TRUE, TRUE, 0, &llvm_fun, NULL, FALSE, NULL, -1, "__builtin_bswap64", &neo_c_fun);
    }

    /// bswap32 ///
    params.clear();

    {
        std::vector<Type *> llvm_param_types;
        sNodeType* param_types[PARAMS_MAX];
        char param_names[PARAMS_MAX][VAR_NAME_MAX];

        sNodeType* result_type = create_node_type_with_class_name("int");
        result_type->mUnsigned = TRUE;

        int num_params = 1;
        xstrncpy(param_names[0], "v", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("int");
        param_types[0]->mUnsigned = TRUE;

        BOOL var_arg = FALSE;

        char method_generics_type_names[GENERICS_TYPES_MAX][VAR_NAME_MAX];

        memset(method_generics_type_names, 0, sizeof(char)*GENERICS_TYPES_MAX*VAR_NAME_MAX);

        char generics_type_names[GENERICS_TYPES_MAX][VAR_NAME_MAX];

        memset(generics_type_names, 0, sizeof(char)*GENERICS_TYPES_MAX*VAR_NAME_MAX);

        Function* llvm_fun;
        sFunction* neo_c_fun = NULL;

        char* param_names2[PARAMS_MAX];
        int i;
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }
        char* method_generics_type_names2[GENERICS_TYPES_MAX];
        int num_method_generics = 0;
        for(i=0; i<num_method_generics; i++) {
            method_generics_type_names2[i] = method_generics_type_names[i];
        }
        char* generics_type_names2[GENERICS_TYPES_MAX];
        int num_generics = 0;
        for(i=0; i<num_generics; i++) {
            generics_type_names2[i] = generics_type_names[i];
        }
        add_function("__builtin_bswap32", "__builtin_bswap32", "", param_names2, param_types, num_params, result_type, 0, method_generics_type_names2, TRUE, var_arg, NULL, 0, generics_type_names2, FALSE, FALSE, NULL, 0, TRUE, TRUE, 0, &llvm_fun, NULL, FALSE, NULL, -1, "__builtin_bswap32", &neo_c_fun);
    }

    /// llvm.memset ///
    params.clear();

#ifdef __32BIT_CPU__
    {
        std::vector<Type *> llvm_param_types;
        sNodeType* param_types[PARAMS_MAX];
        char param_names[PARAMS_MAX][VAR_NAME_MAX];

        sNodeType* result_type = create_node_type_with_class_name("void");

        int num_params = 4;
        xstrncpy(param_names[0], "p", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("char*");
        xstrncpy(param_names[1], "p2", VAR_NAME_MAX);
        param_types[1] = create_node_type_with_class_name("char");
        xstrncpy(param_names[2], "len", VAR_NAME_MAX);
        param_types[2] = create_node_type_with_class_name("int");
        xstrncpy(param_names[3], "v", VAR_NAME_MAX);
        param_types[3] = create_node_type_with_class_name("bool");

        BOOL var_arg = FALSE;

        char method_generics_type_names[GENERICS_TYPES_MAX][VAR_NAME_MAX];

        memset(method_generics_type_names, 0, sizeof(char)*GENERICS_TYPES_MAX*VAR_NAME_MAX);

        char generics_type_names[GENERICS_TYPES_MAX][VAR_NAME_MAX];

        memset(generics_type_names, 0, sizeof(char)*GENERICS_TYPES_MAX*VAR_NAME_MAX);

        Function* llvm_fun;
        sFunction* neo_c_fun = NULL;

        char* param_names2[PARAMS_MAX];
        int i;
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }
        char* method_generics_type_names2[GENERICS_TYPES_MAX];
        int num_method_generics = 0;
        for(i=0; i<num_method_generics; i++) {
            method_generics_type_names2[i] = method_generics_type_names[i];
        }
        char* generics_type_names2[GENERICS_TYPES_MAX];
        int num_generics = 0;
        for(i=0; i<num_generics; i++) {
            generics_type_names2[i] = generics_type_names[i];
        }
        add_function("__builtin_memset", "__builtin_memset", "", param_names2, param_types, num_params, result_type, 0, method_generics_type_names2, TRUE, var_arg, NULL, 0, generics_type_names2, FALSE, FALSE, NULL, 0, TRUE, TRUE, 0, &llvm_fun, NULL, FALSE, NULL, -1, "__builtin_memset", &neo_c_fun);
        add_function("llvm.memset.p0i8.i32", "llvm.memset.p0i8.i32", "llvm.memset.p0i8.i32", param_names2, param_types, num_params, result_type, 0, method_generics_type_names2, TRUE, var_arg, NULL, 0, generics_type_names2, FALSE, FALSE, NULL, 0, TRUE, TRUE, 0, &llvm_fun, NULL, FALSE, NULL, -1, "llvm.memset.p0i8.i32", &neo_c_fun);
    }
#else
    {
        std::vector<Type *> llvm_param_types;
        sNodeType* param_types[PARAMS_MAX];
        char param_names[PARAMS_MAX][VAR_NAME_MAX];

        sNodeType* result_type = create_node_type_with_class_name("void");

        int num_params = 4;
        xstrncpy(param_names[0], "p", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("char*");
        xstrncpy(param_names[1], "p2", VAR_NAME_MAX);
        param_types[1] = create_node_type_with_class_name("char");
        xstrncpy(param_names[2], "len", VAR_NAME_MAX);
        param_types[2] = create_node_type_with_class_name("long");
        xstrncpy(param_names[3], "v", VAR_NAME_MAX);
        param_types[3] = create_node_type_with_class_name("bool");

        BOOL var_arg = FALSE;

        char method_generics_type_names[GENERICS_TYPES_MAX][VAR_NAME_MAX];

        memset(method_generics_type_names, 0, sizeof(char)*GENERICS_TYPES_MAX*VAR_NAME_MAX);

        char generics_type_names[GENERICS_TYPES_MAX][VAR_NAME_MAX];

        memset(generics_type_names, 0, sizeof(char)*GENERICS_TYPES_MAX*VAR_NAME_MAX);

        Function* llvm_fun;
        sFunction* neo_c_fun = NULL;

        char* param_names2[PARAMS_MAX];
        int i;
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }
        char* method_generics_type_names2[GENERICS_TYPES_MAX];
        int num_method_generics = 0;
        for(i=0; i<num_method_generics; i++) {
            method_generics_type_names2[i] = method_generics_type_names[i];
        }
        char* generics_type_names2[GENERICS_TYPES_MAX];
        int num_generics = 0;
        for(i=0; i<num_generics; i++) {
            generics_type_names2[i] = generics_type_names[i];
        }
        add_function("__builtin_memset", "__builtin_memset", "", param_names2, param_types, num_params, result_type, 0, method_generics_type_names2, TRUE, var_arg, NULL, 0, generics_type_names2, FALSE, FALSE, NULL, 0, TRUE, TRUE, 0, &llvm_fun, NULL, FALSE, NULL, -1, "__builtin_memset", &neo_c_fun);
        add_function("llvm.memset.p0i8.i64", "llvm.memset.p0i8.i64", "llvm.memset.p0i8.i32", param_names2, param_types, num_params, result_type, 0, method_generics_type_names2, TRUE, var_arg, NULL, 0, generics_type_names2, FALSE, FALSE, NULL, 0, TRUE, TRUE, 0, &llvm_fun, NULL, FALSE, NULL, -1, "llvm.memset.p0i8.i64", &neo_c_fun);
    }

#endif

    /// va_start ///
    params.clear();

    {
        std::vector<Type *> llvm_param_types;
        sNodeType* param_types[PARAMS_MAX];
        char param_names[PARAMS_MAX][VAR_NAME_MAX];

        sNodeType* result_type = create_node_type_with_class_name("void");

        int num_params = 1;
        xstrncpy(param_names[0], "p", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("char*");

        BOOL var_arg = FALSE;

        char method_generics_type_names[GENERICS_TYPES_MAX][VAR_NAME_MAX];

        memset(method_generics_type_names, 0, sizeof(char)*GENERICS_TYPES_MAX*VAR_NAME_MAX);

        char generics_type_names[GENERICS_TYPES_MAX][VAR_NAME_MAX];

        memset(generics_type_names, 0, sizeof(char)*GENERICS_TYPES_MAX*VAR_NAME_MAX);

        Function* llvm_fun;
        sFunction* neo_c_fun = NULL;

        char* param_names2[PARAMS_MAX];
        int i;
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }
        char* method_generics_type_names2[GENERICS_TYPES_MAX];
        int num_method_generics = 0;
        for(i=0; i<num_method_generics; i++) {
            method_generics_type_names2[i] = method_generics_type_names[i];
        }
        char* generics_type_names2[GENERICS_TYPES_MAX];
        int num_generics = 0;
        for(i=0; i<num_generics; i++) {
            generics_type_names2[i] = generics_type_names[i];
        }
        add_function("llvm.va_start", "llvm.va_start", "", param_names2, param_types, num_params, result_type, 0, method_generics_type_names2, TRUE, var_arg, NULL, 0, generics_type_names2, FALSE, FALSE, NULL, 0, TRUE, TRUE, 0, &llvm_fun, NULL, FALSE, NULL, -1, "llvm.va_start", &neo_c_fun);
        add_function("__builtin_va_start", "__builtin_va_start", "", param_names2, param_types, num_params, result_type, 0, method_generics_type_names2, TRUE, var_arg, NULL, 0, generics_type_names2, FALSE, FALSE, NULL, 0, TRUE, TRUE, 0, &llvm_fun, NULL, FALSE, NULL, -1, "__builtin_va_start", &neo_c_fun);
    }

    /// va_end ///
    params.clear();

    {
        std::vector<Type *> llvm_param_types;
        sNodeType* param_types[PARAMS_MAX];
        char param_names[PARAMS_MAX][VAR_NAME_MAX];

        sNodeType* result_type = create_node_type_with_class_name("void");

        int num_params = 1;
        xstrncpy(param_names[0], "p", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("char*");

        BOOL var_arg = FALSE;

        char method_generics_type_names[GENERICS_TYPES_MAX][VAR_NAME_MAX];

        memset(method_generics_type_names, 0, sizeof(char)*GENERICS_TYPES_MAX*VAR_NAME_MAX);

        char generics_type_names[GENERICS_TYPES_MAX][VAR_NAME_MAX];

        memset(generics_type_names, 0, sizeof(char)*GENERICS_TYPES_MAX*VAR_NAME_MAX);

        Function* llvm_fun;
        sFunction* neo_c_fun = NULL;

        char* param_names2[PARAMS_MAX];
        int i;
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }
        char* method_generics_type_names2[GENERICS_TYPES_MAX];
        int num_method_generics = 0;
        for(i=0; i<num_method_generics; i++) {
            method_generics_type_names2[i] = method_generics_type_names[i];
        }
        char* generics_type_names2[GENERICS_TYPES_MAX];
        int num_generics = 0;
        for(i=0; i<num_generics; i++) {
            generics_type_names2[i] = generics_type_names[i];
        }
        add_function("llvm.va_end", "llvm.va_end", "", param_names2, param_types, num_params, result_type, 0, method_generics_type_names2, TRUE, var_arg, NULL, 0, generics_type_names2, FALSE, FALSE, NULL, 0, TRUE, TRUE, 0, &llvm_fun, NULL, FALSE, NULL, -1, "llvm.va_end", &neo_c_fun);
        add_function("__builtin_va_end", "__builtin_va_end", "", param_names2, param_types, num_params, result_type, 0, method_generics_type_names2, TRUE, var_arg, NULL, 0, generics_type_names2, FALSE, FALSE, NULL, 0, TRUE, TRUE, 0, &llvm_fun, NULL, FALSE, NULL, -1, "__builtin_va_end", &neo_c_fun);
    }

/*
    /// va_copy ///
    params.clear();

    {
        std::vector<Type *> llvm_param_types;
        sNodeType* param_types[PARAMS_MAX];
        char param_names[PARAMS_MAX][VAR_NAME_MAX];

        sNodeType* result_type = create_node_type_with_class_name("void");

        int num_params = 2;
        xstrncpy(param_names[0], "p", VAR_NAME_MAX);
        xstrncpy(param_names[1], "p2", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("char*");
        param_types[1] = create_node_type_with_class_name("char*");

        BOOL var_arg = FALSE;

        char method_generics_type_names[GENERICS_TYPES_MAX][VAR_NAME_MAX];

        memset(method_generics_type_names, 0, sizeof(char)*GENERICS_TYPES_MAX*VAR_NAME_MAX);

        char generics_type_names[GENERICS_TYPES_MAX][VAR_NAME_MAX];

        memset(generics_type_names, 0, sizeof(char)*GENERICS_TYPES_MAX*VAR_NAME_MAX);

        Function* llvm_fun;
        sFunction* neo_c_fun = NULL;

        char* param_names2[PARAMS_MAX];
        int i;
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }
        char* method_generics_type_names2[GENERICS_TYPES_MAX];
        int num_method_generics = 0;
        for(i=0; i<num_method_generics; i++) {
            method_generics_type_names2[i] = method_generics_type_names[i];
        }
        char* generics_type_names2[GENERICS_TYPES_MAX];
        int num_generics = 0;
        for(i=0; i<num_generics; i++) {
            generics_type_names2[i] = generics_type_names[i];
        }
        add_function("llvm.va_copy", "llvm.va_copy", "", param_names2, param_types, num_params, result_type, 0, method_generics_type_names2, TRUE, var_arg, NULL, 0, generics_type_names2, FALSE, FALSE, NULL, 0, TRUE, TRUE, 0, &llvm_fun, NULL, FALSE, NULL, -1, "llvm.va_copy", &neo_c_fun);
    }
*/
}

void start_to_make_native_code(char* sname)
{
    char sname2[PATH_MAX];
    xstrncpy(sname2, sname, PATH_MAX);

    char* sname3 = basename(sname2);

    char sname4[PATH_MAX];
    xstrncpy(sname4, sname3, PATH_MAX);

    char* p = sname4 + strlen(sname4);
    while(p >= sname4) {
        if(*p == '.') {
            *p = '\0';
            break;
        }
        else {
            p--;
        }
    }

    char module_name[PATH_MAX + 128];
    snprintf(module_name, PATH_MAX, "Module %s", sname4);
    TheModule = new Module(module_name, TheContext);

    if(gNCDebug) {
        TheModule->addModuleFlag(Module::Warning, "Debug Info Version", DEBUG_METADATA_VERSION);
        TheModule->addModuleFlag(llvm::Module::Warning, "Dwarf Version", 2);
    }

    DBuilder = new DIBuilder(*TheModule);

    char* cwd = getenv("PWD");

    if(cwd == NULL) {
        cwd = ".";
    }

#if LLVM_VERSION_MAJOR >= 5
    KSDbgInfo.TheCU = DBuilder->createCompileUnit(
        dwarf::DW_LANG_C, DBuilder->createFile(sname, cwd), "neo-c", 0, "", 0);
#else
    KSDbgInfo.TheCU = DBuilder->createCompileUnit(
        dwarf::DW_LANG_C, sname, cwd, "neo-c", false, "", 0);
#endif

#if LLVM_VERSION_MAJOR <= 9
    TheFPM = llvm::make_unique<FunctionPassManager>(TheModule);
#else
    TheFPM = make_unique<FunctionPassManager>(TheModule);
#endif

    create_internal_functions();
    TheLabels.clear();
  
    gLLVMStack = (LVALUE*)xcalloc(1, sizeof(LVALUE)*NEO_C_STACK_SIZE);
    gLLVMStackHead = gLLVMStack;
    declare_builtin_functions();
}

#if LLVM_VERSION_MAJOR < 4
struct MyModulePass : ModulePass {
    MyModulePass(char id) : ModulePass(id) {
    }

    virtual bool runOnModule(Module &M) {
        return false;
    }
};
#endif

void output_native_code(char* sname, BOOL optimize, char* throw_to_cflag)
{
    DBuilder->finalize();
    free(gLLVMStack);

    //create_main_function();

#if LLVM_VERSION_MAJOR >= 7
    if(optimize) {
        puts("OPTIMIZATION PHASE");

        llvm::PassBuilder passBuilder;

        passBuilder.registerModuleAnalyses(moduleAnalysisManager);
        passBuilder.registerCGSCCAnalyses(cGSCCAnalysisManager);
        passBuilder.registerFunctionAnalyses(TheFAM);
        passBuilder.registerLoopAnalyses(loopAnalysisManager);

        passBuilder.buildModuleOptimizationPipeline(llvm::PassBuilder::OptimizationLevel::O3, false);
    }
#endif

    char sname2[PATH_MAX];
    xstrncpy(sname2, sname, PATH_MAX);

    char module_name[PATH_MAX];
    xstrncpy(module_name, sname, PATH_MAX);

    char* module_name2 = basename(module_name);

    char module_name3[PATH_MAX];
    xstrncpy(module_name3, module_name2, PATH_MAX);

    char* p = module_name3 + strlen(module_name3);
    while(p >= module_name3) {
        if(*p == '.') {
            *p = '\0';
            break;
        }
        else {
            p--;
        }
    }

    {
#if LLVM_VERSION_MAJOR >= 7
    char path[PATH_MAX];
    snprintf(path, PATH_MAX, "%s.ll", sname2);

    (void)unlink(path);

    std::error_code ecode;
    llvm::raw_fd_ostream output_stream(path, ecode, llvm::sys::fs::F_None);

    std::string err_str;
    raw_string_ostream err_ostream(err_str);

//TheModule->print(llvm::errs(), nullptr);
    TheModule->print(output_stream, nullptr);
    output_stream.flush();
#elif LLVM_VERSION_MAJOR >= 4
    char path[PATH_MAX]; 
    snprintf(path, PATH_MAX, "%s.ll", sname2);

    (void)unlink(path);

    std::error_code ecode;
    llvm::raw_fd_ostream output_stream(path, ecode, llvm::sys::fs::F_None);

    std::string err_str;
    raw_string_ostream err_ostream(err_str);

    TheModule->print(output_stream, nullptr);
    output_stream.flush();
#else
    char path[PATH_MAX];
    snprintf(path, PATH_MAX, "%s.ll", sname2);

    (void)unlink(path);

    std::error_code ecode;
    llvm::raw_fd_ostream output_stream(path, ecode, llvm::sys::fs::F_None);

    std::string err_str;
    raw_string_ostream err_ostream(err_str);

    TheModule->print(output_stream, nullptr);
    output_stream.flush();

    verifyModule(*TheModule);
#endif
    }

#if LLVM_VERSION_MAJOR >= 7
    char path[PATH_MAX];
    snprintf(path, PATH_MAX, "%s.bc", sname2);

    (void)unlink(path);

    std::error_code ecode;
    llvm::raw_fd_ostream output_stream(path, ecode, llvm::sys::fs::F_None);

    std::string err_str;
    raw_string_ostream err_ostream(err_str);

    verifyModule(*TheModule);

    llvm::WriteBitcodeToFile(*TheModule, output_stream, true);
    output_stream.flush();
#elif LLVM_VERSION_MAJOR >= 4
    char path[PATH_MAX]; snprintf(path, PATH_MAX, "%s.bc", sname2);

    (void)unlink(path);

    std::error_code ecode;
    llvm::raw_fd_ostream output_stream(path, ecode, llvm::sys::fs::F_None);

    std::string err_str;
    raw_string_ostream err_ostream(err_str);

    verifyModule(*TheModule);

    llvm::WriteBitcodeToFile(TheModule, output_stream, true);
    output_stream.flush();
#else
    char path[PATH_MAX];
    snprintf(path, PATH_MAX, "%s.bc", sname2);

    (void)unlink(path);

    std::error_code ecode;
    llvm::raw_fd_ostream output_stream(path, ecode, llvm::sys::fs::F_None);

    std::string err_str;
    raw_string_ostream err_ostream(err_str);

    verifyModule(*TheModule);

    llvm::WriteBitcodeToFile(TheModule, output_stream, true);
    output_stream.flush();
#endif

    char command[PATH_MAX+256];

    snprintf(command, PATH_MAX+256, "%s.ll", sname2);
    int rc = chmod(command, S_IRUSR|S_IWUSR|S_IRGRP|S_IROTH);

    if(rc != 0) {
        fprintf(stderr, "failed to compile(4) (%s) (%d)\n", command, rc);
        exit(2);
    }

    delete TheModule;
}

static void create_real_struct_name(char* real_struct_name, int size_real_struct_name, int num_generics, sNodeType* generics_types[GENERICS_TYPES_MAX])
{
    if(num_generics > 0) {
        xstrncat(real_struct_name, "__", size_real_struct_name);
    }

    int i;
    for(i=0; i<num_generics; i++) {
        sNodeType* node_type = generics_types[i];

        xstrncat(real_struct_name, CLASS_NAME(node_type->mClass), size_real_struct_name);

        int j;
        for(j=0; j<node_type->mPointerNum; j++)
        {
            xstrncat(real_struct_name, "p", size_real_struct_name);
        }

        create_real_struct_name(real_struct_name, size_real_struct_name, node_type->mNumGenericsTypes, node_type->mGenericsTypes);

        if(i != num_generics-1) {
            xstrncat(real_struct_name, "_", size_real_struct_name);
        }
    }
}

void create_undefined_llvm_struct_type(sNodeType* node_type)
{
    sCLClass* klass = node_type->mClass;

    char* class_name = CLASS_NAME(klass);

    char real_struct_name[REAL_STRUCT_NAME_MAX];
    int size_real_struct_name = REAL_STRUCT_NAME_MAX;
    xstrncpy(real_struct_name, class_name, size_real_struct_name);

    create_real_struct_name(real_struct_name, size_real_struct_name, node_type->mNumGenericsTypes, node_type->mGenericsTypes);

    if(gLLVMStructType[real_struct_name].first == nullptr) 
    {
        StructType* struct_type = StructType::create(TheContext, real_struct_name);

        std::pair<Type*, sNodeType*> pair_value;
        pair_value.first = struct_type;
        pair_value.second = clone_node_type(node_type);
        pair_value.second->mNumFields = node_type->mClass->mNumFields;

        gLLVMStructType[real_struct_name] = pair_value;

        klass->mUndefinedStructType = struct_type;
    }
}

static BOOL is_generics_type(sNodeType* node_type)
{
    sCLClass* klass = node_type->mClass;

    if(klass->mFlags & CLASS_FLAGS_GENERICS)
    {
        return TRUE;
    }
    else {
        int i;
        for(i=0; i<node_type->mNumGenericsTypes; i++)
        {
            sNodeType* node_type2 = node_type->mGenericsTypes[i];

            if(is_generics_type(node_type2))
            {
                return TRUE;
            }
        }
    }

    return FALSE;
}

static BOOL solve_undefined_strcut_type(sNodeType* node_type, sNodeType* generics_type, char* real_struct_name, sCompileInfo* info)
{
    sCLClass* klass = node_type->mClass;


    if(klass->mUndefinedStructType) {
        StructType* struct_type = (StructType*)klass->mUndefinedStructType;
        std::vector<Type*> fields;

        int i;
        for(i=0; i<klass->mNumFields; i++) {
            sNodeType* field = clone_node_type(klass->mFields[i]);

            sNodeType* generics_type2 = generics_type;

            if(!is_generics_type(field) && field->mNumGenericsTypes > 0)
            {
                generics_type2 = clone_node_type(field);
            }
            else {
                BOOL success_solve;
                (void)solve_generics(&field, field, &success_solve);

                if(!solve_generics(&field, generics_type, &success_solve))
                {
                    return FALSE;
                }
            }

            if(field->mClass == klass && field->mPointerNum == 0)
            {
                return FALSE;
            }

            Type* field_type;
            if(!create_llvm_type_from_node_type(&field_type, field, generics_type2, info))
            {
                compile_err_msg(info, "Getting llvm type failed(100)");
                show_node_type(field);
                show_node_type(generics_type2);
                return FALSE;
            }

            fields.push_back(field_type);
        }

        if(struct_type->isOpaque()) {
            struct_type->setBody(fields, false);
        }

        klass->mUndefinedStructType = NULL;

        std::pair<Type*, sNodeType*> pair_value;
        pair_value.first = struct_type;
        pair_value.second = clone_node_type(node_type);
        pair_value.second->mNumFields = node_type->mClass->mNumFields;

        gLLVMStructType[real_struct_name] = pair_value;
    }

    return TRUE;
}

BOOL solve_undefined_strcut_type_when_definision(sNodeType* node_type, sCompileInfo* info)
{
    sCLClass* klass = node_type->mClass;

    char* class_name = CLASS_NAME(klass);

    char real_struct_name[REAL_STRUCT_NAME_MAX];
    int size_real_struct_name = REAL_STRUCT_NAME_MAX;
    xstrncpy(real_struct_name, class_name, size_real_struct_name);

    create_real_struct_name(real_struct_name, size_real_struct_name, node_type->mNumGenericsTypes, node_type->mGenericsTypes);

    sNodeType* generics_type = node_type;

    if(!solve_undefined_strcut_type(node_type, generics_type, real_struct_name, info))
    {
        return FALSE;
    }

    return TRUE;
}

BOOL create_llvm_struct_type(sNodeType* node_type, sNodeType* generics_type, BOOL new_create, sCompileInfo* info)
{
    int i;
    for(i=0; i<generics_type->mNumGenericsTypes; i++)
    {
        sNodeType* node_type2 = generics_type->mGenericsTypes[i];

        sCLClass* klass = node_type2->mClass;
        if(klass->mFlags & CLASS_FLAGS_STRUCT)
        {
            if(!create_llvm_struct_type(node_type2, node_type2, new_create, info))
            {
                return FALSE;
            }
        }
    }

    sCLClass* klass = node_type->mClass;

    char* class_name = CLASS_NAME(klass);

    char real_struct_name[REAL_STRUCT_NAME_MAX];
    int size_real_struct_name = REAL_STRUCT_NAME_MAX;
    xstrncpy(real_struct_name, class_name, size_real_struct_name);

    create_real_struct_name(real_struct_name, size_real_struct_name, node_type->mNumGenericsTypes, node_type->mGenericsTypes);

    if(klass->mUndefinedStructType)
    {
        if(!solve_undefined_strcut_type(node_type, generics_type, real_struct_name, info))
        {
            return FALSE;
        }
    }
    else if(gLLVMStructType[real_struct_name].first == nullptr || (info->pinfo && info->pinfo->parse_struct_phase && (node_type->mClass->mNumFields != gLLVMStructType[real_struct_name].second->mNumFields)))
    {
        if(TheModule->getTypeByName(real_struct_name) == nullptr || (info->pinfo && info->pinfo->parse_struct_phase && (node_type->mClass->mNumFields != gLLVMStructType[real_struct_name].second->mNumFields)))
        {
            StructType* struct_type = StructType::create(TheContext, real_struct_name);
            std::vector<Type*> fields;

            std::pair<Type*, sNodeType*> pair_value;
            pair_value.first = struct_type;
            pair_value.second = clone_node_type(node_type);
            pair_value.second->mNumFields = node_type->mClass->mNumFields;

            gLLVMStructType[real_struct_name] = pair_value;

            int i;
            for(i=0; i<klass->mNumFields; i++) {
                sNodeType* field = clone_node_type(klass->mFields[i]);


                sNodeType* generics_type2 = generics_type;

                if(!is_generics_type(field) && field->mNumGenericsTypes > 0)
                {
                    generics_type2 = clone_node_type(field);
                }
                else {
                    BOOL success_solve;
                    (void)solve_generics(&field, field, &success_solve);

                    if(!solve_generics(&field, generics_type, &success_solve))
                    {
                        return FALSE;
                    }
                }

                if(field->mClass == klass && field->mPointerNum == 0)
                {
                    return FALSE;
                }
                Type* field_type;

                if(!create_llvm_type_from_node_type(&field_type, field, generics_type2, info))
                {
                    compile_err_msg(info, "Getting llvm type failed(100)");
                    show_node_type(field);
                    show_node_type(generics_type2);
                    return FALSE;
                }

                fields.push_back(field_type);
            }

            if(struct_type->isOpaque()) 
            {
                struct_type->setBody(fields, false);
            }
        }
    }

    return TRUE;
}

BOOL create_llvm_union_type(sNodeType* node_type, sNodeType* generics_type, sCompileInfo* info)
{
    sCLClass* klass = node_type->mClass;

    char* class_name = CLASS_NAME(klass);

    char real_struct_name[REAL_STRUCT_NAME_MAX];
    int size_real_struct_name = REAL_STRUCT_NAME_MAX;
    xstrncpy(real_struct_name, class_name, size_real_struct_name);

    create_real_struct_name(real_struct_name, size_real_struct_name, node_type->mNumGenericsTypes, node_type->mGenericsTypes);

    if(gLLVMStructType[real_struct_name].first == nullptr) 
    {
        StructType* struct_type = StructType::create(TheContext, real_struct_name);
        std::vector<Type*> fields;

        uint64_t max_size = 0;
        Type* max_size_field = NULL;

        int i;
        for(i=0; i<klass->mNumFields; i++) {
            sNodeType* field = clone_node_type(klass->mFields[i]);

            sNodeType* generics_type2 = generics_type;

            BOOL success_solve;
            (void)solve_generics(&field, field, &success_solve);

            if(success_solve)
            {
                generics_type2 = field;
            }

            if(!success_solve) {
                (void)solve_generics(&field, generics_type, &success_solve);

                if(success_solve)
                {
                    generics_type2 = generics_type;
                }
            }


            Type* field_type;
            if(!create_llvm_type_from_node_type(&field_type, field, generics_type2, info))
            {
                return FALSE;
            }

            uint64_t alloc_size = 0;
            if(!get_size_from_node_type(&alloc_size, field, generics_type2, info))
            {
                return FALSE;
            }

            if(alloc_size > max_size) {
                max_size = alloc_size;

                max_size_field = field_type;
            }
        }

        if(max_size_field) {
            fields.push_back(max_size_field);
        }

        if(struct_type->isOpaque()) {
            struct_type->setBody(fields, false);
        }

        std::pair<Type*, sNodeType*> pair_value;
        pair_value.first = struct_type;
        pair_value.second = clone_node_type(node_type);
        pair_value.second->mNumFields = node_type->mClass->mNumFields;

        gLLVMStructType[real_struct_name] = pair_value;
    }
    else if(klass->mUndefinedStructType) {
        StructType* struct_type = (StructType*)klass->mUndefinedStructType;
        std::vector<Type*> fields;

        uint64_t max_size = 0;
        Type* max_size_field = NULL;

        int i;
        for(i=0; i<klass->mNumFields; i++) {
            sNodeType* field = clone_node_type(klass->mFields[i]);

            sNodeType* generics_type2 = generics_type;

            BOOL success_solve;
            (void)solve_generics(&field, field, &success_solve);

            if(success_solve)
            {
                generics_type2 = field;
            }

            if(!success_solve) {
                (void)solve_generics(&field, generics_type, &success_solve);

                if(success_solve)
                {
                    generics_type2 = generics_type;
                }
            }

            Type* field_type;
            if(!create_llvm_type_from_node_type(&field_type, field, generics_type2, info))
            {
                return FALSE;
            }

            uint64_t alloc_size = 0;
            if(!get_size_from_node_type(&alloc_size, field, generics_type2, info))
            {
                return FALSE;
            }

            if(alloc_size > max_size) {
                max_size = alloc_size;

                max_size_field = field_type;
            }
        }

        if(max_size_field) {
            fields.push_back(max_size_field);
        }

        if(struct_type->isOpaque()) {
            struct_type->setBody(fields, false);
        }

        klass->mUndefinedStructType = NULL;
    }

    return TRUE;
}

static void create_real_union_name(char* real_union_name, int size_real_union_name, char* union_name)
{
    xstrncpy(real_union_name, union_name, size_real_union_name);
}

static BOOL same_struct_type(sNodeType* left_type, sNodeType* right_type, sCompileInfo* info)
{
    sCLClass* left_class = left_type->mClass;
    sCLClass* right_class = right_type->mClass; 

    if(type_identify(left_type, right_type))
    {
        if(left_type->mNumGenericsTypes > 0 || right_type->mNumGenericsTypes > 0)
        {
            if(left_type->mNumGenericsTypes != right_type->mNumGenericsTypes)
            {
                return FALSE;
            }

            int i;
            for(i=0; i<left_type->mNumGenericsTypes; i++)
            {
                if(!same_struct_type(left_type->mGenericsTypes[i], right_type->mGenericsTypes[i], info))
                {
                    return FALSE;
                }
            }
        }

        if(left_type->mNumFields != right_type->mNumFields)
        {
            return FALSE;
        }

        int i;
        for(i=0; i<left_type->mNumFields; i++) 
        {
            if(!same_struct_type(left_class->mFields[i], right_class->mFields[i], info))
            {
                return FALSE;
            }
        }

        return TRUE;
    }

    return FALSE;
}

BOOL create_llvm_type_from_node_type(Type** result_type, sNodeType* node_type, sNodeType* generics_type, sCompileInfo* info)
{
    sCLClass* klass = node_type->mClass;

    if(klass->mFlags & CLASS_FLAGS_STRUCT) 
    {
/*
        if(klass->mUndefinedStructType && node_type->mPointerNum == 0)
        {
            return FALSE;
        }
*/

        sCLClass* klass = node_type->mClass;

        char* class_name = CLASS_NAME(klass);

        char real_struct_name[REAL_STRUCT_NAME_MAX];
        int size_real_struct_name = REAL_STRUCT_NAME_MAX;
        xstrncpy(real_struct_name, class_name, size_real_struct_name);

        create_real_struct_name(real_struct_name, size_real_struct_name, node_type->mNumGenericsTypes, node_type->mGenericsTypes);

        sNodeType* struct_node_type = NULL;
        if(gLLVMStructType[real_struct_name].first != nullptr)
        {
            struct_node_type = gLLVMStructType[real_struct_name].second;
        }

        if(struct_node_type == nullptr || !same_struct_type(struct_node_type, node_type, info))
        {
            if(!create_llvm_struct_type(node_type, generics_type, TRUE, info))
            {
                return FALSE;
            }
        }

        *result_type = gLLVMStructType[real_struct_name].first;
    }
    else if(klass->mFlags & CLASS_FLAGS_UNION) 
    {
        if(klass->mUndefinedStructType && node_type->mPointerNum == 0)
        {
            return FALSE;
        }

        sCLClass* klass = node_type->mClass;

        char* class_name = CLASS_NAME(klass);

        char real_struct_name[REAL_STRUCT_NAME_MAX];
        int size_real_struct_name = REAL_STRUCT_NAME_MAX;
        xstrncpy(real_struct_name, class_name, size_real_struct_name);

        create_real_struct_name(real_struct_name, size_real_struct_name, node_type->mNumGenericsTypes, node_type->mGenericsTypes);

        if(gLLVMStructType[real_struct_name].first == nullptr) 
        {
            if(!create_llvm_union_type(node_type, generics_type, info))
            {
                return FALSE;
            }
        }

        *result_type = gLLVMStructType[real_struct_name].first;
    }
    else if(klass->mFlags & CLASS_FLAGS_ENUM) 
    {
        *result_type = IntegerType::get(TheContext, 32);
    }
    else if((klass->mFlags & CLASS_FLAGS_GENERICS) || (klass->mFlags & CLASS_FLAGS_METHOD_GENERICS))
    {
        if(info && info->no_output) {
            *result_type = IntegerType::get(TheContext, 64);
        }
        else {
            return FALSE;
        }
    }
    else if(node_type->mSizeNum > 0) {
        *result_type = IntegerType::get(TheContext, node_type->mSizeNum*8);
    }
    else if(type_identify_with_class_name(node_type, "char"))
    {
        *result_type = IntegerType::get(TheContext, 8);
    }
    else if(type_identify_with_class_name(node_type, "short"))
    {
        *result_type = IntegerType::get(TheContext, 16);
    }
    else if(type_identify_with_class_name(node_type, "int"))
    {
        *result_type = IntegerType::get(TheContext, 32);
    }
    else if(type_identify_with_class_name(node_type, "long"))
    {
        *result_type = IntegerType::get(TheContext, 64);
    }
    else if(type_identify_with_class_name(node_type, "__uint128_t"))
    {
        *result_type = IntegerType::get(TheContext, 128);
    }
    else if(type_identify_with_class_name(node_type, "float"))
    {
        *result_type = Type::getFloatTy(TheContext);
    }
    else if(type_identify_with_class_name(node_type, "double"))
    {
        *result_type = Type::getDoubleTy(TheContext);
    }
    else if(type_identify_with_class_name(node_type, "long_double"))
    {
        *result_type = Type::getFP128Ty(TheContext);
    }
    else if(type_identify_with_class_name(node_type, "any"))
    {
        *result_type = IntegerType::get(TheContext, 64);
    }
    else if(type_identify_with_class_name(node_type, "bool"))
    {
        *result_type = IntegerType::get(TheContext, 1);
    }
    else if(type_identify_with_class_name(node_type, "void"))
    {
        if(node_type->mPointerNum > 0) {
            *result_type = IntegerType::get(TheContext, 8);
        }
        else {
            *result_type = Type::getVoidTy(TheContext);
        }
    }
    else if(type_identify_with_class_name(node_type, "lambda"))
    {
        int num_params = node_type->mNumParams;
        sNodeType* fun_result_type = node_type->mResultType;

        Type* llvm_result_type;
        if(!create_llvm_type_from_node_type(&llvm_result_type, fun_result_type, generics_type, info))
        {
            return FALSE;
        }

        std::vector<Type *> llvm_param_types;

        int i;
        for(i=0; i<num_params; i++) {
            sNodeType* param_type = node_type->mParamTypes[i];

            Type* llvm_param_type;
            if(!create_llvm_type_from_node_type(&llvm_param_type, param_type, generics_type, info))
            {
                return FALSE;
            }

            llvm_param_types.push_back(llvm_param_type);
        }
    
        *result_type = FunctionType::get(llvm_result_type, llvm_param_types, false);

    }

    int i;
    for(i=0; i<node_type->mPointerNum; i++) {
        *result_type = PointerType::get(*result_type, 0);
    }

    if(node_type->mArrayDimentionNum == -1) {
        *result_type = PointerType::get(*result_type, 0);
    }

    for(i=0; i<node_type->mArrayDimentionNum; i++) {
        *result_type = ArrayType::get(*result_type, node_type->mArrayNum[i]);
    }

    return TRUE;
}

int get_llvm_alignment_from_node_type(sNodeType* node_type)
{
    int result = 0;

    sCLClass* klass = node_type->mClass;

    if(klass->mFlags & CLASS_FLAGS_STRUCT) {
        result = 8;
    }
    else if(klass->mFlags & CLASS_FLAGS_UNION) {
        result = 8;
    }
    else if(node_type->mPointerNum > 0) {
        result = 8;
    }
    else if(type_identify_with_class_name(node_type, "char"))
    {
        result = 1;
    }
    else if(type_identify_with_class_name(node_type, "short"))
    {
        result = 2;
    }
    else if(type_identify_with_class_name(node_type, "int"))
    {
        result = 4;
    }
    else if(type_identify_with_class_name(node_type, "bool"))
    {
        result = 1;
    }
    else if(type_identify_with_class_name(node_type, "lambda"))
    {
        result = 8;
    }

    return result;
}

Value* get_dummy_value(sNodeType* node_type, sCompileInfo* info)
{
    Type* llvm_type;
    if(!create_llvm_type_from_node_type(&llvm_type, node_type, node_type, info))
    {
        return FALSE;
    }

    Value* address = Builder.CreateAlloca(llvm_type, 0, "dummy");

    int alignment = get_llvm_alignment_from_node_type(node_type);

    return Builder.CreateAlignedLoad(address, alignment, "dummy_value");
}

BOOL get_size_from_node_type(uint64_t* result, sNodeType* node_type, sNodeType* generics_type, sCompileInfo* info);

uint64_t get_struct_size(sCLClass* klass, sNodeType* generics_type, sCompileInfo* info)
{
    uint64_t result = 0;
    int i;
    for(i=0; i<klass->mNumFields; i++) {
        sNodeType* field_type = clone_node_type(klass->mFields[i]);

        if(generics_type) {
            BOOL success_solve;
            if(!solve_generics(&field_type, generics_type, &success_solve))
            {
                fprintf(stderr, "%s %d: The error at solve_generics\n", info->sname, info->sline);
                return result;
            }
        }

        uint64_t size;
        if(!get_size_from_node_type(&size, field_type, generics_type, info)) {
            fprintf(stderr, "%s %d: The error at solve_generics\n", info->sname, info->sline);
            return result;
        }

        if(size == 4 || size == 8) {
            result = (result + 3) & ~3;
            result += size;
        }
        else {
            result = (result + 1) & ~1;
            result += size;
        }
    }

    return result;
}

uint64_t get_union_size(sCLClass* klass, sNodeType* generics_type, sCompileInfo* info)
{
    uint64_t result = 0;
    int i;
    for(i=0; i<klass->mNumFields; i++) {
        sNodeType* field_type = clone_node_type(klass->mFields[i]);

        if(generics_type) {
            BOOL success_solve;
            if(!solve_generics(&field_type, generics_type, &success_solve))
            {
                fprintf(stderr, "%s %d: The error at solve_generics\n", info->sname, info->sline);
                return result;
            }
        }

        uint64_t size;
        if(!get_size_from_node_type(&size, field_type, generics_type, info)) {
            return result;
        }

        if(result < size) {
            result = size;
        }
    }

    return result;
}

BOOL get_size_from_node_type(uint64_t* result, sNodeType* node_type, sNodeType* generics_type, sCompileInfo* info)
{
#ifndef __32BIT_CPU__
    sNodeType* node_type2 = clone_node_type(node_type);

    if(node_type2->mArrayInitializeNum > 0){
        node_type2->mPointerNum--;
        node_type2->mArrayNum[0] = node_type2->mArrayInitializeNum;
        node_type2->mArrayDimentionNum = 1;
    }

    sCLClass* klass = node_type->mClass;

    char* class_name = CLASS_NAME(klass);

    char real_struct_name[REAL_STRUCT_NAME_MAX];
    int size_real_struct_name = REAL_STRUCT_NAME_MAX;
    xstrncpy(real_struct_name, class_name, size_real_struct_name);

    create_real_struct_name(real_struct_name, size_real_struct_name, node_type->mNumGenericsTypes, node_type->mGenericsTypes);


    if(!solve_undefined_strcut_type(node_type2, generics_type, real_struct_name, info))
    {
        return FALSE;
    }

    if(node_type2->mPointerNum > 0) {
        *result = 8;
    }
    else {
        if(node_type2->mClass->mUndefinedStructType) {
        }

        Type* llvm_type;
        if(!create_llvm_type_from_node_type(&llvm_type, node_type2, node_type2, info))
        {
            return FALSE;
        }

        DataLayout data_layout(TheModule);

        *result = data_layout.getTypeAllocSize(llvm_type);
    }

    return TRUE;
#else // this is bad knowhow. Raspiberr PI OS uses 32bit OS, but it calculates pointer type as 8bytesc 
    sNodeType* node_type2 = clone_node_type(node_type);

    if(node_type2->mArrayInitializeNum > 0){
        node_type2->mPointerNum--;
        node_type2->mArrayNum[0] = node_type2->mArrayInitializeNum;
        node_type2->mArrayDimentionNum = 1;
    }

    sCLClass* klass = node_type->mClass;

    char* class_name = CLASS_NAME(klass);

    char real_struct_name[REAL_STRUCT_NAME_MAX];
    int size_real_struct_name = REAL_STRUCT_NAME_MAX;
    xstrncpy(real_struct_name, class_name, size_real_struct_name);

    create_real_struct_name(real_struct_name, size_real_struct_name, node_type->mNumGenericsTypes, node_type->mGenericsTypes);

    if(node_type2->mSizeNum > 0) {
        *result = node_type2->mSizeNum;

        if(node_type2->mArrayDimentionNum == 1) {
            *result *= node_type2->mArrayNum[0];
        }
    }
    else if(node_type2->mPointerNum > 0) {
        *result = 4;

        if(node_type2->mArrayDimentionNum == 1) {
            *result *= node_type2->mArrayNum[0];
        }
    }
    else {
        if(!solve_undefined_strcut_type(node_type2, generics_type, real_struct_name, info))
        {
            return FALSE;
        }
        if(node_type2->mClass->mUndefinedStructType) {
        }

        Type* llvm_type;
        if(!create_llvm_type_from_node_type(&llvm_type, node_type2, node_type2, info))
        {
            return FALSE;
        }

        DataLayout data_layout(TheModule);

        if(node_type->mPointerNum == 0 && (node_type->mClass->mFlags & CLASS_FLAGS_STRUCT)) {
            *result = get_struct_size(node_type->mClass, generics_type, info);

            if(node_type->mArrayDimentionNum == 1) {
                *result *= node_type->mArrayNum[0];
            }
        }
        else if(node_type->mPointerNum == 0 && (node_type->mClass->mFlags & CLASS_FLAGS_UNION)) {
            *result = get_union_size(node_type->mClass, generics_type, info);

            if(node_type->mArrayDimentionNum == 1) {
                *result *= node_type->mArrayNum[0];
            }
        }
        else {
            *result = data_layout.getTypeAllocSize(llvm_type);
        }
    }

    return TRUE;
#endif
}

Value* llvm_create_string(char* str)
{
    Constant* str_constant = ConstantDataArray::getString(TheModule->getContext(), str, true);

    GlobalVariable* gvar = new GlobalVariable(*TheModule, ArrayType::get(IntegerType::get(TheContext, 8), strlen(str)+1), true, GlobalValue::PrivateLinkage, 0, "global_string");
#if LLVM_VERSION_MAJOR >= 11
    gvar->setAlignment(MaybeAlign(1));
#else
    gvar->setAlignment(1);
#endif

    gvar->setInitializer(str_constant);

    Value* value = Builder.CreateCast(Instruction::BitCast, gvar, PointerType::get(IntegerType::get(TheContext, 8), 0));

    return value;
}

BOOL cast_right_type_to_left_type(sNodeType* left_type, sNodeType** right_type, LVALUE* rvalue, struct sCompileInfoStruct* info)
{
    sCLClass* left_class = left_type->mClass;
    sCLClass* right_class = (*right_type)->mClass;

    if(left_type->mSizeNum > 0) {
        Type* llvm_type;
        if(!create_llvm_type_from_node_type(&llvm_type, left_type, left_type, info))
        {
            return FALSE;
        }
        
        if(rvalue) {
            uint64_t left_alloc_size;
            if(!get_size_from_node_type(&left_alloc_size, left_type, left_type, info))
            {
                return FALSE;
            }

            uint64_t right_alloc_size;
            if(!get_size_from_node_type(&right_alloc_size, *right_type, *right_type, info))
            {
                return FALSE;
            }

            if(left_alloc_size < right_alloc_size) {
                rvalue->value = Builder.CreateCast(Instruction::Trunc, rvalue->value, llvm_type);
                rvalue->type = clone_node_type(left_type);
            }
            else {
                rvalue->value = Builder.CreateCast(Instruction::SExt, rvalue->value, llvm_type);
                rvalue->type = clone_node_type(left_type);
            }
        }

        *right_type = clone_node_type(left_type);
    }
    else if(type_identify_with_class_name(left_type, "char*") && type_identify_with_class_name(*right_type, "va_list"))
    {
        if(rvalue) {
            rvalue->value = Builder.CreateCast(Instruction::BitCast, rvalue->value, PointerType::get(IntegerType::get(TheContext, 8),0));
            rvalue->type = create_node_type_with_class_name("char*");
        }

        *right_type = create_node_type_with_class_name("char*");
    }
    else if(type_identify_with_class_name(left_type, "char*") && type_identify_with_class_name(*right_type, "__builtin_va_list"))
    {
        if(rvalue) {
            rvalue->value = Builder.CreateCast(Instruction::BitCast, rvalue->value, PointerType::get(IntegerType::get(TheContext, 8),0));
            rvalue->type = create_node_type_with_class_name("char*");
        }

        *right_type = create_node_type_with_class_name("char*");
    }
    else if(type_identify_with_class_name(left_type, "va_list") && type_identify_with_class_name(*right_type, "char*"))
    {
        if(rvalue) {
            Type* llvm_type;
            if(!create_llvm_type_from_node_type(&llvm_type, left_type, left_type, info))
            {
                return FALSE;
            }

            rvalue->value = Builder.CreateCast(Instruction::BitCast, rvalue->value, llvm_type);
            rvalue->type = create_node_type_with_class_name("va_list");
        }

        *right_type = create_node_type_with_class_name("va_list");
    }
    else if(type_identify_with_class_name(left_type, "__builtin_va_list") && type_identify_with_class_name(*right_type, "char*"))
    {
        if(rvalue) {
            Type* llvm_type;
            if(!create_llvm_type_from_node_type(&llvm_type, left_type, left_type, info))
            {
                return FALSE;
            }

            rvalue->value = Builder.CreateCast(Instruction::BitCast, rvalue->value, llvm_type);
            rvalue->type = create_node_type_with_class_name("__builtin_va_list");
        }

        *right_type = create_node_type_with_class_name("__builtin_va_list");
    }
    else if(left_type->mPointerNum > 0) 
    {
        if(type_identify_with_class_name(*right_type, "lambda")) 
        {
            if(rvalue) {
                Type* llvm_type;
                if(!create_llvm_type_from_node_type(&llvm_type, left_type, left_type, info))
                {
                    return FALSE;
                }

                rvalue->value = Builder.CreateCast(Instruction::BitCast, rvalue->value, llvm_type);
                rvalue->type = clone_node_type(left_type);
            }

            *right_type = clone_node_type(left_type);
        }
        else if((left_type->mPointerNum-1 == (*right_type)->mPointerNum) && (*right_type)->mArrayDimentionNum == 1) 
        {
            if(rvalue) {
                Type* llvm_type;
                if(!create_llvm_type_from_node_type(&llvm_type, left_type, left_type, info))
                {
                    return FALSE;
                }

                if(!info->no_output) {
#if __DARWIN__
                    Value* index = ConstantInt::get(TheContext, llvm::APInt(32, 0));
                    rvalue->value = Builder.CreateGEP(rvalue->address, index);
                    rvalue->value = Builder.CreateCast(Instruction::BitCast, rvalue->value, llvm_type);
                    rvalue->type = clone_node_type(left_type);
#else
                    rvalue->value = Builder.CreateCast(Instruction::BitCast, rvalue->address, llvm_type);
                    rvalue->type = clone_node_type(left_type);
#endif
                }
            }

            *right_type = clone_node_type(left_type);
        }
        else if((*right_type)->mPointerNum > 0) {
            if(rvalue) {
                Type* llvm_type;
                if(!create_llvm_type_from_node_type(&llvm_type, left_type, left_type, info))
                {
                    return FALSE;
                }

                rvalue->value = Builder.CreateCast(Instruction::BitCast, rvalue->value, llvm_type);
                rvalue->type = clone_node_type(left_type);
            }

            *right_type = clone_node_type(left_type);
        }
        else if((*right_type)->mPointerNum == 0) {
            if(rvalue) {
                if(!type_identify_with_class_name(*right_type, "long"))
                {
                    if(left_type->mPointerNum > 0)
                    {
                    }
                    else {
                        rvalue->value = Builder.CreateCast(Instruction::SExt, rvalue->value, IntegerType::get(TheContext, 64), "sext10");
                        rvalue->value = Builder.CreateCast(Instruction::IntToPtr, rvalue->value, IntegerType::get(TheContext, 64), "IntToPtr9");
                    }
                }

                Type* llvm_type;
                if(!create_llvm_type_from_node_type(&llvm_type, left_type, left_type, info))
                {
                    return FALSE;
                }

                rvalue->value = Builder.CreateCast(Instruction::IntToPtr, rvalue->value, llvm_type, "IntToPtr10");
                rvalue->type = clone_node_type(left_type);
            }

            *right_type = clone_node_type(left_type);
        }
    }
    else if(left_type->mArrayDimentionNum == 1 && (*right_type)->mPointerNum == left_type->mPointerNum+1) 
    {
        if(rvalue) {
            Type* llvm_type;
            if(!create_llvm_type_from_node_type(&llvm_type, left_type, left_type, info))
            {
                return FALSE;
            }

            rvalue->value = Builder.CreateCast(Instruction::BitCast, rvalue->value, llvm_type);
            rvalue->type = clone_node_type(left_type);
        }

        *right_type = clone_node_type(left_type);
    }
    else if(type_identify_with_class_name(left_type, "bool"))
    {
        if(rvalue) {
            if((*right_type)->mPointerNum > 0)
            {
                rvalue->value = Builder.CreateCast(Instruction::PtrToInt, rvalue->value, IntegerType::get(TheContext, 64));

                Value* cmp_right_value = ConstantInt::get(Type::getInt64Ty(TheContext), (uint64_t)0);
                rvalue->value = Builder.CreateICmpNE(rvalue->value, cmp_right_value);
            }
            else if(type_identify_with_class_name(*right_type, "long")) {
                Value* cmp_right_value = ConstantInt::get(Type::getInt64Ty(TheContext), (uint64_t)0);
                rvalue->value = Builder.CreateICmpNE(rvalue->value, cmp_right_value);
            }
            else if(type_identify_with_class_name(*right_type, "int")) {
                Value* cmp_right_value = ConstantInt::get(Type::getInt32Ty(TheContext), (uint32_t)0);
                rvalue->value = Builder.CreateICmpNE(rvalue->value, cmp_right_value);
            }
            else if(type_identify_with_class_name(*right_type, "short")) {
                Value* cmp_right_value = ConstantInt::get(Type::getInt16Ty(TheContext), (uint16_t)0);
                rvalue->value = Builder.CreateICmpNE(rvalue->value, cmp_right_value);
            }
            else if(type_identify_with_class_name(*right_type, "char")) {
                Value* cmp_right_value = ConstantInt::get(Type::getInt8Ty(TheContext), (uint8_t)0);
                rvalue->value = Builder.CreateICmpNE(rvalue->value, cmp_right_value);
            }
            else {
                rvalue->value = Builder.CreateCast(Instruction::Trunc, rvalue->value, IntegerType::get(TheContext, 1));
            }

            rvalue->type = create_node_type_with_class_name("bool");
        }

        *right_type = create_node_type_with_class_name("bool");
    }
    else if(type_identify_with_class_name(left_type, "char"))
    {
        if((*right_type)->mPointerNum > 0)
        {
            if(rvalue) {
                rvalue->value = Builder.CreateCast(Instruction::PtrToInt, rvalue->value, IntegerType::get(TheContext, 8));
                rvalue->type = create_node_type_with_class_name("char");
            }

            *right_type = create_node_type_with_class_name("char");
        }
        else if(type_identify_with_class_name(*right_type, "long") || type_identify_with_class_name(*right_type, "int") || type_identify_with_class_name(*right_type, "short"))
        {
            if(rvalue) {
                rvalue->value = Builder.CreateCast(Instruction::Trunc, rvalue->value, IntegerType::get(TheContext, 8));
                rvalue->type = create_node_type_with_class_name("char");
            }

            *right_type = create_node_type_with_class_name("char");
        }
        else if(type_identify_with_class_name(*right_type, "bool"))
        {
            if(rvalue) {
                rvalue->value = Builder.CreateCast(Instruction::ZExt, rvalue->value, IntegerType::get(TheContext, 8), "sext11");
                rvalue->type = create_node_type_with_class_name("char");
            }

            *right_type = create_node_type_with_class_name("char");
        }
    }
    else if(type_identify_with_class_name(left_type, "short"))
    {
        if((*right_type)->mPointerNum > 0)
        {
            if(rvalue) {
                rvalue->value = Builder.CreateCast(Instruction::PtrToInt, rvalue->value, IntegerType::get(TheContext, 16));
                rvalue->type = create_node_type_with_class_name("short");
            }

            *right_type = create_node_type_with_class_name("short");
        }
        else if(type_identify_with_class_name(*right_type, "long") || type_identify_with_class_name(*right_type, "int"))
        {
            if(rvalue) {
                rvalue->value = Builder.CreateCast(Instruction::Trunc, rvalue->value, IntegerType::get(TheContext, 16));
                rvalue->type = create_node_type_with_class_name("short");
            }

            *right_type = create_node_type_with_class_name("short");
        }
        else if(type_identify_with_class_name(*right_type, "char") || type_identify_with_class_name(*right_type, "bool"))
        {
            if(rvalue) {
                rvalue->value = Builder.CreateCast(Instruction::ZExt, rvalue->value, IntegerType::get(TheContext, 32), "sext12");
                rvalue->type = create_node_type_with_class_name("short");
            }

            *right_type = create_node_type_with_class_name("short");
        }
    }
    else if(type_identify_with_class_name(left_type, "int"))
    {
        if((*right_type)->mPointerNum > 0)
        {
            if(rvalue) {
                rvalue->value = Builder.CreateCast(Instruction::PtrToInt, rvalue->value, IntegerType::get(TheContext, 32));
                rvalue->type = create_node_type_with_class_name("int");
            }

            *right_type = create_node_type_with_class_name("int");
        }
        else if(type_identify_with_class_name(*right_type, "long"))
        {
            if(rvalue) {
                rvalue->value = Builder.CreateCast(Instruction::Trunc, rvalue->value, IntegerType::get(TheContext, 32));
                rvalue->type = create_node_type_with_class_name("int");
            }

            *right_type = create_node_type_with_class_name("int");
        }
        else if(type_identify_with_class_name(*right_type, "short") || type_identify_with_class_name(*right_type, "char") || type_identify_with_class_name(*right_type, "bool"))
        {
            if(rvalue) {
                rvalue->value = Builder.CreateCast(Instruction::ZExt, rvalue->value, IntegerType::get(TheContext, 32), "sext13");
                rvalue->type = create_node_type_with_class_name("int");
            }

            *right_type = create_node_type_with_class_name("int");
        }
    }
    else if(type_identify_with_class_name(left_type, "long"))
    {
        if((*right_type)->mPointerNum > 0)
        {
            if(rvalue) {
                rvalue->value = Builder.CreateCast(Instruction::PtrToInt, rvalue->value, IntegerType::get(TheContext, 64));
                rvalue->type = create_node_type_with_class_name("long");
            }

            *right_type = create_node_type_with_class_name("long");
        }
        else if(type_identify_with_class_name(*right_type, "long"))
        {
            *right_type = create_node_type_with_class_name("long");
        }
        else if(type_identify_with_class_name(*right_type, "int") || type_identify_with_class_name(*right_type, "short") || type_identify_with_class_name(*right_type, "char") || type_identify_with_class_name(*right_type, "bool"))
        {
            if(rvalue) {
                rvalue->value = Builder.CreateCast(Instruction::ZExt, rvalue->value, IntegerType::get(TheContext, 64), "sext14");
                rvalue->type = create_node_type_with_class_name("long");
            }

            *right_type = create_node_type_with_class_name("long");
        }
    }


    return TRUE;
}

void append_heap_object_to_right_value(LVALUE* llvm_value, sCompileInfo* info)
{
#ifdef MDEBUG
    printf("append_heap_object_to_right_value %p\n", llvm_value->value);
#endif
    if(llvm_value->type->mHeap) {
        std::map<Value*, std::pair<sNodeType*, int>>* right_value_objects = (std::map<Value*, std::pair<sNodeType*, int>>*)info->right_value_objects;

        if(right_value_objects->count(llvm_value->value) == 0)
        {
            int flg = (*right_value_objects)[llvm_value->value].second;

            flg = 1;

            std::pair<sNodeType*, int> pair_value;
            pair_value.first = clone_node_type(llvm_value->type);
            pair_value.second = 0;

            (*right_value_objects)[llvm_value->value] = pair_value;

#ifdef MDEBUG
    printf("append object to right heap value %p %s*\n", llvm_value->value, CLASS_NAME(llvm_value->type->mClass));
#endif
        }
    }
}

void remove_from_right_value_object(Value* value, sCompileInfo* info)
{
    std::map<Value*, std::pair<sNodeType*, int>>* right_value_objects = (std::map<Value*, std::pair<sNodeType*, int>>*)info->right_value_objects;
    if(right_value_objects->count(value) > 0)
    {
        right_value_objects->erase(value);
#ifdef MDEBUG
    printf("remove right heap object %p*\n", value);
#endif
    }
}

void std_move(Value* var_address, sNodeType* lvar_type, LVALUE* rvalue, BOOL alloc, sCompileInfo* info)
{
#ifdef MDEBUG
    printf("std_move %p %s\n", rvalue->value, CLASS_NAME(rvalue->type->mClass));
#endif
    if(!info->no_output) {
        sVar* rvar = rvalue->var;
        sNodeType* rvalue_type = rvalue->type;
        if(lvar_type->mHeap && rvalue_type->mHeap) {
            if(lvar_type->mHeap && var_address && !alloc && lvar_type->mPointerNum > 0) {
                free_object(lvar_type, var_address, FALSE, info);
            }

            if(rvar) {
                rvar->mLLVMValue = NULL;
            }
        }

        if(lvar_type->mHeap)
        {
            std::map<Value*, std::pair<sNodeType*, int>>* right_value_objects = (std::map<Value*, std::pair<sNodeType*, int>>*)info->right_value_objects;
            if(right_value_objects->count(rvalue->value) > 0)
            {
#ifdef MDEBUG
    printf("remove from right value object %p %s on the std_move\n", rvalue->value, CLASS_NAME(lvar_type->mClass));
#endif
                right_value_objects->erase(rvalue->value);
            }
        }
    }
}

void prevent_from_right_object_free(LVALUE* llvm_value, sCompileInfo* info)
{
    if(!info->no_output) {
        if(llvm_value->type->mHeap) {
            std::map<Value*, std::pair<sNodeType*, int>>* right_value_objects = (std::map<Value*, std::pair<sNodeType*, int>>*)info->right_value_objects;
            if(right_value_objects->count(llvm_value->value) > 0) 
            {
#ifdef MDEBUG
    printf("remove from right value%p\n", llvm_value->value);
#endif

                right_value_objects->erase(llvm_value->value);
            }

            sVar* var = llvm_value->var;
            if(var) {
                var->mLLVMValue = NULL;
            }
        }
    }
}

BOOL make_finalize_for_recursive_field_type(sNodeType* node_type, sCompileInfo* info) 
{
    sCLClass* klass = node_type->mClass;

    sBuf source;
    sBuf_init(&source);

    char buf[BUFSIZ];

    snprintf(buf, BUFSIZ, "() {\n");
    sBuf_append(&source, buf, strlen(buf));

    int i;
    for(i=0; i<klass->mNumFields; i++) {
        char* field_name = CONS_str(&klass->mConst, klass->mFieldNameOffsets[i]);
        sNodeType* field_type = clone_node_type(klass->mFields[i]);

        if(field_type->mHeap) {
            char buf[BUFSIZ];
            snprintf(buf, BUFSIZ, "delete self.%s;\n", field_name);

            sBuf_append(&source, buf, strlen(buf));
        }
    }

    snprintf(buf, BUFSIZ, "}\n");
    sBuf_append(&source, buf, strlen(buf));

    unsigned int node = 0;
    char *struct_name = CLASS_NAME(klass);

    sParserInfo pinfo;

    memset(&pinfo, 0, sizeof(sParserInfo));

    sBuf_init(&pinfo.mConst);

    pinfo.p = source.mBuf;
    xstrncpy(pinfo.sname, info->pinfo->sname, PATH_MAX);
    pinfo.source = source.mBuf;
    pinfo.module_name = info->pinfo->module_name;
    pinfo.parse_phase = info->pinfo->parse_phase;
    pinfo.lv_table = info->pinfo->lv_table;
    pinfo.in_clang = FALSE;
    pinfo.mFunVersion = 0;

    if(!parse_destructor(&node, struct_name, &pinfo, TRUE, TRUE)) {
        fprintf(stderr, "fail to implement a destructor of recurive structor. exit.\n");
        exit(2);
    }

    if(!compile(node, info)) {
        return FALSE;
    }

    free(source.mBuf);

    return TRUE;
}

static BOOL call_destructor(Value* obj, sNodeType* node_type, sCompileInfo* info)
{
    LVALUE* llvm_stack = gLLVMStack;
    int stack_num_before = info->stack_num;
    sNodeType* info_type_before = info->type;

    if(node_type->mNumGenericsTypes > 0) 
    {
        Function* llvm_fun;

        int finalize_generics_fun_num = create_generics_finalize_method(node_type, &llvm_fun, info);

        if(finalize_generics_fun_num != -1)
        {
            std::vector<Value*> llvm_params;

            llvm_params.push_back(obj);

            Builder.CreateCall(llvm_fun, llvm_params);

            info->stack_num = stack_num_before;
            gLLVMStack = llvm_stack;
            info->type = info_type_before;

            return TRUE;
        }
    }
    else {
        Value* params[PARAMS_MAX];

        params[0] = obj;

        LVALUE llvm_value;
        llvm_value.value = obj;
        llvm_value.type = clone_node_type(node_type);
        llvm_value.address = nullptr;
        llvm_value.var = nullptr;
        llvm_value.binded_value = FALSE;
        llvm_value.load_field = FALSE;

        push_value_to_stack_ptr(&llvm_value, info);

        int num_params = 1;

        char* struct_name = CLASS_NAME(node_type->mClass);

        if(call_function("finalize", params, num_params, struct_name, TRUE, NULL, info))
        {
            info->stack_num = stack_num_before;
            gLLVMStack = llvm_stack;
            info->type = info_type_before;
            return TRUE;
        }
        else {
            char method_name[BUFSIZ];
            snprintf(method_name, BUFSIZ, "finalize_%s", info->sname);

            if(call_function(method_name, params, num_params, struct_name, TRUE, NULL, info))
            {
                info->stack_num = stack_num_before;
                gLLVMStack = llvm_stack;
                info->type = info_type_before;
                return TRUE;
            }
        }
    }

    info->stack_num = stack_num_before;
    gLLVMStack = llvm_stack;
    info->type = info_type_before;

    return FALSE;
}

static void call_field_destructor(Value* obj, sNodeType* node_type, sCompileInfo* info)
{
    Value* obj2 = Builder.CreateCast(Instruction::PtrToInt, obj, IntegerType::get(TheContext, 64));
    Value* cmp_right_value = ConstantInt::get(Type::getInt64Ty(TheContext), (uint64_t)0);
    Value* conditional = Builder.CreateICmpNE(obj2, cmp_right_value);

    BasicBlock* cond_then_block = BasicBlock::Create(TheContext, "cond_then_block", gFunction);
    BasicBlock* cond_end_block = BasicBlock::Create(TheContext, "cond_end", gFunction);

    Builder.CreateCondBr(conditional, cond_then_block, cond_end_block);

    Builder.SetInsertPoint(cond_then_block);
    info->current_block = cond_then_block;

    sCLClass* klass = node_type->mClass;

    sNodeType* node_type2 = clone_node_type(node_type);
    node_type2->mPointerNum = 0;

    Type* llvm_struct_type;
    if(!create_llvm_type_from_node_type(&llvm_struct_type, node_type2, node_type2, info))
    {
        fprintf(stderr, "%s %d: The error at create_llvm_type_from_node_type\n", info->sname, info->sline);
        return;
    }

    int i;
    for(i=0; i<klass->mNumFields; i++) {
        sNodeType* field_type = clone_node_type(klass->mFields[i]);

        BOOL success_solve;
        if(!solve_generics(&field_type, node_type, &success_solve))
        {
            fprintf(stderr, "%s %d: The error at solve_generics\n", info->sname, info->sline);
            return;
        }
        sCLClass* field_class = field_type->mClass;

        if(field_type->mHeap && field_type->mPointerNum > 0)
        {
            if(type_identify(node_type, field_type)) {
/*
#if LLVM_VERSION_MAJOR >= 7
                Value* field_address = Builder.CreateStructGEP(obj, i);
#else
                Value* field_address = Builder.CreateStructGEP(llvm_struct_type, obj, i);
#endif
                Value* obj2 = Builder.CreateAlignedLoad(field_address, 8);

                if(!call_destructor(obj2, field_type, info)) {
                    fprintf(stderr, "%s %d: can't make finalize of recursive field(3)(%s)\n", info->sname, info->sline, CLASS_NAME(field_type->mClass));
                    exit(2);
                }
*/
            }
            else {
                Type* llvm_field_type;
                if(!create_llvm_type_from_node_type(&llvm_field_type, field_type, field_type, info))
                {
                    fprintf(stderr, "%s %d: The error at create_llvm_type_from_node_type\n", info->sname, info->sline);
                    return;
                }

#if LLVM_VERSION_MAJOR >= 7
                Value* field_address = Builder.CreateStructGEP(obj, i);
#else
                Value* field_address = Builder.CreateStructGEP(llvm_struct_type, obj, i);
#endif
                free_object(field_type, field_address, FALSE, info);
            }
        }
    }

    Builder.CreateBr(cond_end_block);

    Builder.SetInsertPoint(cond_end_block);
    info->current_block = cond_end_block;;
}


static void free_right_value_object(sNodeType* node_type, void* obj, BOOL force_delete, sCompileInfo* info)
{
#ifdef MDEBUG
    printf("free right value object %p type %s at %s %d\n", obj, CLASS_NAME(node_type->mClass), info->sname, info->sline);
#endif
    BOOL exist_recursive_field = FALSE;

    Value* obj2 = (Value*)obj;

    sCLClass* klass = node_type->mClass;

    sNodeType* node_type2 = clone_node_type(node_type);
    node_type2->mPointerNum = 0;

    Type* llvm_struct_type;
    if(!create_llvm_type_from_node_type(&llvm_struct_type, node_type2, node_type2, info))
    {
        fprintf(stderr, "%s %d: The error at create_llvm_type_from_node_type\n", info->sname, info->sline);
        return;
    }

    int i;
    for(i=0; i<klass->mNumFields; i++) {
        sNodeType* field_type = clone_node_type(klass->mFields[i]);

        BOOL success_solve;
        if(!solve_generics(&field_type, node_type, &success_solve))
        {
            fprintf(stderr, "%s %d: The error at solve_generics\n", info->sname, info->sline);
            return;
        }
        sCLClass* field_class = field_type->mClass;

        if(field_type->mHeap && field_type->mPointerNum > 0)
        {
            if(type_identify(node_type, field_type))
            {
                BOOL exist_finalize_method = FALSE;
                if(node_type->mNumGenericsTypes > 0) 
                {
                    Function* llvm_fun;
                    int finalize_generics_fun_num = create_generics_finalize_method(node_type, &llvm_fun, info);

                    if(finalize_generics_fun_num != -1)
                    {
                        exist_finalize_method = TRUE;
                    }
                }
                else {
                    char fun_name[BUFSIZ];
                    snprintf(fun_name, BUFSIZ, "finalize_%s", info->sname);

                    char real_fun_name[REAL_FUN_NAME_MAX];
                    create_real_fun_name(real_fun_name, REAL_FUN_NAME_MAX, fun_name, CLASS_NAME(klass));

                    std::vector<sFunction*>& funcs = gFuncs[real_fun_name];
                    if(funcs.size() != 0) {
                        exist_finalize_method = TRUE;
                    }
                }

                if(!exist_finalize_method) {
                    LVALUE* llvm_stack = gLLVMStack;
                    int stack_num = info->stack_num;

                    if(!make_finalize_for_recursive_field_type(node_type, info)) {
                        fprintf(stderr, "%s %d: can't make finalize of recursive field(2)(%s)\n", info->sname, info->sline, CLASS_NAME(node_type->mClass));
                        exit(2);
                    }
                    
                    gLLVMStack = llvm_stack;
                    info->stack_num = stack_num;
                }

                exist_recursive_field = TRUE;
            }
        }
    }

    if((force_delete || node_type->mHeap ) && node_type->mPointerNum > 0) 
    {
        if(node_type->mPointerNum == 1 && !info->no_output)
        {
            if(exist_recursive_field) {
                //call_field_destructor(obj2, node_type, info);
                if(!call_destructor(obj2, node_type, info)) {
                    fprintf(stderr, "%s %d: can't make finalize of recursive field(3)(%s)\n", info->sname, info->sline, CLASS_NAME(node_type->mClass));
                    exit(2);
                }
            }
            else {
                call_destructor(obj2, node_type, info);
                call_field_destructor(obj2, node_type, info);
            }
        }
    }

    /// free ///
    if((force_delete || node_type->mHeap ) && node_type->mPointerNum > 0 && !info->no_output) 
    {
        Function* fun = TheModule->getFunction("ncfree");

        if(fun == nullptr) {
            fprintf(stderr, "require ncfree\n");
            exit(2);
        }

        std::vector<Value*> params2;
        Value* param = Builder.CreateCast(Instruction::BitCast, obj2, PointerType::get(IntegerType::get(TheContext, 8), 0));

        params2.push_back(param);
        Builder.CreateCall(fun, params2);
    }

    std::map<Value*, std::pair<sNodeType*, int>>* right_value_objects = (std::map<Value*, std::pair<sNodeType*, int>>*)info->right_value_objects;
    right_value_objects->erase(obj2);
}

void free_right_value_objects(sCompileInfo* info)
{
    std::map<Value*, std::pair<sNodeType*, int>>* right_value_objects = (std::map<Value*, std::pair<sNodeType*, int>>*)info->right_value_objects;

    std::map<Value*, std::pair<sNodeType*, int>> old_heap_objects(*right_value_objects);

    right_value_objects->clear();

    for(std::pair<Value*, std::pair<sNodeType*, int>> it: old_heap_objects) 
    {
        Value* address = it.first;

        sNodeType* node_type = it.second.first; 
        int flag = it.second.second;

        if(flag <= 0) {
            free_right_value_object(node_type, address, FALSE, info);
        }
        else {
            flag--;

            std::pair<sNodeType*, int> pair_value;
            pair_value.first = clone_node_type(node_type);
            pair_value.second = flag;

            (*right_value_objects)[address] = pair_value;
        }
    }
}

void free_object(sNodeType* node_type, void* address, BOOL force_delete, sCompileInfo* info)
{
    if(!info->no_output) {
        Value* obj = Builder.CreateAlignedLoad((Value*)address, 8, "free_object_load");
#ifdef MDEBUG
    printf("free object %p type %s at %s %d\n", obj, CLASS_NAME(node_type->mClass), info->sname, info->sline);
#endif

        free_right_value_object(node_type, obj, force_delete, info);
    }
}

static BOOL call_clone_method(sNodeType* node_type, Value** address, sCompileInfo* info)
{
    LVALUE* llvm_stack = gLLVMStack;
    int stack_num_before = info->stack_num;
    sNodeType* info_type_before = info->type;

    char real_fun_name[REAL_FUN_NAME_MAX];

    Value* obj = Builder.CreateAlignedLoad(*address, 8);

    char struct_name[VAR_NAME_MAX+128];
    if(strcmp(node_type->mTypeName, "") == 0)
    {
        xstrncpy(struct_name, CLASS_NAME(node_type->mClass), VAR_NAME_MAX+128);
    }
    else {
        xstrncpy(struct_name, node_type->mTypeName, VAR_NAME_MAX+128);
    }

    create_real_fun_name(real_fun_name, REAL_FUN_NAME_MAX, "clone", struct_name);

    std::vector<sFunction*>& funcs = gFuncs[real_fun_name];

    if(funcs.size() > 0 && node_type->mPointerNum == 1) {
        Value* obj2 = Builder.CreateCast(Instruction::PtrToInt, obj, IntegerType::get(TheContext, 64));
        Value* cmp_right_value = ConstantInt::get(Type::getInt64Ty(TheContext), (uint64_t)0);
        Value* conditional = Builder.CreateICmpNE(obj2, cmp_right_value);

        BasicBlock* cond_then_block = BasicBlock::Create(TheContext, "cond_then_block", gFunction);
        BasicBlock* cond_end_block = BasicBlock::Create(TheContext, "cond_end", gFunction);

        Builder.CreateCondBr(conditional, cond_then_block, cond_end_block);

        Builder.SetInsertPoint(cond_then_block);
        info->current_block = cond_then_block;

        Value* params[PARAMS_MAX];

        params[0] = obj;

        int num_params = 1;

        if(!call_function("clone", params, num_params, struct_name, FALSE, node_type, info))
        {
            char method_name[BUFSIZ];
            snprintf(method_name, BUFSIZ, "clone_%s", info->sname);

            if(!call_function(method_name, params, num_params, struct_name, FALSE, node_type, info))
            {
                compile_err_msg(info, "Not found found clone function");
                info->err_num++;
                exit(2);
            }
        }

        LVALUE llvm_value = *get_value_from_stack(-1);

        *address = llvm_value.value;

        remove_from_right_value_object(*address, info);

        dec_stack_ptr(1, info);

        gLLVMStack = llvm_stack;
        info->stack_num = stack_num_before;
        info->type = info_type_before;

        Builder.CreateBr(cond_end_block);

        Builder.SetInsertPoint(cond_end_block);
        info->current_block = cond_end_block;

        return TRUE;
    }

    char fun_name[BUFSIZ];
    snprintf(fun_name, BUFSIZ, "clone_%s", info->sname);

    create_real_fun_name(real_fun_name, REAL_FUN_NAME_MAX, fun_name, struct_name);

    std::vector<sFunction*>& funcs2 = gFuncs[real_fun_name];

    if(funcs2.size() > 0 && node_type->mPointerNum == 1) {
        Value* obj2 = Builder.CreateCast(Instruction::PtrToInt, obj, IntegerType::get(TheContext, 64));
        Value* cmp_right_value = ConstantInt::get(Type::getInt64Ty(TheContext), (uint64_t)0);
        Value* conditional = Builder.CreateICmpNE(obj2, cmp_right_value);

        BasicBlock* cond_then_block = BasicBlock::Create(TheContext, "cond_then_block", gFunction);
        BasicBlock* cond_end_block = BasicBlock::Create(TheContext, "cond_end", gFunction);

        Builder.CreateCondBr(conditional, cond_then_block, cond_end_block);

        Builder.SetInsertPoint(cond_then_block);
        info->current_block = cond_then_block;

        Value* params[PARAMS_MAX];

        params[0] = obj;

        int num_params = 1;

        char method_name[BUFSIZ];
        snprintf(method_name, BUFSIZ, "clone_%s", info->sname);

        if(!call_function(method_name, params, num_params, struct_name, FALSE, node_type, info))
        {
            compile_err_msg(info, "Not found found clone function");
            info->err_num++;
            exit(2);
        }

        LVALUE llvm_value = *get_value_from_stack(-1);

        *address = llvm_value.value;

        remove_from_right_value_object(*address, info);

        dec_stack_ptr(1, info);

        gLLVMStack = llvm_stack;
        info->stack_num = stack_num_before;
        info->type = info_type_before;

        Builder.CreateBr(cond_end_block);

        Builder.SetInsertPoint(cond_end_block);
        info->current_block = cond_end_block;

        return TRUE;
    }

    gLLVMStack = llvm_stack;
    info->stack_num = stack_num_before;
    info->type = info_type_before;

    return FALSE;
}

BOOL make_clone_for_recursive_field_type(sNodeType* node_type, sCompileInfo* info) 
{
    sCLClass* klass = node_type->mClass;
    char* class_name = CLASS_NAME(klass);

    sBuf source;
    sBuf_init(&source);

    char buf[BUFSIZ];

    snprintf(buf, BUFSIZ, "(%s* self) {\n", class_name);
    sBuf_append(&source, buf, strlen(buf));

    snprintf(buf, BUFSIZ, "var result = new %s;\n", class_name);
    sBuf_append(&source, buf, strlen(buf));

    int i;
    for(i=0; i<klass->mNumFields; i++) {
        char* field_name = CONS_str(&klass->mConst, klass->mFieldNameOffsets[i]);
        sNodeType* field_type = clone_node_type(klass->mFields[i]);

        if(field_type->mHeap) {
            char buf[BUFSIZ];
            snprintf(buf, BUFSIZ, "if(self.%s) { result.%s = clone self.%s;}\n", field_name, field_name, field_name);

            sBuf_append(&source, buf, strlen(buf));
        }
        else {
            char buf[BUFSIZ];
            snprintf(buf, BUFSIZ, "result.%s = self.%s;\n", field_name, field_name);

            sBuf_append(&source, buf, strlen(buf));
        }
    }

    snprintf(buf, BUFSIZ, "return result;\n}\n");
    sBuf_append(&source, buf, strlen(buf));

    unsigned int node = 0;

    sParserInfo pinfo;

    memset(&pinfo, 0, sizeof(sParserInfo));

    sBuf_init(&pinfo.mConst);

    pinfo.p = source.mBuf;
    xstrncpy(pinfo.sname, info->pinfo->sname, PATH_MAX);
    pinfo.source = source.mBuf;
    pinfo.module_name = info->pinfo->module_name;
    pinfo.parse_phase = info->pinfo->parse_phase;
    pinfo.lv_table = info->pinfo->lv_table;
    pinfo.in_clang = FALSE;
    pinfo.mFunVersion = 0;

    sNodeType* result_type = clone_node_type(node_type);
    result_type->mHeap = TRUE;

    char fun_name[BUFSIZ];
    snprintf(fun_name, BUFSIZ, "clone_%s", info->sname);

    char* struct_name = CLASS_NAME(node_type->mClass);

    if(!parse_function(&node, result_type, fun_name, struct_name, &pinfo)) {
        fprintf(stderr, "fail to implement a clone method of recurive structor. exit.\n");
        exit(2);
    }

    if(!compile(node, info)) {
        return FALSE;
    }

    free(source.mBuf);

    return TRUE;
}

Value* clone_object(sNodeType* node_type, Value* address, sCompileInfo* info)
{
    sCLClass* klass = node_type->mClass;

    sNodeType* node_type2 = clone_node_type(node_type);
    node_type2->mPointerNum = 0;

    Type* llvm_struct_type;
    if(!create_llvm_type_from_node_type(&llvm_struct_type, node_type2, node_type2, info))
    {
        fprintf(stderr, "%s %d: The error at create_llvm_type_from_node_type\n", info->sname, info->sline);
        exit(2);
    }

    int i;
    for(i=0; i<klass->mNumFields; i++) {
        sNodeType* field_type = clone_node_type(klass->mFields[i]);

        BOOL success_solve;
        if(!solve_generics(&field_type, node_type, &success_solve))
        {
            fprintf(stderr, "%s %d: The error at solve_generics\n", info->sname, info->sline);
            exit(2);
        }
        sCLClass* field_class = field_type->mClass;

        if(field_type->mHeap && field_type->mPointerNum > 0)
        {
            if(type_identify(node_type, field_type))
            {
                BOOL exist_clone_method = FALSE;

                char fun_name[BUFSIZ];
                snprintf(fun_name, BUFSIZ, "clone_%s", info->sname);

                char real_fun_name[REAL_FUN_NAME_MAX];
                create_real_fun_name(real_fun_name, REAL_FUN_NAME_MAX, fun_name, CLASS_NAME(klass));

                std::vector<sFunction*>& funcs = gFuncs[real_fun_name];
                if(funcs.size() != 0) {
                    exist_clone_method = TRUE;
                }

                if(!exist_clone_method) {
                    LVALUE* llvm_stack = gLLVMStack;
                    int stack_num = info->stack_num;

                    if(!make_clone_for_recursive_field_type(node_type, info)) {
                        fprintf(stderr, "%s %d: can't make clone of recursive field(2)(%s)\n", info->sname, info->sline, CLASS_NAME(node_type->mClass));
                        exit(2);
                    }

                    gLLVMStack = llvm_stack;
                    info->stack_num = stack_num;
                }
            }
        }
    }

    BOOL execute_clone_method = call_clone_method(node_type, &address, info);

    if(execute_clone_method) {
        return address;
    }

    Value* obj = Builder.CreateAlignedLoad(address, 8);
    if(node_type->mPointerNum > 0) {
        Value* obj2 = Builder.CreateCast(Instruction::PtrToInt, obj, IntegerType::get(TheContext, 64));
        Value* cmp_right_value = ConstantInt::get(Type::getInt64Ty(TheContext), (uint64_t)0);
        Value* conditional = Builder.CreateICmpNE(obj2, cmp_right_value);

        BasicBlock* cond_then_block = BasicBlock::Create(TheContext, "cond_then_block", gFunction);
        BasicBlock* cond_end_block = BasicBlock::Create(TheContext, "cond_end", gFunction);

        Builder.CreateCondBr(conditional, cond_then_block, cond_end_block);

        Builder.SetInsertPoint(cond_then_block);
        info->current_block = cond_then_block;

        sCLClass* klass = node_type->mClass;

        Value* src_obj = Builder.CreateAlignedLoad(address, 8);

        sNodeType* left_type = create_node_type_with_class_name("char*");
        sNodeType* right_type = clone_node_type(node_type);

        LVALUE rvalue;
        rvalue.value = src_obj;
        rvalue.type = clone_node_type(node_type);
        rvalue.address = nullptr;
        rvalue.var = nullptr;
        rvalue.binded_value = FALSE;
        rvalue.load_field = FALSE;

        if(!cast_right_type_to_left_type(left_type, &right_type, &rvalue, info))
        {
            compile_err_msg(info, "can't clone this value");
            exit(2);
        }

        /// memdup ///
        Function* fun = TheModule->getFunction("ncmemdup");

        if(fun == nullptr) {
            fprintf(stderr, "require ncmemdup\n");
            exit(2);
        }

        std::vector<Value*> params2;
        Value* param = rvalue.value;
        params2.push_back(param);

        Value* address2 = Builder.CreateCall(fun, params2);

        sNodeType* left_type2 = clone_node_type(node_type);
        sNodeType* right_type2 = create_node_type_with_class_name("char*");

        LVALUE rvalue2;
        rvalue2.value = address2;
        rvalue2.type = create_node_type_with_class_name("char*");
        rvalue2.address = nullptr;
        rvalue2.var = nullptr;
        rvalue2.binded_value = FALSE;
        rvalue2.load_field = FALSE;

        if(!cast_right_type_to_left_type(left_type2, &right_type2, &rvalue2, info))
        {
            compile_err_msg(info, "can't clone this value");
            exit(2);
        }

        Value* address3 = rvalue2.value;

        sNodeType* node_type2 = clone_node_type(node_type);
        node_type2->mPointerNum = 0;

        Type* llvm_struct_type;
        (void)create_llvm_type_from_node_type(&llvm_struct_type, node_type2, node_type2, info);

        if(node_type->mPointerNum == 1) {
            int i;
            for(i=0; i<klass->mNumFields; i++) {
                sNodeType* field_type = clone_node_type(klass->mFields[i]);
                sCLClass* field_class = field_type->mClass;

                Type* llvm_field_type;
                (void)create_llvm_type_from_node_type(&llvm_field_type, field_type, node_type2, info);

                int alignment = get_llvm_alignment_from_node_type(field_type);

                if(field_type->mHeap) 
                {
#if LLVM_VERSION_MAJOR >= 7
                    Value* field_address = Builder.CreateStructGEP(address3, i);
#else
                    Value* field_address = Builder.CreateStructGEP(llvm_struct_type, address3, i);
#endif
                    Value* field_value = clone_object(field_type, field_address, info);

                    Builder.CreateAlignedStore(field_value,  field_address, alignment);
                }
            }
        }

        Builder.CreateBr(cond_end_block);

        Builder.SetInsertPoint(cond_end_block);
        info->current_block = cond_end_block;

        return address3;
    }
    else {
        return obj;
    }
}

void llvm_change_block(BasicBlock* current_block, BasicBlock** current_block_before, sCompileInfo* info, BOOL no_free_right_objects)
{
    if(!no_free_right_objects) {
        free_right_value_objects(info);
    }

    *current_block_before = (BasicBlock*)info->current_block;

    Builder.SetInsertPoint(current_block);
    info->current_block = current_block;
}

BOOL get_const_value_from_node(int* array_size, unsigned int array_size_node, sParserInfo* info)
{
    sCompileInfo cinfo;

    memset(&cinfo, 0, sizeof(sCompileInfo));

    new_right_value_objects_container(&cinfo);

    cinfo.pinfo = info;

    if(!compile(array_size_node, &cinfo)) {
        return FALSE;
    }

    sNodeType* node_type = cinfo.type;

    LVALUE llvm_value = *get_value_from_stack(-1);

    dec_stack_ptr(1, &cinfo);

    Value* value = llvm_value.value;

    ConstantInt* constant_value;

    if(constant_value = dyn_cast<ConstantInt>(value)) {
        *array_size = constant_value->getSExtValue();
    }
    else {
        return FALSE;
    }

    return TRUE;
}

void create_anonymous_union_var_name(char* name, int size_name)
{
    char* prefix_name = "anon.union.var";
    static int num = 0;
    snprintf(name, size_name, "%s%d", prefix_name, num);
}

void* new_right_value_objects_container(sCompileInfo* info)
{
    void* result = (void*)info->right_value_objects;
    info->right_value_objects = (void*)new std::map<Value*, std::pair<sNodeType*, int>>;

    return result;
}

void restore_right_value_objects_container(void* right_value_objects, sCompileInfo* info)
{
    info->right_value_objects = right_value_objects;
}

}
