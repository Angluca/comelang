#include "common.h"

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "");
    return come_main(argc, argv);
}

CVALUE*% CVALUE*::initialize(CVALUE*% self)
{
    return self;
}

sModule*% sModule*::initialize(sModule*% self)
{
    self.mSourceHead = new buffer();
    self.mSource = new buffer();
    self.mLastCode = null;
    self.mLastCode2 = null;
    self.mHeader = new map<string, string>();
    self.mHeaderStructs = new map<string, string>();
    
    return self;
}

sVarTable*% sVarTable*::initialize(sVarTable*% self, bool global, sVarTable* parent)
{
    self.mVars = new map<string, sVar*%>();
    self.mGlobal = global;
    self.mParent = parent;
    
    return self;
}

void sVarTable*::finalize(sVarTable* self)
{
    delete self.mVars;
}

sType*% sType*::initialize(sType*% self, string name, bool heap=false, sInfo* info=info)
{
    int pointer_num = 0;
    char* p = name;
    while(*p) {
        if(xisalpha(*p) || *p == '_') {
            p++;
        }
        else {
            break;
        }
    }
    while(*p == '*') {
        pointer_num++;
        p++;
    }
    
    string name2 = string(name).substring(0, -pointer_num-1);
    
    sClass* klass = info.classes[string(name2)]??;
    sClass* generics_class = info.generics_classes[name2]??;
    
    if(klass == null && generics_class == null) {
        printf("%s %d: class not found(%s)(1)\n", info->sname, info->sline, name2);
    }
    
    if(klass) {
        self.mClass = klass;
    }
    else {
        sClass*% klass2 = new sClass;
        klass2->mName = string(name);
        
        info.classes.insert(string(name), klass2);
        
        self.mClass = info.classes[string(name)]??;
    }
    
    self.mNoSolvedGenericsType = null;
    self.mOriginalLoadVarType = null;
    self.mGenericsTypes = new list<sType*%>();
    self.mArrayNum = new list<sNode*%>();
    self.mParamTypes = new list<sType*%>();
    self.mParamNames = new list<string>();
    self.mVarArgs = false;
    self.mResultType = null;
    self.mUnsigned = false;
    self.mConstant = false;
    self.mRegister = false;
    self.mVolatile = false;
    self.mStatic = false;
    self.mRestrict = false;
    self.mImmutable = false;
    self.mLongLong = false;
    self.mHeap = heap;
    self.mNoHeap = false;
    
    self.mPointerNum = pointer_num;
    self.mSizeNum = null;
    
    self.mOriginalTypeName = string("");
    self.mOriginalPointerNum = 0;
    
    return self;
}

sClass*% sClass*::initialize(sClass*% self, string name, bool number=false, bool union_=false, bool generics=false, bool method_generics=false, bool protocol_=false, bool struct_=false, bool float_=false, int generics_num=-1, int method_generics_num=-1, bool enum_=false, sInfo* info=info)
{
    self.mNumber = number;
    self.mStruct = struct_;
    self.mUnion = union_;
    self.mGenerics = generics;
    self.mMethodGenerics = method_generics;
    self.mEnum = false;
    self.mProtocol = protocol_;
    self.mFloat = float_;
    self.mEnum = enum_;
    
    self.mName = string(name);
    
    self.mGenericsNum = generics_num;
    self.mMethodGenericsNum = method_generics_num;
    
    self.mFields = new list<tup: string, sType*%>();
    
    return self;
};

sClassModule*% sClassModule*::initialize(sClassModule*% self, string name, string text, string sname, int sline, sInfo* info)
{
    self.mName = clone name;
    self.mText = clone text;
    self.mParams = new list<string>();
    self.mSName = string(sname);
    self.mSLine = sline;
    
    return self;
};

sFun*% sFun*::initialize(sFun*% self, string name, sType*% result_type, list<sType*%>*% param_types, list<string>*% param_names, list<string>%* param_default_parametors, bool external, bool var_args, sBlock*% block, bool static_, sInfo* info, bool inline_, bool uniq_=false, bool generate_, string attribute=s"", string fun_attribute=s"")
{
    self.mName = name;
    self.mResultType = result_type;
    self.mParamTypes = param_types;
    self.mParamNames = param_names;
    self.mParamDefaultParametors = param_default_parametors;
    self.mExternal = external;
    self.mVarArgs = var_args;
    self.mStatic = static_;
    self.mInline = inline_;
    self.mUniq = uniq_;
    self.mGenerate = generate_;
    
    self.mLambdaType = new sType(s"lambda");
    
    foreach(it, param_types) {
        self.mLambdaType.mParamTypes.push_back(clone it);
    }
    
    foreach(it, param_names) {
        self.mLambdaType.mParamNames.push_back(clone it);
    }
    
    self.mLambdaType.mResultType = result_type;
    self.mLambdaType.mVarArgs = var_args;
    
    self.mSource = new buffer();
    self.mSourceHead = new buffer();
    self.mSourceHead2 = new buffer();
    self.mSourceDefer = new buffer();
    
    self.mBlock = block;
    
    if((result_type->mClass->mNumber || result_type->mClass->mName === "double" || result_type->mClass->mName === "float" || result_type->mClass->mStruct) && result_type->mPointerNum == 0) {
        self.mNoResultType = true;
    }
    
    self.mAttribute = attribute;
    self.mFunAttribute = fun_attribute;
    
    return self;
}

sNodeBase*% sNodeBase*::initialize(sNodeBase*% self, sInfo* info=info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);
    self.sline_real = info.sline_real;
    
    return self;
}

int sNodeBase*::sline(sNodeBase* self, sInfo* info)
{
    return self.sline;
}

int sNodeBase*::sline_real(sNodeBase* self, sInfo* info)
{
    return self.sline_real;
}

bool sNodeBase*::terminated(sNodeBase* self)
{
    return false;
}

string sNodeBase*::sname(sNodeBase* self, sInfo* info)
{
    return string(self.sname);
}

sGenericsFun*% sGenericsFun*::initialize(sGenericsFun*% self, sType*% impl_type, list<string>* generics_type_names, list<string>* method_generics_type_names, string name, sType*% result_type, list<sType*%>*% param_types, list<string>*% param_names, list<string>*% param_default_parametors, bool var_args, string block, sInfo* info, string generics_sname, int generics_sline)
{
    self.mGenericsTypeNames = clone generics_type_names;
    self.mMethodGenericsTypeNames = clone method_generics_type_names;
    
    self.mName = name;
    self.mResultType = result_type;
    self.mParamTypes = param_types;
    self.mParamNames = param_names;
    self.mParamDefaultParametors = param_default_parametors;
    self.mVarArgs = var_args;
    
    self.mBlock = block;
    self.mSLine = info.sline;
    
    self.mGenericsSName = string(generics_sname);
    self.mGenericsSLine = generics_sline;
    
    return self;
}

sBlock*% sBlock*::initialize(sBlock*% self, sInfo* info)
{
    self.mNodes = new list<sNode*%>();
    
    return self;
}

bool strmemcmp(char* p, char* p2)
{
    bool terminated = false;
    char* p3  = p;
    for(int i=0; i<strlen(p2); i++) {
        if(*p3 == '\0') {
            terminated = true;
            break;
        }
        p3++;
    }
    return !terminated && memcmp(p, p2, strlen(p2)) == 0;
}

bool parsecmp(char* str, sInfo* info=info) 
{
    if(strlen(info.p) < strlen(str)) {
        return false;
    }
    char c = *(info->p+strlen(str));
    return strmemcmp(info.p, str) && (c == ';' || c == ' ' || c == '\t' || c == '\n' || c == '\n' || c == '(');
}
