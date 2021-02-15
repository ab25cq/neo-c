#include "common.h"

impl sVarTable
{

initialize()
{
    self.mLocalVariables = new map<string, sVar*>.initialize();
    self.mVarNum = 0;
    self.mMaxBlockVarNum = 0;

    self.mBlockLevel = 0;
}

}

void init_var_table(sParserInfo* info) 
{
    var vtable = new sVarTable.initialize();
    
    vtable.mParent = info.vtables.item(-1, null);

    info.vtables.push_back(vtable);
}

void final_var_table(sParserInfo* info)
{
    var vtable = borrow info.vtables.pop_back(null);
    delete vtable;
}

void add_variable_to_table(sParserInfo* info, char* name, sCLType* type, bool readonly)
{
    sVarTable* vtable = info.vtables.item(-1, null);
    
    sVar*% v = new sVar;
    
    v.mName = string(name);
    v.mIndex = get_var_num(info.vtables);
    if(type) {
        v.mType = type;
    }
    else {
        v.mType = null;
    }
    v.mBlockLevel = vtable.mBlockLevel;
    v.mReadOnly = readonly;
    
    vtable.mLocalVariables.insert(string(name), v);

    info->vars.push_back(v);
}

// result: (null) not found (sVar*) found
sVar* get_variable_from_table(sParserInfo* info, char* name)
{
    sVarTable* it = info.vtables.item(-1, null);

    while(it) {
        sVar* v = it.mLocalVariables.at(name, null);

        if(v) {
            return v;
        }

        it = it.mParent;
    }

    return null;
}

void check_already_added_variable(sParserInfo* info, char* name)
{
    if(info.vtables.item(-1, null).mLocalVariables.at(name, null) != null) {
        parser_err_msg(info, xsprintf("The variable named %s has been already existed in this variable table", name));
        info.err_num++;
    }
}

int get_var_num(vector<sVarTable*%>* vtables)
{
    int result = 0;
    sVarTable* it = vtables.item(-1, null);

    while(it) {
        result += it.mLocalVariables.length();
        
        it = it.mParent;
    }

    return result;
}


void show_vtable(vector<sVarTable*%>* vtables)
{
    puts("show_vtable");
    sVarTable* it = vtables.item(-1, null);

    while(it) {
        it.mLocalVariables.each {
            if(it2->mType) {
                printf("%s %p %s\n", it, it2, it2->mType->mClass->mName);
            }
            else {
                printf("%s %p type null\n", it, it2);
            }
        }

        it = it.mParent;
    }
    puts("show_vtable end");
}

