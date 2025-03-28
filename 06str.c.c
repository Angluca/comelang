/// previous struct definition ///
struct __locale_struct;

struct tm;

struct sType;

struct sClass;

struct sInfo;

struct sVar;

struct sRightValueObject;

struct sBlock;

struct sVarTable;

/// struct definition ///
typedef unsigned long  int size_t;

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
typedef long (*cookie_read_function_t)(void*,char*,unsigned long  int);

typedef long (*cookie_write_function_t)(void*,const char*,unsigned long  int);

typedef int (*cookie_seek_function_t)(void*,long*,int);

typedef int (*cookie_close_function_t)(void*);

struct _IO_cookie_io_functions_t
{
    long (*read)(void*,char*,unsigned long  int);
    long (*write)(void*,const char*,unsigned long  int);
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

typedef struct __locale_struct* locale_t;

struct lconv
{
    char* decimal_point;
    char* thousands_sep;
    char* grouping;
    char* int_curr_symbol;
    char* currency_symbol;
    char* mon_decimal_point;
    char* mon_thousands_sep;
    char* mon_grouping;
    char* positive_sign;
    char* negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    char int_p_cs_precedes;
    char int_p_sep_by_space;
    char int_n_cs_precedes;
    char int_n_sep_by_space;
    char int_p_sign_posn;
    char int_n_sign_posn;
};

extern char* program_invocation_short_name;
extern char* program_invocation_name;
typedef unsigned int wint_t;

typedef unsigned long  int wctype_t;

struct __mbstate_t
{
    unsigned int __opaque1;
    unsigned int __opaque2;
};

typedef struct __mbstate_t mbstate_t;

typedef void* any;

typedef char* string;

struct buffer
{
    char* buf;
    int len;
    int size;
};

extern char* gComeStackFrameSName[128];

extern int gComeStackFrameSLine[128];

extern int gComeStackFrameID[128];

extern int gNumComeStackFrame;

extern char* gComeStackFrameBuffer;

struct sMemHeaderTiny
{
    unsigned long  int size;
    int allocated;
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;
    char* class_name;
    char* sname;
    int sline;
};

struct sMemHeader
{
    unsigned long  int size;
    int allocated;
    struct sMemHeader* next;
    struct sMemHeader* prev;
    struct sMemHeader* free_next;
    char* sname[16];
    int sline[16];
    int id[16];
    char* class_name;
};

extern struct sMemHeader* gAllocMem;

extern void* gComeResultObject;

extern _Bool gComeMallocLib;

extern _Bool gComeDebugLib;

extern _Bool gComeGCLib;

extern int gNumAlloc;

extern int gNumFree;

struct sHeapPage
{
    char** mPages;
    int mSizePages;
    char* mTop;
    int mCurrentPages;
    struct sMemHeaderTiny* mFreeMem[4096];
};

extern struct sHeapPage gHeapPages;

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
    char* item;
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

extern _Bool gComeDebug;
extern _Bool gComeGC;
extern _Bool gComeC;
extern _Bool gComeStr;
extern _Bool gComePthread;
extern _Bool gComeNet;
extern _Bool gComeMalloc;
extern _Bool gCommonHeader;
extern int gComeDebugStackFrameID;
struct tuple2$2char$phsType$ph
{
    char* v1;
    struct sType* v2;
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
    struct list$1tuple2$2char$phsType$ph$ph* mFields;
    char* mParentClassName;
    char* mAttribute;
    _Bool mDynamic;
};

struct sNode
{
    void* _protocol_obj;
    void (*finalize)(void*);
    void* (*clone)(void*);
    _Bool (*compile)(void*,struct sInfo*);
    int (*sline)(void*);
    int (*sline_real)(void*);
    char* (*sname)(void*);
    _Bool (*terminated)(void*);
    char* (*kind)(void*);
};

struct sNodeBase
{
    int sline;
    char* sname;
    int sline_real;
};

struct list_item$1sType$ph
{
    struct sType* item;
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
    struct sClass* mClass;
    struct sType* mOriginalLoadVarType;
    struct sType* mChannelType;
    struct list$1sType$ph* mGenericsTypes;
    struct sType* mNoSolvedGenericsType;
    _Bool mAnyClass;
    struct sType* mAnyOriginalType;
    struct sNode* mSizeNum;
    struct sNode* mAlignas;
    char* mTupleName;
    char* mAttribute;
    _Bool mAllocaValue;
    _Bool mUnsigned;
    _Bool mShort;
    _Bool mLong;
    _Bool mLongLong;
    _Bool mConstant;
    _Bool mAtomic;
    _Bool mRegister;
    _Bool mVolatile;
    _Bool mStatic;
    _Bool mUniq;
    _Bool mRecord;
    _Bool mExtern;
    _Bool mRestrict;
    _Bool mImmutable;
    _Bool mHeap;
    _Bool mDefferRightValue;
    _Bool mChannel;
    _Bool mNoHeap;
    _Bool mNoCallingDestructor;
    _Bool mException;
    _Bool mInline;
    _Bool mNullValue;
    _Bool mGuardValue;
    char* mAsmName;
    _Bool mTypedef;
    _Bool mMultipleTypes;
    _Bool mOriginIsArray;
    struct list$1sNode$ph* mArrayNum;
    int mPointerNum;
    int mOriginalTypeNamePointerNum;
    int mOriginalTypeNameHeap;
    int mTypedefOriginalPointerNum;
    int mFunctionPointerNum;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mArrayPointerType;
    _Bool mLambdaArray;
    int mLambdaArrayNum;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct sType* mResultType;
    _Bool mVarArgs;
};

struct CVALUE
{
    char* c_value;
    struct sType* type;
    struct sVar* var;
    struct sRightValueObject* right_value_objects;
    char* c_value_without_right_value_objects;
    char* c_value_without_cast_object_value;
};

struct sVar
{
    char* mName;
    char* mCValueName;
    struct sType* mType;
    _Bool mGlobal;
    _Bool mAllocaValue;
    _Bool mNoFree;
    char* mFunName;
};

struct sFun
{
    char* mName;
    struct sType* mResultType;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
    struct sType* mLambdaType;
    struct sBlock* mBlock;
    struct buffer* mSource;
    struct buffer* mSourceHead;
    struct buffer* mSourceHead2;
    struct buffer* mSourceDefer;
    _Bool mStatic;
    _Bool mInline;
    _Bool mUniq;
    _Bool mGenerate;
    _Bool mExternal;
    _Bool mVarArgs;
    _Bool mNoResultType;
    _Bool mConstFun;
    char* mAttribute;
    char* mFunAttribute;
};

struct sGenericsFun
{
    struct sType* mImplType;
    struct list$1char$ph* mGenericsTypeNames;
    struct list$1char$ph* mMethodGenericsTypeNames;
    char* mName;
    struct sType* mResultType;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
    char* mBlock;
    int mSLine;
    _Bool mVarArgs;
    _Bool mGenerate;
    char* mGenericsSName;
    int mGenericsSLine;
    _Bool mConstFun;
};

struct map$2char$phchar$ph
{
    char** keys;
    _Bool* item_existance;
    char** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct sModule
{
    struct buffer* mSourceHead;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    struct map$2char$phchar$ph* mHeader;
    struct map$2char$phchar$ph* mHeaderStructs;
};

struct map$2char$phsVar$ph
{
    char** keys;
    _Bool* item_existance;
    struct sVar** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct sVarTable
{
    struct map$2char$phsVar$ph* mVars;
    _Bool mGlobal;
    struct sVarTable* mParent;
};

struct sBlock
{
    struct list$1sNode$ph* mNodes;
    struct sVarTable* mVarTable;
    _Bool mOmitSemicolon;
};

struct sRightValueObject
{
    struct sType* mType;
    char* mVarName;
    char* mFunName;
    _Bool mFreed;
    int mID;
    int mBlockLevel;
    _Bool mStored;
    _Bool mDecrementRefCount;
    struct sType* mObjType;
    char* mObjValue;
    _Bool mNoFree;
};

struct sClassModule
{
    char* mName;
    char* mText;
    struct list$1char$ph* mParams;
    char* mSName;
    int mSLine;
};

struct map$2char$phsFun$ph
{
    char** keys;
    _Bool* item_existance;
    struct sFun** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsGenericsFun$ph
{
    char** keys;
    _Bool* item_existance;
    struct sGenericsFun** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsClass$ph
{
    char** keys;
    _Bool* item_existance;
    struct sClass** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsClassModule$ph
{
    char** keys;
    _Bool* item_existance;
    struct sClassModule** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsType$ph
{
    char** keys;
    _Bool* item_existance;
    struct sType** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phbuffer$ph
{
    char** keys;
    _Bool* item_existance;
    struct buffer** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct list_item$1sRightValueObject$ph
{
    struct sRightValueObject* item;
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
    struct CVALUE* item;
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

struct list_item$1sVar$ph
{
    struct sVar* item;
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

struct sInfo
{
    char* p;
    char* head;
    struct buffer* original_source;
    struct buffer* source;
    char* sname;
    char* sname_at_head;
    char* base_sname;
    int sline;
    int err_num;
    char* err_line;
    char* clang_option;
    char* cpp_option;
    char* linker_option;
    _Bool no_output_err;
    _Bool no_output_come_code;
    _Bool no_output_come_code2;
    struct sFun* come_fun;
    struct sFun* caller_fun;
    int caller_line;
    char* caller_sname;
    int block_level;
    struct map$2char$phsFun$ph* funcs;
    struct map$2char$phsGenericsFun$ph* generics_funcs;
    struct map$2char$phsClass$ph* classes;
    struct map$2char$phsClassModule$ph* modules;
    struct map$2char$phsType$ph* types;
    struct map$2char$phsClass$ph* generics_classes;
    struct map$2char$phbuffer$ph* struct_definition;
    struct map$2char$phbuffer$ph* previous_struct_definition;
    struct sModule* module;
    struct sType* type;
    struct list$1sRightValueObject$ph* right_value_objects;
    struct sType* generics_type;
    struct list$1sType$ph* method_generics_types;
    struct list$1CVALUE$ph* stack;
    struct sType* come_function_result_type;
    struct sType* come_method_block_function_result_type;
    struct sVarTable* lv_table;
    struct sVarTable* gv_table;
    _Bool comma_instead_of_semicolon;
    _Bool no_comma;
    _Bool no_assign;
    _Bool no_label;
    _Bool last_statment_is_return;
    struct list$1char$ph* generics_type_names;
    struct list$1char$ph* method_generics_type_names;
    struct sType* impl_type;
    struct sType* class_type;
    int current_stack_num;
    int num_method_block;
    struct sClass* current_stack_frame_struct;
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
    struct map$2char$phchar$ph* module_params;
    _Bool constructor_;
    struct sClass* defining_class;
    _Bool array_initializer;
    _Bool struct_initializer;
    _Bool va_arg;
    _Bool in_fun_param;
    _Bool inhibits_output_code;
    _Bool inhibits_output_code2;
    _Bool in_generics_fun;
    _Bool in_clone_object;
    _Bool in_conditional_operator;
    char* if_result_var_name;
    struct list$1sVar$ph* match_it_var;
    int sline_top;
    struct sFun* calling_fun;
    struct map$2char$phchar$ph* uniq_definition;
    _Bool in_top_level;
    _Bool remove_comment;
    int sline_real;
    int sline_block;
    _Bool m5stack_cpp;
    _Bool pico_cpp;
    _Bool emb_cpp;
    _Bool gcc_compiler;
    _Bool in_exception_value;
    _Bool in_method_block;
};

struct tuple2$2int$char$ph
{
    int v1;
    char* v2;
};

struct tuple2$2sType$phchar$ph
{
    struct sType* v1;
    char* v2;
};

struct tuple2$2char$phsNode$ph
{
    char* v1;
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

struct tuple2$2char$phsGenericsFun$p
{
    char* v1;
    struct sGenericsFun* v2;
};

struct tuple3$3sType$phchar$phbool$
{
    struct sType* v1;
    char* v2;
    _Bool v3;
};

struct tuple2$2bool$char$ph
{
    _Bool v1;
    char* v2;
};

struct tuple2$2char$phchar$ph
{
    char* v1;
    char* v2;
};

struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$
{
    struct list$1sType$ph* v1;
    struct list$1char$ph* v2;
    struct list$1char$ph* v3;
    _Bool v4;
};

struct tuple2$2sFun$pchar$ph
{
    struct sFun* v1;
    char* v2;
};

struct tuple2$2char$phbool$
{
    char* v1;
    _Bool v2;
};

struct tuple3$3sType$phchar$phsNode$ph
{
    struct sType* v1;
    char* v2;
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

extern struct list$1sRightValueObject$ph* gExceptionRightValueObjects;
struct tuple4$4char$phchar$phchar$phchar$ph
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
};

struct sStrNode
{
    int sline;
    char* sname;
    int sline_real;
    char* value;
};

struct sBufferNode
{
    int sline;
    char* sname;
    int sline_real;
    struct buffer* value;
    unsigned long  int size;
};

struct sSStringNode
{
    int sline;
    char* sname;
    int sline_real;
    char* value;
    struct list$1sNode$ph* exps;
};

struct sCharNode
{
    int sline;
    char* sname;
    int sline_real;
    int value;
};

struct sWCharNode
{
    int sline;
    char* sname;
    int sline_real;
    unsigned int value;
    _Bool quote;
};

struct sWStringNode
{
    int sline;
    char* sname;
    int sline_real;
    unsigned int* value;
};

struct sRegexNode
{
    int sline;
    char* sname;
    int sline_real;
    char* str;
    _Bool global;
    _Bool ignore_case;
};

struct sListNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* list_elements;
};

struct sTupleNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements;
};

struct sSomeNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* tuple_elements;
};

struct sNullReturnValue
{
    int sline;
    char* sname;
    int sline_real;
};

struct sNullReturnValueOfException
{
    int sline;
    char* sname;
    int sline_real;
};

struct sNullValue
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sNoneNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* tuple_elements;
};

struct sMapNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* map_key_elements;
    struct list$1sNode$ph* map_elements;
};

// source head

// header function
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
unsigned long  int fread(void* anonymous_var_nameX23, unsigned long  int anonymous_var_nameX24, unsigned long  int anonymous_var_nameX25, struct _IO_FILE* anonymous_var_nameX26);
unsigned long  int fwrite(const void* anonymous_var_nameX27, unsigned long  int anonymous_var_nameX28, unsigned long  int anonymous_var_nameX29, struct _IO_FILE* anonymous_var_nameX30);
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
int snprintf(char* anonymous_var_nameX51, unsigned long  int anonymous_var_nameX52, const char* anonymous_var_nameX53, ...);
int vprintf(const char* anonymous_var_nameX54, va_list anonymous_var_nameX55);
int vfprintf(struct _IO_FILE* anonymous_var_nameX56, const char* anonymous_var_nameX57, va_list anonymous_var_nameX58);
int vsprintf(char* anonymous_var_nameX59, const char* anonymous_var_nameX60, va_list anonymous_var_nameX61);
int vsnprintf(char* anonymous_var_nameX62, unsigned long  int anonymous_var_nameX63, const char* anonymous_var_nameX64, va_list anonymous_var_nameX65);
int scanf(const char* anonymous_var_nameX66, ...);
int fscanf(struct _IO_FILE* anonymous_var_nameX67, const char* anonymous_var_nameX68, ...);
int sscanf(const char* anonymous_var_nameX69, const char* anonymous_var_nameX70, ...);
int vscanf(const char* anonymous_var_nameX71, va_list anonymous_var_nameX72);
int vfscanf(struct _IO_FILE* anonymous_var_nameX73, const char* anonymous_var_nameX74, va_list anonymous_var_nameX75);
int vsscanf(const char* anonymous_var_nameX76, const char* anonymous_var_nameX77, va_list anonymous_var_nameX78);
void perror(const char* anonymous_var_nameX79);
int setvbuf(struct _IO_FILE* anonymous_var_nameX80, char* anonymous_var_nameX81, int anonymous_var_nameX82, unsigned long  int anonymous_var_nameX83);
void setbuf(struct _IO_FILE* anonymous_var_nameX84, char* anonymous_var_nameX85);
char* tmpnam(char* anonymous_var_nameX86);
struct _IO_FILE* tmpfile();
struct _IO_FILE* fmemopen(void* anonymous_var_nameX87, unsigned long  int anonymous_var_nameX88, const char* anonymous_var_nameX89);
struct _IO_FILE* open_memstream(char** anonymous_var_nameX90, unsigned long  int* anonymous_var_nameX91);
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
long getdelim(char** anonymous_var_nameX114, unsigned long  int* anonymous_var_nameX115, int anonymous_var_nameX116, struct _IO_FILE* anonymous_var_nameX117);
long getline(char** anonymous_var_nameX118, unsigned long  int* anonymous_var_nameX119, struct _IO_FILE* anonymous_var_nameX120);
int renameat(int anonymous_var_nameX121, const char* anonymous_var_nameX122, int anonymous_var_nameX123, const char* anonymous_var_nameX124);
char* ctermid(char* anonymous_var_nameX125);
char* tempnam(const char* anonymous_var_nameX126, const char* anonymous_var_nameX127);
char* cuserid(char* anonymous_var_nameX128);
void setlinebuf(struct _IO_FILE* anonymous_var_nameX129);
void setbuffer(struct _IO_FILE* anonymous_var_nameX130, char* anonymous_var_nameX131, unsigned long  int anonymous_var_nameX132);
int fgetc_unlocked(struct _IO_FILE* anonymous_var_nameX133);
int fputc_unlocked(int anonymous_var_nameX134, struct _IO_FILE* anonymous_var_nameX135);
int fflush_unlocked(struct _IO_FILE* anonymous_var_nameX136);
unsigned long  int fread_unlocked(void* anonymous_var_nameX137, unsigned long  int anonymous_var_nameX138, unsigned long  int anonymous_var_nameX139, struct _IO_FILE* anonymous_var_nameX140);
unsigned long  int fwrite_unlocked(const void* anonymous_var_nameX141, unsigned long  int anonymous_var_nameX142, unsigned long  int anonymous_var_nameX143, struct _IO_FILE* anonymous_var_nameX144);
void clearerr_unlocked(struct _IO_FILE* anonymous_var_nameX145);
int feof_unlocked(struct _IO_FILE* anonymous_var_nameX146);
int ferror_unlocked(struct _IO_FILE* anonymous_var_nameX147);
int fileno_unlocked(struct _IO_FILE* anonymous_var_nameX148);
int getw(struct _IO_FILE* anonymous_var_nameX149);
int putw(int anonymous_var_nameX150, struct _IO_FILE* anonymous_var_nameX151);
char* fgetln(struct _IO_FILE* anonymous_var_nameX152, unsigned long  int* anonymous_var_nameX153);
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
long  double strtold(const char* anonymous_var_nameX185, char** anonymous_var_nameX186);
long strtol(const char* anonymous_var_nameX187, char** anonymous_var_nameX188, int anonymous_var_nameX189);
unsigned long  int strtoul(const char* anonymous_var_nameX190, char** anonymous_var_nameX191, int anonymous_var_nameX192);
long long strtoll(const char* anonymous_var_nameX193, char** anonymous_var_nameX194, int anonymous_var_nameX195);
unsigned long  long strtoull(const char* anonymous_var_nameX196, char** anonymous_var_nameX197, int anonymous_var_nameX198);
int rand();
void srand(unsigned int anonymous_var_nameX199);
void* malloc(unsigned long  int anonymous_var_nameX200);
void* calloc(unsigned long  int anonymous_var_nameX201, unsigned long  int anonymous_var_nameX202);
void* realloc(void* anonymous_var_nameX203, unsigned long  int anonymous_var_nameX204);
void free(void* anonymous_var_nameX205);
void* aligned_alloc(unsigned long  int anonymous_var_nameX206, unsigned long  int anonymous_var_nameX207);
void abort();
int atexit(void (*anonymous_lambda_var_nameZ1)());
void exit(int anonymous_var_nameX208);
void _Exit(int anonymous_var_nameX209);
int at_quick_exit(void (*anonymous_lambda_var_nameZ2)());
void quick_exit(int anonymous_var_nameX210);
char* getenv(const char* anonymous_var_nameX211);
int system(const char* anonymous_var_nameX212);
void* bsearch(const void* anonymous_var_nameX213, const void* anonymous_var_nameX214, unsigned long  int anonymous_var_nameX215, unsigned long  int anonymous_var_nameX216, int (*anonymous_lambda_var_nameZ3)(const void*,const void*));
void qsort(void* anonymous_var_nameX219, unsigned long  int anonymous_var_nameX220, unsigned long  int anonymous_var_nameX221, int (*anonymous_lambda_var_nameZ4)(const void*,const void*));
int abs(int anonymous_var_nameX224);
long labs(long anonymous_var_nameX225);
long long llabs(long  long anonymous_var_nameX226);
struct anonymous_typeX1 div(int anonymous_var_nameX227, int anonymous_var_nameX228);
struct anonymous_typeX2 ldiv(long anonymous_var_nameX229, long anonymous_var_nameX230);
struct anonymous_typeX3 lldiv(long  long anonymous_var_nameX231, long  long anonymous_var_nameX232);
int mblen(const char* anonymous_var_nameX233, unsigned long  int anonymous_var_nameX234);
int mbtowc(unsigned int* anonymous_var_nameX235, const char* anonymous_var_nameX236, unsigned long  int anonymous_var_nameX237);
int wctomb(char* anonymous_var_nameX238, unsigned int anonymous_var_nameX239);
unsigned long  int mbstowcs(unsigned int* anonymous_var_nameX240, const char* anonymous_var_nameX241, unsigned long  int anonymous_var_nameX242);
unsigned long  int wcstombs(char* anonymous_var_nameX243, const unsigned int* anonymous_var_nameX244, unsigned long  int anonymous_var_nameX245);
unsigned long  int __ctype_get_mb_cur_max();
int posix_memalign(void** anonymous_var_nameX246, unsigned long  int anonymous_var_nameX247, unsigned long  int anonymous_var_nameX248);
int setenv(const char* anonymous_var_nameX249, const char* anonymous_var_nameX250, int anonymous_var_nameX251);
int unsetenv(const char* anonymous_var_nameX252);
int mkstemp(char* anonymous_var_nameX253);
int mkostemp(char* anonymous_var_nameX254, int anonymous_var_nameX255);
char* mkdtemp(char* anonymous_var_nameX256);
int getsubopt(char** anonymous_var_nameX257, char** anonymous_var_nameX258, char** anonymous_var_nameX259);
int rand_r(unsigned int* anonymous_var_nameX260);
char* realpath(const char* anonymous_var_nameX261, char* anonymous_var_nameX262);
long  int random();
void srandom(unsigned int anonymous_var_nameX263);
char* initstate(unsigned int anonymous_var_nameX264, char* anonymous_var_nameX265, unsigned long  int anonymous_var_nameX266);
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
long  int lrand48();
long  int nrand48(unsigned short int anonymous_var_nameX277[3]);
long mrand48();
long jrand48(unsigned short int anonymous_var_nameX278[3]);
void srand48(long anonymous_var_nameX279);
unsigned short int* seed48(unsigned short int anonymous_var_nameX280[3]);
void lcong48(unsigned short int anonymous_var_nameX281[7]);
void* alloca(unsigned long  int anonymous_var_nameX282);
char* mktemp(char* anonymous_var_nameX283);
int mkstemps(char* anonymous_var_nameX284, int anonymous_var_nameX285);
int mkostemps(char* anonymous_var_nameX286, int anonymous_var_nameX287, int anonymous_var_nameX288);
void* valloc(unsigned long  int anonymous_var_nameX289);
void* memalign(unsigned long  int anonymous_var_nameX290, unsigned long  int anonymous_var_nameX291);
int getloadavg(double* anonymous_var_nameX292, int anonymous_var_nameX293);
int clearenv();
void* reallocarray(void* anonymous_var_nameX294, unsigned long  int anonymous_var_nameX295, unsigned long  int anonymous_var_nameX296);
void qsort_r(void* anonymous_var_nameX297, unsigned long  int anonymous_var_nameX298, unsigned long  int anonymous_var_nameX299, int (*anonymous_lambda_var_nameZ5)(const void*,const void*,void*), void* anonymous_var_nameX303);
int ptsname_r(int anonymous_var_nameX304, char* anonymous_var_nameX305, unsigned long  int anonymous_var_nameX306);
char* ecvt(double anonymous_var_nameX307, int anonymous_var_nameX308, int* anonymous_var_nameX309, int* anonymous_var_nameX310);
char* fcvt(double anonymous_var_nameX311, int anonymous_var_nameX312, int* anonymous_var_nameX313, int* anonymous_var_nameX314);
char* gcvt(double anonymous_var_nameX315, int anonymous_var_nameX316, char* anonymous_var_nameX317);
char* secure_getenv(const char* anonymous_var_nameX318);
float strtof_l(const char* anonymous_var_nameX319, char** anonymous_var_nameX320, struct __locale_struct* anonymous_var_nameX321);
double strtod_l(const char* anonymous_var_nameX322, char** anonymous_var_nameX323, struct __locale_struct* anonymous_var_nameX324);
long  double strtold_l(const char* anonymous_var_nameX325, char** anonymous_var_nameX326, struct __locale_struct* anonymous_var_nameX327);
void* memcpy(void* anonymous_var_nameX328, const void* anonymous_var_nameX329, unsigned long  int anonymous_var_nameX330);
void* memmove(void* anonymous_var_nameX331, const void* anonymous_var_nameX332, unsigned long  int anonymous_var_nameX333);
void* memset(void* anonymous_var_nameX334, int anonymous_var_nameX335, unsigned long  int anonymous_var_nameX336);
int memcmp(const void* anonymous_var_nameX337, const void* anonymous_var_nameX338, unsigned long  int anonymous_var_nameX339);
void* memchr(const void* anonymous_var_nameX340, int anonymous_var_nameX341, unsigned long  int anonymous_var_nameX342);
char* strcpy(char* anonymous_var_nameX343, const char* anonymous_var_nameX344);
char* strncpy(char* anonymous_var_nameX345, const char* anonymous_var_nameX346, unsigned long  int anonymous_var_nameX347);
char* strcat(char* anonymous_var_nameX348, const char* anonymous_var_nameX349);
char* strncat(char* anonymous_var_nameX350, const char* anonymous_var_nameX351, unsigned long  int anonymous_var_nameX352);
int strcmp(const char* anonymous_var_nameX353, const char* anonymous_var_nameX354);
int strncmp(const char* anonymous_var_nameX355, const char* anonymous_var_nameX356, unsigned long  int anonymous_var_nameX357);
int strcoll(const char* anonymous_var_nameX358, const char* anonymous_var_nameX359);
unsigned long  int strxfrm(char* anonymous_var_nameX360, const char* anonymous_var_nameX361, unsigned long  int anonymous_var_nameX362);
char* strchr(const char* anonymous_var_nameX363, int anonymous_var_nameX364);
char* strrchr(const char* anonymous_var_nameX365, int anonymous_var_nameX366);
unsigned long  int strcspn(const char* anonymous_var_nameX367, const char* anonymous_var_nameX368);
unsigned long  int strspn(const char* anonymous_var_nameX369, const char* anonymous_var_nameX370);
char* strpbrk(const char* anonymous_var_nameX371, const char* anonymous_var_nameX372);
char* strstr(const char* anonymous_var_nameX373, const char* anonymous_var_nameX374);
char* strtok(char* anonymous_var_nameX375, const char* anonymous_var_nameX376);
unsigned long  int strlen(const char* anonymous_var_nameX377);
char* strerror(int anonymous_var_nameX378);
int bcmp(const void* anonymous_var_nameX379, const void* anonymous_var_nameX380, unsigned long  int anonymous_var_nameX381);
void bcopy(const void* anonymous_var_nameX382, void* anonymous_var_nameX383, unsigned long  int anonymous_var_nameX384);
void bzero(void* anonymous_var_nameX385, unsigned long  int anonymous_var_nameX386);
char* index(const char* anonymous_var_nameX387, int anonymous_var_nameX388);
char* rindex(const char* anonymous_var_nameX389, int anonymous_var_nameX390);
int ffs(int anonymous_var_nameX391);
int ffsl(long anonymous_var_nameX392);
int ffsll(long  long anonymous_var_nameX393);
int strcasecmp(const char* anonymous_var_nameX394, const char* anonymous_var_nameX395);
int strncasecmp(const char* anonymous_var_nameX396, const char* anonymous_var_nameX397, unsigned long  int anonymous_var_nameX398);
int strcasecmp_l(const char* anonymous_var_nameX399, const char* anonymous_var_nameX400, struct __locale_struct* anonymous_var_nameX401);
int strncasecmp_l(const char* anonymous_var_nameX402, const char* anonymous_var_nameX403, unsigned long  int anonymous_var_nameX404, struct __locale_struct* anonymous_var_nameX405);
char* strtok_r(char* anonymous_var_nameX406, const char* anonymous_var_nameX407, char** anonymous_var_nameX408);
int strerror_r(int anonymous_var_nameX409, char* anonymous_var_nameX410, unsigned long  int anonymous_var_nameX411);
char* stpcpy(char* anonymous_var_nameX412, const char* anonymous_var_nameX413);
char* stpncpy(char* anonymous_var_nameX414, const char* anonymous_var_nameX415, unsigned long  int anonymous_var_nameX416);
unsigned long  int strnlen(const char* anonymous_var_nameX417, unsigned long  int anonymous_var_nameX418);
char* strdup(const char* anonymous_var_nameX419);
char* strndup(const char* anonymous_var_nameX420, unsigned long  int anonymous_var_nameX421);
char* strsignal(int anonymous_var_nameX422);
char* strerror_l(int anonymous_var_nameX423, struct __locale_struct* anonymous_var_nameX424);
int strcoll_l(const char* anonymous_var_nameX425, const char* anonymous_var_nameX426, struct __locale_struct* anonymous_var_nameX427);
unsigned long  int strxfrm_l(char* anonymous_var_nameX428, const char* anonymous_var_nameX429, unsigned long  int anonymous_var_nameX430, struct __locale_struct* anonymous_var_nameX431);
void* memmem(const void* anonymous_var_nameX432, unsigned long  int anonymous_var_nameX433, const void* anonymous_var_nameX434, unsigned long  int anonymous_var_nameX435);
void* memccpy(void* anonymous_var_nameX436, const void* anonymous_var_nameX437, int anonymous_var_nameX438, unsigned long  int anonymous_var_nameX439);
char* strsep(char** anonymous_var_nameX440, const char* anonymous_var_nameX441);
unsigned long  int strlcat(char* anonymous_var_nameX442, const char* anonymous_var_nameX443, unsigned long  int anonymous_var_nameX444);
unsigned long  int strlcpy(char* anonymous_var_nameX445, const char* anonymous_var_nameX446, unsigned long  int anonymous_var_nameX447);
void explicit_bzero(void* anonymous_var_nameX448, unsigned long  int anonymous_var_nameX449);
int strverscmp(const char* anonymous_var_nameX450, const char* anonymous_var_nameX451);
char* strchrnul(const char* anonymous_var_nameX452, int anonymous_var_nameX453);
char* strcasestr(const char* anonymous_var_nameX454, const char* anonymous_var_nameX455);
void* memrchr(const void* anonymous_var_nameX456, int anonymous_var_nameX457, unsigned long  int anonymous_var_nameX458);
void* mempcpy(void* anonymous_var_nameX459, const void* anonymous_var_nameX460, unsigned long  int anonymous_var_nameX461);
char* setlocale(int anonymous_var_nameX462, const char* anonymous_var_nameX463);
struct lconv* localeconv();
struct __locale_struct* duplocale(struct __locale_struct* anonymous_var_nameX464);
void freelocale(struct __locale_struct* anonymous_var_nameX465);
struct __locale_struct* newlocale(int anonymous_var_nameX466, const char* anonymous_var_nameX467, struct __locale_struct* anonymous_var_nameX468);
struct __locale_struct* uselocale(struct __locale_struct* anonymous_var_nameX469);
int* __errno_location();
void __assert_fail(const char* anonymous_var_nameX470, const char* anonymous_var_nameX471, int anonymous_var_nameX472, const char* anonymous_var_nameX473);
int isalnum(int anonymous_var_nameX474);
int isalpha(int anonymous_var_nameX475);
int isblank(int anonymous_var_nameX476);
int iscntrl(int anonymous_var_nameX477);
int isdigit(int anonymous_var_nameX478);
int isgraph(int anonymous_var_nameX479);
int islower(int anonymous_var_nameX480);
int isprint(int anonymous_var_nameX481);
int ispunct(int anonymous_var_nameX482);
int isspace(int anonymous_var_nameX483);
int isupper(int anonymous_var_nameX484);
int isxdigit(int anonymous_var_nameX485);
int tolower(int anonymous_var_nameX486);
int toupper(int anonymous_var_nameX487);
int isalnum_l(int anonymous_var_nameX488, struct __locale_struct* anonymous_var_nameX489);
int isalpha_l(int anonymous_var_nameX490, struct __locale_struct* anonymous_var_nameX491);
int isblank_l(int anonymous_var_nameX492, struct __locale_struct* anonymous_var_nameX493);
int iscntrl_l(int anonymous_var_nameX494, struct __locale_struct* anonymous_var_nameX495);
int isdigit_l(int anonymous_var_nameX496, struct __locale_struct* anonymous_var_nameX497);
int isgraph_l(int anonymous_var_nameX498, struct __locale_struct* anonymous_var_nameX499);
int islower_l(int anonymous_var_nameX500, struct __locale_struct* anonymous_var_nameX501);
int isprint_l(int anonymous_var_nameX502, struct __locale_struct* anonymous_var_nameX503);
int ispunct_l(int anonymous_var_nameX504, struct __locale_struct* anonymous_var_nameX505);
int isspace_l(int anonymous_var_nameX506, struct __locale_struct* anonymous_var_nameX507);
int isupper_l(int anonymous_var_nameX508, struct __locale_struct* anonymous_var_nameX509);
int isxdigit_l(int anonymous_var_nameX510, struct __locale_struct* anonymous_var_nameX511);
int tolower_l(int anonymous_var_nameX512, struct __locale_struct* anonymous_var_nameX513);
int toupper_l(int anonymous_var_nameX514, struct __locale_struct* anonymous_var_nameX515);
int isascii(int anonymous_var_nameX516);
int toascii(int anonymous_var_nameX517);
unsigned int* wcscpy(unsigned int* anonymous_var_nameX518, const unsigned int* anonymous_var_nameX519);
unsigned int* wcsncpy(unsigned int* anonymous_var_nameX520, const unsigned int* anonymous_var_nameX521, unsigned long  int anonymous_var_nameX522);
unsigned int* wcscat(unsigned int* anonymous_var_nameX523, const unsigned int* anonymous_var_nameX524);
unsigned int* wcsncat(unsigned int* anonymous_var_nameX525, const unsigned int* anonymous_var_nameX526, unsigned long  int anonymous_var_nameX527);
int wcscmp(const unsigned int* anonymous_var_nameX528, const unsigned int* anonymous_var_nameX529);
int wcsncmp(const unsigned int* anonymous_var_nameX530, const unsigned int* anonymous_var_nameX531, unsigned long  int anonymous_var_nameX532);
int wcscoll(const unsigned int* anonymous_var_nameX533, const unsigned int* anonymous_var_nameX534);
unsigned long  int wcsxfrm(unsigned int* anonymous_var_nameX535, const unsigned int* anonymous_var_nameX536, unsigned long  int anonymous_var_nameX537);
unsigned int* wcschr(const unsigned int* anonymous_var_nameX538, unsigned int anonymous_var_nameX539);
unsigned int* wcsrchr(const unsigned int* anonymous_var_nameX540, unsigned int anonymous_var_nameX541);
unsigned long  int wcscspn(const unsigned int* anonymous_var_nameX542, const unsigned int* anonymous_var_nameX543);
unsigned long  int wcsspn(const unsigned int* anonymous_var_nameX544, const unsigned int* anonymous_var_nameX545);
unsigned int* wcspbrk(const unsigned int* anonymous_var_nameX546, const unsigned int* anonymous_var_nameX547);
unsigned int* wcstok(unsigned int* anonymous_var_nameX548, const unsigned int* anonymous_var_nameX549, unsigned int** anonymous_var_nameX550);
unsigned long  int wcslen(const unsigned int* anonymous_var_nameX551);
unsigned int* wcsstr(const unsigned int* anonymous_var_nameX552, const unsigned int* anonymous_var_nameX553);
unsigned int* wcswcs(const unsigned int* anonymous_var_nameX554, const unsigned int* anonymous_var_nameX555);
unsigned int* wmemchr(const unsigned int* anonymous_var_nameX556, unsigned int anonymous_var_nameX557, unsigned long  int anonymous_var_nameX558);
int wmemcmp(const unsigned int* anonymous_var_nameX559, const unsigned int* anonymous_var_nameX560, unsigned long  int anonymous_var_nameX561);
unsigned int* wmemcpy(unsigned int* anonymous_var_nameX562, const unsigned int* anonymous_var_nameX563, unsigned long  int anonymous_var_nameX564);
unsigned int* wmemmove(unsigned int* anonymous_var_nameX565, const unsigned int* anonymous_var_nameX566, unsigned long  int anonymous_var_nameX567);
unsigned int* wmemset(unsigned int* anonymous_var_nameX568, unsigned int anonymous_var_nameX569, unsigned long  int anonymous_var_nameX570);
unsigned int btowc(int anonymous_var_nameX571);
int wctob(unsigned int anonymous_var_nameX572);
int mbsinit(const struct __mbstate_t* anonymous_var_nameX573);
unsigned long  int mbrtowc(unsigned int* anonymous_var_nameX574, const char* anonymous_var_nameX575, unsigned long  int anonymous_var_nameX576, struct __mbstate_t* anonymous_var_nameX577);
unsigned long  int wcrtomb(char* anonymous_var_nameX578, unsigned int anonymous_var_nameX579, struct __mbstate_t* anonymous_var_nameX580);
unsigned long  int mbrlen(const char* anonymous_var_nameX581, unsigned long  int anonymous_var_nameX582, struct __mbstate_t* anonymous_var_nameX583);
unsigned long  int mbsrtowcs(unsigned int* anonymous_var_nameX584, const char** anonymous_var_nameX585, unsigned long  int anonymous_var_nameX586, struct __mbstate_t* anonymous_var_nameX587);
unsigned long  int wcsrtombs(char* anonymous_var_nameX588, const unsigned int** anonymous_var_nameX589, unsigned long  int anonymous_var_nameX590, struct __mbstate_t* anonymous_var_nameX591);
float wcstof(const unsigned int* anonymous_var_nameX592, unsigned int** anonymous_var_nameX593);
double wcstod(const unsigned int* anonymous_var_nameX594, unsigned int** anonymous_var_nameX595);
long  double wcstold(const unsigned int* anonymous_var_nameX596, unsigned int** anonymous_var_nameX597);
long wcstol(const unsigned int* anonymous_var_nameX598, unsigned int** anonymous_var_nameX599, int anonymous_var_nameX600);
unsigned long  int wcstoul(const unsigned int* anonymous_var_nameX601, unsigned int** anonymous_var_nameX602, int anonymous_var_nameX603);
long long wcstoll(const unsigned int* anonymous_var_nameX604, unsigned int** anonymous_var_nameX605, int anonymous_var_nameX606);
unsigned long  long wcstoull(const unsigned int* anonymous_var_nameX607, unsigned int** anonymous_var_nameX608, int anonymous_var_nameX609);
int fwide(struct _IO_FILE* anonymous_var_nameX610, int anonymous_var_nameX611);
int wprintf(const unsigned int* anonymous_var_nameX612, ...);
int fwprintf(struct _IO_FILE* anonymous_var_nameX613, const unsigned int* anonymous_var_nameX614, ...);
int swprintf(unsigned int* anonymous_var_nameX615, unsigned long  int anonymous_var_nameX616, const unsigned int* anonymous_var_nameX617, ...);
int vwprintf(const unsigned int* anonymous_var_nameX618, va_list anonymous_var_nameX619);
int vfwprintf(struct _IO_FILE* anonymous_var_nameX620, const unsigned int* anonymous_var_nameX621, va_list anonymous_var_nameX622);
int vswprintf(unsigned int* anonymous_var_nameX623, unsigned long  int anonymous_var_nameX624, const unsigned int* anonymous_var_nameX625, va_list anonymous_var_nameX626);
int wscanf(const unsigned int* anonymous_var_nameX627, ...);
int fwscanf(struct _IO_FILE* anonymous_var_nameX628, const unsigned int* anonymous_var_nameX629, ...);
int swscanf(const unsigned int* anonymous_var_nameX630, const unsigned int* anonymous_var_nameX631, ...);
int vwscanf(const unsigned int* anonymous_var_nameX632, va_list anonymous_var_nameX633);
int vfwscanf(struct _IO_FILE* anonymous_var_nameX634, const unsigned int* anonymous_var_nameX635, va_list anonymous_var_nameX636);
int vswscanf(const unsigned int* anonymous_var_nameX637, const unsigned int* anonymous_var_nameX638, va_list anonymous_var_nameX639);
unsigned int fgetwc(struct _IO_FILE* anonymous_var_nameX640);
unsigned int getwc(struct _IO_FILE* anonymous_var_nameX641);
unsigned int getwchar();
unsigned int fputwc(unsigned int anonymous_var_nameX642, struct _IO_FILE* anonymous_var_nameX643);
unsigned int putwc(unsigned int anonymous_var_nameX644, struct _IO_FILE* anonymous_var_nameX645);
unsigned int putwchar(unsigned int anonymous_var_nameX646);
unsigned int* fgetws(unsigned int* anonymous_var_nameX647, int anonymous_var_nameX648, struct _IO_FILE* anonymous_var_nameX649);
int fputws(const unsigned int* anonymous_var_nameX650, struct _IO_FILE* anonymous_var_nameX651);
unsigned int ungetwc(unsigned int anonymous_var_nameX652, struct _IO_FILE* anonymous_var_nameX653);
unsigned long  int wcsftime(unsigned int* anonymous_var_nameX654, unsigned long  int anonymous_var_nameX655, const unsigned int* anonymous_var_nameX656, const struct tm* anonymous_var_nameX657);
unsigned int fgetwc_unlocked(struct _IO_FILE* anonymous_var_nameX658);
unsigned int getwc_unlocked(struct _IO_FILE* anonymous_var_nameX659);
unsigned int getwchar_unlocked();
unsigned int fputwc_unlocked(unsigned int anonymous_var_nameX660, struct _IO_FILE* anonymous_var_nameX661);
unsigned int putwc_unlocked(unsigned int anonymous_var_nameX662, struct _IO_FILE* anonymous_var_nameX663);
unsigned int putwchar_unlocked(unsigned int anonymous_var_nameX664);
unsigned int* fgetws_unlocked(unsigned int* anonymous_var_nameX665, int anonymous_var_nameX666, struct _IO_FILE* anonymous_var_nameX667);
int fputws_unlocked(const unsigned int* anonymous_var_nameX668, struct _IO_FILE* anonymous_var_nameX669);
unsigned long  int wcsftime_l(unsigned int* anonymous_var_nameX670, unsigned long  int anonymous_var_nameX671, const unsigned int* anonymous_var_nameX672, const struct tm* anonymous_var_nameX673, struct __locale_struct* anonymous_var_nameX674);
struct _IO_FILE* open_wmemstream(unsigned int** anonymous_var_nameX675, unsigned long  int* anonymous_var_nameX676);
unsigned long  int mbsnrtowcs(unsigned int* anonymous_var_nameX677, const char** anonymous_var_nameX678, unsigned long  int anonymous_var_nameX679, unsigned long  int anonymous_var_nameX680, struct __mbstate_t* anonymous_var_nameX681);
unsigned long  int wcsnrtombs(char* anonymous_var_nameX682, const unsigned int** anonymous_var_nameX683, unsigned long  int anonymous_var_nameX684, unsigned long  int anonymous_var_nameX685, struct __mbstate_t* anonymous_var_nameX686);
unsigned int* wcsdup(const unsigned int* anonymous_var_nameX687);
unsigned long  int wcsnlen(const unsigned int* anonymous_var_nameX688, unsigned long  int anonymous_var_nameX689);
unsigned int* wcpcpy(unsigned int* anonymous_var_nameX690, const unsigned int* anonymous_var_nameX691);
unsigned int* wcpncpy(unsigned int* anonymous_var_nameX692, const unsigned int* anonymous_var_nameX693, unsigned long  int anonymous_var_nameX694);
int wcscasecmp(const unsigned int* anonymous_var_nameX695, const unsigned int* anonymous_var_nameX696);
int wcscasecmp_l(const unsigned int* anonymous_var_nameX697, const unsigned int* anonymous_var_nameX698, struct __locale_struct* anonymous_var_nameX699);
int wcsncasecmp(const unsigned int* anonymous_var_nameX700, const unsigned int* anonymous_var_nameX701, unsigned long  int anonymous_var_nameX702);
int wcsncasecmp_l(const unsigned int* anonymous_var_nameX703, const unsigned int* anonymous_var_nameX704, unsigned long  int anonymous_var_nameX705, struct __locale_struct* anonymous_var_nameX706);
int wcscoll_l(const unsigned int* anonymous_var_nameX707, const unsigned int* anonymous_var_nameX708, struct __locale_struct* anonymous_var_nameX709);
unsigned long  int wcsxfrm_l(unsigned int* anonymous_var_nameX710, const unsigned int* anonymous_var_nameX711, unsigned long  int anonymous_var_nameX712, struct __locale_struct* anonymous_var_nameX713);
int wcwidth(unsigned int anonymous_var_nameX714);
int wcswidth(const unsigned int* anonymous_var_nameX715, unsigned long  int anonymous_var_nameX716);
int iswalnum(unsigned int anonymous_var_nameX717);
int iswalpha(unsigned int anonymous_var_nameX718);
int iswblank(unsigned int anonymous_var_nameX719);
int iswcntrl(unsigned int anonymous_var_nameX720);
int iswdigit(unsigned int anonymous_var_nameX721);
int iswgraph(unsigned int anonymous_var_nameX722);
int iswlower(unsigned int anonymous_var_nameX723);
int iswprint(unsigned int anonymous_var_nameX724);
int iswpunct(unsigned int anonymous_var_nameX725);
int iswspace(unsigned int anonymous_var_nameX726);
int iswupper(unsigned int anonymous_var_nameX727);
int iswxdigit(unsigned int anonymous_var_nameX728);
int iswctype(unsigned int anonymous_var_nameX729, unsigned long  int anonymous_var_nameX730);
unsigned int towlower(unsigned int anonymous_var_nameX731);
unsigned int towupper(unsigned int anonymous_var_nameX732);
unsigned long  int wctype(const char* anonymous_var_nameX733);
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void come_save_stackframe(char* sname, int sline);
void stackframe();
char* come_get_stackframe();
void xassert(char* msg, _Bool test);
_Bool die(char* msg);
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
void* alloc_from_pages(unsigned long  int size);
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_mem_of_heap_pool(void* mem);
char* come_dynamic_typeof(void* mem);
void come_print_heap_info(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);
void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
char* __builtin_string(char* str);
void come_push_stackframe_v2(char* sname, int sline, int id);
void come_pop_stackframe_v2();
void come_save_stackframe_v2(char* sname, int sline);
void stackframe_v2();
char* come_get_stackframe_v2();
void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_v2(void* mem);
struct buffer* buffer_initialize(struct buffer* self);
struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size);
void buffer_finalize(struct buffer* self);
struct buffer* buffer_clone(struct buffer* self);
_Bool buffer_equals(struct buffer* left, struct buffer* right);
int buffer_length(struct buffer* self);
void buffer_reset(struct buffer* self);
void buffer_trim(struct buffer* self, int len);
struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long  int size);
struct buffer* buffer_append_char(struct buffer* self, char c);
struct buffer* buffer_append_str(struct buffer* self, char* mem);
struct buffer* buffer_append_format(struct buffer* self, char* msg, ...);
static void va_list_finalize(va_list self);
struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem);
struct buffer* buffer_append_int(struct buffer* self, int value);
struct buffer* buffer_append_long(struct buffer* self, long value);
struct buffer* buffer_append_short(struct buffer* self, short value);
struct buffer* buffer_alignment(struct buffer* self);
int buffer_compare(struct buffer* left, struct buffer* right);
struct buffer* charp_to_buffer(char* self);
char* buffer_to_string(struct buffer* self);
unsigned char* buffer_head_pointer(struct buffer* self);
struct buffer* charpa_to_buffer(char* self, unsigned long  int len);
struct buffer* charppa_to_buffer(char** self, unsigned long  int len);
struct buffer* shortpa_to_buffer(short* self, unsigned long  int len);
struct buffer* intpa_to_buffer(int* self, unsigned long  int len);
struct buffer* longpa_to_buffer(long* self, unsigned long  int len);
struct buffer* floatpa_to_buffer(float* self, unsigned long  int len);
struct buffer* doublepa_to_buffer(double* self, unsigned long  int len);
char* buffer_printable(struct buffer* self);
struct list$1char$* charpa_to_list(char* self, unsigned long  int len);
static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values);
static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item);
static void list$1char$$p_finalize(struct list$1char$* self);
static void list_item$1char$$p_finalize(struct list_item$1char$* self);
struct list$1char$p* charppa_to_list(char** self, unsigned long  int len);
static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values);
static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
struct list$1short$* shortpa_to_list(short* self, unsigned long  int len);
static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values);
static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item);
static void list$1short$$p_finalize(struct list$1short$* self);
static void list_item$1short$$p_finalize(struct list_item$1short$* self);
struct list$1int$* intpa_to_list(int* self, unsigned long  int len);
static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values);
static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
struct list$1long$* longpa_to_list(long* self, unsigned long  int len);
static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values);
static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item);
static void list$1long$$p_finalize(struct list$1long$* self);
static void list_item$1long$$p_finalize(struct list_item$1long$* self);
struct list$1float$* floatpa_to_list(float* self, unsigned long  int len);
static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values);
static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item);
static void list$1float$$p_finalize(struct list$1float$* self);
static void list_item$1float$$p_finalize(struct list_item$1float$* self);
struct list$1double$* doublepa_to_list(double* self, unsigned long  int len);
static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values);
static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item);
static void list$1double$$p_finalize(struct list$1double$* self);
static void list_item$1double$$p_finalize(struct list_item$1double$* self);
_Bool bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool short_equals(short self, short right);
_Bool int_equals(int self, int right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(unsigned long  int self, unsigned long  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool bool_operator_equals(_Bool self, _Bool right);
_Bool char_operator_equals(char self, char right);
_Bool short_operator_equals(short self, short right);
_Bool int_operator_equals(int self, int right);
_Bool long_operator_equals(long self, long right);
_Bool bool_operator_not_equals(_Bool self, _Bool right);
_Bool char_operator_not_equals(char self, char right);
_Bool short_operator_not_equals(short self, short right);
_Bool int_operator_not_equals(int self, int right);
_Bool long_operator_not_equals(long self, long right);
_Bool charp_equals(char* self, char* right);
_Bool string_equals(char* self, char* right);
_Bool voidp_equals(void* self, void* right);
_Bool boolp_equals(_Bool* self, _Bool* right);
_Bool string_operator_equals(char* self, char* right);
_Bool charp_operator_equals(char* self, char* right);
_Bool voidp_operator_equals(char* self, char* right);
_Bool voidp_operator_not_equals(char* self, char* right);
_Bool string_operator_not_equals(char* self, char* right);
_Bool charp_operator_not_equals(char* self, char* right);
char* charp_operator_add(char* self, char* right);
char* string_operator_add(char* self, char* right);
char* charp_operator_mult(char* self, int right);
char* string_operator_mult(char* self, int right);
unsigned long  int charpa_length(char* self, unsigned long  int len);
_Bool charppa_contained(char** self, unsigned long  int len, char* str);
unsigned long  int shortpa_length(short* self, unsigned long  int len);
unsigned long  int intpa_length(int* self, unsigned long  int len);
unsigned long  int longpa_length(long* self, unsigned long  int len);
unsigned long  int floatpa_length(float* self, unsigned long  int len);
unsigned long  int doublepa_length(double* self, unsigned long  int len);
unsigned int bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short int value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(unsigned long  int value);
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int charp_get_hash_key(char* value);
unsigned int string_get_hash_key(char* value);
unsigned int voidp_get_hash_key(void* value);
_Bool bool_clone(_Bool self);
char char_clone(char self);
short int short_clone(short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long  int size_t_clone(unsigned long  int self);
double double_clone(double self);
float float_clone(float self);
_Bool xiswalpha(unsigned int c);
_Bool xiswblank(unsigned int c);
_Bool xiswdigit(unsigned int c);
_Bool xiswalnum(unsigned int c);
_Bool xisalpha(char c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xiswascii(unsigned int c);
int string_length(char* str);
int charp_length(char* str);
char* charp_reverse(char* str);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_substring(char* str, int head, int tail);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
struct list$1char$ph* charp_split_char(char* self, char c);
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
char* charp_xsprintf(char* self, char* msg, ...);
char* int_xsprintf(int self, char* msg, ...);
char* charp_printable(char* str);
char* charp_sub_plain(char* self, char* str, char* replace);
char* xbasename(char* path);
char* xnoextname(char* path);
char* xextname(char* path);
char* bool_to_string(_Bool self);
char* char_to_string(char self);
char* short_to_string(short self);
char* int_to_string(int self);
char* long_to_string(long self);
char* size_t_to_string(unsigned long  int self);
char* float_to_string(float self);
char* double_to_string(double self);
char* string_to_string(char* self);
char* charp_to_string(char* self);
int bool_compare(_Bool left, _Bool right);
int char_compare(char left, char right);
int short_compare(short left, short right);
int int_compare(int left, int right);
int long_compare(long left, long right);
int size_t_compare(unsigned long  int left, unsigned long  int right);
int float_compare(float left, float right);
int double_compare(double left, double right);
int string_compare(char* left, char* right);
int charp_compare(char* left, char* right);
char* FILE_read(struct _IO_FILE* f);
int FILE_write(struct _IO_FILE* f, char* str);
int FILE_fclose(struct _IO_FILE* f);
struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);
void FILE_on_drop(struct _IO_FILE* self);
int charp_write(char* self, char* file_name, _Bool append);
char* charp_read(char* file_name);
struct list$1char$ph* FILE_readlines(struct _IO_FILE* f);
char* charp_puts(char* self);
char* charp_print(char* self);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
int assert_v2(int exp);
_Bool wchar_t_equals(unsigned int left, unsigned int right);
_Bool wchar_tp_equals(unsigned int* left, unsigned int* right);
_Bool wchar_t_operator_equals(unsigned int left, unsigned int right);
_Bool wchar_t_operator_not_equals(unsigned int left, unsigned int right);
_Bool wchar_tp_operator_equals(unsigned int* left, unsigned int* right);
_Bool wchar_tp_operator_not_equals(unsigned int* left, unsigned int* right);
unsigned int wchar_t_get_hash_key(unsigned int value);
unsigned int wchar_tp_get_hash_key(unsigned int* value);
char* wchar_t_to_string(unsigned int wc);
void int_times(int self, void* parent, void (*block)(void*,int));
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info);
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
struct sModule* sModule_initialize(struct sModule* self);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute, _Bool const_fun);
void sVarTable_finalize(struct sVarTable* self);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline, _Bool const_fun);
struct tuple2$2int$char$ph* err_msg(struct sInfo* info, char* msg, ...);
int expected_next_character(char c, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main(int argc, char** argv);
_Bool sNodeBase_terminated(struct sNodeBase* self);
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);
char* make_come_type_name_string_no_solved(struct sType* type, _Bool original_type_name, struct sInfo* info);
char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info);
char* header_function(struct sFun* fun, struct sInfo* info);
_Bool output_source_file(struct sInfo* info);
char* make_come_header_function(struct sFun* fun, char* base_fun_name, struct sType* impl_type, int version_, struct sInfo* info);
void show_type(struct sType* type, struct sInfo* info);
char* create_generics_name(struct sType* generics_type, struct sInfo* info);
void add_last_code_to_source(struct sInfo* info);
void add_come_code_at_function_head(struct sInfo* info, char* code, ...);
void add_come_code_at_come_header(struct sInfo* info, char* id, const char* msg, ...);
void add_come_code_at_come_struct_header(struct sInfo* info, char* id, const char* msg, ...);
void add_come_code_at_function_head2(struct sInfo* info, char* code, ...);
void add_come_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code2(struct sInfo* info, const char* msg, ...);
void add_last_code_to_source_with_comma(struct sInfo* info);
void dec_stack_ptr(int value, struct sInfo* info);
struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);
char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);
void transpiler_clear_last_code(struct sInfo* info);
_Bool output_header_file(struct sInfo* info);
struct sType* solve_method_generics(struct sType* type, struct sInfo* info);
_Bool existance_free_right_value_objects(struct sInfo* info);
_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info, _Bool no_delete_from_right_value_objects);
char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info);
_Bool create_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);
struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info, _Bool skip_exception);
struct sVar* get_variable_from_table(struct sVarTable* table, char* name);
void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
void free_objects_of_match_lv_tables(struct sInfo* info);
void free_objects_on_break(struct sInfo* info);
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);
struct tuple2$2sType$phchar$ph* clone_object(struct sType* type, char* obj, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count, struct sType* obj_type, char* obj_value);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
struct tuple2$2bool$char$ph* check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFun$pchar$ph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info);
char* skip_block(struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
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
int transpile(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
_Bool is_inner_calling(struct sNode* node, struct sInfo* info);
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info);
struct sNode* expression_node_v95(struct sInfo* info);
struct sNode* store_var(char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info);
struct sNode* create_load_var(char* var_name, struct sInfo* info);
struct sNode* parse_array_initializer(struct sInfo* info);
struct sNode* parse_struct_initializer(struct sInfo* info);
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info, _Bool function_param);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);
struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info);
struct sNode* create_exception_throw(struct sNode* expression_node, struct sInfo* info);
struct sNode* create_exception_value(struct sNode* expression_node, struct sInfo* info);
struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_rescue_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* string_node_v9(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v10(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v12(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo* info);
struct sNode* create_null_node(struct sInfo* info);
struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);
_Bool operator_overload_fun(struct sType* type, char* fun_name, struct sNode* left_node, struct sNode* right_node, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);
struct sNode* expression_v13(struct sInfo* info);
struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);
struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);
char* parse_struct_attribute(struct sInfo* info);
struct sNode* create_nothing_node(struct sInfo* info);
_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);
_Bool is_contained_generics_types(struct sType* type, struct sInfo* info);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_struct(char* type_name, char* struct_attribute, struct sInfo* info);
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
struct sNode* create_nullable_node(struct sNode* left, struct sInfo* info);
struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info);
_Bool compiletime_get_exception_value(struct sInfo* info);
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool guard_break, struct sInfo* info);
struct sNode* create_guard_break_method_call(struct sNode* expression_node, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUE$ph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info);
struct sNode* create_object(struct sType* type, struct sInfo* info);
struct sNode* create_true_object(struct sInfo* info);
struct sNode* create_false_object(struct sInfo* info);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
struct tuple4$4char$phchar$phchar$phchar$ph* create_vtable(struct sType* any_type, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info);
char* sStrNode_kind(struct sStrNode* self);
_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sStrNode_finalize(struct sStrNode* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info);
char* sBufferNode_kind(struct sBufferNode* self);
_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info);
static void sBufferNode_finalize(struct sBufferNode* self);
static void tuple4$4char$phchar$phchar$phchar$ph$p_finalize(struct tuple4$4char$phchar$phchar$phchar$ph* self);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct sType* sType_clone(struct sType* self);
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
static void list$1char$ph_finalize(struct list$1char$ph* self);
struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNode$ph* exps, int sline, struct sInfo* info);
char* sSStringNode_kind(struct sSStringNode* self);
_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info);
static void sSStringNode_finalize(struct sSStringNode* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self);
static _Bool tuple2$2char$phsNode$ph_equals(struct tuple2$2char$phsNode$ph* left, struct tuple2$2char$phsNode$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info);
char* sCharNode_kind(struct sCharNode* self);
_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info);
static void sCharNode_finalize(struct sCharNode* self);
struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, _Bool quote, struct sInfo* info);
char* sWCharNode_kind(struct sWCharNode* self);
_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info);
static void sWCharNode_finalize(struct sWCharNode* self);
struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info);
char* sWStringNode_kind(struct sWStringNode* self);
_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info);
static void sWStringNode_finalize(struct sWStringNode* self);
struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info);
char* sRegexNode_kind(struct sRegexNode* self);
_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info);
static void sRegexNode_finalize(struct sRegexNode* self);
static struct sStrNode* sStrNode_clone(struct sStrNode* self);
struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNode$ph* list_elements, struct sInfo* info);
char* sListNode_kind(struct sListNode* self);
_Bool sListNode_compile(struct sListNode* self, struct sInfo* info);
static void sListNode_finalize(struct sListNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements, struct sInfo* info);
char* sTupleNode_kind(struct sTupleNode* self);
_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sTupleNode_finalize(struct sTupleNode* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct list$1sNode$ph* tuple_elements, struct sInfo* info);
char* sSomeNode_kind(struct sSomeNode* self);
_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info);
static void sSomeNode_finalize(struct sSomeNode* self);
struct sNullReturnValue* sNullReturnValue_initialize(struct sNullReturnValue* self, struct sInfo* info);
char* sNullReturnValue_kind(struct sNullReturnValue* self);
_Bool sNullReturnValue_compile(struct sNullReturnValue* self, struct sInfo* info);
static void sNullReturnValue_finalize(struct sNullReturnValue* self);
struct sNode* create_null_return_value(struct sInfo* info);
static struct sNullReturnValue* sNullReturnValue_clone(struct sNullReturnValue* self);
struct sNullReturnValueOfException* sNullReturnValueOfException_initialize(struct sNullReturnValueOfException* self, struct sInfo* info);
char* sNullReturnValueOfException_kind(struct sNullReturnValueOfException* self);
_Bool sNullReturnValueOfException_compile(struct sNullReturnValueOfException* self, struct sInfo* info);
static void sNullReturnValueOfException_finalize(struct sNullReturnValueOfException* self);
struct sNode* create_null_return_value_of_exception(struct sInfo* info);
static struct sNullReturnValueOfException* sNullReturnValueOfException_clone(struct sNullReturnValueOfException* self);
struct sNullValue* sNullValue_initialize(struct sNullValue* self, struct sType* type, struct sInfo* info);
char* sNullValue_kind(struct sNullValue* self);
_Bool sNullValue_compile(struct sNullValue* self, struct sInfo* info);
static void sNullValue_finalize(struct sNullValue* self);
struct sNode* create_null_value(struct sType* type, struct sInfo* info);
static struct sNullValue* sNullValue_clone(struct sNullValue* self);
struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct list$1sNode$ph* tuple_elements, struct sInfo* info);
char* sNoneNode_kind(struct sNoneNode* self);
_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info);
static void sNoneNode_finalize(struct sNoneNode* self);
struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNode$ph* map_key_elements, struct list$1sNode$ph* map_elements, struct sInfo* info);
char* sMapNode_kind(struct sMapNode* self);
_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info);
static void sMapNode_finalize(struct sMapNode* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
struct sNode* expression_node_v96(struct sInfo* info);
static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self);
static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self);
static struct sCharNode* sCharNode_clone(struct sCharNode* self);
static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self);
static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self);
static struct sMapNode* sMapNode_clone(struct sMapNode* self);
static struct sListNode* sListNode_clone(struct sListNode* self);
struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self);
struct sNode* parse_some(struct sInfo* info);
struct sNode* parse_none(struct sInfo* info);
static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self);
// uniq global variable
// inline function
static inline int __isspace(int _c){
    return _c==32||(unsigned int)_c-9<5;
}

// body function
static void va_list_finalize(va_list self){
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_121;
struct list$1char$* __result_obj__59;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_121=0;    i_121<num_value;    i_121++    ){
        list$1char$_push_back(self,values[i_121]);
    }
    __result_obj__59 = (struct list$1char$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__59,list$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__59;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value50 = (void*)0;
struct list_item$1char$* litem_122;
void* __right_value51 = (void*)0;
struct list_item$1char$* litem_123;
void* __right_value52 = (void*)0;
struct list_item$1char$* litem_124;
struct list$1char$* __result_obj__58;
    if(    self->len==0) {
        litem_122=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value50=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1111, "struct list_item$1char$*"))));
        litem_122->prev=((void*)0);
        litem_122->next=((void*)0);
        litem_122->item=item;
        self->tail=litem_122;
        self->head=litem_122;
    }
    else if(    self->len==1) {
        litem_123=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1121, "struct list_item$1char$*"))));
        litem_123->prev=self->head;
        litem_123->next=((void*)0);
        litem_123->item=item;
        self->tail=litem_123;
        self->head->next=litem_123;
    }
    else {
        litem_124=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value52=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1131, "struct list_item$1char$*"))));
        litem_124->prev=self->tail;
        litem_124->next=((void*)0);
        litem_124->item=item;
        self->tail->next=litem_124;
        self->tail=litem_124;
    }
    self->len++;
    __result_obj__58 = self;
    return __result_obj__58;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_125;
struct list_item$1char$* prev_it_126;
    it_125=self->head;
    while(it_125!=((void*)0)) {
        prev_it_126=it_125;
        it_125=it_125->next;
        /*c*/ come_call_finalizer3(prev_it_126,list_item$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_127;
struct list$1char$p* __result_obj__62;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_127=0;    i_127<num_value;    i_127++    ){
        list$1char$p_push_back(self,values[i_127]);
    }
    __result_obj__62 = (struct list$1char$p*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__62,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__62;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value55 = (void*)0;
struct list_item$1char$p* litem_128;
void* __right_value56 = (void*)0;
struct list_item$1char$p* litem_129;
void* __right_value57 = (void*)0;
struct list_item$1char$p* litem_130;
struct list$1char$p* __result_obj__61;
    if(    self->len==0) {
        litem_128=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value55=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1111, "struct list_item$1char$p*"))));
        litem_128->prev=((void*)0);
        litem_128->next=((void*)0);
        litem_128->item=item;
        self->tail=litem_128;
        self->head=litem_128;
    }
    else if(    self->len==1) {
        litem_129=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1121, "struct list_item$1char$p*"))));
        litem_129->prev=self->head;
        litem_129->next=((void*)0);
        litem_129->item=item;
        self->tail=litem_129;
        self->head->next=litem_129;
    }
    else {
        litem_130=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value57=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1131, "struct list_item$1char$p*"))));
        litem_130->prev=self->tail;
        litem_130->next=((void*)0);
        litem_130->item=item;
        self->tail->next=litem_130;
        self->tail=litem_130;
    }
    self->len++;
    __result_obj__61 = self;
    return __result_obj__61;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_131;
struct list_item$1char$p* prev_it_132;
    it_131=self->head;
    while(it_131!=((void*)0)) {
        prev_it_132=it_131;
        it_131=it_131->next;
        /*c*/ come_call_finalizer3(prev_it_132,list_item$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_133;
struct list$1short$* __result_obj__65;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_133=0;    i_133<num_value;    i_133++    ){
        list$1short$_push_back(self,values[i_133]);
    }
    __result_obj__65 = (struct list$1short$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__65,list$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__65;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value60 = (void*)0;
struct list_item$1short$* litem_134;
void* __right_value61 = (void*)0;
struct list_item$1short$* litem_135;
void* __right_value62 = (void*)0;
struct list_item$1short$* litem_136;
struct list$1short$* __result_obj__64;
    if(    self->len==0) {
        litem_134=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value60=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1111, "struct list_item$1short$*"))));
        litem_134->prev=((void*)0);
        litem_134->next=((void*)0);
        litem_134->item=item;
        self->tail=litem_134;
        self->head=litem_134;
    }
    else if(    self->len==1) {
        litem_135=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1121, "struct list_item$1short$*"))));
        litem_135->prev=self->head;
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail=litem_135;
        self->head->next=litem_135;
    }
    else {
        litem_136=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value62=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1131, "struct list_item$1short$*"))));
        litem_136->prev=self->tail;
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail->next=litem_136;
        self->tail=litem_136;
    }
    self->len++;
    __result_obj__64 = self;
    return __result_obj__64;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_137;
struct list_item$1short$* prev_it_138;
    it_137=self->head;
    while(it_137!=((void*)0)) {
        prev_it_138=it_137;
        it_137=it_137->next;
        /*c*/ come_call_finalizer3(prev_it_138,list_item$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_139;
struct list$1int$* __result_obj__68;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_139=0;    i_139<num_value;    i_139++    ){
        list$1int$_push_back(self,values[i_139]);
    }
    __result_obj__68 = (struct list$1int$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__68,list$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__68;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value65 = (void*)0;
struct list_item$1int$* litem_140;
void* __right_value66 = (void*)0;
struct list_item$1int$* litem_141;
void* __right_value67 = (void*)0;
struct list_item$1int$* litem_142;
struct list$1int$* __result_obj__67;
    if(    self->len==0) {
        litem_140=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value65=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1111, "struct list_item$1int$*"))));
        litem_140->prev=((void*)0);
        litem_140->next=((void*)0);
        litem_140->item=item;
        self->tail=litem_140;
        self->head=litem_140;
    }
    else if(    self->len==1) {
        litem_141=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1121, "struct list_item$1int$*"))));
        litem_141->prev=self->head;
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head->next=litem_141;
    }
    else {
        litem_142=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value67=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1131, "struct list_item$1int$*"))));
        litem_142->prev=self->tail;
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail->next=litem_142;
        self->tail=litem_142;
    }
    self->len++;
    __result_obj__67 = self;
    return __result_obj__67;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_143;
struct list_item$1int$* prev_it_144;
    it_143=self->head;
    while(it_143!=((void*)0)) {
        prev_it_144=it_143;
        it_143=it_143->next;
        /*c*/ come_call_finalizer3(prev_it_144,list_item$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_145;
struct list$1long$* __result_obj__71;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_145=0;    i_145<num_value;    i_145++    ){
        list$1long$_push_back(self,values[i_145]);
    }
    __result_obj__71 = (struct list$1long$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__71,list$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__71;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value70 = (void*)0;
struct list_item$1long$* litem_146;
void* __right_value71 = (void*)0;
struct list_item$1long$* litem_147;
void* __right_value72 = (void*)0;
struct list_item$1long$* litem_148;
struct list$1long$* __result_obj__70;
    if(    self->len==0) {
        litem_146=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value70=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1111, "struct list_item$1long$*"))));
        litem_146->prev=((void*)0);
        litem_146->next=((void*)0);
        litem_146->item=item;
        self->tail=litem_146;
        self->head=litem_146;
    }
    else if(    self->len==1) {
        litem_147=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1121, "struct list_item$1long$*"))));
        litem_147->prev=self->head;
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head->next=litem_147;
    }
    else {
        litem_148=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value72=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1131, "struct list_item$1long$*"))));
        litem_148->prev=self->tail;
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail->next=litem_148;
        self->tail=litem_148;
    }
    self->len++;
    __result_obj__70 = self;
    return __result_obj__70;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_149;
struct list_item$1long$* prev_it_150;
    it_149=self->head;
    while(it_149!=((void*)0)) {
        prev_it_150=it_149;
        it_149=it_149->next;
        /*c*/ come_call_finalizer3(prev_it_150,list_item$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_151;
struct list$1float$* __result_obj__74;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_151=0;    i_151<num_value;    i_151++    ){
        list$1float$_push_back(self,values[i_151]);
    }
    __result_obj__74 = (struct list$1float$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__74,list$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__74;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value75 = (void*)0;
struct list_item$1float$* litem_152;
void* __right_value76 = (void*)0;
struct list_item$1float$* litem_153;
void* __right_value77 = (void*)0;
struct list_item$1float$* litem_154;
struct list$1float$* __result_obj__73;
    if(    self->len==0) {
        litem_152=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value75=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1111, "struct list_item$1float$*"))));
        litem_152->prev=((void*)0);
        litem_152->next=((void*)0);
        litem_152->item=item;
        self->tail=litem_152;
        self->head=litem_152;
    }
    else if(    self->len==1) {
        litem_153=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1121, "struct list_item$1float$*"))));
        litem_153->prev=self->head;
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head->next=litem_153;
    }
    else {
        litem_154=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value77=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1131, "struct list_item$1float$*"))));
        litem_154->prev=self->tail;
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail->next=litem_154;
        self->tail=litem_154;
    }
    self->len++;
    __result_obj__73 = self;
    return __result_obj__73;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_155;
struct list_item$1float$* prev_it_156;
    it_155=self->head;
    while(it_155!=((void*)0)) {
        prev_it_156=it_155;
        it_155=it_155->next;
        /*c*/ come_call_finalizer3(prev_it_156,list_item$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_157;
struct list$1double$* __result_obj__77;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_157=0;    i_157<num_value;    i_157++    ){
        list$1double$_push_back(self,values[i_157]);
    }
    __result_obj__77 = (struct list$1double$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__77,list$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__77;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value80 = (void*)0;
struct list_item$1double$* litem_158;
void* __right_value81 = (void*)0;
struct list_item$1double$* litem_159;
void* __right_value82 = (void*)0;
struct list_item$1double$* litem_160;
struct list$1double$* __result_obj__76;
    if(    self->len==0) {
        litem_158=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value80=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1111, "struct list_item$1double$*"))));
        litem_158->prev=((void*)0);
        litem_158->next=((void*)0);
        litem_158->item=item;
        self->tail=litem_158;
        self->head=litem_158;
    }
    else if(    self->len==1) {
        litem_159=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1121, "struct list_item$1double$*"))));
        litem_159->prev=self->head;
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head->next=litem_159;
    }
    else {
        litem_160=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value82=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1131, "struct list_item$1double$*"))));
        litem_160->prev=self->tail;
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail->next=litem_160;
        self->tail=litem_160;
    }
    self->len++;
    __result_obj__76 = self;
    return __result_obj__76;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_161;
struct list_item$1double$* prev_it_162;
    it_161=self->head;
    while(it_161!=((void*)0)) {
        prev_it_162=it_161;
        it_161=it_161->next;
        /*c*/ come_call_finalizer3(prev_it_162,list_item$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__111;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__111 = (struct list$1char$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__111,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__111;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_196;
struct list_item$1char$ph* prev_it_197;
    it_196=self->head;
    while(it_196!=((void*)0)) {
        prev_it_197=it_196;
        it_196=it_196->next;
        /*c*/ come_call_finalizer3(prev_it_197,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value129 = (void*)0;
struct list_item$1char$ph* litem_201;
char* __dec_obj13;
void* __right_value130 = (void*)0;
struct list_item$1char$ph* litem_202;
char* __dec_obj14;
void* __right_value131 = (void*)0;
struct list_item$1char$ph* litem_203;
char* __dec_obj15;
struct list$1char$ph* __result_obj__113;
    if(    self->len==0) {
        litem_201=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value129=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1111, "struct list_item$1char$ph*"))));
        litem_201->prev=((void*)0);
        litem_201->next=((void*)0);
        __dec_obj13=litem_201->item,
        litem_201->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_201;
        self->head=litem_201;
    }
    else if(    self->len==1) {
        litem_202=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1121, "struct list_item$1char$ph*"))));
        litem_202->prev=self->head;
        litem_202->next=((void*)0);
        __dec_obj14=litem_202->item,
        litem_202->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_202;
        self->head->next=litem_202;
    }
    else {
        litem_203=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value131=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1131, "struct list_item$1char$ph*"))));
        litem_203->prev=self->tail;
        litem_203->next=((void*)0);
        __dec_obj15=litem_203->item,
        litem_203->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_203;
        self->tail=litem_203;
    }
    self->len++;
    __result_obj__113 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__113;
}

struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
char* __dec_obj16;
struct sStrNode* __result_obj__163;
    ((struct sNodeBase*)(__right_value187=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value187,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj16=self->value,
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__163 = (struct sStrNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sStrNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__163,sStrNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__163;
}

char* sStrNode_kind(struct sStrNode* self){
void* __right_value189 = (void*)0;
char* __result_obj__164;
    __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value189=__builtin_string("sStrNode"))));
    (__right_value189 = come_decrement_ref_count(__right_value189, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__164;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
struct CVALUE* come_value_239;
void* __right_value192 = (void*)0;
char* __dec_obj17;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
struct sType* __dec_obj18;
_Bool __result_obj__166;
    come_value_239=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 19, "struct CVALUE*"))));
    __dec_obj17=come_value_239->c_value,
    come_value_239->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",self->value));
    __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj18=come_value_239->type,
    come_value_239->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 22, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj18,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_239->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_239));
    add_come_last_code(info,"%s",come_value_239->c_value);
    __result_obj__166 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_239,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__166;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sStrNode_finalize(struct sStrNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sType_finalize(struct sType* self){
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mChannelType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mGenericsTypes,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mArrayNum,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mResultType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_240;
struct list_item$1sType$ph* prev_it_241;
    it_240=self->head;
    while(it_240!=((void*)0)) {
        prev_it_241=it_240;
        it_240=it_240->next;
        /*c*/ come_call_finalizer3(prev_it_241,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_242;
struct list_item$1sNode$ph* prev_it_243;
    it_242=self->head;
    while(it_242!=((void*)0)) {
        prev_it_243=it_242;
        it_242=it_242->next;
        /*c*/ come_call_finalizer3(prev_it_243,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value196 = (void*)0;
struct list_item$1CVALUE$ph* litem_244;
struct CVALUE* __dec_obj19;
void* __right_value197 = (void*)0;
struct list_item$1CVALUE$ph* litem_245;
struct CVALUE* __dec_obj20;
void* __right_value198 = (void*)0;
struct list_item$1CVALUE$ph* litem_246;
struct CVALUE* __dec_obj21;
struct list$1CVALUE$ph* __result_obj__165;
    if(    self->len==0) {
        litem_244=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value196=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1111, "struct list_item$1CVALUE$ph*"))));
        litem_244->prev=((void*)0);
        litem_244->next=((void*)0);
        __dec_obj19=litem_244->item,
        litem_244->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj19,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_244;
        self->head=litem_244;
    }
    else if(    self->len==1) {
        litem_245=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value197=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1121, "struct list_item$1CVALUE$ph*"))));
        litem_245->prev=self->head;
        litem_245->next=((void*)0);
        __dec_obj20=litem_245->item,
        litem_245->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj20,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_245;
        self->head->next=litem_245;
    }
    else {
        litem_246=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value198=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1131, "struct list_item$1CVALUE$ph*"))));
        litem_246->prev=self->tail;
        litem_246->next=((void*)0);
        __dec_obj21=litem_246->item,
        litem_246->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj21,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_246;
        self->tail=litem_246;
    }
    self->len++;
    __result_obj__165 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__165;
}

static void CVALUE_finalize(struct CVALUE* self){
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info){
void* __right_value199 = (void*)0;
struct buffer* __dec_obj22;
struct sBufferNode* __result_obj__167;
    ((struct sNodeBase*)(__right_value199=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value199,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj22=self->value,
    self->value=(struct buffer*)come_increment_ref_count(value);
    /*b*/ come_call_finalizer3(__dec_obj22,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->size=size;
    __result_obj__167 = (struct sBufferNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sBufferNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__167,sBufferNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__167;
}

char* sBufferNode_kind(struct sBufferNode* self){
void* __right_value200 = (void*)0;
char* __result_obj__168;
    __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value200=__builtin_string("sBufferNode"))));
    (__right_value200 = come_decrement_ref_count(__right_value200, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__168;
}

_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info){
struct buffer* value_247;
unsigned long  int size_248;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
struct CVALUE* come_value_249;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
struct buffer* buf_250;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
struct sType* type2_251;
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
void* __right_value210 = (void*)0;
struct sType* any_type_252;
void* __right_value211 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var1 = (void*)0;
char* finalizer_name_253=0;
char* cloner_name_254=0;
char* get_hash_key_name_255=0;
char* equaler_name_256=0;
void* __right_value212 = (void*)0;
_Bool _if_conditional1;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
struct sType* type2_263;
void* __right_value218 = (void*)0;
char* __dec_obj23;
void* __right_value257 = (void*)0;
struct sType* __dec_obj48;
_Bool __result_obj__192;
    value_247=(struct buffer*)come_increment_ref_count(self->value);
    size_248=self->size;
    come_value_249=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 54, "struct CVALUE*"))));
    buf_250=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 56, "struct buffer*"))));
    type2_251=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 58, "struct sType*")),(char*)come_increment_ref_count(xsprintf("buffer")),(_Bool)0,info));
    type2_251->mPointerNum++;
    any_type_252=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 61, "struct sType*")),(char*)come_increment_ref_count(xsprintf("buffer")),(_Bool)0,info));
    any_type_252->mPointerNum=1;
    any_type_252->mHeap=(_Bool)1;
    multiple_assign_var1=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value211=create_vtable((struct sType*)come_increment_ref_count(any_type_252),info)));
    finalizer_name_253=(char*)come_increment_ref_count(multiple_assign_var1->v1);
    cloner_name_254=(char*)come_increment_ref_count(multiple_assign_var1->v2);
    get_hash_key_name_255=(char*)come_increment_ref_count(multiple_assign_var1->v3);
    equaler_name_256=(char*)come_increment_ref_count(multiple_assign_var1->v4);
    /*c*/ come_call_finalizer3(__right_value211,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    (_if_conditional1=(((struct sFun*)(__right_value212=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2"))))),    /*c*/ come_call_finalizer3(__right_value212,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional1) {
        buffer_append_format(buf_250,"buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc_v2(1, sizeof(struct buffer), \"%s\", %d, \"buffer\"), \"%s\", %ld)",info->sname,info->sline,((char*)(__right_value213=buffer_to_string(value_247))),size_248);
        (__right_value213 = come_decrement_ref_count(__right_value213, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        buffer_append_format(buf_250,"buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), \"%s\", %d, \"buffer\"), \"%s\", %ld)",info->sname,info->sline,((char*)(__right_value214=buffer_to_string(value_247))),size_248);
        (__right_value214 = come_decrement_ref_count(__right_value214, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    /*c*/ come_call_finalizer3(type2_251,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    type2_263=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 74, "struct sType*")),(char*)come_increment_ref_count(xsprintf("buffer*")),(_Bool)0,info));
    type2_263->mHeap=(_Bool)1;
    __dec_obj23=come_value_249->c_value,
    come_value_249->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_250));
    __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj48=come_value_249->type,
    come_value_249->type=(struct sType*)come_increment_ref_count(sType_clone(type2_263));
    /*b*/ come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_249->var=((void*)0);
    append_object_to_right_values2(come_value_249,(struct sType*)come_increment_ref_count(type2_263),info,(_Bool)0,((void*)0),((void*)0));
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_249));
    add_come_last_code(info,"%s",come_value_249->c_value);
    __result_obj__192 = (_Bool)1;
    /*c*/ come_call_finalizer3(value_247,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_249,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_250,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(any_type_252,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (finalizer_name_253 = come_decrement_ref_count(finalizer_name_253, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_254 = come_decrement_ref_count(cloner_name_254, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_255 = come_decrement_ref_count(get_hash_key_name_255, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_256 = come_decrement_ref_count(equaler_name_256, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_263,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__192;
}

static void sBufferNode_finalize(struct sBufferNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple4$4char$phchar$phchar$phchar$ph$p_finalize(struct tuple4$4char$phchar$phchar$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        (self->v3 = come_decrement_ref_count(self->v3, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v4!=((void*)0)) {
        (self->v4 = come_decrement_ref_count(self->v4, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_257;
unsigned int hash_258;
unsigned int it_259;
struct sFun* __result_obj__169;
struct sFun* __result_obj__170;
struct sFun* __result_obj__171;
struct sFun* __result_obj__172;
default_value_257 = (void*)0;
    memset(&default_value_257,0,sizeof(struct sFun*));
    hash_258=string_get_hash_key(((char*)key))%self->size;
    it_259=hash_258;
    while((_Bool)1) {
        if(        self->item_existance[it_259]) {
            if(            string_equals(self->keys[it_259],key)) {
                __result_obj__169 = (struct sFun*)come_increment_ref_count(self->items[it_259]);
                /*c*/ come_call_finalizer3(default_value_257,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__169,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__169;
            }
            it_259++;
            if(            it_259>=self->size) {
                it_259=0;
            }
            else if(            it_259==hash_258) {
                __result_obj__170 = (struct sFun*)come_increment_ref_count(default_value_257);
                /*c*/ come_call_finalizer3(default_value_257,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__170,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__170;
            }
        }
        else {
            __result_obj__171 = (struct sFun*)come_increment_ref_count(default_value_257);
            /*c*/ come_call_finalizer3(default_value_257,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__171,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__171;
        }
    }
    __result_obj__172 = (struct sFun*)come_increment_ref_count(default_value_257);
    /*c*/ come_call_finalizer3(default_value_257,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__172,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__172;
}

static void sFun_finalize(struct sFun* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mResultType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamDefaultParametors,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mLambdaType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mBlock,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSource,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSourceHead,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sBlock_finalize(struct sBlock* self){
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mNodes,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_260;
unsigned int hash_261;
unsigned int it_262;
struct sFun* __result_obj__173;
struct sFun* __result_obj__174;
struct sFun* __result_obj__175;
struct sFun* __result_obj__176;
default_value_260 = (void*)0;
    memset(&default_value_260,0,sizeof(struct sFun*));
    hash_261=string_get_hash_key(((char*)key))%self->size;
    it_262=hash_261;
    while((_Bool)1) {
        if(        self->item_existance[it_262]) {
            if(            string_equals(self->keys[it_262],key)) {
                __result_obj__173 = (struct sFun*)come_increment_ref_count(self->items[it_262]);
                /*c*/ come_call_finalizer3(default_value_260,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__173,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__173;
            }
            it_262++;
            if(            it_262>=self->size) {
                it_262=0;
            }
            else if(            it_262==hash_261) {
                __result_obj__174 = (struct sFun*)come_increment_ref_count(default_value_260);
                /*c*/ come_call_finalizer3(default_value_260,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__174,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__174;
            }
        }
        else {
            __result_obj__175 = (struct sFun*)come_increment_ref_count(default_value_260);
            /*c*/ come_call_finalizer3(default_value_260,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__175,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__175;
        }
    }
    __result_obj__176 = (struct sFun*)come_increment_ref_count(default_value_260);
    /*c*/ come_call_finalizer3(default_value_260,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__176,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__176;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__177;
void* __right_value219 = (void*)0;
struct sType* result_264;
void* __right_value220 = (void*)0;
struct sType* __dec_obj24;
void* __right_value221 = (void*)0;
struct sType* __dec_obj25;
void* __right_value229 = (void*)0;
struct list$1sType$ph* __dec_obj29;
void* __right_value230 = (void*)0;
struct sType* __dec_obj30;
void* __right_value231 = (void*)0;
struct sType* __dec_obj31;
void* __right_value233 = (void*)0;
struct sNode* __dec_obj32;
void* __right_value234 = (void*)0;
struct sNode* __dec_obj33;
void* __right_value235 = (void*)0;
char* __dec_obj34;
void* __right_value236 = (void*)0;
char* __dec_obj35;
void* __right_value237 = (void*)0;
char* __dec_obj36;
void* __right_value245 = (void*)0;
struct list$1sNode$ph* __dec_obj40;
void* __right_value246 = (void*)0;
char* __dec_obj41;
void* __right_value247 = (void*)0;
struct list$1sType$ph* __dec_obj42;
void* __right_value255 = (void*)0;
struct list$1char$ph* __dec_obj46;
void* __right_value256 = (void*)0;
struct sType* __dec_obj47;
struct sType* __result_obj__191;
    if(    self==(void*)0) {
        __result_obj__177 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__177,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__177;
    }
    result_264=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_264->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj24=result_264->mOriginalLoadVarType,
        result_264->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj24,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj25=result_264->mChannelType,
        result_264->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj29=result_264->mGenericsTypes,
        result_264->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj29,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj30=result_264->mNoSolvedGenericsType,
        result_264->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj30,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_264->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj31=result_264->mAnyOriginalType,
        result_264->mAnyOriginalType=(struct sType*)come_increment_ref_count(sType_clone(self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj31,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj32=result_264->mSizeNum,
        result_264->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj32 ? __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj33=result_264->mAlignas,
        result_264->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj34=result_264->mTupleName,
        result_264->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 13, "char*"));
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj35=result_264->mAttribute,
        result_264->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 14, "char*"));
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_264->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_264->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_264->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_264->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_264->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_264->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_264->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_264->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_264->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_264->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_264->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_264->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_264->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_264->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_264->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_264->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_264->mDefferRightValue=self->mDefferRightValue;
    }
    if(    self!=((void*)0)) {
        result_264->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_264->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_264->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_264->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_264->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_264->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_264->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj36=result_264->mAsmName,
        result_264->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 39, "char*"));
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_264->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_264->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_264->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj40=result_264->mArrayNum,
        result_264->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj40,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_264->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_264->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_264->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_264->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_264->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj41=result_264->mOriginalTypeName,
        result_264->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 49, "char*"));
        __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_264->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_264->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_264->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_264->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj42=result_264->mParamTypes,
        result_264->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj42,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj46=result_264->mParamNames,
        result_264->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj46,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj47=result_264->mResultType,
        result_264->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj47,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_264->mVarArgs=self->mVarArgs;
    }
    __result_obj__191 = (struct sType*)come_increment_ref_count(result_264);
    /*c*/ come_call_finalizer3(result_264,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__191,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__191;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__178;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
struct list$1sType$ph* result_265;
struct list_item$1sType$ph* it_266;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
struct list$1sType$ph* __result_obj__181;
    if(    self==((void*)0)) {
        __result_obj__178 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__178,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__178;
    }
    result_265=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1022, "struct list$1sType$ph*"))));
    it_266=self->head;
    while(it_266!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_265,(struct sType*)come_increment_ref_count(sType_clone(it_266->item)));
        }
        else {
            list$1sType$ph_add(result_265,(struct sType*)come_increment_ref_count(sType_clone(it_266->item)));
        }
        it_266=it_266->next;
    }
    __result_obj__181 = (struct list$1sType$ph*)come_increment_ref_count(result_265);
    /*c*/ come_call_finalizer3(result_265,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__181,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__181;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__179;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__179 = (struct list$1sType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__179,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__179;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value224 = (void*)0;
struct list_item$1sType$ph* litem_267;
struct sType* __dec_obj26;
void* __right_value225 = (void*)0;
struct list_item$1sType$ph* litem_268;
struct sType* __dec_obj27;
void* __right_value226 = (void*)0;
struct list_item$1sType$ph* litem_269;
struct sType* __dec_obj28;
struct list$1sType$ph* __result_obj__180;
    if(    self->len==0) {
        litem_267=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value224=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1041, "struct list_item$1sType$ph*"))));
        litem_267->prev=((void*)0);
        litem_267->next=((void*)0);
        __dec_obj26=litem_267->item,
        litem_267->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_267;
        self->head=litem_267;
    }
    else if(    self->len==1) {
        litem_268=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value225=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1051, "struct list_item$1sType$ph*"))));
        litem_268->prev=self->head;
        litem_268->next=((void*)0);
        __dec_obj27=litem_268->item,
        litem_268->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj27,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_268;
        self->head->next=litem_268;
    }
    else {
        litem_269=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value226=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1061, "struct list_item$1sType$ph*"))));
        litem_269->prev=self->tail;
        litem_269->next=((void*)0);
        __dec_obj28=litem_269->item,
        litem_269->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj28,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_269;
        self->tail=litem_269;
    }
    self->len++;
    __result_obj__180 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__180;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_270;
struct list_item$1sType$ph* prev_it_271;
    it_270=self->head;
    while(it_270!=((void*)0)) {
        prev_it_271=it_270;
        it_270=it_270->next;
        /*c*/ come_call_finalizer3(prev_it_271,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__182;
void* __right_value232 = (void*)0;
struct sNode* result_272;
struct sNode* __result_obj__183;
    if(    self==(void*)0) {
        __result_obj__182 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__182) ? __result_obj__182 = come_decrement_ref_count(__result_obj__182, ((struct sNode*)__result_obj__182)->finalize, ((struct sNode*)__result_obj__182)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__182;
    }
    result_272=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_272->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_272->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_272->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_272->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_272->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_272->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_272->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_272->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_272->kind=self->kind;
    }
    __result_obj__183 = (struct sNode*)come_increment_ref_count(result_272);
    ((result_272) ? result_272 = come_decrement_ref_count(result_272, ((struct sNode*)result_272)->finalize, ((struct sNode*)result_272)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__183) ? __result_obj__183 = come_decrement_ref_count(__result_obj__183, ((struct sNode*)__result_obj__183)->finalize, ((struct sNode*)__result_obj__183)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__183;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__184;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
struct list$1sNode$ph* result_273;
struct list_item$1sNode$ph* it_274;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
struct list$1sNode$ph* __result_obj__187;
    if(    self==((void*)0)) {
        __result_obj__184 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__184,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__184;
    }
    result_273=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1022, "struct list$1sNode$ph*"))));
    it_274=self->head;
    while(it_274!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_273,(struct sNode*)come_increment_ref_count(sNode_clone(it_274->item)));
        }
        else {
            list$1sNode$ph_add(result_273,(struct sNode*)come_increment_ref_count(sNode_clone(it_274->item)));
        }
        it_274=it_274->next;
    }
    __result_obj__187 = (struct list$1sNode$ph*)come_increment_ref_count(result_273);
    /*c*/ come_call_finalizer3(result_273,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__187,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__187;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__185;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__185 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__185,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__185;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value240 = (void*)0;
struct list_item$1sNode$ph* litem_275;
struct sNode* __dec_obj37;
void* __right_value241 = (void*)0;
struct list_item$1sNode$ph* litem_276;
struct sNode* __dec_obj38;
void* __right_value242 = (void*)0;
struct list_item$1sNode$ph* litem_277;
struct sNode* __dec_obj39;
struct list$1sNode$ph* __result_obj__186;
    if(    self->len==0) {
        litem_275=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value240=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1041, "struct list_item$1sNode$ph*"))));
        litem_275->prev=((void*)0);
        litem_275->next=((void*)0);
        __dec_obj37=litem_275->item,
        litem_275->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj37 ? __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_275;
        self->head=litem_275;
    }
    else if(    self->len==1) {
        litem_276=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value241=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1051, "struct list_item$1sNode$ph*"))));
        litem_276->prev=self->head;
        litem_276->next=((void*)0);
        __dec_obj38=litem_276->item,
        litem_276->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj38 ? __dec_obj38 = come_decrement_ref_count(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_276;
        self->head->next=litem_276;
    }
    else {
        litem_277=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value242=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1061, "struct list_item$1sNode$ph*"))));
        litem_277->prev=self->tail;
        litem_277->next=((void*)0);
        __dec_obj39=litem_277->item,
        litem_277->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj39 ? __dec_obj39 = come_decrement_ref_count(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_277;
        self->tail=litem_277;
    }
    self->len++;
    __result_obj__186 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__186;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_278;
struct list_item$1sNode$ph* prev_it_279;
    it_278=self->head;
    while(it_278!=((void*)0)) {
        prev_it_279=it_278;
        it_278=it_278->next;
        /*c*/ come_call_finalizer3(prev_it_279,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__188;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
struct list$1char$ph* result_280;
struct list_item$1char$ph* it_281;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
struct list$1char$ph* __result_obj__190;
    if(    self==((void*)0)) {
        __result_obj__188 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__188,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__188;
    }
    result_280=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1022, "struct list$1char$ph*"))));
    it_281=self->head;
    while(it_281!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_280,(char*)come_increment_ref_count((char*)come_memdup(it_281->item, "./comelang.h", 1027, "char*")));
        }
        else {
            list$1char$ph_add(result_280,(char*)come_increment_ref_count((char*)come_memdup(it_281->item, "./comelang.h", 1030, "char*")));
        }
        it_281=it_281->next;
    }
    __result_obj__190 = (struct list$1char$ph*)come_increment_ref_count(result_280);
    /*c*/ come_call_finalizer3(result_280,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__190,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__190;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value250 = (void*)0;
struct list_item$1char$ph* litem_282;
char* __dec_obj43;
void* __right_value251 = (void*)0;
struct list_item$1char$ph* litem_283;
char* __dec_obj44;
void* __right_value252 = (void*)0;
struct list_item$1char$ph* litem_284;
char* __dec_obj45;
struct list$1char$ph* __result_obj__189;
    if(    self->len==0) {
        litem_282=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value250=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1041, "struct list_item$1char$ph*"))));
        litem_282->prev=((void*)0);
        litem_282->next=((void*)0);
        __dec_obj43=litem_282->item,
        litem_282->item=(char*)come_increment_ref_count(item);
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_282;
        self->head=litem_282;
    }
    else if(    self->len==1) {
        litem_283=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value251=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1051, "struct list_item$1char$ph*"))));
        litem_283->prev=self->head;
        litem_283->next=((void*)0);
        __dec_obj44=litem_283->item,
        litem_283->item=(char*)come_increment_ref_count(item);
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_283;
        self->head->next=litem_283;
    }
    else {
        litem_284=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value252=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1061, "struct list_item$1char$ph*"))));
        litem_284->prev=self->tail;
        litem_284->next=((void*)0);
        __dec_obj45=litem_284->item,
        litem_284->item=(char*)come_increment_ref_count(item);
        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_284;
        self->tail=litem_284;
    }
    self->len++;
    __result_obj__189 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__189;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_285;
struct list_item$1char$ph* prev_it_286;
    it_285=self->head;
    while(it_285!=((void*)0)) {
        prev_it_286=it_285;
        it_285=it_285->next;
        /*c*/ come_call_finalizer3(prev_it_286,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNode$ph* exps, int sline, struct sInfo* info){
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
char* __dec_obj49;
void* __right_value260 = (void*)0;
struct list$1sNode$ph* __dec_obj50;
struct sSStringNode* __result_obj__193;
    ((struct sNodeBase*)(__right_value258=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value258,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj49=self->value,
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj50=self->exps,
    self->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(exps));
    /*b*/ come_call_finalizer3(__dec_obj50,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__193 = (struct sSStringNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sSStringNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(exps,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__193,sSStringNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__193;
}

char* sSStringNode_kind(struct sSStringNode* self){
void* __right_value261 = (void*)0;
char* __result_obj__194;
    __result_obj__194 = (char*)come_increment_ref_count(((char*)(__right_value261=__builtin_string("sSStringNode"))));
    (__right_value261 = come_decrement_ref_count(__right_value261, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__194 = come_decrement_ref_count(__result_obj__194, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__194;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
struct CVALUE* come_value_287;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct buffer* buf_288;
struct list$1sNode$ph* o2_saved_289;
struct sNode* it_292;
void* __right_value266 = (void*)0;
struct sNode* obj_295;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_296;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct sNode* node_304;
_Bool Value_305;
_Bool __result_obj__206;
void* __right_value280 = (void*)0;
struct CVALUE* come_value_306;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
struct sType* type2_307;
void* __right_value284 = (void*)0;
char* __dec_obj58;
void* __right_value285 = (void*)0;
struct sType* __dec_obj59;
_Bool __result_obj__207;
    come_value_287=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 108, "struct CVALUE*"))));
    buf_288=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 110, "struct buffer*"))));
    buffer_append_str(buf_288,"xsprintf(\"");
    buffer_append_str(buf_288,self->value);
    buffer_append_str(buf_288,"\"");
    if(    list$1sNode$ph_length(self->exps)>0) {
        for(        o2_saved_289=(struct list$1sNode$ph*)come_increment_ref_count((self->exps)),it_292=list$1sNode$ph_begin((o2_saved_289));        !list$1sNode$ph_end((o2_saved_289));        it_292=list$1sNode$ph_next((o2_saved_289))        ){
            obj_295=(struct sNode*)come_increment_ref_count(sNode_clone(it_292));
            params_296=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 120, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
            list$1tuple2$2char$phsNode$ph$ph_add(params_296,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 121, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(sNode_clone(it_292)))));
            node_304=(struct sNode*)come_increment_ref_count(create_method_call("to_string",(struct sNode*)come_increment_ref_count(obj_295),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_296),((void*)0),0,((void*)0),(_Bool)0,info));
            Value_305=node_compile(node_304,info);
            if(            !Value_305) {
                __result_obj__206 = (_Bool)0;
                ((obj_295) ? obj_295 = come_decrement_ref_count(obj_295, ((struct sNode*)obj_295)->finalize, ((struct sNode*)obj_295)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(params_296,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((node_304) ? node_304 = come_decrement_ref_count(node_304, ((struct sNode*)node_304)->finalize, ((struct sNode*)node_304)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(o2_saved_289,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_value_287,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(buf_288,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__206;
            }
            else {
            }
            come_value_306=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_str(buf_288,",");
            buffer_append_str(buf_288,come_value_306->c_value);
            ((obj_295) ? obj_295 = come_decrement_ref_count(obj_295, ((struct sNode*)obj_295)->finalize, ((struct sNode*)obj_295)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(params_296,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_304) ? node_304 = come_decrement_ref_count(node_304, ((struct sNode*)node_304)->finalize, ((struct sNode*)node_304)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_306,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_289,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    buffer_append_str(buf_288,")");
    type2_307=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 138, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    type2_307->mHeap=(_Bool)1;
    __dec_obj58=come_value_287->c_value,
    come_value_287->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_288));
    __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj59=come_value_287->type,
    come_value_287->type=(struct sType*)come_increment_ref_count(sType_clone(type2_307));
    /*b*/ come_call_finalizer3(__dec_obj59,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_287->var=((void*)0);
    append_object_to_right_values2(come_value_287,(struct sType*)come_increment_ref_count(type2_307),info,(_Bool)0,((void*)0),((void*)0));
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_287));
    add_come_last_code(info,"%s",come_value_287->c_value);
    __result_obj__207 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_287,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_288,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_307,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__207;
}

static void sSStringNode_finalize(struct sSStringNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->exps,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_290;
struct sNode* __result_obj__195;
struct sNode* __result_obj__196;
struct sNode* result_291;
struct sNode* __result_obj__197;
result_290 = (void*)0;
result_291 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_290,0,sizeof(struct sNode*));
        __result_obj__195 = result_290;
        return __result_obj__195;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__196 = self->it->item;
        return __result_obj__196;
    }
    memset(&result_291,0,sizeof(struct sNode*));
    __result_obj__197 = result_291;
    return __result_obj__197;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_293;
struct sNode* __result_obj__198;
struct sNode* __result_obj__199;
struct sNode* result_294;
struct sNode* __result_obj__200;
result_293 = (void*)0;
result_294 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_293,0,sizeof(struct sNode*));
        __result_obj__198 = result_293;
        return __result_obj__198;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__199 = self->it->item;
        return __result_obj__199;
    }
    memset(&result_294,0,sizeof(struct sNode*));
    __result_obj__200 = result_294;
    return __result_obj__200;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__201;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__201 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__201,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__201;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_297;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_298;
    it_297=self->head;
    while(it_297!=((void*)0)) {
        prev_it_298=it_297;
        it_297=it_297->next;
        /*c*/ come_call_finalizer3(prev_it_298,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value269 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_299;
struct tuple2$2char$phsNode$ph* __dec_obj51;
void* __right_value270 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_300;
struct tuple2$2char$phsNode$ph* __dec_obj52;
void* __right_value271 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_301;
struct tuple2$2char$phsNode$ph* __dec_obj53;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__202;
    if(    self->len==0) {
        litem_299=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value269=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1041, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_299->prev=((void*)0);
        litem_299->next=((void*)0);
        __dec_obj51=litem_299->item,
        litem_299->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj51,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_299;
        self->head=litem_299;
    }
    else if(    self->len==1) {
        litem_300=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value270=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1051, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_300->prev=self->head;
        litem_300->next=((void*)0);
        __dec_obj52=litem_300->item,
        litem_300->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj52,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_300;
        self->head->next=litem_300;
    }
    else {
        litem_301=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value271=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1061, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_301->prev=self->tail;
        litem_301->next=((void*)0);
        __dec_obj53=litem_301->item,
        litem_301->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj53,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_301;
        self->tail=litem_301;
    }
    self->len++;
    __result_obj__202 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__202;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__203;
void* __right_value274 = (void*)0;
struct tuple2$2char$phsNode$ph* result_302;
void* __right_value275 = (void*)0;
char* __dec_obj54;
void* __right_value276 = (void*)0;
struct sNode* __dec_obj55;
struct tuple2$2char$phsNode$ph* __result_obj__204;
    if(    self==(void*)0) {
        __result_obj__203 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__203,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__203;
    }
    result_302=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj54=result_302->v1,
        result_302->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj55=result_302->v2,
        result_302->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj55 ? __dec_obj55 = come_decrement_ref_count(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__204 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result_302);
    /*c*/ come_call_finalizer3(result_302,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__204,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__204;
}

static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self){
unsigned int result_303;
    result_303=0;
    result_303+=int_get_hash_key(((int)self->v1));
    result_303+=int_get_hash_key(((int)self->v2));
    return result_303;
}

static _Bool tuple2$2char$phsNode$ph_equals(struct tuple2$2char$phsNode$ph* left, struct tuple2$2char$phsNode$ph* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2){
char* __dec_obj56;
struct sNode* __dec_obj57;
struct tuple2$2char$phsNode$ph* __result_obj__205;
    __dec_obj56=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj57=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj57 ? __dec_obj57 = come_decrement_ref_count(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__205 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__205,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__205;
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __right_value286 = (void*)0;
struct sCharNode* __result_obj__208;
    ((struct sNodeBase*)(__right_value286=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value286,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->value=value;
    __result_obj__208 = (struct sCharNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCharNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__208,sCharNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__208;
}

char* sCharNode_kind(struct sCharNode* self){
void* __right_value287 = (void*)0;
char* __result_obj__209;
    __result_obj__209 = (char*)come_increment_ref_count(((char*)(__right_value287=__builtin_string("sCharNode"))));
    (__right_value287 = come_decrement_ref_count(__right_value287, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__209 = come_decrement_ref_count(__result_obj__209, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__209;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct CVALUE* come_value_308;
void* __right_value290 = (void*)0;
char* __dec_obj60;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct sType* __dec_obj61;
_Bool __result_obj__210;
    come_value_308=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 171, "struct CVALUE*"))));
    __dec_obj60=come_value_308->c_value,
    come_value_308->c_value=(char*)come_increment_ref_count(xsprintf("%d",self->value));
    __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj61=come_value_308->type,
    come_value_308->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 174, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj61,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_308->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_308));
    add_come_last_code(info,"%s",come_value_308->c_value);
    __result_obj__210 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_308,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__210;
}

static void sCharNode_finalize(struct sCharNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, _Bool quote, struct sInfo* info){
void* __right_value294 = (void*)0;
struct sWCharNode* __result_obj__211;
    ((struct sNodeBase*)(__right_value294=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value294,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->value=value;
    self->quote=quote;
    __result_obj__211 = (struct sWCharNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sWCharNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__211,sWCharNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__211;
}

char* sWCharNode_kind(struct sWCharNode* self){
void* __right_value295 = (void*)0;
char* __result_obj__212;
    __result_obj__212 = (char*)come_increment_ref_count(((char*)(__right_value295=__builtin_string("sWCharNode"))));
    (__right_value295 = come_decrement_ref_count(__right_value295, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__212 = come_decrement_ref_count(__result_obj__212, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__212;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct CVALUE* come_value_309;
void* __right_value298 = (void*)0;
char* __dec_obj62;
void* __right_value299 = (void*)0;
char* __dec_obj63;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct sType* __dec_obj64;
_Bool __result_obj__213;
    come_value_309=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 202, "struct CVALUE*"))));
    if(    self->quote) {
        __dec_obj62=come_value_309->c_value,
        come_value_309->c_value=(char*)come_increment_ref_count(xsprintf("L'\\%o'",self->value));
        __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj63=come_value_309->c_value,
        come_value_309->c_value=(char*)come_increment_ref_count(xsprintf("L'%lc'",self->value));
        __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __dec_obj64=come_value_309->type,
    come_value_309->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 210, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj64,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_309->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_309));
    add_come_last_code(info,"%s",come_value_309->c_value);
    __result_obj__213 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_309,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__213;
}

static void sWCharNode_finalize(struct sWCharNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info){
void* __right_value303 = (void*)0;
unsigned int* __dec_obj65;
struct sWStringNode* __result_obj__214;
    ((struct sNodeBase*)(__right_value303=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value303,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj65=self->value,
    self->value=(unsigned int*)come_increment_ref_count(value);
    __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__214 = (struct sWStringNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sWStringNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__214,sWStringNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__214;
}

char* sWStringNode_kind(struct sWStringNode* self){
void* __right_value304 = (void*)0;
char* __result_obj__215;
    __result_obj__215 = (char*)come_increment_ref_count(((char*)(__right_value304=__builtin_string("sWStringNode"))));
    (__right_value304 = come_decrement_ref_count(__right_value304, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__215 = come_decrement_ref_count(__result_obj__215, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__215;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct CVALUE* come_value_310;
void* __right_value307 = (void*)0;
char* __dec_obj66;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct sType* __dec_obj67;
_Bool __result_obj__216;
    come_value_310=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 237, "struct CVALUE*"))));
    __dec_obj66=come_value_310->c_value,
    come_value_310->c_value=(char*)come_increment_ref_count(xsprintf("L\"%ls\"",self->value));
    __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj67=come_value_310->type,
    come_value_310->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 240, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj67,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_310->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_310));
    add_come_last_code(info,"%s",come_value_310->c_value);
    __result_obj__216 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_310,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__216;
}

static void sWStringNode_finalize(struct sWStringNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
char* __dec_obj68;
struct sRegexNode* __result_obj__217;
    ((struct sNodeBase*)(__right_value311=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value311,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj68=self->str,
    self->str=(char*)come_increment_ref_count(__builtin_string(str));
    __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->global=global;
    self->ignore_case=ignore_case;
    __result_obj__217 = (struct sRegexNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sRegexNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__217,sRegexNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__217;
}

char* sRegexNode_kind(struct sRegexNode* self){
void* __right_value313 = (void*)0;
char* __result_obj__218;
    __result_obj__218 = (char*)come_increment_ref_count(((char*)(__right_value313=__builtin_string("sRegexNode"))));
    (__right_value313 = come_decrement_ref_count(__right_value313, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__218 = come_decrement_ref_count(__result_obj__218, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__218;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct sNode* _inf_value1;
struct sStrNode* _inf_obj_value1;
void* __right_value319 = (void*)0;
struct sNode* obj_node_311;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_313;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct sNode* node_314;
_Bool Value_315;
_Bool __result_obj__221;
_Bool __result_obj__222;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 269, "struct sNode");
    _inf_obj_value1=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value315=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc_v2(1, sizeof(struct sStrNode)*(1), "06str.c", 269, "struct sStrNode*")),(char*)come_increment_ref_count(self->str),info->sline,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStrNode_finalize;
    _inf_value1->clone=(void*)sStrNode_clone;
    _inf_value1->compile=(void*)sStrNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStrNode_kind;
    obj_node_311=(struct sNode*)come_increment_ref_count(_inf_value1);
    /*c*/ come_call_finalizer3(__right_value315,sStrNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    params_313=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 271, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_313,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 273, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_node_311))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_313,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 274, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_313,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 275, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_313,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 276, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_313,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 277, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_313,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 278, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_313,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 279, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_313,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 280, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_313,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 281, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    node_314=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_node_311),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_313),((void*)0),info->sline,((void*)0),(_Bool)0,info));
    Value_315=node_compile(node_314,info);
    if(    !Value_315) {
        __result_obj__221 = (_Bool)0;
        ((obj_node_311) ? obj_node_311 = come_decrement_ref_count(obj_node_311, ((struct sNode*)obj_node_311)->finalize, ((struct sNode*)obj_node_311)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(params_313,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_314) ? node_314 = come_decrement_ref_count(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__221;
    }
    else {
    }
    __result_obj__222 = (_Bool)1;
    ((obj_node_311) ? obj_node_311 = come_decrement_ref_count(obj_node_311, ((struct sNode*)obj_node_311)->finalize, ((struct sNode*)obj_node_311)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(params_313,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_314) ? node_314 = come_decrement_ref_count(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__222;
}

static void sRegexNode_finalize(struct sRegexNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->str!=((void*)0)) {
        (self->str = come_decrement_ref_count(self->str, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
struct sStrNode* __result_obj__219;
void* __right_value316 = (void*)0;
struct sStrNode* result_312;
void* __right_value317 = (void*)0;
char* __dec_obj69;
void* __right_value318 = (void*)0;
char* __dec_obj70;
struct sStrNode* __result_obj__220;
    if(    self==(void*)0) {
        __result_obj__219 = (void*)0;
        return __result_obj__219;
    }
    result_312=(struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc_v2(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3, "struct sStrNode*"));
    if(    self!=((void*)0)) {
        result_312->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj69=result_312->sname,
        result_312->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStrNode_clone", 5, "char*"));
        __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_312->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj70=result_312->value,
        result_312->value=(char*)come_increment_ref_count((char*)come_memdup(self->value, "sStrNode_clone", 7, "char*"));
        __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__220 = result_312;
    /*c*/ come_call_finalizer3(result_312,sStrNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__220;
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNode$ph* list_elements, struct sInfo* info){
void* __right_value358 = (void*)0;
struct list$1sNode$ph* __dec_obj71;
struct sListNode* __result_obj__223;
    ((struct sNodeBase*)(__right_value358=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value358,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj71=self->list_elements,
    self->list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list_elements);
    /*b*/ come_call_finalizer3(__dec_obj71,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__223 = (struct sListNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sListNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(list_elements,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__223,sListNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__223;
}

char* sListNode_kind(struct sListNode* self){
void* __right_value359 = (void*)0;
char* __result_obj__224;
    __result_obj__224 = (char*)come_increment_ref_count(((char*)(__right_value359=__builtin_string("sListNode"))));
    (__right_value359 = come_decrement_ref_count(__right_value359, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__224 = come_decrement_ref_count(__result_obj__224, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__224;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
struct list$1sNode$ph* list_elements_316;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct list$1CVALUE$ph* params_317;
struct sType* list_element_type_320;
int n_321;
struct list$1sNode$ph* o2_saved_322;
struct sNode* it_323;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
_Bool _if_conditional2;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct sNode* value_node_324;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_325;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
struct sNode* exp_326;
void* __right_value377 = (void*)0;
struct sNode* __dec_obj72;
_Bool Value_327;
_Bool __result_obj__226;
_Bool Value_328;
_Bool __result_obj__227;
void* __right_value378 = (void*)0;
struct CVALUE* come_value_329;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var2 = (void*)0;
_Bool come_exception_var_1_330=0;
char* Err_331=0;
_Bool _if_conditional3;
_Bool __result_obj__228;
void* __right_value381 = (void*)0;
struct sType* __dec_obj73;
void* __right_value382 = (void*)0;
struct sType* type_values_332;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
char* var_name_337;
void* __right_value388 = (void*)0;
struct sVar* var__338;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct buffer* source_339;
int i_340;
struct list$1CVALUE$ph* o2_saved_341;
struct CVALUE* it_344;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct sType* list_type_353;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct sType* obj_type_357;
char* fun_name_358;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var3 = (void*)0;
char* name_359=0;
struct sGenericsFun* generics_fun_360=0;
char* generics_fun_name_361;
void* __right_value404 = (void*)0;
struct sFun* fun_362;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
char* __dec_obj80;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var4 = (void*)0;
int come_exception_var_2_365=0;
char* Err_366=0;
_Bool _if_conditional4;
_Bool __result_obj__245;
void* __right_value409 = (void*)0;
struct sType* result_type_367;
struct sType* type_368;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct CVALUE* obj_value_369;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct buffer* num_string_370;
void* __right_value414 = (void*)0;
struct sType* type2_371;
void* __right_value415 = (void*)0;
char* type_name_372;
struct sType* any_type_373;
void* __right_value416 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var5 = (void*)0;
char* finalizer_name_374=0;
char* cloner_name_375=0;
char* get_hash_key_name_376=0;
char* equaler_name_377=0;
void* __right_value417 = (void*)0;
_Bool _if_conditional5;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
char* __dec_obj81;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
char* __dec_obj82;
void* __right_value422 = (void*)0;
struct sType* type3_378;
void* __right_value423 = (void*)0;
struct sType* __dec_obj83;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct list$1CVALUE$ph* come_params_379;
void* __right_value426 = (void*)0;
_Bool _if_conditional6;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct CVALUE* come_value2_386;
void* __right_value430 = (void*)0;
char* __dec_obj84;
struct sType* __dec_obj85;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct CVALUE* come_value3_387;
void* __right_value433 = (void*)0;
char* __dec_obj86;
struct sType* __dec_obj87;
int j_388;
struct list$1CVALUE$ph* o2_saved_389;
struct CVALUE* it_390;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct CVALUE* come_value4_391;
void* __right_value436 = (void*)0;
char* __dec_obj88;
void* __right_value437 = (void*)0;
struct sType* __dec_obj89;
_Bool __result_obj__250;
    list_elements_316=self->list_elements;
    params_317=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 313, "struct list$1CVALUE$ph*"))));
    list_element_type_320=((void*)0);
    n_321=0;
    for(    o2_saved_322=(list_elements_316),it_323=list$1sNode$ph_begin((o2_saved_322));    !list$1sNode$ph_end((o2_saved_322));    it_323=list$1sNode$ph_next((o2_saved_322))    ){
        if(        (_if_conditional2=(string_operator_equals(((char*)(__right_value363=it_323->kind(it_323->_protocol_obj))),"sWildCard"))),        (__right_value362 = come_decrement_ref_count(__right_value362, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value363 = come_decrement_ref_count(__right_value363, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional2) {
            value_node_324=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value364=xsprintf("Value"))),info));
            (__right_value364 = come_decrement_ref_count(__right_value364, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            params_325=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 321, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
            list$1tuple2$2char$phsNode$ph$ph_add(params_325,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 322, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_324))));
            list$1tuple2$2char$phsNode$ph$ph_add(params_325,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 323, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(n_321,info)))));
            exp_326=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value375=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(value_node_324),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_325),((void*)0),0,((void*)0),(_Bool)0,info));
            (__right_value375 = come_decrement_ref_count(__right_value375, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj72=exp_326,
            exp_326=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_326,info));
            (__dec_obj72 ? __dec_obj72 = come_decrement_ref_count(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            Value_327=node_compile(exp_326,info);
            if(            !Value_327) {
                __result_obj__226 = (_Bool)0;
                ((value_node_324) ? value_node_324 = come_decrement_ref_count(value_node_324, ((struct sNode*)value_node_324)->finalize, ((struct sNode*)value_node_324)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(params_325,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((exp_326) ? exp_326 = come_decrement_ref_count(exp_326, ((struct sNode*)exp_326)->finalize, ((struct sNode*)exp_326)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(params_317,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(list_element_type_320,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__226;
            }
            else {
            }
            ((value_node_324) ? value_node_324 = come_decrement_ref_count(value_node_324, ((struct sNode*)value_node_324)->finalize, ((struct sNode*)value_node_324)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(params_325,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((exp_326) ? exp_326 = come_decrement_ref_count(exp_326, ((struct sNode*)exp_326)->finalize, ((struct sNode*)exp_326)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            Value_328=node_compile(it_323,info);
            if(            !Value_328) {
                __result_obj__227 = (_Bool)0;
                /*c*/ come_call_finalizer3(params_317,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(list_element_type_320,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__227;
            }
            else {
            }
        }
        come_value_329=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        list_element_type_320) {
            multiple_assign_var2=((struct tuple2$2bool$char$ph*)(__right_value380=check_assign_type(((char*)(__right_value379=xsprintf("invalid list element type"))),list_element_type_320,come_value_329->type,come_value_329,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_1_330=multiple_assign_var2->v1;
            Err_331=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            if(            (_if_conditional3=(Err_331)),            (__right_value379 = come_decrement_ref_count(__right_value379, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value380,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional3) {
                __result_obj__228 = (_Bool)1;
                (Err_331 = come_decrement_ref_count(Err_331, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(come_value_329,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(params_317,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(list_element_type_320,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__228;
            }
            else {
            }
            (Err_331 = come_decrement_ref_count(Err_331, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        list$1CVALUE$ph_push_back(params_317,(struct CVALUE*)come_increment_ref_count(come_value_329));
        __dec_obj73=list_element_type_320,
        list_element_type_320=(struct sType*)come_increment_ref_count(sType_clone(come_value_329->type));
        /*b*/ come_call_finalizer3(__dec_obj73,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        n_321++;
        /*c*/ come_call_finalizer3(come_value_329,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    type_values_332=(struct sType*)come_increment_ref_count(sType_clone(list_element_type_320));
    list$1sNode$ph_push_back(type_values_332->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUE$ph_length(params_317),info)));
    type_values_332->mHeap=(_Bool)0;
    static int list_value_num_336=0;
    var_name_337=(char*)come_increment_ref_count(xsprintf("__list_values%d__",++list_value_num_336));
    add_variable_to_table(var_name_337,(struct sType*)come_increment_ref_count(sType_clone(type_values_332)),info,(_Bool)0);
    var__338=get_variable_from_table(info->lv_table,var_name_337);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value389=make_define_var(type_values_332,var__338->mCValueName,(_Bool)0,info))));
    (__right_value389 = come_decrement_ref_count(__right_value389, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    source_339=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 365, "struct buffer*"))));
    buffer_append_str(source_339,"(");
    i_340=0;
    for(    o2_saved_341=(struct list$1CVALUE$ph*)come_increment_ref_count((params_317)),it_344=list$1CVALUE$ph_begin((o2_saved_341));    !list$1CVALUE$ph_end((o2_saved_341));    it_344=list$1CVALUE$ph_next((o2_saved_341))    ){
        if(        list_element_type_320->mHeap) {
            buffer_append_format(source_339,"%s[%d]=%s,\n",var__338->mCValueName,i_340,((struct CVALUE*)(__right_value392=list$1CVALUE$ph_operator_load_element(params_317,i_340)))->c_value);
            /*c*/ come_call_finalizer3(__right_value392,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            buffer_append_format(source_339,"%s[%d]=%s,\n",var__338->mCValueName,i_340,((struct CVALUE*)(__right_value393=list$1CVALUE$ph_operator_load_element(params_317,i_340)))->c_value);
            /*c*/ come_call_finalizer3(__right_value393,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        i_340++;
    }
    /*c*/ come_call_finalizer3(o2_saved_341,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    list_type_353=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 385, "struct sType*")),(char*)come_increment_ref_count(xsprintf("list")),(_Bool)0,info));
    list$1sType$ph_push_back(list_type_353->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value400=sType_clone(list_element_type_320))))));
    /*c*/ come_call_finalizer3(__right_value400,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    obj_type_357=(struct sType*)come_increment_ref_count(sType_clone(list_type_353));
    fun_name_358="initialize_with_values";
    multiple_assign_var3=((struct tuple2$2char$phsGenericsFun$p*)(__right_value403=make_generics_function(obj_type_357,(char*)come_increment_ref_count(__builtin_string(fun_name_358)),info,(_Bool)1)));
    name_359=(char*)come_increment_ref_count(multiple_assign_var3->v1);
    generics_fun_360=multiple_assign_var3->v2;
    /*c*/ come_call_finalizer3(__right_value403,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    generics_fun_name_361=(char*)come_increment_ref_count(name_359);
    fun_362=((struct sFun*)(__right_value404=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_361,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value404,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun_362==((void*)0)) {
        __dec_obj80=generics_fun_name_361,
        generics_fun_name_361=(char*)come_increment_ref_count(create_method_name(obj_type_357,(_Bool)0,((char*)(__right_value405=__builtin_string(fun_name_358))),info,(_Bool)1));
        __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value405 = come_decrement_ref_count(__right_value405, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_362=((struct sFun*)(__right_value407=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_361,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value407,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        fun_362==((void*)0)) {
            multiple_assign_var4=((struct tuple2$2int$char$ph*)(__right_value408=err_msg(info,"function not found(%s) at method(%s)(1)",generics_fun_name_361,info->come_fun->mName)));
            come_exception_var_2_365=multiple_assign_var4->v1;
            Err_366=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            if(            (_if_conditional4=(Err_366)),            /*c*/ come_call_finalizer3(__right_value408,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional4) {
                __result_obj__245 = (_Bool)1;
                (Err_366 = come_decrement_ref_count(Err_366, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(params_317,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(list_element_type_320,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type_values_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (var_name_337 = come_decrement_ref_count(var_name_337, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(source_339,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(list_type_353,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_type_357,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_359 = come_decrement_ref_count(name_359, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_361 = come_decrement_ref_count(generics_fun_name_361, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__245;
            }
            else {
            }
            (Err_366 = come_decrement_ref_count(Err_366, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    result_type_367=(struct sType*)come_increment_ref_count(sType_clone(fun_362->mResultType));
    result_type_367->mStatic=(_Bool)0;
    type_368=list_type_353;
    obj_value_369=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 413, "struct CVALUE*"))));
    num_string_370=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 415, "struct buffer*"))));
    buffer_append_str(num_string_370,"1");
    type2_371=(struct sType*)come_increment_ref_count(solve_generics(type_368,type_368,info,(_Bool)0));
    type_name_372=(char*)come_increment_ref_count(make_type_name_string(type2_371,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_373=(struct sType*)come_increment_ref_count(type2_371);
    any_type_373->mPointerNum=1;
    any_type_373->mHeap=(_Bool)1;
    multiple_assign_var5=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value416=create_vtable((struct sType*)come_increment_ref_count(any_type_373),info)));
    finalizer_name_374=(char*)come_increment_ref_count(multiple_assign_var5->v1);
    cloner_name_375=(char*)come_increment_ref_count(multiple_assign_var5->v2);
    get_hash_key_name_376=(char*)come_increment_ref_count(multiple_assign_var5->v3);
    equaler_name_377=(char*)come_increment_ref_count(multiple_assign_var5->v4);
    /*c*/ come_call_finalizer3(__right_value416,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    (_if_conditional5=(((struct sFun*)(__right_value417=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2"))))),    /*c*/ come_call_finalizer3(__right_value417,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional5) {
        __dec_obj81=obj_value_369->c_value,
        obj_value_369->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_372,type_name_372,((char*)(__right_value418=buffer_to_string(num_string_370))),info->sname,info->sline,type_name_372));
        __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value418 = come_decrement_ref_count(__right_value418, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj82=obj_value_369->c_value,
        obj_value_369->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_372,type_name_372,((char*)(__right_value420=buffer_to_string(num_string_370))),info->sname,info->sline,type_name_372));
        __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value420 = come_decrement_ref_count(__right_value420, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    type3_378=(struct sType*)come_increment_ref_count(sType_clone(type2_371));
    type3_378->mPointerNum++;
    type3_378->mHeap=(_Bool)1;
    type2_371->mHeap=(_Bool)1;
    __dec_obj83=obj_value_369->type,
    obj_value_369->type=(struct sType*)come_increment_ref_count(sType_clone(type2_371));
    /*b*/ come_call_finalizer3(__dec_obj83,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_369->type->mPointerNum++;
    obj_value_369->var=((void*)0);
    append_object_to_right_values2(obj_value_369,(struct sType*)come_increment_ref_count(type3_378),info,(_Bool)0,((void*)0),((void*)0));
    come_params_379=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 446, "struct list$1CVALUE$ph*"))));
    if(    (_if_conditional6=(((struct sType*)(__right_value426=list$1sType$ph_operator_load_element(fun_362->mParamTypes,0)))->mHeap&&obj_value_369->type->mHeap)),    /*c*/ come_call_finalizer3(__right_value426,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional6) {
        std_move(((struct sType*)(__right_value427=list$1sType$ph_operator_load_element(fun_362->mParamTypes,0))),obj_value_369->type,obj_value_369,info,(_Bool)1);
        /*c*/ come_call_finalizer3(__right_value427,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    list$1CVALUE$ph_push_back(come_params_379,(struct CVALUE*)come_increment_ref_count(obj_value_369));
    come_value2_386=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 453, "struct CVALUE*"))));
    __dec_obj84=come_value2_386->c_value,
    come_value2_386->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUE$ph_length(params_317)));
    __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj85=come_value2_386->type,
    come_value2_386->type=((void*)0);
    /*b*/ come_call_finalizer3(__dec_obj85,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_386->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_379,(struct CVALUE*)come_increment_ref_count(come_value2_386));
    come_value3_387=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 461, "struct CVALUE*"))));
    __dec_obj86=come_value3_387->c_value,
    come_value3_387->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__338->mCValueName));
    __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj87=come_value3_387->type,
    come_value3_387->type=((void*)0);
    /*b*/ come_call_finalizer3(__dec_obj87,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value3_387->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_379,(struct CVALUE*)come_increment_ref_count(come_value3_387));
    buffer_append_str(source_339,generics_fun_name_361);
    buffer_append_str(source_339,"(");
    j_388=0;
    for(    o2_saved_389=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_379)),it_390=list$1CVALUE$ph_begin((o2_saved_389));    !list$1CVALUE$ph_end((o2_saved_389));    it_390=list$1CVALUE$ph_next((o2_saved_389))    ){
        buffer_append_str(source_339,it_390->c_value);
        if(        j_388!=list$1CVALUE$ph_length(come_params_379)-1) {
            buffer_append_str(source_339,",");
        }
        j_388++;
    }
    /*c*/ come_call_finalizer3(o2_saved_389,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(source_339,")");
    buffer_append_str(source_339,")");
    come_value4_391=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 487, "struct CVALUE*"))));
    __dec_obj88=come_value4_391->c_value,
    come_value4_391->c_value=(char*)come_increment_ref_count(buffer_to_string(source_339));
    __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj89=come_value4_391->type,
    come_value4_391->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_367));
    /*b*/ come_call_finalizer3(__dec_obj89,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value4_391->type->mStatic=(_Bool)0;
    come_value4_391->var=((void*)0);
    if(    result_type_367->mHeap) {
        append_object_to_right_values2(come_value4_391,(struct sType*)come_increment_ref_count(result_type_367),info,(_Bool)0,((void*)0),((void*)0));
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value4_391));
    add_come_last_code(info,"%s",come_value4_391->c_value);
    __result_obj__250 = (_Bool)1;
    /*c*/ come_call_finalizer3(params_317,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(list_element_type_320,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_values_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name_337 = come_decrement_ref_count(var_name_337, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(source_339,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(list_type_353,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_type_357,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (name_359 = come_decrement_ref_count(name_359, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_361 = come_decrement_ref_count(generics_fun_name_361, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_367,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_value_369,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(num_string_370,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_371,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_372 = come_decrement_ref_count(type_name_372, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(any_type_373,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (finalizer_name_374 = come_decrement_ref_count(finalizer_name_374, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_375 = come_decrement_ref_count(cloner_name_375, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_376 = come_decrement_ref_count(get_hash_key_name_376, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_377 = come_decrement_ref_count(equaler_name_377, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type3_378,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_379,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_386,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value3_387,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value4_391,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__250;
}

static void sListNode_finalize(struct sListNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->list_elements,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__225;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__225 = (struct list$1CVALUE$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__225,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__225;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_318;
struct list_item$1CVALUE$ph* prev_it_319;
    it_318=self->head;
    while(it_318!=((void*)0)) {
        prev_it_319=it_318;
        it_318=it_318->next;
        /*c*/ come_call_finalizer3(prev_it_319,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value383 = (void*)0;
struct list_item$1sNode$ph* litem_333;
struct sNode* __dec_obj74;
void* __right_value384 = (void*)0;
struct list_item$1sNode$ph* litem_334;
struct sNode* __dec_obj75;
void* __right_value385 = (void*)0;
struct list_item$1sNode$ph* litem_335;
struct sNode* __dec_obj76;
struct list$1sNode$ph* __result_obj__229;
    if(    self->len==0) {
        litem_333=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value383=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1111, "struct list_item$1sNode$ph*"))));
        litem_333->prev=((void*)0);
        litem_333->next=((void*)0);
        __dec_obj74=litem_333->item,
        litem_333->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj74 ? __dec_obj74 = come_decrement_ref_count(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_333;
        self->head=litem_333;
    }
    else if(    self->len==1) {
        litem_334=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value384=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1121, "struct list_item$1sNode$ph*"))));
        litem_334->prev=self->head;
        litem_334->next=((void*)0);
        __dec_obj75=litem_334->item,
        litem_334->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj75 ? __dec_obj75 = come_decrement_ref_count(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_334;
        self->head->next=litem_334;
    }
    else {
        litem_335=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value385=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1131, "struct list_item$1sNode$ph*"))));
        litem_335->prev=self->tail;
        litem_335->next=((void*)0);
        __dec_obj76=litem_335->item,
        litem_335->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj76 ? __dec_obj76 = come_decrement_ref_count(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_335;
        self->tail=litem_335;
    }
    self->len++;
    __result_obj__229 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__229;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_342;
struct CVALUE* __result_obj__230;
struct CVALUE* __result_obj__231;
struct CVALUE* result_343;
struct CVALUE* __result_obj__232;
result_342 = (void*)0;
result_343 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_342,0,sizeof(struct CVALUE*));
        __result_obj__230 = result_342;
        return __result_obj__230;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__231 = self->it->item;
        return __result_obj__231;
    }
    memset(&result_343,0,sizeof(struct CVALUE*));
    __result_obj__232 = result_343;
    return __result_obj__232;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_345;
struct CVALUE* __result_obj__233;
struct CVALUE* __result_obj__234;
struct CVALUE* result_346;
struct CVALUE* __result_obj__235;
result_345 = (void*)0;
result_346 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_345,0,sizeof(struct CVALUE*));
        __result_obj__233 = result_345;
        return __result_obj__233;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__234 = self->it->item;
        return __result_obj__234;
    }
    memset(&result_346,0,sizeof(struct CVALUE*));
    __result_obj__235 = result_346;
    return __result_obj__235;
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_347;
int i_348;
struct CVALUE* __result_obj__236;
struct CVALUE* default_value_349;
struct CVALUE* __result_obj__237;
default_value_349 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_347=self->head;
    i_348=0;
    while(it_347!=((void*)0)) {
        if(        position==i_348) {
            __result_obj__236 = (struct CVALUE*)come_increment_ref_count(it_347->item);
            /*c*/ come_call_finalizer3(__result_obj__236,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__236;
        }
        it_347=it_347->next;
        i_348++;
    }
    memset(&default_value_349,0,sizeof(struct CVALUE*));
    __result_obj__237 = (struct CVALUE*)come_increment_ref_count(default_value_349);
    /*c*/ come_call_finalizer3(default_value_349,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__237,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__237;
}

static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_350;
int i_351;
struct CVALUE* __result_obj__238;
struct CVALUE* default_value_352;
struct CVALUE* __result_obj__239;
default_value_352 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_350=self->head;
    i_351=0;
    while(it_350!=((void*)0)) {
        if(        position==i_351) {
            __result_obj__238 = (struct CVALUE*)come_increment_ref_count(it_350->item);
            /*c*/ come_call_finalizer3(__result_obj__238,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__238;
        }
        it_350=it_350->next;
        i_351++;
    }
    memset(&default_value_352,0,sizeof(struct CVALUE*));
    __result_obj__239 = (struct CVALUE*)come_increment_ref_count(default_value_352);
    /*c*/ come_call_finalizer3(default_value_352,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__239,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__239;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value397 = (void*)0;
struct list_item$1sType$ph* litem_354;
struct sType* __dec_obj77;
void* __right_value398 = (void*)0;
struct list_item$1sType$ph* litem_355;
struct sType* __dec_obj78;
void* __right_value399 = (void*)0;
struct list_item$1sType$ph* litem_356;
struct sType* __dec_obj79;
struct list$1sType$ph* __result_obj__240;
    if(    self->len==0) {
        litem_354=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value397=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1111, "struct list_item$1sType$ph*"))));
        litem_354->prev=((void*)0);
        litem_354->next=((void*)0);
        __dec_obj77=litem_354->item,
        litem_354->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj77,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_354;
        self->head=litem_354;
    }
    else if(    self->len==1) {
        litem_355=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value398=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1121, "struct list_item$1sType$ph*"))));
        litem_355->prev=self->head;
        litem_355->next=((void*)0);
        __dec_obj78=litem_355->item,
        litem_355->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj78,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_355;
        self->head->next=litem_355;
    }
    else {
        litem_356=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value399=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1131, "struct list_item$1sType$ph*"))));
        litem_356->prev=self->tail;
        litem_356->next=((void*)0);
        __dec_obj79=litem_356->item,
        litem_356->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj79,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_356;
        self->tail=litem_356;
    }
    self->len++;
    __result_obj__240 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__240;
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_363;
unsigned int it_364;
struct sFun* __result_obj__241;
struct sFun* __result_obj__242;
struct sFun* __result_obj__243;
struct sFun* __result_obj__244;
    hash_363=string_get_hash_key(((char*)key))%self->size;
    it_364=hash_363;
    while((_Bool)1) {
        if(        self->item_existance[it_364]) {
            if(            string_equals(self->keys[it_364],key)) {
                __result_obj__241 = (struct sFun*)come_increment_ref_count(self->items[it_364]);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__241,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__241;
            }
            it_364++;
            if(            it_364>=self->size) {
                it_364=0;
            }
            else if(            it_364==hash_363) {
                __result_obj__242 = (struct sFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__242,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__242;
            }
        }
        else {
            __result_obj__243 = (struct sFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__243,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__243;
        }
    }
    __result_obj__244 = (struct sFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__244,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__244;
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_380;
int i_381;
struct sType* __result_obj__246;
struct sType* default_value_382;
struct sType* __result_obj__247;
default_value_382 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_380=self->head;
    i_381=0;
    while(it_380!=((void*)0)) {
        if(        position==i_381) {
            __result_obj__246 = (struct sType*)come_increment_ref_count(it_380->item);
            /*c*/ come_call_finalizer3(__result_obj__246,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__246;
        }
        it_380=it_380->next;
        i_381++;
    }
    memset(&default_value_382,0,sizeof(struct sType*));
    __result_obj__247 = (struct sType*)come_increment_ref_count(default_value_382);
    /*c*/ come_call_finalizer3(default_value_382,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__247,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__247;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_383;
int i_384;
struct sType* __result_obj__248;
struct sType* default_value_385;
struct sType* __result_obj__249;
default_value_385 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_383=self->head;
    i_384=0;
    while(it_383!=((void*)0)) {
        if(        position==i_384) {
            __result_obj__248 = (struct sType*)come_increment_ref_count(it_383->item);
            /*c*/ come_call_finalizer3(__result_obj__248,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__248;
        }
        it_383=it_383->next;
        i_384++;
    }
    memset(&default_value_385,0,sizeof(struct sType*));
    __result_obj__249 = (struct sType*)come_increment_ref_count(default_value_385);
    /*c*/ come_call_finalizer3(default_value_385,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__249,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__249;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements, struct sInfo* info){
void* __right_value438 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj90;
struct sTupleNode* __result_obj__251;
    ((struct sNodeBase*)(__right_value438=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value438,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj90=self->tuple_elements,
    self->tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(tuple_elements);
    /*b*/ come_call_finalizer3(__dec_obj90,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__251 = (struct sTupleNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sTupleNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(tuple_elements,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__251,sTupleNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__251;
}

char* sTupleNode_kind(struct sTupleNode* self){
void* __right_value439 = (void*)0;
char* __result_obj__252;
    __result_obj__252 = (char*)come_increment_ref_count(((char*)(__right_value439=__builtin_string("sTupleNode"))));
    (__right_value439 = come_decrement_ref_count(__right_value439, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__252 = come_decrement_ref_count(__result_obj__252, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__252;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements_394;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct list$1sType$ph* tuple_types_395;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct list$1CVALUE$ph* tuple_values_396;
int n_397;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_398;
struct tuple2$2char$phsNode$ph* it_401;
struct tuple2$2char$phsNode$ph* multiple_assign_var6 = (void*)0;
char* name_404=0;
struct sNode* node_405=0;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
_Bool _if_conditional7;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct sNode* value_node_406;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct sNode* exp_407;
_Bool Value_408;
_Bool __result_obj__259;
_Bool Value_409;
_Bool __result_obj__260;
void* __right_value450 = (void*)0;
struct CVALUE* come_value_410;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct sType* type_412;
char* __dec_obj95;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct sType* type_413;
struct list$1sType$ph* o2_saved_414;
struct sType* it_417;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct CVALUE* obj_value_420;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct buffer* num_string_421;
void* __right_value466 = (void*)0;
struct sType* type2_422;
void* __right_value467 = (void*)0;
char* type_name_423;
struct sType* any_type_424;
void* __right_value468 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var7 = (void*)0;
char* finalizer_name_425=0;
char* cloner_name_426=0;
char* get_hash_key_name_427=0;
char* equaler_name_428=0;
void* __right_value469 = (void*)0;
_Bool _if_conditional8;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
char* __dec_obj96;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
char* __dec_obj97;
void* __right_value474 = (void*)0;
struct sType* type3_429;
void* __right_value475 = (void*)0;
struct sType* __dec_obj98;
void* __right_value476 = (void*)0;
struct sType* obj_type_430;
char* fun_name_431;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var8 = (void*)0;
char* name_432=0;
struct sGenericsFun* generics_fun_433=0;
char* generics_fun_name_434;
void* __right_value479 = (void*)0;
struct sFun* fun_435;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
char* __dec_obj99;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var9 = (void*)0;
int come_exception_var_3_436=0;
char* Err_437=0;
_Bool _if_conditional9;
_Bool __result_obj__269;
void* __right_value484 = (void*)0;
struct sType* result_type_438;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct list$1CVALUE$ph* come_params_439;
void* __right_value487 = (void*)0;
_Bool _if_conditional10;
void* __right_value488 = (void*)0;
int i_440;
struct list$1CVALUE$ph* o2_saved_441;
struct CVALUE* it_442;
void* __right_value489 = (void*)0;
struct CVALUE* come_value_443;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
_Bool _if_conditional11;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct buffer* buf_444;
int j_445;
struct list$1CVALUE$ph* o2_saved_446;
struct CVALUE* it_447;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct CVALUE* come_value2_448;
void* __right_value497 = (void*)0;
char* __dec_obj100;
void* __right_value498 = (void*)0;
struct sType* __dec_obj101;
_Bool __result_obj__270;
    tuple_elements_394=self->tuple_elements;
    tuple_types_395=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "06str.c", 524, "struct list$1sType$ph*"))));
    tuple_values_396=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 525, "struct list$1CVALUE$ph*"))));
    n_397=0;
    for(    o2_saved_398=(tuple_elements_394),it_401=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_398));    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_398));    it_401=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_398))    ){
        multiple_assign_var6=it_401;
        name_404=(char*)come_increment_ref_count(multiple_assign_var6->v1);
        node_405=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
        if(        (_if_conditional7=(string_operator_equals(((char*)(__right_value445=node_405->kind(node_405->_protocol_obj))),"sWildCard"))),        (__right_value444 = come_decrement_ref_count(__right_value444, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value445 = come_decrement_ref_count(__right_value445, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional7) {
            value_node_406=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value446=xsprintf("Value"))),info));
            (__right_value446 = come_decrement_ref_count(__right_value446, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            exp_407=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_406),(char*)come_increment_ref_count(xsprintf("v%d",n_397+1)),info));
            Value_408=node_compile(exp_407,info);
            if(            !Value_408) {
                __result_obj__259 = (_Bool)0;
                ((value_node_406) ? value_node_406 = come_decrement_ref_count(value_node_406, ((struct sNode*)value_node_406)->finalize, ((struct sNode*)value_node_406)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((exp_407) ? exp_407 = come_decrement_ref_count(exp_407, ((struct sNode*)exp_407)->finalize, ((struct sNode*)exp_407)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (name_404 = come_decrement_ref_count(name_404, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_405) ? node_405 = come_decrement_ref_count(node_405, ((struct sNode*)node_405)->finalize, ((struct sNode*)node_405)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(tuple_types_395,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(tuple_values_396,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__259;
            }
            else {
            }
            ((value_node_406) ? value_node_406 = come_decrement_ref_count(value_node_406, ((struct sNode*)value_node_406)->finalize, ((struct sNode*)value_node_406)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp_407) ? exp_407 = come_decrement_ref_count(exp_407, ((struct sNode*)exp_407)->finalize, ((struct sNode*)exp_407)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            Value_409=node_compile(node_405,info);
            if(            !Value_409) {
                __result_obj__260 = (_Bool)0;
                (name_404 = come_decrement_ref_count(name_404, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_405) ? node_405 = come_decrement_ref_count(node_405, ((struct sNode*)node_405)->finalize, ((struct sNode*)node_405)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(tuple_types_395,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(tuple_values_396,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__260;
            }
            else {
            }
        }
        come_value_410=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(tuple_values_396,(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_410)));
        type_412=(struct sType*)come_increment_ref_count(sType_clone(come_value_410->type));
        __dec_obj95=type_412->mTupleName,
        type_412->mTupleName=(char*)come_increment_ref_count(name_404);
        __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        list$1sType$ph_push_back(tuple_types_395,(struct sType*)come_increment_ref_count(type_412));
        n_397++;
        (name_404 = come_decrement_ref_count(name_404, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_405) ? node_405 = come_decrement_ref_count(node_405, ((struct sNode*)node_405)->finalize, ((struct sNode*)node_405)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_410,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type_412,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    type_413=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 554, "struct sType*")),(char*)come_increment_ref_count(xsprintf("tuple%d",list$1sType$ph_length(tuple_types_395))),(_Bool)0,info));
    for(    o2_saved_414=(struct list$1sType$ph*)come_increment_ref_count((tuple_types_395)),it_417=list$1sType$ph_begin((o2_saved_414));    !list$1sType$ph_end((o2_saved_414));    it_417=list$1sType$ph_next((o2_saved_414))    ){
        list$1sType$ph_push_back(type_413->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value461=sType_clone(it_417))))));
        /*c*/ come_call_finalizer3(__right_value461,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_414,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    obj_value_420=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 560, "struct CVALUE*"))));
    num_string_421=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 562, "struct buffer*"))));
    buffer_append_str(num_string_421,"1");
    type2_422=(struct sType*)come_increment_ref_count(solve_generics(type_413,type_413,info,(_Bool)0));
    type_name_423=(char*)come_increment_ref_count(make_type_name_string(type2_422,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_424=(struct sType*)come_increment_ref_count(type2_422);
    any_type_424->mPointerNum=1;
    any_type_424->mHeap=(_Bool)1;
    multiple_assign_var7=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value468=create_vtable((struct sType*)come_increment_ref_count(any_type_424),info)));
    finalizer_name_425=(char*)come_increment_ref_count(multiple_assign_var7->v1);
    cloner_name_426=(char*)come_increment_ref_count(multiple_assign_var7->v2);
    get_hash_key_name_427=(char*)come_increment_ref_count(multiple_assign_var7->v3);
    equaler_name_428=(char*)come_increment_ref_count(multiple_assign_var7->v4);
    /*c*/ come_call_finalizer3(__right_value468,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    (_if_conditional8=(((struct sFun*)(__right_value469=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2"))))),    /*c*/ come_call_finalizer3(__right_value469,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional8) {
        __dec_obj96=obj_value_420->c_value,
        obj_value_420->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_423,type_name_423,((char*)(__right_value470=buffer_to_string(num_string_421))),info->sname,info->sline,type_name_423));
        __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value470 = come_decrement_ref_count(__right_value470, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj97=obj_value_420->c_value,
        obj_value_420->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_423,type_name_423,((char*)(__right_value472=buffer_to_string(num_string_421))),info->sname,info->sline,type_name_423));
        __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value472 = come_decrement_ref_count(__right_value472, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    type3_429=(struct sType*)come_increment_ref_count(sType_clone(type2_422));
    type3_429->mPointerNum++;
    type3_429->mHeap=(_Bool)1;
    type2_422->mHeap=(_Bool)1;
    __dec_obj98=obj_value_420->type,
    obj_value_420->type=(struct sType*)come_increment_ref_count(sType_clone(type2_422));
    /*b*/ come_call_finalizer3(__dec_obj98,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_420->type->mPointerNum++;
    obj_value_420->var=((void*)0);
    append_object_to_right_values2(obj_value_420,(struct sType*)come_increment_ref_count(type3_429),info,(_Bool)0,((void*)0),((void*)0));
    obj_type_430=(struct sType*)come_increment_ref_count(sType_clone(type2_422));
    fun_name_431="initialize";
    multiple_assign_var8=((struct tuple2$2char$phsGenericsFun$p*)(__right_value478=make_generics_function(obj_type_430,(char*)come_increment_ref_count(__builtin_string(fun_name_431)),info,(_Bool)1)));
    name_432=(char*)come_increment_ref_count(multiple_assign_var8->v1);
    generics_fun_433=multiple_assign_var8->v2;
    /*c*/ come_call_finalizer3(__right_value478,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    generics_fun_name_434=(char*)come_increment_ref_count(name_432);
    fun_435=((struct sFun*)(__right_value479=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_434,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value479,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun_435==((void*)0)) {
        __dec_obj99=generics_fun_name_434,
        generics_fun_name_434=(char*)come_increment_ref_count(create_method_name(obj_type_430,(_Bool)0,((char*)(__right_value480=__builtin_string(fun_name_431))),info,(_Bool)1));
        __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value480 = come_decrement_ref_count(__right_value480, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_435=((struct sFun*)(__right_value482=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_434,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value482,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        fun_435==((void*)0)) {
            multiple_assign_var9=((struct tuple2$2int$char$ph*)(__right_value483=err_msg(info,"function not found(%s) at method(%s)(2)",generics_fun_name_434,info->come_fun->mName)));
            come_exception_var_3_436=multiple_assign_var9->v1;
            Err_437=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            if(            (_if_conditional9=(Err_437)),            /*c*/ come_call_finalizer3(__right_value483,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional9) {
                __result_obj__269 = (_Bool)1;
                (Err_437 = come_decrement_ref_count(Err_437, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(tuple_types_395,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(tuple_values_396,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type_413,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_value_420,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(num_string_421,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type2_422,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (type_name_423 = come_decrement_ref_count(type_name_423, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(any_type_424,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (finalizer_name_425 = come_decrement_ref_count(finalizer_name_425, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (cloner_name_426 = come_decrement_ref_count(cloner_name_426, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (get_hash_key_name_427 = come_decrement_ref_count(get_hash_key_name_427, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (equaler_name_428 = come_decrement_ref_count(equaler_name_428, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(type3_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_type_430,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_432 = come_decrement_ref_count(name_432, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_434 = come_decrement_ref_count(generics_fun_name_434, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__269;
            }
            else {
            }
            (Err_437 = come_decrement_ref_count(Err_437, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    result_type_438=(struct sType*)come_increment_ref_count(sType_clone(fun_435->mResultType));
    result_type_438->mStatic=(_Bool)0;
    come_params_439=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 616, "struct list$1CVALUE$ph*"))));
    if(    (_if_conditional10=(((struct sType*)(__right_value487=list$1sType$ph_operator_load_element(fun_435->mParamTypes,0)))->mHeap&&obj_value_420->type->mHeap)),    /*c*/ come_call_finalizer3(__right_value487,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional10) {
        std_move(((struct sType*)(__right_value488=list$1sType$ph_operator_load_element(fun_435->mParamTypes,0))),obj_value_420->type,obj_value_420,info,(_Bool)1);
        /*c*/ come_call_finalizer3(__right_value488,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    list$1CVALUE$ph_push_back(come_params_439,(struct CVALUE*)come_increment_ref_count(obj_value_420));
    i_440=1;
    for(    o2_saved_441=(struct list$1CVALUE$ph*)come_increment_ref_count((tuple_values_396)),it_442=list$1CVALUE$ph_begin((o2_saved_441));    !list$1CVALUE$ph_end((o2_saved_441));    it_442=list$1CVALUE$ph_next((o2_saved_441))    ){
        come_value_443=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(it_442));
        if(        (_if_conditional11=(((struct sType*)(__right_value490=list$1sType$ph_operator_load_element(fun_435->mParamTypes,i_440)))&&((struct sType*)(__right_value491=list$1sType$ph_operator_load_element(fun_435->mParamTypes,i_440)))->mHeap&&come_value_443->type->mHeap)),        /*c*/ come_call_finalizer3(__right_value490,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        /*c*/ come_call_finalizer3(__right_value491,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional11) {
            std_move(((struct sType*)(__right_value492=list$1sType$ph_operator_load_element(fun_435->mParamTypes,i_440))),come_value_443->type,come_value_443,info,(_Bool)1);
            /*c*/ come_call_finalizer3(__right_value492,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1CVALUE$ph_push_back(come_params_439,(struct CVALUE*)come_increment_ref_count(come_value_443));
        i_440++;
        /*c*/ come_call_finalizer3(come_value_443,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_441,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buf_444=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 635, "struct buffer*"))));
    buffer_append_str(buf_444,generics_fun_name_434);
    buffer_append_str(buf_444,"(");
    j_445=0;
    for(    o2_saved_446=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_439)),it_447=list$1CVALUE$ph_begin((o2_saved_446));    !list$1CVALUE$ph_end((o2_saved_446));    it_447=list$1CVALUE$ph_next((o2_saved_446))    ){
        buffer_append_str(buf_444,it_447->c_value);
        if(        j_445!=list$1CVALUE$ph_length(come_params_439)-1) {
            buffer_append_str(buf_444,",");
        }
        j_445++;
    }
    /*c*/ come_call_finalizer3(o2_saved_446,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_444,")");
    come_value2_448=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 652, "struct CVALUE*"))));
    __dec_obj100=come_value2_448->c_value,
    come_value2_448->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_444));
    __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj101=come_value2_448->type,
    come_value2_448->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_438));
    /*b*/ come_call_finalizer3(__dec_obj101,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_448->type->mStatic=(_Bool)0;
    come_value2_448->var=((void*)0);
    if(    result_type_438->mHeap) {
        append_object_to_right_values2(come_value2_448,(struct sType*)come_increment_ref_count(result_type_438),info,(_Bool)0,((void*)0),((void*)0));
    }
    add_come_last_code(info,"%s",come_value2_448->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_448));
    __result_obj__270 = (_Bool)1;
    /*c*/ come_call_finalizer3(tuple_types_395,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(tuple_values_396,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_413,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_value_420,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(num_string_421,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_422,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_423 = come_decrement_ref_count(type_name_423, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(any_type_424,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (finalizer_name_425 = come_decrement_ref_count(finalizer_name_425, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_426 = come_decrement_ref_count(cloner_name_426, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_427 = come_decrement_ref_count(get_hash_key_name_427, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_428 = come_decrement_ref_count(equaler_name_428, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type3_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_type_430,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (name_432 = come_decrement_ref_count(name_432, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_434 = come_decrement_ref_count(generics_fun_name_434, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_438,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_439,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_444,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_448,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__270;
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_392;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_393;
    it_392=self->head;
    while(it_392!=((void*)0)) {
        prev_it_393=it_392;
        it_392=it_392->next;
        /*c*/ come_call_finalizer3(prev_it_393,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void sTupleNode_finalize(struct sTupleNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->tuple_elements,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_399;
struct tuple2$2char$phsNode$ph* __result_obj__253;
struct tuple2$2char$phsNode$ph* __result_obj__254;
struct tuple2$2char$phsNode$ph* result_400;
struct tuple2$2char$phsNode$ph* __result_obj__255;
result_399 = (void*)0;
result_400 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_399,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__253 = result_399;
        return __result_obj__253;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__254 = self->it->item;
        return __result_obj__254;
    }
    memset(&result_400,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__255 = result_400;
    return __result_obj__255;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_402;
struct tuple2$2char$phsNode$ph* __result_obj__256;
struct tuple2$2char$phsNode$ph* __result_obj__257;
struct tuple2$2char$phsNode$ph* result_403;
struct tuple2$2char$phsNode$ph* __result_obj__258;
result_402 = (void*)0;
result_403 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_402,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__256 = result_402;
        return __result_obj__256;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__257 = self->it->item;
        return __result_obj__257;
    }
    memset(&result_403,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__258 = result_403;
    return __result_obj__258;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
struct CVALUE* __result_obj__261;
void* __right_value451 = (void*)0;
struct CVALUE* result_411;
void* __right_value452 = (void*)0;
char* __dec_obj91;
void* __right_value453 = (void*)0;
struct sType* __dec_obj92;
void* __right_value454 = (void*)0;
char* __dec_obj93;
void* __right_value455 = (void*)0;
char* __dec_obj94;
struct CVALUE* __result_obj__262;
    if(    self==(void*)0) {
        __result_obj__261 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__261,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__261;
    }
    result_411=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj91=result_411->c_value,
        result_411->c_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value, "CVALUE_clone", 4, "char*"));
        __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj92=result_411->type,
        result_411->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj92,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_411->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_411->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj93=result_411->c_value_without_right_value_objects,
        result_411->c_value_without_right_value_objects=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_right_value_objects, "CVALUE_clone", 8, "char*"));
        __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj94=result_411->c_value_without_cast_object_value,
        result_411->c_value_without_cast_object_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_cast_object_value, "CVALUE_clone", 9, "char*"));
        __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__262 = (struct CVALUE*)come_increment_ref_count(result_411);
    /*c*/ come_call_finalizer3(result_411,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__262,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__262;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_415;
struct sType* __result_obj__263;
struct sType* __result_obj__264;
struct sType* result_416;
struct sType* __result_obj__265;
result_415 = (void*)0;
result_416 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_415,0,sizeof(struct sType*));
        __result_obj__263 = result_415;
        return __result_obj__263;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__264 = self->it->item;
        return __result_obj__264;
    }
    memset(&result_416,0,sizeof(struct sType*));
    __result_obj__265 = result_416;
    return __result_obj__265;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_418;
struct sType* __result_obj__266;
struct sType* __result_obj__267;
struct sType* result_419;
struct sType* __result_obj__268;
result_418 = (void*)0;
result_419 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_418,0,sizeof(struct sType*));
        __result_obj__266 = result_418;
        return __result_obj__266;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__267 = self->it->item;
        return __result_obj__267;
    }
    memset(&result_419,0,sizeof(struct sType*));
    __result_obj__268 = result_419;
    return __result_obj__268;
}

struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct list$1sNode$ph* tuple_elements, struct sInfo* info){
void* __right_value499 = (void*)0;
struct list$1sNode$ph* __dec_obj102;
struct sSomeNode* __result_obj__271;
    ((struct sNodeBase*)(__right_value499=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value499,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj102=self->tuple_elements,
    self->tuple_elements=(struct list$1sNode$ph*)come_increment_ref_count(tuple_elements);
    /*b*/ come_call_finalizer3(__dec_obj102,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__271 = (struct sSomeNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sSomeNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(tuple_elements,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__271,sSomeNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__271;
}

char* sSomeNode_kind(struct sSomeNode* self){
void* __right_value500 = (void*)0;
char* __result_obj__272;
    __result_obj__272 = (char*)come_increment_ref_count(((char*)(__right_value500=__builtin_string("sSomeNode"))));
    (__right_value500 = come_decrement_ref_count(__right_value500, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__272 = come_decrement_ref_count(__result_obj__272, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__272;
}

_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info){
struct list$1sNode$ph* tuple_elements_449;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct list$1sType$ph* tuple_types_450;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct list$1CVALUE$ph* tuple_values_451;
struct list$1sNode$ph* o2_saved_452;
struct sNode* it_453;
_Bool Value_454;
_Bool __result_obj__273;
void* __right_value505 = (void*)0;
struct CVALUE* come_value_455;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct sType* type_456;
struct list$1sType$ph* o2_saved_457;
struct sType* it_458;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct CVALUE* obj_value_459;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct buffer* num_string_460;
void* __right_value516 = (void*)0;
struct sType* type2_461;
void* __right_value517 = (void*)0;
char* type_name_462;
void* __right_value518 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var10 = (void*)0;
char* finalizer_name_463=0;
char* cloner_name_464=0;
char* get_hash_key_name_465=0;
char* equaler_name_466=0;
void* __right_value519 = (void*)0;
_Bool _if_conditional12;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
char* __dec_obj103;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
char* __dec_obj104;
void* __right_value524 = (void*)0;
struct sType* type3_467;
void* __right_value525 = (void*)0;
struct sType* __dec_obj105;
void* __right_value526 = (void*)0;
struct sType* obj_type_468;
char* fun_name_469;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var11 = (void*)0;
char* name_470=0;
struct sGenericsFun* generics_fun_471=0;
char* generics_fun_name_472;
void* __right_value529 = (void*)0;
struct sFun* fun_473;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
char* __dec_obj106;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_4_474=0;
char* Err_475=0;
_Bool _if_conditional13;
_Bool __result_obj__274;
void* __right_value534 = (void*)0;
struct sType* result_type_476;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct list$1CVALUE$ph* come_params_477;
void* __right_value537 = (void*)0;
_Bool _if_conditional14;
void* __right_value538 = (void*)0;
int i_478;
struct list$1CVALUE$ph* o2_saved_479;
struct CVALUE* it_480;
void* __right_value539 = (void*)0;
struct CVALUE* come_value_481;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
_Bool _if_conditional15;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct buffer* buf_482;
int j_483;
struct list$1CVALUE$ph* o2_saved_484;
struct CVALUE* it_485;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct CVALUE* come_value2_486;
void* __right_value547 = (void*)0;
char* __dec_obj107;
void* __right_value548 = (void*)0;
struct sType* __dec_obj108;
_Bool __result_obj__275;
    tuple_elements_449=self->tuple_elements;
    tuple_types_450=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "06str.c", 689, "struct list$1sType$ph*"))));
    tuple_values_451=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 690, "struct list$1CVALUE$ph*"))));
    for(    o2_saved_452=(tuple_elements_449),it_453=list$1sNode$ph_begin((o2_saved_452));    !list$1sNode$ph_end((o2_saved_452));    it_453=list$1sNode$ph_next((o2_saved_452))    ){
        Value_454=node_compile(it_453,info);
        if(        !Value_454) {
            __result_obj__273 = (_Bool)0;
            /*c*/ come_call_finalizer3(tuple_types_450,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(tuple_values_451,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__273;
        }
        else {
        }
        come_value_455=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(tuple_values_451,(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_455)));
        list$1sType$ph_push_back(tuple_types_450,(struct sType*)come_increment_ref_count(sType_clone(come_value_455->type)));
        /*c*/ come_call_finalizer3(come_value_455,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    type_456=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 703, "struct sType*")),(char*)come_increment_ref_count(xsprintf("tuple%d",list$1sType$ph_length(tuple_types_450))),(_Bool)0,info));
    for(    o2_saved_457=(struct list$1sType$ph*)come_increment_ref_count((tuple_types_450)),it_458=list$1sType$ph_begin((o2_saved_457));    !list$1sType$ph_end((o2_saved_457));    it_458=list$1sType$ph_next((o2_saved_457))    ){
        list$1sType$ph_push_back(type_456->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value511=sType_clone(it_458))))));
        /*c*/ come_call_finalizer3(__right_value511,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_457,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    obj_value_459=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 709, "struct CVALUE*"))));
    num_string_460=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 711, "struct buffer*"))));
    buffer_append_str(num_string_460,"1");
    type2_461=(struct sType*)come_increment_ref_count(solve_generics(type_456,type_456,info,(_Bool)0));
    type_name_462=(char*)come_increment_ref_count(make_type_name_string(type2_461,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    multiple_assign_var10=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value518=create_vtable((struct sType*)come_increment_ref_count(type2_461),info)));
    finalizer_name_463=(char*)come_increment_ref_count(multiple_assign_var10->v1);
    cloner_name_464=(char*)come_increment_ref_count(multiple_assign_var10->v2);
    get_hash_key_name_465=(char*)come_increment_ref_count(multiple_assign_var10->v3);
    equaler_name_466=(char*)come_increment_ref_count(multiple_assign_var10->v4);
    /*c*/ come_call_finalizer3(__right_value518,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    (_if_conditional12=(((struct sFun*)(__right_value519=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2"))))),    /*c*/ come_call_finalizer3(__right_value519,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional12) {
        __dec_obj103=obj_value_459->c_value,
        obj_value_459->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_462,type_name_462,((char*)(__right_value520=buffer_to_string(num_string_460))),info->sname,info->sline,type_name_462));
        __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value520 = come_decrement_ref_count(__right_value520, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj104=obj_value_459->c_value,
        obj_value_459->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_462,type_name_462,((char*)(__right_value522=buffer_to_string(num_string_460))),info->sname,info->sline,type_name_462));
        __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value522 = come_decrement_ref_count(__right_value522, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    type3_467=(struct sType*)come_increment_ref_count(sType_clone(type2_461));
    type3_467->mPointerNum++;
    type3_467->mHeap=(_Bool)1;
    type2_461->mHeap=(_Bool)1;
    __dec_obj105=obj_value_459->type,
    obj_value_459->type=(struct sType*)come_increment_ref_count(sType_clone(type2_461));
    /*b*/ come_call_finalizer3(__dec_obj105,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_459->type->mPointerNum++;
    obj_value_459->var=((void*)0);
    append_object_to_right_values2(obj_value_459,(struct sType*)come_increment_ref_count(type3_467),info,(_Bool)0,((void*)0),((void*)0));
    obj_type_468=(struct sType*)come_increment_ref_count(sType_clone(type2_461));
    fun_name_469="initialize";
    multiple_assign_var11=((struct tuple2$2char$phsGenericsFun$p*)(__right_value528=make_generics_function(obj_type_468,(char*)come_increment_ref_count(__builtin_string(fun_name_469)),info,(_Bool)1)));
    name_470=(char*)come_increment_ref_count(multiple_assign_var11->v1);
    generics_fun_471=multiple_assign_var11->v2;
    /*c*/ come_call_finalizer3(__right_value528,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    generics_fun_name_472=(char*)come_increment_ref_count(name_470);
    fun_473=((struct sFun*)(__right_value529=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_472,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value529,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun_473==((void*)0)) {
        __dec_obj106=generics_fun_name_472,
        generics_fun_name_472=(char*)come_increment_ref_count(create_method_name(obj_type_468,(_Bool)0,((char*)(__right_value530=__builtin_string(fun_name_469))),info,(_Bool)1));
        __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value530 = come_decrement_ref_count(__right_value530, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_473=((struct sFun*)(__right_value532=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_472,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value532,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        fun_473==((void*)0)) {
            multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value533=err_msg(info,"function not found(%s) at method(%s)(2)",generics_fun_name_472,info->come_fun->mName)));
            come_exception_var_4_474=multiple_assign_var12->v1;
            Err_475=(char*)come_increment_ref_count(multiple_assign_var12->v2);
            if(            (_if_conditional13=(Err_475)),            /*c*/ come_call_finalizer3(__right_value533,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional13) {
                __result_obj__274 = (_Bool)1;
                (Err_475 = come_decrement_ref_count(Err_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(tuple_types_450,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(tuple_values_451,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type_456,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_value_459,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(num_string_460,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type2_461,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (type_name_462 = come_decrement_ref_count(type_name_462, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (finalizer_name_463 = come_decrement_ref_count(finalizer_name_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (cloner_name_464 = come_decrement_ref_count(cloner_name_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (get_hash_key_name_465 = come_decrement_ref_count(get_hash_key_name_465, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (equaler_name_466 = come_decrement_ref_count(equaler_name_466, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(type3_467,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_type_468,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_470 = come_decrement_ref_count(name_470, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_472 = come_decrement_ref_count(generics_fun_name_472, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__274;
            }
            else {
            }
            (Err_475 = come_decrement_ref_count(Err_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    result_type_476=(struct sType*)come_increment_ref_count(sType_clone(fun_473->mResultType));
    result_type_476->mStatic=(_Bool)0;
    come_params_477=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 761, "struct list$1CVALUE$ph*"))));
    if(    (_if_conditional14=(((struct sType*)(__right_value537=list$1sType$ph_operator_load_element(fun_473->mParamTypes,0)))->mHeap&&obj_value_459->type->mHeap)),    /*c*/ come_call_finalizer3(__right_value537,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional14) {
        std_move(((struct sType*)(__right_value538=list$1sType$ph_operator_load_element(fun_473->mParamTypes,0))),obj_value_459->type,obj_value_459,info,(_Bool)1);
        /*c*/ come_call_finalizer3(__right_value538,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    list$1CVALUE$ph_push_back(come_params_477,(struct CVALUE*)come_increment_ref_count(obj_value_459));
    i_478=1;
    for(    o2_saved_479=(struct list$1CVALUE$ph*)come_increment_ref_count((tuple_values_451)),it_480=list$1CVALUE$ph_begin((o2_saved_479));    !list$1CVALUE$ph_end((o2_saved_479));    it_480=list$1CVALUE$ph_next((o2_saved_479))    ){
        come_value_481=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(it_480));
        if(        (_if_conditional15=(((struct sType*)(__right_value540=list$1sType$ph_operator_load_element(fun_473->mParamTypes,i_478)))&&((struct sType*)(__right_value541=list$1sType$ph_operator_load_element(fun_473->mParamTypes,i_478)))->mHeap&&come_value_481->type->mHeap)),        /*c*/ come_call_finalizer3(__right_value540,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        /*c*/ come_call_finalizer3(__right_value541,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional15) {
            std_move(((struct sType*)(__right_value542=list$1sType$ph_operator_load_element(fun_473->mParamTypes,i_478))),come_value_481->type,come_value_481,info,(_Bool)1);
            /*c*/ come_call_finalizer3(__right_value542,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1CVALUE$ph_push_back(come_params_477,(struct CVALUE*)come_increment_ref_count(come_value_481));
        i_478++;
        /*c*/ come_call_finalizer3(come_value_481,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_479,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buf_482=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 780, "struct buffer*"))));
    buffer_append_str(buf_482,generics_fun_name_472);
    buffer_append_str(buf_482,"(");
    j_483=0;
    for(    o2_saved_484=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_477)),it_485=list$1CVALUE$ph_begin((o2_saved_484));    !list$1CVALUE$ph_end((o2_saved_484));    it_485=list$1CVALUE$ph_next((o2_saved_484))    ){
        buffer_append_str(buf_482,it_485->c_value);
        if(        j_483!=list$1CVALUE$ph_length(come_params_477)-1) {
            buffer_append_str(buf_482,",");
        }
        j_483++;
    }
    /*c*/ come_call_finalizer3(o2_saved_484,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_482,")");
    come_value2_486=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 797, "struct CVALUE*"))));
    __dec_obj107=come_value2_486->c_value,
    come_value2_486->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_482));
    __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj108=come_value2_486->type,
    come_value2_486->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_476));
    /*b*/ come_call_finalizer3(__dec_obj108,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_486->type->mStatic=(_Bool)0;
    come_value2_486->var=((void*)0);
    if(    result_type_476->mHeap) {
        append_object_to_right_values2(come_value2_486,(struct sType*)come_increment_ref_count(result_type_476),info,(_Bool)0,((void*)0),((void*)0));
    }
    add_come_last_code(info,"%s",come_value2_486->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_486));
    __result_obj__275 = (_Bool)1;
    /*c*/ come_call_finalizer3(tuple_types_450,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(tuple_values_451,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_456,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_value_459,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(num_string_460,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_461,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_462 = come_decrement_ref_count(type_name_462, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (finalizer_name_463 = come_decrement_ref_count(finalizer_name_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_464 = come_decrement_ref_count(cloner_name_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_465 = come_decrement_ref_count(get_hash_key_name_465, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_466 = come_decrement_ref_count(equaler_name_466, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type3_467,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_type_468,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (name_470 = come_decrement_ref_count(name_470, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_472 = come_decrement_ref_count(generics_fun_name_472, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_476,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_477,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_482,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_486,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__275;
}

static void sSomeNode_finalize(struct sSomeNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->tuple_elements,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sNullReturnValue* sNullReturnValue_initialize(struct sNullReturnValue* self, struct sInfo* info){
void* __right_value549 = (void*)0;
struct sNullReturnValue* __result_obj__276;
    ((struct sNodeBase*)(__right_value549=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value549,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__276 = (struct sNullReturnValue*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNullReturnValue_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__276,sNullReturnValue_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__276;
}

char* sNullReturnValue_kind(struct sNullReturnValue* self){
void* __right_value550 = (void*)0;
char* __result_obj__277;
    __result_obj__277 = (char*)come_increment_ref_count(((char*)(__right_value550=__builtin_string("sNullReturnValue"))));
    (__right_value550 = come_decrement_ref_count(__right_value550, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__277 = come_decrement_ref_count(__result_obj__277, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__277;
}

_Bool sNullReturnValue_compile(struct sNullReturnValue* self, struct sInfo* info){
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct CVALUE* come_value_487;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct buffer* buf_488;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
char* var_name_490;
void* __right_value557 = (void*)0;
struct sType* result_type_491;
void* __right_value558 = (void*)0;
struct sType* result_type2_492;
struct sType* left_type_493;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct CVALUE* come_value2_494;
char* __dec_obj109;
struct sType* __dec_obj110;
    if(    info->come_fun) {
        come_value_487=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 832, "struct CVALUE*"))));
        buf_488=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 834, "struct buffer*"))));
        static int num_489=0;
        num_489++;
        var_name_490=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value555=int_to_string(num_489)))));
        (__right_value555 = come_decrement_ref_count(__right_value555, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        result_type_491=(struct sType*)come_increment_ref_count(sType_clone(info->come_fun->mResultType));
        result_type2_492=(struct sType*)come_increment_ref_count(solve_generics(result_type_491,info->generics_type,info,(_Bool)0));
        left_type_493=(struct sType*)come_increment_ref_count(result_type2_492);
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value559=make_define_var(left_type_493,var_name_490,(_Bool)0,info))));
        (__right_value559 = come_decrement_ref_count(__right_value559, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_490,((char*)(__right_value560=make_type_name_string(left_type_493,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        (__right_value560 = come_decrement_ref_count(__right_value560, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_value2_494=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 850, "struct CVALUE*"))));
        __dec_obj109=come_value2_494->c_value,
        come_value2_494->c_value=(char*)come_increment_ref_count(var_name_490);
        __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj110=come_value2_494->type,
        come_value2_494->type=(struct sType*)come_increment_ref_count(result_type2_492);
        /*b*/ come_call_finalizer3(__dec_obj110,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_494->type->mStatic=(_Bool)0;
        come_value2_494->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_494));
        /*c*/ come_call_finalizer3(come_value_487,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_488,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_490 = come_decrement_ref_count(var_name_490, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_491,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type2_492,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(left_type_493,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value2_494,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    return (_Bool)1;
}

static void sNullReturnValue_finalize(struct sNullReturnValue* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNode* create_null_return_value(struct sInfo* info){
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct sNode* _inf_value2;
struct sNullReturnValue* _inf_obj_value2;
void* __right_value567 = (void*)0;
struct sNode* __result_obj__280;
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 867, "struct sNode");
    _inf_obj_value2=(struct sNullReturnValue*)come_increment_ref_count(((struct sNullReturnValue*)(__right_value564=sNullReturnValue_initialize((struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc_v2(1, sizeof(struct sNullReturnValue)*(1), "06str.c", 867, "struct sNullReturnValue*")),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sNullReturnValue_finalize;
    _inf_value2->clone=(void*)sNullReturnValue_clone;
    _inf_value2->compile=(void*)sNullReturnValue_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sNullReturnValue_kind;
    __result_obj__280 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value567=_inf_value2)));
    /*c*/ come_call_finalizer3(__right_value564,sNullReturnValue_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value567) ? __right_value567 = come_decrement_ref_count(__right_value567, ((struct sNode*)__right_value567)->finalize, ((struct sNode*)__right_value567)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__280) ? __result_obj__280 = come_decrement_ref_count(__result_obj__280, ((struct sNode*)__result_obj__280)->finalize, ((struct sNode*)__result_obj__280)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__280;
}

static struct sNullReturnValue* sNullReturnValue_clone(struct sNullReturnValue* self){
struct sNullReturnValue* __result_obj__278;
void* __right_value565 = (void*)0;
struct sNullReturnValue* result_495;
void* __right_value566 = (void*)0;
char* __dec_obj111;
struct sNullReturnValue* __result_obj__279;
    if(    self==(void*)0) {
        __result_obj__278 = (void*)0;
        return __result_obj__278;
    }
    result_495=(struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc_v2(1, sizeof(struct sNullReturnValue)*(1), "sNullReturnValue_clone", 3, "struct sNullReturnValue*"));
    if(    self!=((void*)0)) {
        result_495->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj111=result_495->sname,
        result_495->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNullReturnValue_clone", 5, "char*"));
        __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_495->sline_real=self->sline_real;
    }
    __result_obj__279 = result_495;
    /*c*/ come_call_finalizer3(result_495,sNullReturnValue_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__279;
}

struct sNullReturnValueOfException* sNullReturnValueOfException_initialize(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __right_value568 = (void*)0;
struct sNullReturnValueOfException* __result_obj__281;
    ((struct sNodeBase*)(__right_value568=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value568,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__281 = (struct sNullReturnValueOfException*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNullReturnValueOfException_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__281,sNullReturnValueOfException_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__281;
}

char* sNullReturnValueOfException_kind(struct sNullReturnValueOfException* self){
void* __right_value569 = (void*)0;
char* __result_obj__282;
    __result_obj__282 = (char*)come_increment_ref_count(((char*)(__right_value569=__builtin_string("sNullReturnValue"))));
    (__right_value569 = come_decrement_ref_count(__right_value569, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__282 = come_decrement_ref_count(__result_obj__282, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__282;
}

_Bool sNullReturnValueOfException_compile(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct CVALUE* come_value_496;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct buffer* buf_497;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
char* var_name_499;
void* __right_value576 = (void*)0;
struct sType* result_type_500;
void* __right_value577 = (void*)0;
struct sType* result_type2_501;
struct sType* __dec_obj112;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct sType* left_type_502;
void* __right_value580 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var13 = (void*)0;
int come_exception_var_5_503=0;
char* Err_504=0;
_Bool _if_conditional16;
_Bool __result_obj__283;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct CVALUE* come_value2_505;
char* __dec_obj113;
struct sType* __dec_obj114;
    if(    info->come_fun) {
        come_value_496=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 885, "struct CVALUE*"))));
        buf_497=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 887, "struct buffer*"))));
        static int num_498=0;
        num_498++;
        var_name_499=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value574=int_to_string(num_498)))));
        (__right_value574 = come_decrement_ref_count(__right_value574, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        result_type_500=(struct sType*)come_increment_ref_count(sType_clone(info->come_fun->mResultType));
        result_type2_501=(struct sType*)come_increment_ref_count(solve_generics(result_type_500,info->generics_type,info,(_Bool)0));
        if(        result_type2_501->mNoSolvedGenericsType) {
            __dec_obj112=result_type2_501,
            result_type2_501=(struct sType*)come_increment_ref_count(result_type2_501->mNoSolvedGenericsType);
            /*b*/ come_call_finalizer3(__dec_obj112,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        left_type_502=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value578=list$1sType$ph_operator_load_element(result_type2_501->mGenericsTypes,0)))));
        /*c*/ come_call_finalizer3(__right_value578,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        left_type_502==((void*)0)&&!result_type2_501->mException) {
            multiple_assign_var13=((struct tuple2$2int$char$ph*)(__right_value580=err_msg(info,"function is not exception type")));
            come_exception_var_5_503=multiple_assign_var13->v1;
            Err_504=(char*)come_increment_ref_count(multiple_assign_var13->v2);
            if(            (_if_conditional16=(Err_504)),            /*c*/ come_call_finalizer3(__right_value580,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional16) {
                __result_obj__283 = (_Bool)1;
                (Err_504 = come_decrement_ref_count(Err_504, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(come_value_496,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(buf_497,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (var_name_499 = come_decrement_ref_count(var_name_499, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_500,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type2_501,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_502,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__283;
            }
            else {
            }
            (Err_504 = come_decrement_ref_count(Err_504, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value581=make_define_var(left_type_502,var_name_499,(_Bool)0,info))));
        (__right_value581 = come_decrement_ref_count(__right_value581, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_499,((char*)(__right_value582=make_type_name_string(left_type_502,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        (__right_value582 = come_decrement_ref_count(__right_value582, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_value2_505=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 913, "struct CVALUE*"))));
        __dec_obj113=come_value2_505->c_value,
        come_value2_505->c_value=(char*)come_increment_ref_count(var_name_499);
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj114=come_value2_505->type,
        come_value2_505->type=(struct sType*)come_increment_ref_count(left_type_502);
        /*b*/ come_call_finalizer3(__dec_obj114,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_505->type->mStatic=(_Bool)0;
        come_value2_505->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_505));
        /*c*/ come_call_finalizer3(come_value_496,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_497,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_499 = come_decrement_ref_count(var_name_499, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_500,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type2_501,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(left_type_502,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value2_505,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    return (_Bool)1;
}

static void sNullReturnValueOfException_finalize(struct sNullReturnValueOfException* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNode* create_null_return_value_of_exception(struct sInfo* info){
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct sNode* _inf_value3;
struct sNullReturnValueOfException* _inf_obj_value3;
void* __right_value589 = (void*)0;
struct sNode* __result_obj__286;
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 930, "struct sNode");
    _inf_obj_value3=(struct sNullReturnValueOfException*)come_increment_ref_count(((struct sNullReturnValueOfException*)(__right_value586=sNullReturnValueOfException_initialize((struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc_v2(1, sizeof(struct sNullReturnValueOfException)*(1), "06str.c", 930, "struct sNullReturnValueOfException*")),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sNullReturnValueOfException_finalize;
    _inf_value3->clone=(void*)sNullReturnValueOfException_clone;
    _inf_value3->compile=(void*)sNullReturnValueOfException_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sNullReturnValueOfException_kind;
    __result_obj__286 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value589=_inf_value3)));
    /*c*/ come_call_finalizer3(__right_value586,sNullReturnValueOfException_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value589) ? __right_value589 = come_decrement_ref_count(__right_value589, ((struct sNode*)__right_value589)->finalize, ((struct sNode*)__right_value589)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__286) ? __result_obj__286 = come_decrement_ref_count(__result_obj__286, ((struct sNode*)__result_obj__286)->finalize, ((struct sNode*)__result_obj__286)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__286;
}

static struct sNullReturnValueOfException* sNullReturnValueOfException_clone(struct sNullReturnValueOfException* self){
struct sNullReturnValueOfException* __result_obj__284;
void* __right_value587 = (void*)0;
struct sNullReturnValueOfException* result_506;
void* __right_value588 = (void*)0;
char* __dec_obj115;
struct sNullReturnValueOfException* __result_obj__285;
    if(    self==(void*)0) {
        __result_obj__284 = (void*)0;
        return __result_obj__284;
    }
    result_506=(struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc_v2(1, sizeof(struct sNullReturnValueOfException)*(1), "sNullReturnValueOfException_clone", 3, "struct sNullReturnValueOfException*"));
    if(    self!=((void*)0)) {
        result_506->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj115=result_506->sname,
        result_506->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNullReturnValueOfException_clone", 5, "char*"));
        __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_506->sline_real=self->sline_real;
    }
    __result_obj__285 = result_506;
    /*c*/ come_call_finalizer3(result_506,sNullReturnValueOfException_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__285;
}

struct sNullValue* sNullValue_initialize(struct sNullValue* self, struct sType* type, struct sInfo* info){
void* __right_value590 = (void*)0;
struct sType* __dec_obj116;
struct sNullValue* __result_obj__287;
    ((struct sNodeBase*)(__right_value590=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value590,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj116=self->type,
    self->type=(struct sType*)come_increment_ref_count(type);
    /*b*/ come_call_finalizer3(__dec_obj116,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__287 = (struct sNullValue*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNullValue_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__287,sNullValue_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__287;
}

char* sNullValue_kind(struct sNullValue* self){
void* __right_value591 = (void*)0;
char* __result_obj__288;
    __result_obj__288 = (char*)come_increment_ref_count(((char*)(__right_value591=__builtin_string("sNullValue"))));
    (__right_value591 = come_decrement_ref_count(__right_value591, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__288 = come_decrement_ref_count(__result_obj__288, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__288;
}

_Bool sNullValue_compile(struct sNullValue* self, struct sInfo* info){
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct CVALUE* come_value_507;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
struct buffer* buf_508;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
char* var_name_510;
struct sType* left_type_511;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct CVALUE* come_value2_512;
char* __dec_obj117;
struct sType* __dec_obj118;
_Bool __result_obj__289;
    come_value_507=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 949, "struct CVALUE*"))));
    buf_508=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 951, "struct buffer*"))));
    static int num_509=0;
    num_509++;
    var_name_510=(char*)come_increment_ref_count(xsprintf("__null_value2_\%s",((char*)(__right_value596=int_to_string(num_509)))));
    (__right_value596 = come_decrement_ref_count(__right_value596, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    left_type_511=(struct sType*)come_increment_ref_count(self->type);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value598=make_define_var(left_type_511,var_name_510,(_Bool)0,info))));
    (__right_value598 = come_decrement_ref_count(__right_value598, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_510,((char*)(__right_value599=make_type_name_string(left_type_511,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
    (__right_value599 = come_decrement_ref_count(__right_value599, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_value2_512=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 963, "struct CVALUE*"))));
    __dec_obj117=come_value2_512->c_value,
    come_value2_512->c_value=(char*)come_increment_ref_count(var_name_510);
    __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj118=come_value2_512->type,
    come_value2_512->type=(struct sType*)come_increment_ref_count(self->type);
    /*b*/ come_call_finalizer3(__dec_obj118,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_512->type->mStatic=(_Bool)0;
    come_value2_512->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_512));
    __result_obj__289 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_507,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_508,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name_510 = come_decrement_ref_count(var_name_510, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(left_type_511,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_512,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__289;
}

static void sNullValue_finalize(struct sNullValue* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sNode* create_null_value(struct sType* type, struct sInfo* info){
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
struct sNode* _inf_value4;
struct sNullValue* _inf_obj_value4;
void* __right_value607 = (void*)0;
struct sNode* __result_obj__292;
    _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 979, "struct sNode");
    _inf_obj_value4=(struct sNullValue*)come_increment_ref_count(((struct sNullValue*)(__right_value603=sNullValue_initialize((struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc_v2(1, sizeof(struct sNullValue)*(1), "06str.c", 979, "struct sNullValue*")),(struct sType*)come_increment_ref_count(type),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sNullValue_finalize;
    _inf_value4->clone=(void*)sNullValue_clone;
    _inf_value4->compile=(void*)sNullValue_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sNullValue_kind;
    __result_obj__292 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value607=_inf_value4)));
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value603,sNullValue_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value607) ? __right_value607 = come_decrement_ref_count(__right_value607, ((struct sNode*)__right_value607)->finalize, ((struct sNode*)__right_value607)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__292) ? __result_obj__292 = come_decrement_ref_count(__result_obj__292, ((struct sNode*)__result_obj__292)->finalize, ((struct sNode*)__result_obj__292)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__292;
}

static struct sNullValue* sNullValue_clone(struct sNullValue* self){
struct sNullValue* __result_obj__290;
void* __right_value604 = (void*)0;
struct sNullValue* result_513;
void* __right_value605 = (void*)0;
char* __dec_obj119;
void* __right_value606 = (void*)0;
struct sType* __dec_obj120;
struct sNullValue* __result_obj__291;
    if(    self==(void*)0) {
        __result_obj__290 = (void*)0;
        return __result_obj__290;
    }
    result_513=(struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc_v2(1, sizeof(struct sNullValue)*(1), "sNullValue_clone", 3, "struct sNullValue*"));
    if(    self!=((void*)0)) {
        result_513->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj119=result_513->sname,
        result_513->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNullValue_clone", 5, "char*"));
        __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_513->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj120=result_513->type,
        result_513->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj120,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__291 = result_513;
    /*c*/ come_call_finalizer3(result_513,sNullValue_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__291;
}

struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct list$1sNode$ph* tuple_elements, struct sInfo* info){
void* __right_value608 = (void*)0;
struct list$1sNode$ph* __dec_obj121;
struct sNoneNode* __result_obj__293;
    ((struct sNodeBase*)(__right_value608=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value608,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj121=self->tuple_elements,
    self->tuple_elements=(struct list$1sNode$ph*)come_increment_ref_count(tuple_elements);
    /*b*/ come_call_finalizer3(__dec_obj121,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__293 = (struct sNoneNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNoneNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(tuple_elements,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__293,sNoneNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__293;
}

char* sNoneNode_kind(struct sNoneNode* self){
void* __right_value609 = (void*)0;
char* __result_obj__294;
    __result_obj__294 = (char*)come_increment_ref_count(((char*)(__right_value609=__builtin_string("sNoneNode"))));
    (__right_value609 = come_decrement_ref_count(__right_value609, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__294 = come_decrement_ref_count(__result_obj__294, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__294;
}

_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info){
struct list$1sNode$ph* tuple_elements_514;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
struct list$1sType$ph* tuple_types_515;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
struct list$1CVALUE$ph* tuple_values_516;
int i_517;
struct list$1sNode$ph* o2_saved_518;
struct sNode* it_519;
_Bool Value_520;
_Bool __result_obj__295;
void* __right_value614 = (void*)0;
struct CVALUE* come_value_521;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
struct sType* string_type_522;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var14 = (void*)0;
_Bool come_exception_var_6_523=0;
char* Err_524=0;
_Bool _if_conditional17;
_Bool __result_obj__296;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
struct sType* type_525;
struct list$1sType$ph* o2_saved_526;
struct sType* it_527;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct CVALUE* obj_value_528;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
struct buffer* num_string_529;
void* __right_value630 = (void*)0;
struct sType* type2_530;
void* __right_value631 = (void*)0;
char* type_name_531;
void* __right_value632 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var15 = (void*)0;
char* finalizer_name_532=0;
char* cloner_name_533=0;
char* get_hash_key_name_534=0;
char* equaler_name_535=0;
void* __right_value633 = (void*)0;
_Bool _if_conditional18;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
char* __dec_obj122;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
char* __dec_obj123;
void* __right_value638 = (void*)0;
struct sType* type3_536;
void* __right_value639 = (void*)0;
struct sType* __dec_obj124;
void* __right_value640 = (void*)0;
struct sType* obj_type_537;
char* fun_name_538;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var16 = (void*)0;
char* name_539=0;
struct sGenericsFun* generics_fun_540=0;
char* generics_fun_name_541;
void* __right_value643 = (void*)0;
struct sFun* fun_542;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
char* __dec_obj125;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var17 = (void*)0;
int come_exception_var_7_543=0;
char* Err_544=0;
_Bool _if_conditional19;
_Bool __result_obj__297;
void* __right_value648 = (void*)0;
struct sType* result_type_545;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
struct list$1CVALUE$ph* come_params_546;
void* __right_value651 = (void*)0;
_Bool _if_conditional20;
void* __right_value652 = (void*)0;
struct list$1CVALUE$ph* o2_saved_547;
struct CVALUE* it_548;
void* __right_value653 = (void*)0;
struct CVALUE* come_value_549;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
_Bool _if_conditional21;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
struct buffer* buf_550;
int j_551;
struct list$1CVALUE$ph* o2_saved_552;
struct CVALUE* it_553;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct CVALUE* come_value2_554;
void* __right_value661 = (void*)0;
char* __dec_obj126;
void* __right_value662 = (void*)0;
struct sType* __dec_obj127;
_Bool __result_obj__298;
    tuple_elements_514=self->tuple_elements;
    tuple_types_515=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "06str.c", 999, "struct list$1sType$ph*"))));
    tuple_values_516=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 1000, "struct list$1CVALUE$ph*"))));
    i_517=0;
    for(    o2_saved_518=(tuple_elements_514),it_519=list$1sNode$ph_begin((o2_saved_518));    !list$1sNode$ph_end((o2_saved_518));    it_519=list$1sNode$ph_next((o2_saved_518))    ){
        Value_520=node_compile(it_519,info);
        if(        !Value_520) {
            __result_obj__295 = (_Bool)0;
            /*c*/ come_call_finalizer3(tuple_types_515,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(tuple_values_516,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__295;
        }
        else {
        }
        come_value_521=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(tuple_values_516,(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_521)));
        list$1sType$ph_push_back(tuple_types_515,(struct sType*)come_increment_ref_count(sType_clone(come_value_521->type)));
        if(        i_517==1) {
            string_type_522=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 1014, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
            string_type_522->mHeap=(_Bool)1;
            multiple_assign_var14=((struct tuple2$2bool$char$ph*)(__right_value621=check_assign_type(((char*)(__right_value620=xsprintf("invalid none type"))),string_type_522,come_value_521->type,come_value_521,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_6_523=multiple_assign_var14->v1;
            Err_524=(char*)come_increment_ref_count(multiple_assign_var14->v2);
            if(            (_if_conditional17=(Err_524)),            (__right_value620 = come_decrement_ref_count(__right_value620, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value621,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional17) {
                __result_obj__296 = (_Bool)1;
                /*c*/ come_call_finalizer3(string_type_522,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (Err_524 = come_decrement_ref_count(Err_524, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(come_value_521,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(tuple_types_515,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(tuple_values_516,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__296;
            }
            else {
            }
            /*c*/ come_call_finalizer3(string_type_522,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (Err_524 = come_decrement_ref_count(Err_524, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        i_517++;
        /*c*/ come_call_finalizer3(come_value_521,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    type_525=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 1024, "struct sType*")),(char*)come_increment_ref_count(xsprintf("tuple%d",list$1sType$ph_length(tuple_types_515))),(_Bool)0,info));
    for(    o2_saved_526=(struct list$1sType$ph*)come_increment_ref_count((tuple_types_515)),it_527=list$1sType$ph_begin((o2_saved_526));    !list$1sType$ph_end((o2_saved_526));    it_527=list$1sType$ph_next((o2_saved_526))    ){
        list$1sType$ph_push_back(type_525->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value625=sType_clone(it_527))))));
        /*c*/ come_call_finalizer3(__right_value625,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_526,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    obj_value_528=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 1030, "struct CVALUE*"))));
    num_string_529=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1032, "struct buffer*"))));
    buffer_append_str(num_string_529,"1");
    type2_530=(struct sType*)come_increment_ref_count(solve_generics(type_525,type_525,info,(_Bool)0));
    type_name_531=(char*)come_increment_ref_count(make_type_name_string(type2_530,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    multiple_assign_var15=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value632=create_vtable((struct sType*)come_increment_ref_count(type2_530),info)));
    finalizer_name_532=(char*)come_increment_ref_count(multiple_assign_var15->v1);
    cloner_name_533=(char*)come_increment_ref_count(multiple_assign_var15->v2);
    get_hash_key_name_534=(char*)come_increment_ref_count(multiple_assign_var15->v3);
    equaler_name_535=(char*)come_increment_ref_count(multiple_assign_var15->v4);
    /*c*/ come_call_finalizer3(__right_value632,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    (_if_conditional18=(((struct sFun*)(__right_value633=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2"))))),    /*c*/ come_call_finalizer3(__right_value633,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional18) {
        __dec_obj122=obj_value_528->c_value,
        obj_value_528->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_531,type_name_531,((char*)(__right_value634=buffer_to_string(num_string_529))),info->sname,info->sline,type_name_531));
        __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value634 = come_decrement_ref_count(__right_value634, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj123=obj_value_528->c_value,
        obj_value_528->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_531,type_name_531,((char*)(__right_value636=buffer_to_string(num_string_529))),info->sname,info->sline,type_name_531));
        __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value636 = come_decrement_ref_count(__right_value636, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    type3_536=(struct sType*)come_increment_ref_count(sType_clone(type2_530));
    type3_536->mPointerNum++;
    type3_536->mHeap=(_Bool)1;
    type2_530->mHeap=(_Bool)1;
    __dec_obj124=obj_value_528->type,
    obj_value_528->type=(struct sType*)come_increment_ref_count(sType_clone(type2_530));
    /*b*/ come_call_finalizer3(__dec_obj124,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_528->type->mPointerNum++;
    obj_value_528->var=((void*)0);
    append_object_to_right_values2(obj_value_528,(struct sType*)come_increment_ref_count(type3_536),info,(_Bool)0,((void*)0),((void*)0));
    obj_type_537=(struct sType*)come_increment_ref_count(sType_clone(type2_530));
    fun_name_538="initialize";
    multiple_assign_var16=((struct tuple2$2char$phsGenericsFun$p*)(__right_value642=make_generics_function(obj_type_537,(char*)come_increment_ref_count(__builtin_string(fun_name_538)),info,(_Bool)1)));
    name_539=(char*)come_increment_ref_count(multiple_assign_var16->v1);
    generics_fun_540=multiple_assign_var16->v2;
    /*c*/ come_call_finalizer3(__right_value642,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    generics_fun_name_541=(char*)come_increment_ref_count(name_539);
    fun_542=((struct sFun*)(__right_value643=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_541,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value643,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun_542==((void*)0)) {
        __dec_obj125=generics_fun_name_541,
        generics_fun_name_541=(char*)come_increment_ref_count(create_method_name(obj_type_537,(_Bool)0,((char*)(__right_value644=__builtin_string(fun_name_538))),info,(_Bool)1));
        __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value644 = come_decrement_ref_count(__right_value644, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_542=((struct sFun*)(__right_value646=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_541,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value646,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        fun_542==((void*)0)) {
            multiple_assign_var17=((struct tuple2$2int$char$ph*)(__right_value647=err_msg(info,"function not found(%s) at method(%s)(2)",generics_fun_name_541,info->come_fun->mName)));
            come_exception_var_7_543=multiple_assign_var17->v1;
            Err_544=(char*)come_increment_ref_count(multiple_assign_var17->v2);
            if(            (_if_conditional19=(Err_544)),            /*c*/ come_call_finalizer3(__right_value647,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional19) {
                __result_obj__297 = (_Bool)1;
                (Err_544 = come_decrement_ref_count(Err_544, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(tuple_types_515,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(tuple_values_516,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type_525,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_value_528,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(num_string_529,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type2_530,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (type_name_531 = come_decrement_ref_count(type_name_531, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (finalizer_name_532 = come_decrement_ref_count(finalizer_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (cloner_name_533 = come_decrement_ref_count(cloner_name_533, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (get_hash_key_name_534 = come_decrement_ref_count(get_hash_key_name_534, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (equaler_name_535 = come_decrement_ref_count(equaler_name_535, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(type3_536,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_type_537,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_539 = come_decrement_ref_count(name_539, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_541 = come_decrement_ref_count(generics_fun_name_541, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__297;
            }
            else {
            }
            (Err_544 = come_decrement_ref_count(Err_544, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    result_type_545=(struct sType*)come_increment_ref_count(sType_clone(fun_542->mResultType));
    result_type_545->mStatic=(_Bool)0;
    come_params_546=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 1082, "struct list$1CVALUE$ph*"))));
    if(    (_if_conditional20=(((struct sType*)(__right_value651=list$1sType$ph_operator_load_element(fun_542->mParamTypes,0)))->mHeap&&obj_value_528->type->mHeap)),    /*c*/ come_call_finalizer3(__right_value651,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional20) {
        std_move(((struct sType*)(__right_value652=list$1sType$ph_operator_load_element(fun_542->mParamTypes,0))),obj_value_528->type,obj_value_528,info,(_Bool)1);
        /*c*/ come_call_finalizer3(__right_value652,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    list$1CVALUE$ph_push_back(come_params_546,(struct CVALUE*)come_increment_ref_count(obj_value_528));
    i_517=1;
    for(    o2_saved_547=(struct list$1CVALUE$ph*)come_increment_ref_count((tuple_values_516)),it_548=list$1CVALUE$ph_begin((o2_saved_547));    !list$1CVALUE$ph_end((o2_saved_547));    it_548=list$1CVALUE$ph_next((o2_saved_547))    ){
        come_value_549=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(it_548));
        if(        (_if_conditional21=(((struct sType*)(__right_value654=list$1sType$ph_operator_load_element(fun_542->mParamTypes,i_517)))&&((struct sType*)(__right_value655=list$1sType$ph_operator_load_element(fun_542->mParamTypes,i_517)))->mHeap&&come_value_549->type->mHeap)),        /*c*/ come_call_finalizer3(__right_value654,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        /*c*/ come_call_finalizer3(__right_value655,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional21) {
            std_move(((struct sType*)(__right_value656=list$1sType$ph_operator_load_element(fun_542->mParamTypes,i_517))),come_value_549->type,come_value_549,info,(_Bool)1);
            /*c*/ come_call_finalizer3(__right_value656,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1CVALUE$ph_push_back(come_params_546,(struct CVALUE*)come_increment_ref_count(come_value_549));
        i_517++;
        /*c*/ come_call_finalizer3(come_value_549,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_547,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buf_550=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1101, "struct buffer*"))));
    buffer_append_str(buf_550,generics_fun_name_541);
    buffer_append_str(buf_550,"(");
    j_551=0;
    for(    o2_saved_552=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_546)),it_553=list$1CVALUE$ph_begin((o2_saved_552));    !list$1CVALUE$ph_end((o2_saved_552));    it_553=list$1CVALUE$ph_next((o2_saved_552))    ){
        buffer_append_str(buf_550,it_553->c_value);
        if(        j_551!=list$1CVALUE$ph_length(come_params_546)-1) {
            buffer_append_str(buf_550,",");
        }
        j_551++;
    }
    /*c*/ come_call_finalizer3(o2_saved_552,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_550,")");
    come_value2_554=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 1118, "struct CVALUE*"))));
    __dec_obj126=come_value2_554->c_value,
    come_value2_554->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_550));
    __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj127=come_value2_554->type,
    come_value2_554->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_545));
    /*b*/ come_call_finalizer3(__dec_obj127,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_554->type->mStatic=(_Bool)0;
    come_value2_554->var=((void*)0);
    if(    result_type_545->mHeap) {
        append_object_to_right_values2(come_value2_554,(struct sType*)come_increment_ref_count(result_type_545),info,(_Bool)0,((void*)0),((void*)0));
    }
    add_come_last_code(info,"%s",come_value2_554->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_554));
    __result_obj__298 = (_Bool)1;
    /*c*/ come_call_finalizer3(tuple_types_515,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(tuple_values_516,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_525,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_value_528,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(num_string_529,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_530,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_531 = come_decrement_ref_count(type_name_531, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (finalizer_name_532 = come_decrement_ref_count(finalizer_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_533 = come_decrement_ref_count(cloner_name_533, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_534 = come_decrement_ref_count(get_hash_key_name_534, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_535 = come_decrement_ref_count(equaler_name_535, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type3_536,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_type_537,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (name_539 = come_decrement_ref_count(name_539, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_541 = come_decrement_ref_count(generics_fun_name_541, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_545,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_546,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_550,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_554,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__298;
}

static void sNoneNode_finalize(struct sNoneNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->tuple_elements,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNode$ph* map_key_elements, struct list$1sNode$ph* map_elements, struct sInfo* info){
void* __right_value663 = (void*)0;
struct list$1sNode$ph* __dec_obj128;
struct list$1sNode$ph* __dec_obj129;
struct sMapNode* __result_obj__299;
    ((struct sNodeBase*)(__right_value663=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value663,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj128=self->map_key_elements,
    self->map_key_elements=(struct list$1sNode$ph*)come_increment_ref_count(map_key_elements);
    /*b*/ come_call_finalizer3(__dec_obj128,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj129=self->map_elements,
    self->map_elements=(struct list$1sNode$ph*)come_increment_ref_count(map_elements);
    /*b*/ come_call_finalizer3(__dec_obj129,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__299 = (struct sMapNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sMapNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(map_key_elements,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(map_elements,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__299,sMapNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__299;
}

char* sMapNode_kind(struct sMapNode* self){
void* __right_value664 = (void*)0;
char* __result_obj__300;
    __result_obj__300 = (char*)come_increment_ref_count(((char*)(__right_value664=__builtin_string("sMapNode"))));
    (__right_value664 = come_decrement_ref_count(__right_value664, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__300 = come_decrement_ref_count(__result_obj__300, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__300;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
struct list$1sNode$ph* map_key_elements_555;
struct list$1sNode$ph* map_elements_556;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
struct list$1CVALUE$ph* key_params_557;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct list$1CVALUE$ph* element_params_558;
struct sType* map_key_type_559;
struct sType* map_element_type_560;
int i_561;
void* __right_value669 = (void*)0;
struct sNode* key_elements_562;
void* __right_value670 = (void*)0;
struct sNode* elements_569;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
_Bool _if_conditional22;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
struct sNode* value_node_570;
struct sNode* exp_571;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_572;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
struct sNode* __dec_obj130;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_573;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
struct sNode* __dec_obj131;
void* __right_value693 = (void*)0;
struct sNode* __dec_obj132;
_Bool Value_574;
_Bool __result_obj__305;
void* __right_value694 = (void*)0;
struct CVALUE* come_value_575;
void* __right_value695 = (void*)0;
struct sType* __dec_obj133;
_Bool Value_576;
_Bool __result_obj__306;
void* __right_value696 = (void*)0;
struct CVALUE* come_value_577;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var18 = (void*)0;
_Bool come_exception_var_8_578=0;
char* Err_579=0;
_Bool _if_conditional23;
_Bool __result_obj__307;
void* __right_value699 = (void*)0;
struct sType* __dec_obj134;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
_Bool _if_conditional24;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
struct sNode* value_node_580;
struct sNode* exp2_581;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_582;
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
struct sNode* __dec_obj135;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_583;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
struct sNode* __dec_obj136;
void* __right_value722 = (void*)0;
struct sNode* __dec_obj137;
_Bool Value_584;
_Bool __result_obj__308;
void* __right_value723 = (void*)0;
struct CVALUE* come_value2_585;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var19 = (void*)0;
_Bool come_exception_var_9_586=0;
char* Err_587=0;
_Bool _if_conditional25;
_Bool __result_obj__309;
void* __right_value726 = (void*)0;
struct sType* __dec_obj138;
_Bool Value_588;
_Bool __result_obj__310;
void* __right_value727 = (void*)0;
struct CVALUE* come_value2_589;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var20 = (void*)0;
_Bool come_exception_var_10_590=0;
char* Err_591=0;
_Bool _if_conditional26;
_Bool __result_obj__311;
void* __right_value730 = (void*)0;
struct sType* __dec_obj139;
void* __right_value731 = (void*)0;
struct sType* key_type_values_593;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
char* var_name_594;
void* __right_value734 = (void*)0;
struct sVar* var__595;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
struct sType* element_type_values_596;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
char* var_name2_597;
void* __right_value739 = (void*)0;
struct sVar* var2__598;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
struct buffer* source_599;
int i_600;
void* __right_value743 = (void*)0;
struct CVALUE* key_param_601;
void* __right_value744 = (void*)0;
struct CVALUE* element_param_602;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
struct sType* map_type_603;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
struct sType* obj_type_604;
char* fun_name_605;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var21 = (void*)0;
char* name_606=0;
struct sGenericsFun* generics_fun_607=0;
char* generics_fun_name_608;
void* __right_value753 = (void*)0;
struct sFun* fun_609;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
char* __dec_obj140;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var22 = (void*)0;
int come_exception_var_11_610=0;
char* Err_611=0;
_Bool _if_conditional27;
_Bool __result_obj__312;
void* __right_value758 = (void*)0;
struct sType* result_type_612;
struct sType* type_613;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
struct CVALUE* obj_value_614;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
struct buffer* num_string_615;
void* __right_value763 = (void*)0;
struct sType* type2_616;
void* __right_value764 = (void*)0;
char* type_name_617;
struct sType* any_type_618;
void* __right_value765 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var23 = (void*)0;
char* finalizer_name_619=0;
char* cloner_name_620=0;
char* get_hash_key_name_621=0;
char* equaler_name_622=0;
void* __right_value766 = (void*)0;
_Bool _if_conditional28;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
char* __dec_obj141;
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
char* __dec_obj142;
void* __right_value771 = (void*)0;
struct sType* type3_623;
void* __right_value772 = (void*)0;
struct sType* __dec_obj143;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
struct list$1CVALUE$ph* come_params_624;
void* __right_value775 = (void*)0;
_Bool _if_conditional29;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
struct CVALUE* come_value2_625;
void* __right_value779 = (void*)0;
char* __dec_obj144;
struct sType* __dec_obj145;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
struct CVALUE* come_value3_626;
void* __right_value782 = (void*)0;
char* __dec_obj146;
struct sType* __dec_obj147;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
struct CVALUE* come_value4_627;
void* __right_value785 = (void*)0;
char* __dec_obj148;
struct sType* __dec_obj149;
int j_628;
struct list$1CVALUE$ph* o2_saved_629;
struct CVALUE* it_630;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
struct CVALUE* come_value5_631;
void* __right_value788 = (void*)0;
char* __dec_obj150;
void* __right_value789 = (void*)0;
struct sType* __dec_obj151;
_Bool __result_obj__313;
exp_571 = (void*)0;
exp2_581 = (void*)0;
    map_key_elements_555=self->map_key_elements;
    map_elements_556=self->map_elements;
    key_params_557=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 1158, "struct list$1CVALUE$ph*"))));
    element_params_558=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 1159, "struct list$1CVALUE$ph*"))));
    map_key_type_559=((void*)0);
    map_element_type_560=((void*)0);
    for(    i_561=0;    i_561<list$1sNode$ph_length(map_key_elements_555);    i_561++    ){
        key_elements_562=((struct sNode*)(__right_value669=list$1sNode$ph_operator_load_element(map_key_elements_555,i_561)));
        ((__right_value669) ? __right_value669 = come_decrement_ref_count(__right_value669, ((struct sNode*)__right_value669)->finalize, ((struct sNode*)__right_value669)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        elements_569=((struct sNode*)(__right_value670=list$1sNode$ph_operator_load_element(map_elements_556,i_561)));
        ((__right_value670) ? __right_value670 = come_decrement_ref_count(__right_value670, ((struct sNode*)__right_value670)->finalize, ((struct sNode*)__right_value670)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        if(        (_if_conditional22=(string_operator_equals(((char*)(__right_value672=key_elements_562->kind(key_elements_562->_protocol_obj))),"sWildCard"))),        (__right_value671 = come_decrement_ref_count(__right_value671, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value672 = come_decrement_ref_count(__right_value672, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional22) {
            value_node_570=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value673=xsprintf("Value"))),info));
            (__right_value673 = come_decrement_ref_count(__right_value673, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            {
                params_572=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1172, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
                list$1tuple2$2char$phsNode$ph$ph_add(params_572,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1173, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_570))));
                __dec_obj130=exp_571,
                exp_571=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value680=xsprintf("keys"))),(struct sNode*)come_increment_ref_count(value_node_570),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_572),((void*)0),0,((void*)0),(_Bool)0,info));
                (__dec_obj130 ? __dec_obj130 = come_decrement_ref_count(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                (__right_value680 = come_decrement_ref_count(__right_value680, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(params_572,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            {
                params_573=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1178, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
                list$1tuple2$2char$phsNode$ph$ph_add(params_573,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1179, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp_571))));
                list$1tuple2$2char$phsNode$ph$ph_add(params_573,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1180, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_561,info)))));
                __dec_obj131=exp_571,
                exp_571=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value691=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp_571),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_573),((void*)0),0,((void*)0),(_Bool)0,info));
                (__dec_obj131 ? __dec_obj131 = come_decrement_ref_count(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                (__right_value691 = come_decrement_ref_count(__right_value691, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                __dec_obj132=exp_571,
                exp_571=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_571,info));
                (__dec_obj132 ? __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                /*c*/ come_call_finalizer3(params_573,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            Value_574=node_compile(exp_571,info);
            if(            !Value_574) {
                __result_obj__305 = (_Bool)0;
                ((value_node_570) ? value_node_570 = come_decrement_ref_count(value_node_570, ((struct sNode*)value_node_570)->finalize, ((struct sNode*)value_node_570)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((exp_571) ? exp_571 = come_decrement_ref_count(exp_571, ((struct sNode*)exp_571)->finalize, ((struct sNode*)exp_571)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(key_params_557,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(element_params_558,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_key_type_559,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_element_type_560,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__305;
            }
            else {
            }
            come_value_575=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            list$1CVALUE$ph_push_back(key_params_557,(struct CVALUE*)come_increment_ref_count(come_value_575));
            __dec_obj133=map_key_type_559,
            map_key_type_559=(struct sType*)come_increment_ref_count(sType_clone(come_value_575->type));
            /*b*/ come_call_finalizer3(__dec_obj133,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            ((value_node_570) ? value_node_570 = come_decrement_ref_count(value_node_570, ((struct sNode*)value_node_570)->finalize, ((struct sNode*)value_node_570)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp_571) ? exp_571 = come_decrement_ref_count(exp_571, ((struct sNode*)exp_571)->finalize, ((struct sNode*)exp_571)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_575,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            Value_576=node_compile(key_elements_562,info);
            if(            !Value_576) {
                __result_obj__306 = (_Bool)0;
                /*c*/ come_call_finalizer3(key_params_557,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(element_params_558,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_key_type_559,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_element_type_560,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__306;
            }
            else {
            }
            come_value_577=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            map_key_type_559) {
                multiple_assign_var18=((struct tuple2$2bool$char$ph*)(__right_value698=check_assign_type(((char*)(__right_value697=xsprintf("invalid map key type"))),map_key_type_559,come_value_577->type,come_value_577,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_8_578=multiple_assign_var18->v1;
                Err_579=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                if(                (_if_conditional23=(Err_579)),                (__right_value697 = come_decrement_ref_count(__right_value697, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                /*c*/ come_call_finalizer3(__right_value698,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional23) {
                    __result_obj__307 = (_Bool)1;
                    (Err_579 = come_decrement_ref_count(Err_579, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(come_value_577,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(key_params_557,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(element_params_558,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(map_key_type_559,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(map_element_type_560,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__307;
                }
                else {
                }
                (Err_579 = come_decrement_ref_count(Err_579, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUE$ph_push_back(key_params_557,(struct CVALUE*)come_increment_ref_count(come_value_577));
            __dec_obj134=map_key_type_559,
            map_key_type_559=(struct sType*)come_increment_ref_count(sType_clone(come_value_577->type));
            /*b*/ come_call_finalizer3(__dec_obj134,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(come_value_577,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        if(        (_if_conditional24=(string_operator_equals(((char*)(__right_value701=elements_569->kind(elements_569->_protocol_obj))),"sWildCard"))),        (__right_value700 = come_decrement_ref_count(__right_value700, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value701 = come_decrement_ref_count(__right_value701, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional24) {
            value_node_580=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value702=xsprintf("Value"))),info));
            (__right_value702 = come_decrement_ref_count(__right_value702, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            {
                params_582=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1216, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
                list$1tuple2$2char$phsNode$ph$ph_add(params_582,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1217, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_580))));
                __dec_obj135=exp2_581,
                exp2_581=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value709=xsprintf("values"))),(struct sNode*)come_increment_ref_count(value_node_580),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_582),((void*)0),0,((void*)0),(_Bool)0,info));
                (__dec_obj135 ? __dec_obj135 = come_decrement_ref_count(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                (__right_value709 = come_decrement_ref_count(__right_value709, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(params_582,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            {
                params_583=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1222, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
                list$1tuple2$2char$phsNode$ph$ph_add(params_583,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1223, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp2_581))));
                list$1tuple2$2char$phsNode$ph$ph_add(params_583,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1224, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_561,info)))));
                __dec_obj136=exp2_581,
                exp2_581=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value720=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp2_581),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_583),((void*)0),0,((void*)0),(_Bool)0,info));
                (__dec_obj136 ? __dec_obj136 = come_decrement_ref_count(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                (__right_value720 = come_decrement_ref_count(__right_value720, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                __dec_obj137=exp2_581,
                exp2_581=(struct sNode*)come_increment_ref_count(create_nullable_node(exp2_581,info));
                (__dec_obj137 ? __dec_obj137 = come_decrement_ref_count(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                /*c*/ come_call_finalizer3(params_583,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            Value_584=node_compile(exp2_581,info);
            if(            !Value_584) {
                __result_obj__308 = (_Bool)0;
                ((value_node_580) ? value_node_580 = come_decrement_ref_count(value_node_580, ((struct sNode*)value_node_580)->finalize, ((struct sNode*)value_node_580)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((exp2_581) ? exp2_581 = come_decrement_ref_count(exp2_581, ((struct sNode*)exp2_581)->finalize, ((struct sNode*)exp2_581)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(key_params_557,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(element_params_558,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_key_type_559,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_element_type_560,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__308;
            }
            else {
            }
            come_value2_585=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            map_element_type_560) {
                multiple_assign_var19=((struct tuple2$2bool$char$ph*)(__right_value725=check_assign_type(((char*)(__right_value724=xsprintf("invalid map element type"))),map_element_type_560,come_value2_585->type,come_value2_585,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_9_586=multiple_assign_var19->v1;
                Err_587=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                if(                (_if_conditional25=(Err_587)),                (__right_value724 = come_decrement_ref_count(__right_value724, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                /*c*/ come_call_finalizer3(__right_value725,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional25) {
                    __result_obj__309 = (_Bool)1;
                    (Err_587 = come_decrement_ref_count(Err_587, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((value_node_580) ? value_node_580 = come_decrement_ref_count(value_node_580, ((struct sNode*)value_node_580)->finalize, ((struct sNode*)value_node_580)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((exp2_581) ? exp2_581 = come_decrement_ref_count(exp2_581, ((struct sNode*)exp2_581)->finalize, ((struct sNode*)exp2_581)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(come_value2_585,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(key_params_557,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(element_params_558,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(map_key_type_559,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(map_element_type_560,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__309;
                }
                else {
                }
                (Err_587 = come_decrement_ref_count(Err_587, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUE$ph_push_back(element_params_558,(struct CVALUE*)come_increment_ref_count(come_value2_585));
            __dec_obj138=map_element_type_560,
            map_element_type_560=(struct sType*)come_increment_ref_count(sType_clone(come_value2_585->type));
            /*b*/ come_call_finalizer3(__dec_obj138,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            ((value_node_580) ? value_node_580 = come_decrement_ref_count(value_node_580, ((struct sNode*)value_node_580)->finalize, ((struct sNode*)value_node_580)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp2_581) ? exp2_581 = come_decrement_ref_count(exp2_581, ((struct sNode*)exp2_581)->finalize, ((struct sNode*)exp2_581)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value2_585,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            Value_588=node_compile(elements_569,info);
            if(            !Value_588) {
                __result_obj__310 = (_Bool)0;
                /*c*/ come_call_finalizer3(key_params_557,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(element_params_558,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_key_type_559,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_element_type_560,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__310;
            }
            else {
            }
            come_value2_589=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            map_element_type_560) {
                multiple_assign_var20=((struct tuple2$2bool$char$ph*)(__right_value729=check_assign_type(((char*)(__right_value728=xsprintf("invalid map element type"))),map_element_type_560,come_value2_589->type,come_value2_589,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_10_590=multiple_assign_var20->v1;
                Err_591=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                if(                (_if_conditional26=(Err_591)),                (__right_value728 = come_decrement_ref_count(__right_value728, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                /*c*/ come_call_finalizer3(__right_value729,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional26) {
                    __result_obj__311 = (_Bool)1;
                    (Err_591 = come_decrement_ref_count(Err_591, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(come_value2_589,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(key_params_557,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(element_params_558,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(map_key_type_559,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(map_element_type_560,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__311;
                }
                else {
                }
                (Err_591 = come_decrement_ref_count(Err_591, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUE$ph_push_back(element_params_558,(struct CVALUE*)come_increment_ref_count(come_value2_589));
            __dec_obj139=map_element_type_560,
            map_element_type_560=(struct sType*)come_increment_ref_count(sType_clone(come_value2_589->type));
            /*b*/ come_call_finalizer3(__dec_obj139,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(come_value2_589,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    static int map_value_num_592=0;
    key_type_values_593=(struct sType*)come_increment_ref_count(sType_clone(map_key_type_559));
    list$1sNode$ph_push_back(key_type_values_593->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUE$ph_length(key_params_557),info)));
    key_type_values_593->mHeap=(_Bool)0;
    var_name_594=(char*)come_increment_ref_count(xsprintf("__map_keys%d__",++map_value_num_592));
    add_variable_to_table(var_name_594,(struct sType*)come_increment_ref_count(sType_clone(key_type_values_593)),info,(_Bool)0);
    var__595=get_variable_from_table(info->lv_table,var_name_594);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value735=make_define_var(key_type_values_593,var__595->mCValueName,(_Bool)0,info))));
    (__right_value735 = come_decrement_ref_count(__right_value735, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    element_type_values_596=(struct sType*)come_increment_ref_count(sType_clone(map_element_type_560));
    list$1sNode$ph_push_back(element_type_values_596->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUE$ph_length(element_params_558),info)));
    element_type_values_596->mHeap=(_Bool)0;
    var_name2_597=(char*)come_increment_ref_count(xsprintf("__map_element%d__",map_value_num_592));
    add_variable_to_table(var_name2_597,(struct sType*)come_increment_ref_count(sType_clone(element_type_values_596)),info,(_Bool)0);
    var2__598=get_variable_from_table(info->lv_table,var_name2_597);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value740=make_define_var(element_type_values_596,var2__598->mCValueName,(_Bool)0,info))));
    (__right_value740 = come_decrement_ref_count(__right_value740, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    source_599=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1287, "struct buffer*"))));
    buffer_append_str(source_599,"(");
    for(    i_600=0;    i_600<list$1CVALUE$ph_length(key_params_557);    i_600++    ){
        key_param_601=((struct CVALUE*)(__right_value743=list$1CVALUE$ph_operator_load_element(key_params_557,i_600)));
        /*c*/ come_call_finalizer3(__right_value743,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        element_param_602=((struct CVALUE*)(__right_value744=list$1CVALUE$ph_operator_load_element(element_params_558,i_600)));
        /*c*/ come_call_finalizer3(__right_value744,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        map_key_type_559->mHeap) {
            buffer_append_format(source_599,"%s[%d]=%s,\n",var__595->mCValueName,i_600,key_param_601->c_value);
        }
        else {
            buffer_append_format(source_599,"%s[%d]=%s,\n",var__595->mCValueName,i_600,key_param_601->c_value);
        }
        if(        map_element_type_560->mHeap) {
            buffer_append_format(source_599,"%s[%d]=%s,\n",var2__598->mCValueName,i_600,element_param_602->c_value);
        }
        else {
            buffer_append_format(source_599,"%s[%d]=%s,\n",var2__598->mCValueName,i_600,element_param_602->c_value);
        }
    }
    map_type_603=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 1312, "struct sType*")),(char*)come_increment_ref_count(xsprintf("map")),(_Bool)0,info));
    list$1sType$ph_push_back(map_type_603->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value748=sType_clone(map_key_type_559))))));
    /*c*/ come_call_finalizer3(__right_value748,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    list$1sType$ph_push_back(map_type_603->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value749=sType_clone(map_element_type_560))))));
    /*c*/ come_call_finalizer3(__right_value749,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    obj_type_604=(struct sType*)come_increment_ref_count(sType_clone(map_type_603));
    fun_name_605="initialize_with_values";
    multiple_assign_var21=((struct tuple2$2char$phsGenericsFun$p*)(__right_value752=make_generics_function(obj_type_604,(char*)come_increment_ref_count(__builtin_string(fun_name_605)),info,(_Bool)1)));
    name_606=(char*)come_increment_ref_count(multiple_assign_var21->v1);
    generics_fun_607=multiple_assign_var21->v2;
    /*c*/ come_call_finalizer3(__right_value752,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    generics_fun_name_608=(char*)come_increment_ref_count(name_606);
    fun_609=((struct sFun*)(__right_value753=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_608,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value753,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun_609==((void*)0)) {
        __dec_obj140=generics_fun_name_608,
        generics_fun_name_608=(char*)come_increment_ref_count(create_method_name(obj_type_604,(_Bool)0,((char*)(__right_value754=__builtin_string(fun_name_605))),info,(_Bool)1));
        __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value754 = come_decrement_ref_count(__right_value754, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_609=((struct sFun*)(__right_value756=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_608,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value756,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        fun_609==((void*)0)) {
            multiple_assign_var22=((struct tuple2$2int$char$ph*)(__right_value757=err_msg(info,"function not found(%s) at method(%s)(3)",generics_fun_name_608,info->come_fun->mName)));
            come_exception_var_11_610=multiple_assign_var22->v1;
            Err_611=(char*)come_increment_ref_count(multiple_assign_var22->v2);
            if(            (_if_conditional27=(Err_611)),            /*c*/ come_call_finalizer3(__right_value757,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional27) {
                __result_obj__312 = (_Bool)1;
                (Err_611 = come_decrement_ref_count(Err_611, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(key_params_557,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(element_params_558,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_key_type_559,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_element_type_560,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(key_type_values_593,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (var_name_594 = come_decrement_ref_count(var_name_594, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(element_type_values_596,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (var_name2_597 = come_decrement_ref_count(var_name2_597, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(source_599,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_type_603,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_type_604,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_606 = come_decrement_ref_count(name_606, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_608 = come_decrement_ref_count(generics_fun_name_608, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__312;
            }
            else {
            }
            (Err_611 = come_decrement_ref_count(Err_611, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    result_type_612=(struct sType*)come_increment_ref_count(sType_clone(fun_609->mResultType));
    result_type_612->mStatic=(_Bool)0;
    type_613=map_type_603;
    obj_value_614=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 1341, "struct CVALUE*"))));
    num_string_615=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1343, "struct buffer*"))));
    buffer_append_str(num_string_615,"1");
    type2_616=(struct sType*)come_increment_ref_count(solve_generics(type_613,type_613,info,(_Bool)0));
    type_name_617=(char*)come_increment_ref_count(make_type_name_string(type2_616,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_618=(struct sType*)come_increment_ref_count(type2_616);
    any_type_618->mPointerNum=1;
    any_type_618->mHeap=(_Bool)1;
    multiple_assign_var23=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value765=create_vtable((struct sType*)come_increment_ref_count(any_type_618),info)));
    finalizer_name_619=(char*)come_increment_ref_count(multiple_assign_var23->v1);
    cloner_name_620=(char*)come_increment_ref_count(multiple_assign_var23->v2);
    get_hash_key_name_621=(char*)come_increment_ref_count(multiple_assign_var23->v3);
    equaler_name_622=(char*)come_increment_ref_count(multiple_assign_var23->v4);
    /*c*/ come_call_finalizer3(__right_value765,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    (_if_conditional28=(((struct sFun*)(__right_value766=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2"))))),    /*c*/ come_call_finalizer3(__right_value766,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional28) {
        __dec_obj141=obj_value_614->c_value,
        obj_value_614->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_617,type_name_617,((char*)(__right_value767=buffer_to_string(num_string_615))),info->sname,info->sline,type_name_617));
        __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value767 = come_decrement_ref_count(__right_value767, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj142=obj_value_614->c_value,
        obj_value_614->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_617,type_name_617,((char*)(__right_value769=buffer_to_string(num_string_615))),info->sname,info->sline,type_name_617));
        __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value769 = come_decrement_ref_count(__right_value769, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    type3_623=(struct sType*)come_increment_ref_count(sType_clone(type2_616));
    type3_623->mPointerNum++;
    type3_623->mHeap=(_Bool)1;
    type2_616->mHeap=(_Bool)1;
    __dec_obj143=obj_value_614->type,
    obj_value_614->type=(struct sType*)come_increment_ref_count(sType_clone(type2_616));
    /*b*/ come_call_finalizer3(__dec_obj143,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_614->type->mPointerNum++;
    obj_value_614->var=((void*)0);
    append_object_to_right_values2(obj_value_614,(struct sType*)come_increment_ref_count(type3_623),info,(_Bool)0,((void*)0),((void*)0));
    come_params_624=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 1374, "struct list$1CVALUE$ph*"))));
    if(    (_if_conditional29=(((struct sType*)(__right_value775=list$1sType$ph_operator_load_element(fun_609->mParamTypes,0)))->mHeap&&obj_value_614->type->mHeap)),    /*c*/ come_call_finalizer3(__right_value775,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional29) {
        std_move(((struct sType*)(__right_value776=list$1sType$ph_operator_load_element(fun_609->mParamTypes,0))),obj_value_614->type,obj_value_614,info,(_Bool)1);
        /*c*/ come_call_finalizer3(__right_value776,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    list$1CVALUE$ph_push_back(come_params_624,(struct CVALUE*)come_increment_ref_count(obj_value_614));
    come_value2_625=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 1381, "struct CVALUE*"))));
    __dec_obj144=come_value2_625->c_value,
    come_value2_625->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUE$ph_length(key_params_557)));
    __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj145=come_value2_625->type,
    come_value2_625->type=((void*)0);
    /*b*/ come_call_finalizer3(__dec_obj145,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_625->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_624,(struct CVALUE*)come_increment_ref_count(come_value2_625));
    come_value3_626=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 1389, "struct CVALUE*"))));
    __dec_obj146=come_value3_626->c_value,
    come_value3_626->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__595->mCValueName));
    __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj147=come_value3_626->type,
    come_value3_626->type=((void*)0);
    /*b*/ come_call_finalizer3(__dec_obj147,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value3_626->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_624,(struct CVALUE*)come_increment_ref_count(come_value3_626));
    come_value4_627=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 1397, "struct CVALUE*"))));
    __dec_obj148=come_value4_627->c_value,
    come_value4_627->c_value=(char*)come_increment_ref_count(xsprintf("%s",var2__598->mCValueName));
    __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj149=come_value4_627->type,
    come_value4_627->type=((void*)0);
    /*b*/ come_call_finalizer3(__dec_obj149,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value4_627->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_624,(struct CVALUE*)come_increment_ref_count(come_value4_627));
    buffer_append_str(source_599,generics_fun_name_608);
    buffer_append_str(source_599,"(");
    j_628=0;
    for(    o2_saved_629=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_624)),it_630=list$1CVALUE$ph_begin((o2_saved_629));    !list$1CVALUE$ph_end((o2_saved_629));    it_630=list$1CVALUE$ph_next((o2_saved_629))    ){
        buffer_append_str(source_599,it_630->c_value);
        if(        j_628!=list$1CVALUE$ph_length(come_params_624)-1) {
            buffer_append_str(source_599,",");
        }
        j_628++;
    }
    /*c*/ come_call_finalizer3(o2_saved_629,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(source_599,")");
    buffer_append_str(source_599,")");
    come_value5_631=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 1423, "struct CVALUE*"))));
    __dec_obj150=come_value5_631->c_value,
    come_value5_631->c_value=(char*)come_increment_ref_count(buffer_to_string(source_599));
    __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj151=come_value5_631->type,
    come_value5_631->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_612));
    /*b*/ come_call_finalizer3(__dec_obj151,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value5_631->type->mStatic=(_Bool)0;
    come_value5_631->var=((void*)0);
    if(    result_type_612->mHeap) {
        append_object_to_right_values2(come_value5_631,(struct sType*)come_increment_ref_count(result_type_612),info,(_Bool)0,((void*)0),((void*)0));
    }
    add_come_last_code(info,"%s",come_value5_631->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value5_631));
    __result_obj__313 = (_Bool)1;
    /*c*/ come_call_finalizer3(key_params_557,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(element_params_558,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(map_key_type_559,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(map_element_type_560,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(key_type_values_593,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name_594 = come_decrement_ref_count(var_name_594, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(element_type_values_596,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name2_597 = come_decrement_ref_count(var_name2_597, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(source_599,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(map_type_603,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_type_604,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (name_606 = come_decrement_ref_count(name_606, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_608 = come_decrement_ref_count(generics_fun_name_608, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_612,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_value_614,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(num_string_615,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_616,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_617 = come_decrement_ref_count(type_name_617, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(any_type_618,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (finalizer_name_619 = come_decrement_ref_count(finalizer_name_619, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_620 = come_decrement_ref_count(cloner_name_620, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_621 = come_decrement_ref_count(get_hash_key_name_621, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_622 = come_decrement_ref_count(equaler_name_622, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type3_623,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_624,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_625,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value3_626,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value4_627,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value5_631,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__313;
}

static void sMapNode_finalize(struct sMapNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->map_key_elements,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->map_elements,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_563;
int i_564;
struct sNode* __result_obj__301;
struct sNode* default_value_565;
struct sNode* __result_obj__302;
default_value_565 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_563=self->head;
    i_564=0;
    while(it_563!=((void*)0)) {
        if(        position==i_564) {
            __result_obj__301 = (struct sNode*)come_increment_ref_count(it_563->item);
            ((__result_obj__301) ? __result_obj__301 = come_decrement_ref_count(__result_obj__301, ((struct sNode*)__result_obj__301)->finalize, ((struct sNode*)__result_obj__301)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__301;
        }
        it_563=it_563->next;
        i_564++;
    }
    memset(&default_value_565,0,sizeof(struct sNode*));
    __result_obj__302 = (struct sNode*)come_increment_ref_count(default_value_565);
    ((default_value_565) ? default_value_565 = come_decrement_ref_count(default_value_565, ((struct sNode*)default_value_565)->finalize, ((struct sNode*)default_value_565)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__302) ? __result_obj__302 = come_decrement_ref_count(__result_obj__302, ((struct sNode*)__result_obj__302)->finalize, ((struct sNode*)__result_obj__302)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__302;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_566;
int i_567;
struct sNode* __result_obj__303;
struct sNode* default_value_568;
struct sNode* __result_obj__304;
default_value_568 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_566=self->head;
    i_567=0;
    while(it_566!=((void*)0)) {
        if(        position==i_567) {
            __result_obj__303 = (struct sNode*)come_increment_ref_count(it_566->item);
            ((__result_obj__303) ? __result_obj__303 = come_decrement_ref_count(__result_obj__303, ((struct sNode*)__result_obj__303)->finalize, ((struct sNode*)__result_obj__303)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__303;
        }
        it_566=it_566->next;
        i_567++;
    }
    memset(&default_value_568,0,sizeof(struct sNode*));
    __result_obj__304 = (struct sNode*)come_increment_ref_count(default_value_568);
    ((default_value_568) ? default_value_568 = come_decrement_ref_count(default_value_568, ((struct sNode*)default_value_568)->finalize, ((struct sNode*)default_value_568)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__304) ? __result_obj__304 = come_decrement_ref_count(__result_obj__304, ((struct sNode*)__result_obj__304)->finalize, ((struct sNode*)__result_obj__304)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__304;
}

struct sNode* expression_node_v96(struct sInfo* info){
int sline_real_632;
int sline_633;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
struct list$1sNode$ph* exps_634;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
struct buffer* value_635;
char* head_of_last_line_636;
int len_637;
void* __right_value794 = (void*)0;
struct sNode* exp_638;
int sline2_639;
void* __right_value795 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var24 = (void*)0;
int come_exception_var_c1_640=0;
char* Err_641=0;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
struct sNode* _inf_value5;
struct sSStringNode* _inf_obj_value5;
void* __right_value803 = (void*)0;
struct sNode* __result_obj__316;
int sline_real_643;
int sline_644;
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
struct buffer* value_645;
char* p_646;
int sline_647;
int sline2_648;
void* __right_value806 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var25 = (void*)0;
int come_exception_var_c2_649=0;
char* Err_650=0;
void* __right_value807 = (void*)0;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
struct sNode* _inf_value6;
struct sStrNode* _inf_obj_value6;
void* __right_value810 = (void*)0;
struct sNode* __result_obj__317;
int sline_real_651;
int sline_652;
void* __right_value811 = (void*)0;
void* __right_value812 = (void*)0;
struct buffer* value_653;
unsigned long  int size_654;
char* p_655;
int sline_656;
int len_657;
int sline2_658;
void* __right_value813 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var26 = (void*)0;
int come_exception_var_c3_659=0;
char* Err_660=0;
void* __right_value814 = (void*)0;
void* __right_value815 = (void*)0;
struct sNode* _inf_value7;
struct sBufferNode* _inf_obj_value7;
void* __right_value819 = (void*)0;
struct sNode* __result_obj__320;
int sline_real_662;
int sline_663;
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
struct buffer* buf_664;
void* __right_value822 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var27 = (void*)0;
int come_exception_var_c4_665=0;
char* Err_666=0;
_Bool global_667;
_Bool ignore_case_668;
_Bool catch_exception_669;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
struct sNode* _inf_value8;
struct sStrNode* _inf_obj_value8;
void* __right_value826 = (void*)0;
struct sNode* obj_670;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_671;
void* __right_value829 = (void*)0;
void* __right_value830 = (void*)0;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
void* __right_value835 = (void*)0;
void* __right_value836 = (void*)0;
void* __right_value837 = (void*)0;
void* __right_value838 = (void*)0;
void* __right_value839 = (void*)0;
void* __right_value840 = (void*)0;
void* __right_value841 = (void*)0;
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
void* __right_value850 = (void*)0;
void* __right_value851 = (void*)0;
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
void* __right_value856 = (void*)0;
void* __right_value857 = (void*)0;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
void* __right_value861 = (void*)0;
void* __right_value862 = (void*)0;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
struct buffer* method_block_672;
int method_block_sline_673;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
struct list$1sType$ph* method_generics_types_674;
void* __right_value868 = (void*)0;
struct sNode* node_675;
void* __right_value869 = (void*)0;
void* __right_value870 = (void*)0;
struct sNode* __dec_obj157;
struct sNode* __result_obj__321;
int sline_real_676;
int sline_677;
void* __right_value871 = (void*)0;
void* __right_value872 = (void*)0;
struct buffer* value_678;
char* p_679;
int sline_680;
int len_681;
int sline2_682;
void* __right_value873 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var28 = (void*)0;
int come_exception_var_c5_683=0;
char* Err_684=0;
_Bool global_685;
_Bool ignore_case_686;
_Bool catch_exception_687;
void* __right_value874 = (void*)0;
void* __right_value875 = (void*)0;
void* __right_value876 = (void*)0;
struct sNode* _inf_value9;
struct sStrNode* _inf_obj_value9;
void* __right_value877 = (void*)0;
struct sNode* obj_688;
void* __right_value878 = (void*)0;
void* __right_value879 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_689;
void* __right_value880 = (void*)0;
void* __right_value881 = (void*)0;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
void* __right_value884 = (void*)0;
void* __right_value885 = (void*)0;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
void* __right_value889 = (void*)0;
void* __right_value890 = (void*)0;
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
void* __right_value894 = (void*)0;
void* __right_value895 = (void*)0;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
void* __right_value900 = (void*)0;
void* __right_value901 = (void*)0;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
void* __right_value904 = (void*)0;
void* __right_value905 = (void*)0;
void* __right_value906 = (void*)0;
void* __right_value907 = (void*)0;
void* __right_value908 = (void*)0;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
void* __right_value911 = (void*)0;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
void* __right_value914 = (void*)0;
void* __right_value915 = (void*)0;
void* __right_value916 = (void*)0;
struct buffer* method_block_690;
int method_block_sline_691;
void* __right_value917 = (void*)0;
void* __right_value918 = (void*)0;
struct list$1sType$ph* method_generics_types_692;
void* __right_value919 = (void*)0;
struct sNode* node_693;
void* __right_value920 = (void*)0;
void* __right_value921 = (void*)0;
struct sNode* __dec_obj158;
struct sNode* __result_obj__322;
int sline_real_694;
int c_695;
int n_696;
int n_697;
unsigned long long int n_700;
void* __right_value922 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var29 = (void*)0;
int come_exception_var_c6_701=0;
char* Err_702=0;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
struct sNode* _inf_value10;
struct sCharNode* _inf_obj_value10;
void* __right_value927 = (void*)0;
struct sNode* __result_obj__325;
int sline_real_704;
unsigned int c_705;
_Bool quote_706;
int n_707;
int n_708;
unsigned long long int n_711;
unsigned char p2_712;
int size_713;
void* __right_value928 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var30 = (void*)0;
int come_exception_var_c7_715=0;
char* Err_716=0;
void* __right_value929 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var31 = (void*)0;
int come_exception_var_c8_717=0;
char* Err_718=0;
void* __right_value930 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var32 = (void*)0;
int come_exception_var_c9_719=0;
char* Err_720=0;
void* __right_value931 = (void*)0;
void* __right_value932 = (void*)0;
struct sNode* _inf_value11;
struct sWCharNode* _inf_obj_value11;
void* __right_value935 = (void*)0;
struct sNode* __result_obj__328;
int sline_real_722;
int sline_723;
void* __right_value936 = (void*)0;
void* __right_value937 = (void*)0;
struct buffer* value_724;
char* p_725;
int sline_726;
int sline2_727;
void* __right_value938 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var33 = (void*)0;
int come_exception_var_c10_728=0;
char* Err_729=0;
int len_730;
void* __right_value939 = (void*)0;
unsigned int* wstr_731;
char* str_732;
void* __right_value940 = (void*)0;
void* __right_value941 = (void*)0;
struct sNode* _inf_value12;
struct sWStringNode* _inf_obj_value12;
void* __right_value945 = (void*)0;
struct sNode* __result_obj__331;
int sline_real_734;
int sline_735;
void* __right_value946 = (void*)0;
void* __right_value947 = (void*)0;
struct list$1sNode$ph* exps_736;
void* __right_value948 = (void*)0;
void* __right_value949 = (void*)0;
struct buffer* value_737;
char* p_738;
int sline_739;
int len_740;
void* __right_value950 = (void*)0;
struct sNode* exp_741;
int sline2_742;
void* __right_value951 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var34 = (void*)0;
int come_exception_var_c11_743=0;
char* Err_744=0;
void* __right_value952 = (void*)0;
void* __right_value953 = (void*)0;
void* __right_value954 = (void*)0;
struct sNode* _inf_value13;
struct sSStringNode* _inf_obj_value13;
void* __right_value955 = (void*)0;
struct sNode* __result_obj__332;
int sline_real_745;
char* p_746;
_Bool no_comma_747;
void* __right_value956 = (void*)0;
struct sNode* node_748;
char* p2_749;
void* __right_value957 = (void*)0;
void* __right_value958 = (void*)0;
struct buffer* first_element_source_750;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
struct list$1sNode$ph* list_elements_751;
void* __right_value961 = (void*)0;
void* __right_value962 = (void*)0;
struct list$1sNode$ph* map_keys_752;
void* __right_value963 = (void*)0;
void* __right_value964 = (void*)0;
struct list$1sNode$ph* map_elements_753;
_Bool no_comma_754;
void* __right_value965 = (void*)0;
struct sNode* node2_755;
void* __right_value966 = (void*)0;
void* __right_value967 = (void*)0;
struct sNode* _inf_value14;
struct sMapNode* _inf_obj_value14;
void* __right_value972 = (void*)0;
struct sNode* __result_obj__335;
_Bool no_comma_757;
void* __right_value973 = (void*)0;
struct sNode* node2_758;
void* __right_value974 = (void*)0;
struct sNode* node3_759;
void* __right_value975 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var35 = (void*)0;
int come_exception_var_c12_760=0;
char* Err_761=0;
void* __right_value976 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var36 = (void*)0;
int come_exception_var_c13_762=0;
char* Err_763=0;
void* __right_value977 = (void*)0;
void* __right_value978 = (void*)0;
struct sNode* _inf_value15;
struct sMapNode* _inf_obj_value15;
void* __right_value979 = (void*)0;
struct sNode* __result_obj__336;
_Bool no_comma_764;
void* __right_value980 = (void*)0;
struct sNode* node2_765;
void* __right_value981 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var37 = (void*)0;
int come_exception_var_c14_766=0;
char* Err_767=0;
void* __right_value982 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var38 = (void*)0;
int come_exception_var_c15_768=0;
char* Err_769=0;
void* __right_value983 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var39 = (void*)0;
int come_exception_var_c16_770=0;
char* Err_771=0;
void* __right_value984 = (void*)0;
void* __right_value985 = (void*)0;
struct sNode* _inf_value16;
struct sListNode* _inf_obj_value16;
void* __right_value989 = (void*)0;
struct sNode* __result_obj__339;
void* __right_value990 = (void*)0;
struct sNode* node_773;
struct sNode* __result_obj__340;
struct sNode* __result_obj__341;
memset(&c_695, 0, sizeof(int));
memset(&c_705, 0, sizeof(unsigned int));
memset(&quote_706, 0, sizeof(_Bool));
memset(&size_713, 0, sizeof(int));
    if(    *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34&&*(info->p+3)==10) {
        sline_real_632=info->sline_real;
        info->sline_real=info->sline;
        info->p+=4;
        info->sline++;
        sline_633=info->sline;
        exps_634=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 1453, "struct list$1sNode$ph*"))));
        value_635=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1454, "struct buffer*"))));
        head_of_last_line_636=((void*)0);
        while(1) {
            if(            *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34) {
                if(                head_of_last_line_636) {
                    buffer_trim(value_635,info->p-head_of_last_line_636);
                }
                info->p+=3;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==37) {
                buffer_append_char(value_635,37);
                buffer_append_char(value_635,37);
                info->p++;
            }
            else if(            *info->p==34) {
                buffer_append_char(value_635,92);
                buffer_append_char(value_635,34);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_635,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_637=0;
                    while(xisdigit(*info->p)&&len_637<3) {
                        buffer_append_char(value_635,*info->p);
                        info->p++;
                        len_637++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_635,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_635,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_638=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph_add(exps_634,(struct sNode*)come_increment_ref_count(exp_638));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_635,"%s");
                    ((exp_638) ? exp_638 = come_decrement_ref_count(exp_638, ((struct sNode*)exp_638)->finalize, ((struct sNode*)exp_638)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_635,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_635,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_635,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_635,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_635,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_635,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_635,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_635,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_635,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_635,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_639=info->sline;
                info->sline=sline_633;
                multiple_assign_var24=((struct tuple2$2int$char$ph*)(__right_value795=err_msg(info,"close \" to make embbeded string value")));
                come_exception_var_c1_640=multiple_assign_var24->v1;
                Err_641=(char*)come_increment_ref_count(multiple_assign_var24->v2);
                ((Err_641)?(puts(Err_641),exit(2)):(0));
                /*c*/ come_call_finalizer3(__right_value795,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_641 = come_decrement_ref_count(Err_641, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    buffer_append_char(value_635,92);
                    buffer_append_char(value_635,110);
                    info->p++;
                    info->sline++;
                    head_of_last_line_636=info->p;
                }
                else {
                    buffer_append_char(value_635,*info->p);
                    info->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_632;
        _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1593, "struct sNode");
        _inf_obj_value5=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value798=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc_v2(1, sizeof(struct sSStringNode)*(1), "06str.c", 1593, "struct sSStringNode*")),(char*)come_increment_ref_count(buffer_to_string(value_635)),(struct list$1sNode$ph*)come_increment_ref_count(exps_634),sline_633,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sSStringNode_finalize;
        _inf_value5->clone=(void*)sSStringNode_clone;
        _inf_value5->compile=(void*)sSStringNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sSStringNode_kind;
        __result_obj__316 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value803=_inf_value5)));
        /*c*/ come_call_finalizer3(exps_634,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(value_635,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value798,sSStringNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value803) ? __right_value803 = come_decrement_ref_count(__right_value803, ((struct sNode*)__right_value803)->finalize, ((struct sNode*)__right_value803)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__316) ? __result_obj__316 = come_decrement_ref_count(__result_obj__316, ((struct sNode*)__result_obj__316)->finalize, ((struct sNode*)__result_obj__316)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__316;
        /*c*/ come_call_finalizer3(exps_634,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(value_635,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    *info->p==34) {
        sline_real_643=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_644=info->sline;
        value_645=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1603, "struct buffer*"))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_646=info->p;
                sline_647=info->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_646;
                    info->sline=sline_647;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_645,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_645,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_645,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_648=info->sline;
                info->sline=sline_644;
                multiple_assign_var25=((struct tuple2$2int$char$ph*)(__right_value806=err_msg(info,"close \" to make c string value")));
                come_exception_var_c2_649=multiple_assign_var25->v1;
                Err_650=(char*)come_increment_ref_count(multiple_assign_var25->v2);
                ((Err_650)?(puts(Err_650),exit(2)):(0));
                /*c*/ come_call_finalizer3(__right_value806,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                info->sline=sline2_648;
                exit(2);
                (Err_650 = come_decrement_ref_count(Err_650, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_645,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_643;
        _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1656, "struct sNode");
        _inf_obj_value6=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value809=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc_v2(1, sizeof(struct sStrNode)*(1), "06str.c", 1656, "struct sStrNode*")),(char*)come_increment_ref_count(buffer_to_string(value_645)),sline_644,info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sStrNode_finalize;
        _inf_value6->clone=(void*)sStrNode_clone;
        _inf_value6->compile=(void*)sStrNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sStrNode_kind;
        __result_obj__317 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value810=_inf_value6)));
        /*c*/ come_call_finalizer3(value_645,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value809,sStrNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value810) ? __right_value810 = come_decrement_ref_count(__right_value810, ((struct sNode*)__right_value810)->finalize, ((struct sNode*)__right_value810)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__317) ? __result_obj__317 = come_decrement_ref_count(__result_obj__317, ((struct sNode*)__result_obj__317)->finalize, ((struct sNode*)__result_obj__317)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__317;
        /*c*/ come_call_finalizer3(value_645,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    (*info->p==98||*info->p==66)&&*(info->p+1)==34) {
        sline_real_651=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_652=info->sline;
        value_653=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1666, "struct buffer*"))));
        size_654=0;
        while(1) {
            if(            *info->p==34) {
                buffer_append_char(value_653,*info->p);
                info->p++;
                p_655=info->p;
                sline_656=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_655;
                    info->sline=sline_656;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_653,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_657=0;
                    while(xisdigit(*info->p)&&len_657<3) {
                        buffer_append_char(value_653,*info->p);
                        info->p++;
                        len_657++;
                    }
                    size_654++;
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_653,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_653,*info->p);
                        info->p++;
                    }
                    size_654++;
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_653,*info->p);
                        info->p++;
                        size_654++;
                        break;
                        case 110:
                        buffer_append_char(value_653,*info->p);
                        info->p++;
                        size_654++;
                        break;
                        case 116:
                        buffer_append_char(value_653,*info->p);
                        info->p++;
                        size_654++;
                        break;
                        case 114:
                        buffer_append_char(value_653,*info->p);
                        info->p++;
                        size_654++;
                        break;
                        case 118:
                        buffer_append_char(value_653,*info->p);
                        info->p++;
                        size_654++;
                        break;
                        case 102:
                        buffer_append_char(value_653,*info->p);
                        info->p++;
                        size_654++;
                        break;
                        case 97:
                        buffer_append_char(value_653,*info->p);
                        info->p++;
                        size_654++;
                        break;
                        case 98:
                        buffer_append_char(value_653,*info->p);
                        info->p++;
                        size_654++;
                        break;
                        case 92:
                        buffer_append_char(value_653,*info->p);
                        info->p++;
                        size_654++;
                        break;
                        default:
                        buffer_append_char(value_653,*info->p);
                        info->p++;
                        size_654++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_658=info->sline;
                info->sline=sline_652;
                multiple_assign_var26=((struct tuple2$2int$char$ph*)(__right_value813=err_msg(info,"close \" to make embbeded string value")));
                come_exception_var_c3_659=multiple_assign_var26->v1;
                Err_660=(char*)come_increment_ref_count(multiple_assign_var26->v2);
                ((Err_660)?(puts(Err_660),exit(2)):(0));
                /*c*/ come_call_finalizer3(__right_value813,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_660 = come_decrement_ref_count(Err_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_653,*info->p);
                info->p++;
                size_654++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_651;
        _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1793, "struct sNode");
        _inf_obj_value7=(struct sBufferNode*)come_increment_ref_count(((struct sBufferNode*)(__right_value815=sBufferNode_initialize((struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc_v2(1, sizeof(struct sBufferNode)*(1), "06str.c", 1793, "struct sBufferNode*")),(struct buffer*)come_increment_ref_count(value_653),size_654,info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sBufferNode_finalize;
        _inf_value7->clone=(void*)sBufferNode_clone;
        _inf_value7->compile=(void*)sBufferNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sBufferNode_kind;
        __result_obj__320 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value819=_inf_value7)));
        /*c*/ come_call_finalizer3(value_653,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value815,sBufferNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value819) ? __right_value819 = come_decrement_ref_count(__right_value819, ((struct sNode*)__right_value819)->finalize, ((struct sNode*)__right_value819)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__320) ? __result_obj__320 = come_decrement_ref_count(__result_obj__320, ((struct sNode*)__result_obj__320)->finalize, ((struct sNode*)__result_obj__320)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__320;
        /*c*/ come_call_finalizer3(value_653,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    *info->p==47&&*(info->p-1)!=42&&*(info->p+1)!=42) {
        sline_real_662=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_663=info->sline;
        buf_664=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1802, "struct buffer*"))));
        while((_Bool)1) {
            if(            *info->p==92&&*(info->p+1)==47) {
                info->p++;
                buffer_append_char(buf_664,*info->p);
                info->p++;
            }
            else if(            *info->p==47) {
                info->p++;
                break;
            }
            else if(            *info->p==0) {
                multiple_assign_var27=((struct tuple2$2int$char$ph*)(__right_value822=err_msg(info,"require closing / for regex")));
                come_exception_var_c4_665=multiple_assign_var27->v1;
                Err_666=(char*)come_increment_ref_count(multiple_assign_var27->v2);
                ((Err_666)?(puts(Err_666),exit(2)):(0));
                /*c*/ come_call_finalizer3(__right_value822,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(5);
                (Err_666 = come_decrement_ref_count(Err_666, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                buffer_append_char(buf_664,*info->p);
                info->p++;
            }
        }
        global_667=(_Bool)0;
        ignore_case_668=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_667=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_668=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        catch_exception_669=(_Bool)0;
        if(        strncmp(info->p,".rescue",strlen(".rescue"))==0||strncmp(info->p,".exception_throw",strlen(".exception_throw"))==0||strncmp(info->p,".exception_value",strlen(".exception_value"))==0||strncmp(info->p,"!!",strlen("!!"))==0) {
            catch_exception_669=(_Bool)1;
        }
        _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1846, "struct sNode");
        _inf_obj_value8=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value825=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc_v2(1, sizeof(struct sStrNode)*(1), "06str.c", 1846, "struct sStrNode*")),(char*)come_increment_ref_count(buffer_to_string(buf_664)),sline_663,info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sStrNode_finalize;
        _inf_value8->clone=(void*)sStrNode_clone;
        _inf_value8->compile=(void*)sStrNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sStrNode_kind;
        obj_670=(struct sNode*)come_increment_ref_count(_inf_value8);
        /*c*/ come_call_finalizer3(__right_value825,sStrNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        params_671=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1848, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_671,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1850, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_670))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_671,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1851, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_668)?(((struct sNode*)(__right_value833=create_int_node(1,info)))):(((struct sNode*)(__right_value834=create_int_node(0,info)))))))));
        ((__right_value833) ? __right_value833 = come_decrement_ref_count(__right_value833, ((struct sNode*)__right_value833)->finalize, ((struct sNode*)__right_value833)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__right_value834) ? __right_value834 = come_decrement_ref_count(__right_value834, ((struct sNode*)__right_value834)->finalize, ((struct sNode*)__right_value834)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(params_671,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1852, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_671,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1853, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_667)?(((struct sNode*)(__right_value842=create_int_node(1,info)))):(((struct sNode*)(__right_value843=create_int_node(0,info)))))))));
        ((__right_value842) ? __right_value842 = come_decrement_ref_count(__right_value842, ((struct sNode*)__right_value842)->finalize, ((struct sNode*)__right_value842)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__right_value843) ? __right_value843 = come_decrement_ref_count(__right_value843, ((struct sNode*)__right_value843)->finalize, ((struct sNode*)__right_value843)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(params_671,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1854, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_671,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1855, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_671,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1856, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_671,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1857, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_671,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1858, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_672=((void*)0);
        method_block_sline_673=info->sline;
        method_generics_types_674=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "06str.c", 1864, "struct list$1sType$ph*"))));
        node_675=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_670),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_671),method_block_672,method_block_sline_673,method_generics_types_674,(_Bool)0,info));
        if(        !catch_exception_669) {
            __dec_obj157=node_675,
            node_675=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(sNode_clone(node_675)),info));
            (__dec_obj157 ? __dec_obj157 = come_decrement_ref_count(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        }
        info->sline_real=sline_real_662;
        __result_obj__321 = (struct sNode*)come_increment_ref_count(node_675);
        /*c*/ come_call_finalizer3(buf_664,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((obj_670) ? obj_670 = come_decrement_ref_count(obj_670, ((struct sNode*)obj_670)->finalize, ((struct sNode*)obj_670)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(params_671,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_types_674,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_675) ? node_675 = come_decrement_ref_count(node_675, ((struct sNode*)node_675)->finalize, ((struct sNode*)node_675)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__321) ? __result_obj__321 = come_decrement_ref_count(__result_obj__321, ((struct sNode*)__result_obj__321)->finalize, ((struct sNode*)__result_obj__321)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__321;
        /*c*/ come_call_finalizer3(buf_664,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((obj_670) ? obj_670 = come_decrement_ref_count(obj_670, ((struct sNode*)obj_670)->finalize, ((struct sNode*)obj_670)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(params_671,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_types_674,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_675) ? node_675 = come_decrement_ref_count(node_675, ((struct sNode*)node_675)->finalize, ((struct sNode*)node_675)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    (*info->p==82||*info->p==114)&&*(info->p+1)==34) {
        sline_real_676=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_677=info->sline;
        value_678=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1882, "struct buffer*"))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_679=info->p;
                sline_680=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_679;
                    info->sline=sline_680;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_678,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_681=0;
                    while(xisdigit(*info->p)&&len_681<3) {
                        buffer_append_char(value_678,*info->p);
                        info->p++;
                        len_681++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_678,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_678,*info->p);
                        info->p++;
                    }
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_678,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_678,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_678,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_678,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_678,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_678,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_678,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_678,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_678,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_678,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_682=info->sline;
                info->sline=sline_677;
                multiple_assign_var28=((struct tuple2$2int$char$ph*)(__right_value873=err_msg(info,"close \" to make embbeded string value")));
                come_exception_var_c5_683=multiple_assign_var28->v1;
                Err_684=(char*)come_increment_ref_count(multiple_assign_var28->v2);
                ((Err_684)?(puts(Err_684),exit(2)):(0));
                /*c*/ come_call_finalizer3(__right_value873,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_684 = come_decrement_ref_count(Err_684, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_678,*info->p);
                info->p++;
            }
        }
        global_685=(_Bool)0;
        ignore_case_686=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_685=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_686=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        catch_exception_687=(_Bool)0;
        if(        strncmp(info->p,".rescue",strlen(".rescue"))==0||strncmp(info->p,".exception_throw",strlen(".exception_throw"))==0||strncmp(info->p,".exception_value",strlen(".exception_value"))==0||strncmp(info->p,"!!",strlen("!!"))==0) {
            catch_exception_687=(_Bool)1;
        }
        _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2013, "struct sNode");
        _inf_obj_value9=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value876=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc_v2(1, sizeof(struct sStrNode)*(1), "06str.c", 2013, "struct sStrNode*")),(char*)come_increment_ref_count(buffer_to_string(value_678)),sline_677,info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sStrNode_finalize;
        _inf_value9->clone=(void*)sStrNode_clone;
        _inf_value9->compile=(void*)sStrNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sStrNode_kind;
        obj_688=(struct sNode*)come_increment_ref_count(_inf_value9);
        /*c*/ come_call_finalizer3(__right_value876,sStrNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        params_689=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 2015, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_689,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 2017, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_688))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_689,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 2018, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_686)?(((struct sNode*)(__right_value884=create_int_node(1,info)))):(((struct sNode*)(__right_value885=create_int_node(0,info)))))))));
        ((__right_value884) ? __right_value884 = come_decrement_ref_count(__right_value884, ((struct sNode*)__right_value884)->finalize, ((struct sNode*)__right_value884)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__right_value885) ? __right_value885 = come_decrement_ref_count(__right_value885, ((struct sNode*)__right_value885)->finalize, ((struct sNode*)__right_value885)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(params_689,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 2019, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_689,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 2020, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_685)?(((struct sNode*)(__right_value893=create_int_node(1,info)))):(((struct sNode*)(__right_value894=create_int_node(0,info)))))))));
        ((__right_value893) ? __right_value893 = come_decrement_ref_count(__right_value893, ((struct sNode*)__right_value893)->finalize, ((struct sNode*)__right_value893)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__right_value894) ? __right_value894 = come_decrement_ref_count(__right_value894, ((struct sNode*)__right_value894)->finalize, ((struct sNode*)__right_value894)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(params_689,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 2021, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_689,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 2022, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_689,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 2023, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_689,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 2024, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_689,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 2025, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_690=((void*)0);
        method_block_sline_691=info->sline;
        method_generics_types_692=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "06str.c", 2031, "struct list$1sType$ph*"))));
        node_693=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_688),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_689),method_block_690,method_block_sline_691,method_generics_types_692,(_Bool)0,info));
        if(        !catch_exception_687) {
            __dec_obj158=node_693,
            node_693=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(sNode_clone(node_693)),info));
            (__dec_obj158 ? __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        }
        info->sline_real=sline_real_676;
        __result_obj__322 = (struct sNode*)come_increment_ref_count(node_693);
        /*c*/ come_call_finalizer3(value_678,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((obj_688) ? obj_688 = come_decrement_ref_count(obj_688, ((struct sNode*)obj_688)->finalize, ((struct sNode*)obj_688)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(params_689,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_types_692,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_693) ? node_693 = come_decrement_ref_count(node_693, ((struct sNode*)node_693)->finalize, ((struct sNode*)node_693)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__322) ? __result_obj__322 = come_decrement_ref_count(__result_obj__322, ((struct sNode*)__result_obj__322)->finalize, ((struct sNode*)__result_obj__322)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__322;
        /*c*/ come_call_finalizer3(value_678,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((obj_688) ? obj_688 = come_decrement_ref_count(obj_688, ((struct sNode*)obj_688)->finalize, ((struct sNode*)obj_688)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(params_689,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_types_692,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_693) ? node_693 = come_decrement_ref_count(node_693, ((struct sNode*)node_693)->finalize, ((struct sNode*)node_693)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    *info->p==39) {
        sline_real_694=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        if(        *info->p==92) {
            info->p++;
            if(            xisdigit(*info->p)) {
                n_696=0;
                while(xisdigit(*info->p)) {
                    n_696=n_696*8+*info->p-48;
                    info->p++;
                }
                c_695=n_696;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_695=10;
                    info->p++;
                    break;
                    case 116:
                    c_695=9;
                    info->p++;
                    break;
                    case 114:
                    c_695=13;
                    info->p++;
                    break;
                    case 97:
                    c_695=7;
                    info->p++;
                    break;
                    case 102:
                    c_695=12;
                    info->p++;
                    break;
                    case 118:
                    c_695=11;
                    info->p++;
                    break;
                    case 98:
                    c_695=8;
                    info->p++;
                    break;
                    case 92:
                    c_695=92;
                    info->p++;
                    break;
                    case 48:
                    c_695=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_697=0;
                        while(xisdigit(*info->p)) {
                            n_697=n_697*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_695=n_697;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_698[128];
                        memset(&buf_698, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_698,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_699[2];
                            memset(&buf2_699, 0, sizeof(char)                            *(2)                            );
                            buf2_699[0]=*info->p;
                            buf2_699[1]=0;
                            info->p++;
                            strncat(buf_698,buf2_699,128);
                        }
                        n_700=strtoll(buf_698,((void*)0),0);
                        c_695=n_700;
                    }
                    break;
                    default:
                    c_695=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            c_695=*info->p;
            info->p++;
        }
        if(        *info->p!=39) {
            multiple_assign_var29=((struct tuple2$2int$char$ph*)(__right_value922=err_msg(info,"close \' to make character value")));
            come_exception_var_c6_701=multiple_assign_var29->v1;
            Err_702=(char*)come_increment_ref_count(multiple_assign_var29->v2);
            ((Err_702)?(puts(Err_702),exit(2)):(0));
            /*c*/ come_call_finalizer3(__right_value922,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (Err_702 = come_decrement_ref_count(Err_702, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_694;
            _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2160, "struct sNode");
            _inf_obj_value10=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(__right_value924=sCharNode_initialize((struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc_v2(1, sizeof(struct sCharNode)*(1), "06str.c", 2160, "struct sCharNode*")),c_695,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sCharNode_finalize;
            _inf_value10->clone=(void*)sCharNode_clone;
            _inf_value10->compile=(void*)sCharNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sCharNode_kind;
            __result_obj__325 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value927=_inf_value10)));
            /*c*/ come_call_finalizer3(__right_value924,sCharNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value927) ? __right_value927 = come_decrement_ref_count(__right_value927, ((struct sNode*)__right_value927)->finalize, ((struct sNode*)__right_value927)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__325) ? __result_obj__325 = come_decrement_ref_count(__result_obj__325, ((struct sNode*)__result_obj__325)->finalize, ((struct sNode*)__result_obj__325)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__325;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==39) {
        sline_real_704=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        if(        *info->p==92) {
            quote_706=(_Bool)1;
            info->p++;
            if(            xisdigit(*info->p)) {
                n_707=0;
                while(xisdigit(*info->p)) {
                    n_707=n_707*8+*info->p-48;
                    info->p++;
                }
                c_705=n_707;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_705=10;
                    info->p++;
                    break;
                    case 116:
                    c_705=9;
                    info->p++;
                    break;
                    case 114:
                    c_705=13;
                    info->p++;
                    break;
                    case 97:
                    c_705=7;
                    info->p++;
                    break;
                    case 92:
                    c_705=92;
                    info->p++;
                    break;
                    case 48:
                    c_705=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_708=0;
                        while(xisdigit(*info->p)) {
                            n_708=n_708*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_705=n_708;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_709[128];
                        memset(&buf_709, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_709,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_710[2];
                            memset(&buf2_710, 0, sizeof(char)                            *(2)                            );
                            buf2_710[0]=*info->p;
                            buf2_710[1]=0;
                            info->p++;
                            strncat(buf_709,buf2_710,128);
                        }
                        n_711=strtoll(buf_709,((void*)0),0);
                        c_705=n_711;
                    }
                    break;
                    default:
                    c_705=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            quote_706=(_Bool)0;
            p2_712=*(unsigned char*)info->p;
            if(            p2_712>127) {
                char str_714[4+1];
                memset(&str_714, 0, sizeof(char)                *(4+1)                );
                size_713=((p2_712&128)>>7)+((p2_712&64)>>6)+((p2_712&32)>>5)+((p2_712&16)>>4);
                if(                size_713>4) {
                    multiple_assign_var30=((struct tuple2$2int$char$ph*)(__right_value928=err_msg(info,"invalid utf-8 character. MB_LEN_MAX")));
                    come_exception_var_c7_715=multiple_assign_var30->v1;
                    Err_716=(char*)come_increment_ref_count(multiple_assign_var30->v2);
                    ((Err_716)?(puts(Err_716),exit(2)):(0));
                    /*c*/ come_call_finalizer3(__right_value928,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    info->err_num++;
                    (Err_716 = come_decrement_ref_count(Err_716, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    memcpy(str_714,info->p,size_713);
                    str_714[size_713]=0;
                    if(                    mbtowc(&c_705,str_714,size_713)<0) {
                        perror("mbtowc");
                        multiple_assign_var31=((struct tuple2$2int$char$ph*)(__right_value929=err_msg(info,"invalid utf-8 character. mbtowc")));
                        come_exception_var_c8_717=multiple_assign_var31->v1;
                        Err_718=(char*)come_increment_ref_count(multiple_assign_var31->v2);
                        ((Err_718)?(puts(Err_718),exit(2)):(0));
                        /*c*/ come_call_finalizer3(__right_value929,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        info->err_num++;
                        (Err_718 = come_decrement_ref_count(Err_718, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    else {
                        info->p+=size_713;
                    }
                }
            }
            else {
                c_705=*info->p;
                info->p++;
            }
        }
        if(        *info->p!=39) {
            multiple_assign_var32=((struct tuple2$2int$char$ph*)(__right_value930=err_msg(info,"close \' to make character value")));
            come_exception_var_c9_719=multiple_assign_var32->v1;
            Err_720=(char*)come_increment_ref_count(multiple_assign_var32->v2);
            ((Err_720)?(puts(Err_720),exit(2)):(0));
            /*c*/ come_call_finalizer3(__right_value930,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            info->err_num++;
            (Err_720 = come_decrement_ref_count(Err_720, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_704;
            _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2302, "struct sNode");
            _inf_obj_value11=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(__right_value932=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc_v2(1, sizeof(struct sWCharNode)*(1), "06str.c", 2302, "struct sWCharNode*")),c_705,quote_706,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sWCharNode_finalize;
            _inf_value11->clone=(void*)sWCharNode_clone;
            _inf_value11->compile=(void*)sWCharNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sWCharNode_kind;
            __result_obj__328 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value935=_inf_value11)));
            /*c*/ come_call_finalizer3(__right_value932,sWCharNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value935) ? __right_value935 = come_decrement_ref_count(__right_value935, ((struct sNode*)__right_value935)->finalize, ((struct sNode*)__right_value935)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__328) ? __result_obj__328 = come_decrement_ref_count(__result_obj__328, ((struct sNode*)__result_obj__328)->finalize, ((struct sNode*)__result_obj__328)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__328;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==34) {
        sline_real_722=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_723=info->sline;
        value_724=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 2313, "struct buffer*"))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_725=info->p;
                sline_726=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_725;
                    info->sline=sline_726;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_724,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_724,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_724,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_727=info->sline;
                info->sline=sline_723;
                multiple_assign_var33=((struct tuple2$2int$char$ph*)(__right_value938=err_msg(info,"close \" to make c string value")));
                come_exception_var_c10_728=multiple_assign_var33->v1;
                Err_729=(char*)come_increment_ref_count(multiple_assign_var33->v2);
                ((Err_729)?(puts(Err_729),exit(2)):(0));
                /*c*/ come_call_finalizer3(__right_value938,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_729 = come_decrement_ref_count(Err_729, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_724,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        len_730=value_724->len;
        wstr_731=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc_v2(1, sizeof(unsigned int)*(1*(len_730+1)), "06str.c", 2364, "unsigned int*"));
        str_732=value_724->buf;
        if(        mbstowcs(wstr_731,str_732,len_730+1)<0) {
            perror("mbstowcs");
            exit(1);
        }
        wstr_731[len_730]=0;
        info->sline_real=sline_real_722;
        _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2376, "struct sNode");
        _inf_obj_value12=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(__right_value941=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc_v2(1, sizeof(struct sWStringNode)*(1), "06str.c", 2376, "struct sWStringNode*")),(unsigned int*)come_increment_ref_count(wstr_731),sline_723,info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sWStringNode_finalize;
        _inf_value12->clone=(void*)sWStringNode_clone;
        _inf_value12->compile=(void*)sWStringNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sWStringNode_kind;
        __result_obj__331 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value945=_inf_value12)));
        /*c*/ come_call_finalizer3(value_724,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (wstr_731 = come_decrement_ref_count(wstr_731, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value941,sWStringNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value945) ? __right_value945 = come_decrement_ref_count(__right_value945, ((struct sNode*)__right_value945)->finalize, ((struct sNode*)__right_value945)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__331) ? __result_obj__331 = come_decrement_ref_count(__result_obj__331, ((struct sNode*)__result_obj__331)->finalize, ((struct sNode*)__result_obj__331)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__331;
        /*c*/ come_call_finalizer3(value_724,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (wstr_731 = come_decrement_ref_count(wstr_731, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    (*info->p==115||*info->p==83)&&*(info->p+1)==34) {
        sline_real_734=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_735=info->sline;
        exps_736=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2386, "struct list$1sNode$ph*"))));
        value_737=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 2387, "struct buffer*"))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_738=info->p;
                sline_739=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_738;
                    info->sline=sline_739;
                    break;
                }
            }
            else if(            *info->p==37) {
                buffer_append_char(value_737,37);
                buffer_append_char(value_737,37);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_737,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_740=0;
                    while(xisdigit(*info->p)&&len_740<3) {
                        buffer_append_char(value_737,*info->p);
                        info->p++;
                        len_740++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_737,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_737,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_741=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph_add(exps_736,(struct sNode*)come_increment_ref_count(exp_741));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_737,"%s");
                    ((exp_741) ? exp_741 = come_decrement_ref_count(exp_741, ((struct sNode*)exp_741)->finalize, ((struct sNode*)exp_741)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_737,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_737,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_737,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_737,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_737,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_737,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_737,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_737,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_737,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_737,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_742=info->sline;
                info->sline=sline_735;
                multiple_assign_var34=((struct tuple2$2int$char$ph*)(__right_value951=err_msg(info,"close \" to make embbeded string value")));
                come_exception_var_c11_743=multiple_assign_var34->v1;
                Err_744=(char*)come_increment_ref_count(multiple_assign_var34->v2);
                ((Err_744)?(puts(Err_744),exit(2)):(0));
                /*c*/ come_call_finalizer3(__right_value951,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_744 = come_decrement_ref_count(Err_744, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_737,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_734;
        _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2535, "struct sNode");
        _inf_obj_value13=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value954=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc_v2(1, sizeof(struct sSStringNode)*(1), "06str.c", 2535, "struct sSStringNode*")),(char*)come_increment_ref_count(buffer_to_string(value_737)),(struct list$1sNode$ph*)come_increment_ref_count(exps_736),sline_735,info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sSStringNode_finalize;
        _inf_value13->clone=(void*)sSStringNode_clone;
        _inf_value13->compile=(void*)sSStringNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sSStringNode_kind;
        __result_obj__332 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value955=_inf_value13)));
        /*c*/ come_call_finalizer3(exps_736,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(value_737,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value954,sSStringNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value955) ? __right_value955 = come_decrement_ref_count(__right_value955, ((struct sNode*)__right_value955)->finalize, ((struct sNode*)__right_value955)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__332) ? __result_obj__332 = come_decrement_ref_count(__result_obj__332, ((struct sNode*)__result_obj__332)->finalize, ((struct sNode*)__result_obj__332)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__332;
        /*c*/ come_call_finalizer3(exps_736,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(value_737,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    *info->p==91) {
        sline_real_745=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        skip_spaces_and_lf(info);
        p_746=info->p;
        no_comma_747=info->no_comma;
        info->no_comma=(_Bool)1;
        node_748=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_747;
        p2_749=info->p;
        first_element_source_750=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 2554, "struct buffer*"))));
        buffer_append(first_element_source_750,p_746,p2_749-p_746);
        buffer_append_char(first_element_source_750,0);
        list_elements_751=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2559, "struct list$1sNode$ph*"))));
        map_keys_752=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2561, "struct list$1sNode$ph*"))));
        map_elements_753=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2562, "struct list$1sNode$ph*"))));
        if(        *info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph_push_back(map_keys_752,(struct sNode*)come_increment_ref_count(node_748));
            no_comma_754=info->no_comma;
            info->no_comma=(_Bool)1;
            node2_755=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_754;
            list$1sNode$ph_push_back(map_elements_753,(struct sNode*)come_increment_ref_count(node2_755));
            if(            *info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2585, "struct sNode");
                _inf_obj_value14=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value967=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc_v2(1, sizeof(struct sMapNode)*(1), "06str.c", 2585, "struct sMapNode*")),(struct list$1sNode$ph*)come_increment_ref_count(map_keys_752),(struct list$1sNode$ph*)come_increment_ref_count(map_elements_753),info))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sMapNode_finalize;
                _inf_value14->clone=(void*)sMapNode_clone;
                _inf_value14->compile=(void*)sMapNode_compile;
                _inf_value14->sline=(void*)sNodeBase_sline;
                _inf_value14->sline_real=(void*)sNodeBase_sline_real;
                _inf_value14->sname=(void*)sNodeBase_sname;
                _inf_value14->terminated=(void*)sNodeBase_terminated;
                _inf_value14->kind=(void*)sMapNode_kind;
                __result_obj__335 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value972=_inf_value14)));
                ((node2_755) ? node2_755 = come_decrement_ref_count(node2_755, ((struct sNode*)node2_755)->finalize, ((struct sNode*)node2_755)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((node_748) ? node_748 = come_decrement_ref_count(node_748, ((struct sNode*)node_748)->finalize, ((struct sNode*)node_748)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(first_element_source_750,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(list_elements_751,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_keys_752,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_elements_753,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__right_value967,sMapNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((__right_value972) ? __right_value972 = come_decrement_ref_count(__right_value972, ((struct sNode*)__right_value972)->finalize, ((struct sNode*)__right_value972)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__335) ? __result_obj__335 = come_decrement_ref_count(__result_obj__335, ((struct sNode*)__result_obj__335)->finalize, ((struct sNode*)__result_obj__335)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__335;
            }
            else {
                expected_next_character(44,info);
                while((_Bool)1) {
                    no_comma_757=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node2_758=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_757;
                    list$1sNode$ph_push_back(map_keys_752,(struct sNode*)come_increment_ref_count(node2_758));
                    expected_next_character(58,info);
                    no_comma_757=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node3_759=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_757;
                    list$1sNode$ph_push_back(map_elements_753,(struct sNode*)come_increment_ref_count(node3_759));
                    if(                    *info->p==0) {
                        multiple_assign_var35=((struct tuple2$2int$char$ph*)(__right_value975=err_msg(info,"invalid source end")));
                        come_exception_var_c12_760=multiple_assign_var35->v1;
                        Err_761=(char*)come_increment_ref_count(multiple_assign_var35->v2);
                        ((Err_761)?(puts(Err_761),exit(2)):(0));
                        /*c*/ come_call_finalizer3(__right_value975,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_761 = come_decrement_ref_count(Err_761, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    else if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==93) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        ((node2_758) ? node2_758 = come_decrement_ref_count(node2_758, ((struct sNode*)node2_758)->finalize, ((struct sNode*)node2_758)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        ((node3_759) ? node3_759 = come_decrement_ref_count(node3_759, ((struct sNode*)node3_759)->finalize, ((struct sNode*)node3_759)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        break;
                    }
                    else {
                        multiple_assign_var36=((struct tuple2$2int$char$ph*)(__right_value976=err_msg(info,"invalid character(3)(%c)",*info->p)));
                        come_exception_var_c13_762=multiple_assign_var36->v1;
                        Err_763=(char*)come_increment_ref_count(multiple_assign_var36->v2);
                        ((Err_763)?(puts(Err_763),exit(2)):(0));
                        /*c*/ come_call_finalizer3(__right_value976,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_763 = come_decrement_ref_count(Err_763, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    ((node2_758) ? node2_758 = come_decrement_ref_count(node2_758, ((struct sNode*)node2_758)->finalize, ((struct sNode*)node2_758)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((node3_759) ? node3_759 = come_decrement_ref_count(node3_759, ((struct sNode*)node3_759)->finalize, ((struct sNode*)node3_759)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2630, "struct sNode");
                _inf_obj_value15=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value978=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc_v2(1, sizeof(struct sMapNode)*(1), "06str.c", 2630, "struct sMapNode*")),(struct list$1sNode$ph*)come_increment_ref_count(map_keys_752),(struct list$1sNode$ph*)come_increment_ref_count(map_elements_753),info))));
                _inf_value15->_protocol_obj=_inf_obj_value15;
                _inf_value15->finalize=(void*)sMapNode_finalize;
                _inf_value15->clone=(void*)sMapNode_clone;
                _inf_value15->compile=(void*)sMapNode_compile;
                _inf_value15->sline=(void*)sNodeBase_sline;
                _inf_value15->sline_real=(void*)sNodeBase_sline_real;
                _inf_value15->sname=(void*)sNodeBase_sname;
                _inf_value15->terminated=(void*)sNodeBase_terminated;
                _inf_value15->kind=(void*)sMapNode_kind;
                __result_obj__336 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value979=_inf_value15)));
                ((node2_755) ? node2_755 = come_decrement_ref_count(node2_755, ((struct sNode*)node2_755)->finalize, ((struct sNode*)node2_755)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((node_748) ? node_748 = come_decrement_ref_count(node_748, ((struct sNode*)node_748)->finalize, ((struct sNode*)node_748)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(first_element_source_750,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(list_elements_751,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_keys_752,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_elements_753,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__right_value978,sMapNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((__right_value979) ? __right_value979 = come_decrement_ref_count(__right_value979, ((struct sNode*)__right_value979)->finalize, ((struct sNode*)__right_value979)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__336) ? __result_obj__336 = come_decrement_ref_count(__result_obj__336, ((struct sNode*)__result_obj__336)->finalize, ((struct sNode*)__result_obj__336)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__336;
            }
            ((node2_755) ? node2_755 = come_decrement_ref_count(node2_755, ((struct sNode*)node2_755)->finalize, ((struct sNode*)node2_755)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph_push_back(list_elements_751,(struct sNode*)come_increment_ref_count(node_748));
        }
        else if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph_push_back(list_elements_751,(struct sNode*)come_increment_ref_count(node_748));
            while((_Bool)1) {
                no_comma_764=info->no_comma;
                info->no_comma=(_Bool)1;
                node2_765=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_764;
                list$1sNode$ph_push_back(list_elements_751,(struct sNode*)come_increment_ref_count(node2_765));
                if(                *info->p==0) {
                    multiple_assign_var37=((struct tuple2$2int$char$ph*)(__right_value981=err_msg(info,"invalid source end")));
                    come_exception_var_c14_766=multiple_assign_var37->v1;
                    Err_767=(char*)come_increment_ref_count(multiple_assign_var37->v2);
                    ((Err_767)?(puts(Err_767),exit(2)):(0));
                    /*c*/ come_call_finalizer3(__right_value981,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                    (Err_767 = come_decrement_ref_count(Err_767, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==93) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    ((node2_765) ? node2_765 = come_decrement_ref_count(node2_765, ((struct sNode*)node2_765)->finalize, ((struct sNode*)node2_765)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                }
                else {
                    multiple_assign_var38=((struct tuple2$2int$char$ph*)(__right_value982=err_msg(info,"invalid character(4)(%c)",*info->p)));
                    come_exception_var_c15_768=multiple_assign_var38->v1;
                    Err_769=(char*)come_increment_ref_count(multiple_assign_var38->v2);
                    ((Err_769)?(puts(Err_769),exit(2)):(0));
                    /*c*/ come_call_finalizer3(__right_value982,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                    (Err_769 = come_decrement_ref_count(Err_769, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                ((node2_765) ? node2_765 = come_decrement_ref_count(node2_765, ((struct sNode*)node2_765)->finalize, ((struct sNode*)node2_765)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
        }
        else {
            multiple_assign_var39=((struct tuple2$2int$char$ph*)(__right_value983=err_msg(info,"invalid character(5)(%c)",*info->p)));
            come_exception_var_c16_770=multiple_assign_var39->v1;
            Err_771=(char*)come_increment_ref_count(multiple_assign_var39->v2);
            ((Err_771)?(puts(Err_771),exit(2)):(0));
            /*c*/ come_call_finalizer3(__right_value983,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            exit(2);
            (Err_771 = come_decrement_ref_count(Err_771, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        list$1sNode$ph_length(list_elements_751)>0) {
            info->sline_real=sline_real_745;
            _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2682, "struct sNode");
            _inf_obj_value16=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(__right_value985=sListNode_initialize((struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc_v2(1, sizeof(struct sListNode)*(1), "06str.c", 2682, "struct sListNode*")),(struct list$1sNode$ph*)come_increment_ref_count(list_elements_751),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sListNode_finalize;
            _inf_value16->clone=(void*)sListNode_clone;
            _inf_value16->compile=(void*)sListNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sListNode_kind;
            __result_obj__339 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value989=_inf_value16)));
            ((node_748) ? node_748 = come_decrement_ref_count(node_748, ((struct sNode*)node_748)->finalize, ((struct sNode*)node_748)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(first_element_source_750,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(list_elements_751,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(map_keys_752,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(map_elements_753,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__right_value985,sListNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value989) ? __right_value989 = come_decrement_ref_count(__right_value989, ((struct sNode*)__right_value989)->finalize, ((struct sNode*)__right_value989)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__339) ? __result_obj__339 = come_decrement_ref_count(__result_obj__339, ((struct sNode*)__result_obj__339)->finalize, ((struct sNode*)__result_obj__339)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__339;
        }
        else {
        }
        ((node_748) ? node_748 = come_decrement_ref_count(node_748, ((struct sNode*)node_748)->finalize, ((struct sNode*)node_748)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(first_element_source_750,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(list_elements_751,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(map_keys_752,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(map_elements_753,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        node_773=(struct sNode*)come_increment_ref_count(expression_node_v95(info));
        __result_obj__340 = (struct sNode*)come_increment_ref_count(node_773);
        ((node_773) ? node_773 = come_decrement_ref_count(node_773, ((struct sNode*)node_773)->finalize, ((struct sNode*)node_773)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__340) ? __result_obj__340 = come_decrement_ref_count(__result_obj__340, ((struct sNode*)__result_obj__340)->finalize, ((struct sNode*)__result_obj__340)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__340;
        ((node_773) ? node_773 = come_decrement_ref_count(node_773, ((struct sNode*)node_773)->finalize, ((struct sNode*)node_773)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    __result_obj__341 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__341) ? __result_obj__341 = come_decrement_ref_count(__result_obj__341, ((struct sNode*)__result_obj__341)->finalize, ((struct sNode*)__result_obj__341)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__341;
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
struct sSStringNode* __result_obj__314;
void* __right_value799 = (void*)0;
struct sSStringNode* result_642;
void* __right_value800 = (void*)0;
char* __dec_obj152;
void* __right_value801 = (void*)0;
char* __dec_obj153;
void* __right_value802 = (void*)0;
struct list$1sNode$ph* __dec_obj154;
struct sSStringNode* __result_obj__315;
    if(    self==(void*)0) {
        __result_obj__314 = (void*)0;
        return __result_obj__314;
    }
    result_642=(struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc_v2(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3, "struct sSStringNode*"));
    if(    self!=((void*)0)) {
        result_642->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj152=result_642->sname,
        result_642->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSStringNode_clone", 5, "char*"));
        __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_642->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj153=result_642->value,
        result_642->value=(char*)come_increment_ref_count((char*)come_memdup(self->value, "sSStringNode_clone", 7, "char*"));
        __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj154=result_642->exps,
        result_642->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->exps));
        /*b*/ come_call_finalizer3(__dec_obj154,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__315 = result_642;
    /*c*/ come_call_finalizer3(result_642,sSStringNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__315;
}

static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self){
struct sBufferNode* __result_obj__318;
void* __right_value816 = (void*)0;
struct sBufferNode* result_661;
void* __right_value817 = (void*)0;
char* __dec_obj155;
void* __right_value818 = (void*)0;
struct buffer* __dec_obj156;
struct sBufferNode* __result_obj__319;
    if(    self==(void*)0) {
        __result_obj__318 = (void*)0;
        return __result_obj__318;
    }
    result_661=(struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc_v2(1, sizeof(struct sBufferNode)*(1), "sBufferNode_clone", 3, "struct sBufferNode*"));
    if(    self!=((void*)0)) {
        result_661->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj155=result_661->sname,
        result_661->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sBufferNode_clone", 5, "char*"));
        __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_661->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj156=result_661->value,
        result_661->value=(struct buffer*)come_increment_ref_count(buffer_clone(self->value));
        /*b*/ come_call_finalizer3(__dec_obj156,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_661->size=self->size;
    }
    __result_obj__319 = result_661;
    /*c*/ come_call_finalizer3(result_661,sBufferNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__319;
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
struct sCharNode* __result_obj__323;
void* __right_value925 = (void*)0;
struct sCharNode* result_703;
void* __right_value926 = (void*)0;
char* __dec_obj159;
struct sCharNode* __result_obj__324;
    if(    self==(void*)0) {
        __result_obj__323 = (void*)0;
        return __result_obj__323;
    }
    result_703=(struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc_v2(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3, "struct sCharNode*"));
    if(    self!=((void*)0)) {
        result_703->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj159=result_703->sname,
        result_703->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCharNode_clone", 5, "char*"));
        __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_703->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_703->value=self->value;
    }
    __result_obj__324 = result_703;
    /*c*/ come_call_finalizer3(result_703,sCharNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__324;
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
struct sWCharNode* __result_obj__326;
void* __right_value933 = (void*)0;
struct sWCharNode* result_721;
void* __right_value934 = (void*)0;
char* __dec_obj160;
struct sWCharNode* __result_obj__327;
    if(    self==(void*)0) {
        __result_obj__326 = (void*)0;
        return __result_obj__326;
    }
    result_721=(struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc_v2(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3, "struct sWCharNode*"));
    if(    self!=((void*)0)) {
        result_721->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj160=result_721->sname,
        result_721->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sWCharNode_clone", 5, "char*"));
        __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_721->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_721->value=self->value;
    }
    if(    self!=((void*)0)) {
        result_721->quote=self->quote;
    }
    __result_obj__327 = result_721;
    /*c*/ come_call_finalizer3(result_721,sWCharNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__327;
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
struct sWStringNode* __result_obj__329;
void* __right_value942 = (void*)0;
struct sWStringNode* result_733;
void* __right_value943 = (void*)0;
char* __dec_obj161;
void* __right_value944 = (void*)0;
unsigned int* __dec_obj162;
struct sWStringNode* __result_obj__330;
    if(    self==(void*)0) {
        __result_obj__329 = (void*)0;
        return __result_obj__329;
    }
    result_733=(struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc_v2(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3, "struct sWStringNode*"));
    if(    self!=((void*)0)) {
        result_733->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj161=result_733->sname,
        result_733->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sWStringNode_clone", 5, "char*"));
        __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_733->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj162=result_733->value,
        result_733->value=(unsigned int*)come_increment_ref_count((unsigned int*)come_memdup(self->value, "sWStringNode_clone", 7, "unsigned int*"));
        __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__330 = result_733;
    /*c*/ come_call_finalizer3(result_733,sWStringNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__330;
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
struct sMapNode* __result_obj__333;
void* __right_value968 = (void*)0;
struct sMapNode* result_756;
void* __right_value969 = (void*)0;
char* __dec_obj163;
void* __right_value970 = (void*)0;
struct list$1sNode$ph* __dec_obj164;
void* __right_value971 = (void*)0;
struct list$1sNode$ph* __dec_obj165;
struct sMapNode* __result_obj__334;
    if(    self==(void*)0) {
        __result_obj__333 = (void*)0;
        return __result_obj__333;
    }
    result_756=(struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc_v2(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3, "struct sMapNode*"));
    if(    self!=((void*)0)) {
        result_756->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj163=result_756->sname,
        result_756->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sMapNode_clone", 5, "char*"));
        __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_756->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        __dec_obj164=result_756->map_key_elements,
        result_756->map_key_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->map_key_elements));
        /*b*/ come_call_finalizer3(__dec_obj164,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)) {
        __dec_obj165=result_756->map_elements,
        result_756->map_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->map_elements));
        /*b*/ come_call_finalizer3(__dec_obj165,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__334 = result_756;
    /*c*/ come_call_finalizer3(result_756,sMapNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__334;
}

static struct sListNode* sListNode_clone(struct sListNode* self){
struct sListNode* __result_obj__337;
void* __right_value986 = (void*)0;
struct sListNode* result_772;
void* __right_value987 = (void*)0;
char* __dec_obj166;
void* __right_value988 = (void*)0;
struct list$1sNode$ph* __dec_obj167;
struct sListNode* __result_obj__338;
    if(    self==(void*)0) {
        __result_obj__337 = (void*)0;
        return __result_obj__337;
    }
    result_772=(struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc_v2(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3, "struct sListNode*"));
    if(    self!=((void*)0)) {
        result_772->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj166=result_772->sname,
        result_772->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sListNode_clone", 5, "char*"));
        __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_772->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        __dec_obj167=result_772->list_elements,
        result_772->list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->list_elements));
        /*b*/ come_call_finalizer3(__dec_obj167,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__338 = result_772;
    /*c*/ come_call_finalizer3(result_772,sListNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__338;
}

struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple){
void* __right_value991 = (void*)0;
void* __right_value992 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements_774;
char* p_775;
char* name_776;
void* __right_value993 = (void*)0;
char* __dec_obj168;
_Bool no_comma_777;
void* __right_value994 = (void*)0;
struct sNode* node_778;
void* __right_value995 = (void*)0;
struct sNode* __dec_obj169;
void* __right_value999 = (void*)0;
void* __right_value1000 = (void*)0;
void* __right_value1001 = (void*)0;
void* __right_value1002 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var40 = (void*)0;
int come_exception_var_c17_782=0;
char* Err_783=0;
void* __right_value1003 = (void*)0;
void* __right_value1004 = (void*)0;
struct sNode* _inf_value17;
struct sTupleNode* _inf_obj_value17;
void* __right_value1012 = (void*)0;
struct sNode* __result_obj__347;
name_776 = (void*)0;
    tuple_elements_774=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 2697, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    while((_Bool)1) {
        p_775=info->p;
        if(        named_tuple) {
            __dec_obj168=name_776,
            name_776=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            expected_next_character(58,info);
        }
        no_comma_777=info->no_comma;
        info->no_comma=(_Bool)1;
        node_778=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj169=node_778,
        node_778=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_778),info));
        (__dec_obj169 ? __dec_obj169 = come_decrement_ref_count(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        info->no_comma=no_comma_777;
        list$1tuple2$2char$phsNode$ph$ph_push_back(tuple_elements_774,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 2716, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count((char*)come_memdup(name_776, "06str.c", 2716, "char*")),(struct sNode*)come_increment_ref_count(node_778))));
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            (name_776 = come_decrement_ref_count(name_776, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_778) ? node_778 = come_decrement_ref_count(node_778, ((struct sNode*)node_778)->finalize, ((struct sNode*)node_778)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            break;
        }
        else {
            multiple_assign_var40=((struct tuple2$2int$char$ph*)(__right_value1002=err_msg(info,"invalid character in tuple expression (%c)",*info->p)));
            come_exception_var_c17_782=multiple_assign_var40->v1;
            Err_783=(char*)come_increment_ref_count(multiple_assign_var40->v2);
            ((Err_783)?(puts(Err_783),exit(2)):(0));
            /*c*/ come_call_finalizer3(__right_value1002,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            exit(2);
            (Err_783 = come_decrement_ref_count(Err_783, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (name_776 = come_decrement_ref_count(name_776, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_778) ? node_778 = come_decrement_ref_count(node_778, ((struct sNode*)node_778)->finalize, ((struct sNode*)node_778)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2733, "struct sNode");
    _inf_obj_value17=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(__right_value1004=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc_v2(1, sizeof(struct sTupleNode)*(1), "06str.c", 2733, "struct sTupleNode*")),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(tuple_elements_774),info))));
    _inf_value17->_protocol_obj=_inf_obj_value17;
    _inf_value17->finalize=(void*)sTupleNode_finalize;
    _inf_value17->clone=(void*)sTupleNode_clone;
    _inf_value17->compile=(void*)sTupleNode_compile;
    _inf_value17->sline=(void*)sNodeBase_sline;
    _inf_value17->sline_real=(void*)sNodeBase_sline_real;
    _inf_value17->sname=(void*)sNodeBase_sname;
    _inf_value17->terminated=(void*)sNodeBase_terminated;
    _inf_value17->kind=(void*)sTupleNode_kind;
    __result_obj__347 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value1012=_inf_value17)));
    /*c*/ come_call_finalizer3(tuple_elements_774,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value1004,sTupleNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value1012) ? __right_value1012 = come_decrement_ref_count(__right_value1012, ((struct sNode*)__right_value1012)->finalize, ((struct sNode*)__right_value1012)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__347) ? __result_obj__347 = come_decrement_ref_count(__result_obj__347, ((struct sNode*)__result_obj__347)->finalize, ((struct sNode*)__result_obj__347)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__347;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value996 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_779;
struct tuple2$2char$phsNode$ph* __dec_obj170;
void* __right_value997 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_780;
struct tuple2$2char$phsNode$ph* __dec_obj171;
void* __right_value998 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_781;
struct tuple2$2char$phsNode$ph* __dec_obj172;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__342;
    if(    self->len==0) {
        litem_779=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value996=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1111, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_779->prev=((void*)0);
        litem_779->next=((void*)0);
        __dec_obj170=litem_779->item,
        litem_779->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj170,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_779;
        self->head=litem_779;
    }
    else if(    self->len==1) {
        litem_780=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value997=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1121, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_780->prev=self->head;
        litem_780->next=((void*)0);
        __dec_obj171=litem_780->item,
        litem_780->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj171,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_780;
        self->head->next=litem_780;
    }
    else {
        litem_781=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value998=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1131, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_781->prev=self->tail;
        litem_781->next=((void*)0);
        __dec_obj172=litem_781->item,
        litem_781->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj172,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_781;
        self->tail=litem_781;
    }
    self->len++;
    __result_obj__342 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__342;
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
struct sTupleNode* __result_obj__343;
void* __right_value1005 = (void*)0;
struct sTupleNode* result_784;
void* __right_value1006 = (void*)0;
char* __dec_obj173;
void* __right_value1011 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj174;
struct sTupleNode* __result_obj__346;
    if(    self==(void*)0) {
        __result_obj__343 = (void*)0;
        return __result_obj__343;
    }
    result_784=(struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc_v2(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3, "struct sTupleNode*"));
    if(    self!=((void*)0)) {
        result_784->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj173=result_784->sname,
        result_784->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sTupleNode_clone", 5, "char*"));
        __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_784->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj174=result_784->tuple_elements,
        result_784->tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->tuple_elements));
        /*b*/ come_call_finalizer3(__dec_obj174,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__346 = result_784;
    /*c*/ come_call_finalizer3(result_784,sTupleNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__346;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__344;
void* __right_value1007 = (void*)0;
void* __right_value1008 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_785;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_786;
void* __right_value1009 = (void*)0;
void* __right_value1010 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__345;
    if(    self==((void*)0)) {
        __result_obj__344 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__344,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__344;
    }
    result_785=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1022, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it_786=self->head;
    while(it_786!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph_add(result_785,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_786->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result_785,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_786->item)));
        }
        it_786=it_786->next;
    }
    __result_obj__345 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result_785);
    /*c*/ come_call_finalizer3(result_785,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__345,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__345;
}

struct sNode* create_some(struct sNode* exp, struct sInfo* info){
void* __right_value1013 = (void*)0;
void* __right_value1014 = (void*)0;
struct list$1sNode$ph* tuple_elements_787;
struct sNode* node_788;
void* __right_value1015 = (void*)0;
struct sNode* node2_789;
void* __right_value1016 = (void*)0;
void* __right_value1017 = (void*)0;
struct sNode* _inf_value18;
struct sSomeNode* _inf_obj_value18;
void* __right_value1021 = (void*)0;
struct sNode* __result_obj__350;
    tuple_elements_787=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2738, "struct list$1sNode$ph*"))));
    node_788=(struct sNode*)come_increment_ref_count(exp);
    list$1sNode$ph_push_back(tuple_elements_787,(struct sNode*)come_increment_ref_count(node_788));
    node2_789=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNode$ph_push_back(tuple_elements_787,(struct sNode*)come_increment_ref_count(node2_789));
    _inf_value18=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2748, "struct sNode");
    _inf_obj_value18=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value1017=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc_v2(1, sizeof(struct sSomeNode)*(1), "06str.c", 2748, "struct sSomeNode*")),(struct list$1sNode$ph*)come_increment_ref_count(tuple_elements_787),info))));
    _inf_value18->_protocol_obj=_inf_obj_value18;
    _inf_value18->finalize=(void*)sSomeNode_finalize;
    _inf_value18->clone=(void*)sSomeNode_clone;
    _inf_value18->compile=(void*)sSomeNode_compile;
    _inf_value18->sline=(void*)sNodeBase_sline;
    _inf_value18->sline_real=(void*)sNodeBase_sline_real;
    _inf_value18->sname=(void*)sNodeBase_sname;
    _inf_value18->terminated=(void*)sNodeBase_terminated;
    _inf_value18->kind=(void*)sSomeNode_kind;
    __result_obj__350 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value1021=_inf_value18)));
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(tuple_elements_787,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_788) ? node_788 = come_decrement_ref_count(node_788, ((struct sNode*)node_788)->finalize, ((struct sNode*)node_788)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((node2_789) ? node2_789 = come_decrement_ref_count(node2_789, ((struct sNode*)node2_789)->finalize, ((struct sNode*)node2_789)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value1017,sSomeNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value1021) ? __right_value1021 = come_decrement_ref_count(__right_value1021, ((struct sNode*)__right_value1021)->finalize, ((struct sNode*)__right_value1021)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__350) ? __result_obj__350 = come_decrement_ref_count(__result_obj__350, ((struct sNode*)__result_obj__350)->finalize, ((struct sNode*)__result_obj__350)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__350;
}

static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self){
struct sSomeNode* __result_obj__348;
void* __right_value1018 = (void*)0;
struct sSomeNode* result_790;
void* __right_value1019 = (void*)0;
char* __dec_obj175;
void* __right_value1020 = (void*)0;
struct list$1sNode$ph* __dec_obj176;
struct sSomeNode* __result_obj__349;
    if(    self==(void*)0) {
        __result_obj__348 = (void*)0;
        return __result_obj__348;
    }
    result_790=(struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc_v2(1, sizeof(struct sSomeNode)*(1), "sSomeNode_clone", 3, "struct sSomeNode*"));
    if(    self!=((void*)0)) {
        result_790->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj175=result_790->sname,
        result_790->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSomeNode_clone", 5, "char*"));
        __dec_obj175 = come_decrement_ref_count(__dec_obj175, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_790->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj176=result_790->tuple_elements,
        result_790->tuple_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->tuple_elements));
        /*b*/ come_call_finalizer3(__dec_obj176,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__349 = result_790;
    /*c*/ come_call_finalizer3(result_790,sSomeNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__349;
}

struct sNode* parse_some(struct sInfo* info){
void* __right_value1022 = (void*)0;
void* __right_value1023 = (void*)0;
struct list$1sNode$ph* tuple_elements_791;
void* __right_value1024 = (void*)0;
struct sNode* node_792;
void* __right_value1025 = (void*)0;
struct sNode* __dec_obj177;
void* __right_value1026 = (void*)0;
struct sNode* node2_793;
void* __right_value1027 = (void*)0;
void* __right_value1028 = (void*)0;
struct sNode* _inf_value19;
struct sSomeNode* _inf_obj_value19;
void* __right_value1029 = (void*)0;
struct sNode* __result_obj__351;
    tuple_elements_791=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2753, "struct list$1sNode$ph*"))));
    expected_next_character(40,info);
    node_792=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj177=node_792,
    node_792=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_792),info));
    (__dec_obj177 ? __dec_obj177 = come_decrement_ref_count(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    expected_next_character(41,info);
    list$1sNode$ph_push_back(tuple_elements_791,(struct sNode*)come_increment_ref_count(node_792));
    node2_793=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNode$ph_push_back(tuple_elements_791,(struct sNode*)come_increment_ref_count(node2_793));
    _inf_value19=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2766, "struct sNode");
    _inf_obj_value19=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value1028=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc_v2(1, sizeof(struct sSomeNode)*(1), "06str.c", 2766, "struct sSomeNode*")),(struct list$1sNode$ph*)come_increment_ref_count(tuple_elements_791),info))));
    _inf_value19->_protocol_obj=_inf_obj_value19;
    _inf_value19->finalize=(void*)sSomeNode_finalize;
    _inf_value19->clone=(void*)sSomeNode_clone;
    _inf_value19->compile=(void*)sSomeNode_compile;
    _inf_value19->sline=(void*)sNodeBase_sline;
    _inf_value19->sline_real=(void*)sNodeBase_sline_real;
    _inf_value19->sname=(void*)sNodeBase_sname;
    _inf_value19->terminated=(void*)sNodeBase_terminated;
    _inf_value19->kind=(void*)sSomeNode_kind;
    __result_obj__351 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value1029=_inf_value19)));
    /*c*/ come_call_finalizer3(tuple_elements_791,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_792) ? node_792 = come_decrement_ref_count(node_792, ((struct sNode*)node_792)->finalize, ((struct sNode*)node_792)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((node2_793) ? node2_793 = come_decrement_ref_count(node2_793, ((struct sNode*)node2_793)->finalize, ((struct sNode*)node2_793)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value1028,sSomeNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value1029) ? __right_value1029 = come_decrement_ref_count(__right_value1029, ((struct sNode*)__right_value1029)->finalize, ((struct sNode*)__right_value1029)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__351) ? __result_obj__351 = come_decrement_ref_count(__result_obj__351, ((struct sNode*)__result_obj__351)->finalize, ((struct sNode*)__result_obj__351)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__351;
}

struct sNode* parse_none(struct sInfo* info){
void* __right_value1030 = (void*)0;
void* __right_value1031 = (void*)0;
struct list$1sNode$ph* tuple_elements_794;
void* __right_value1032 = (void*)0;
struct sNode* node_795;
void* __right_value1033 = (void*)0;
struct sNode* __dec_obj178;
void* __right_value1034 = (void*)0;
struct sNode* node2_796;
struct sNode* node3_797;
void* __right_value1035 = (void*)0;
void* __right_value1036 = (void*)0;
struct sNode* _inf_value20;
struct sNoneNode* _inf_obj_value20;
void* __right_value1040 = (void*)0;
struct sNode* __result_obj__354;
    tuple_elements_794=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2771, "struct list$1sNode$ph*"))));
    expected_next_character(40,info);
    node_795=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj178=node_795,
    node_795=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_795),info));
    (__dec_obj178 ? __dec_obj178 = come_decrement_ref_count(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    expected_next_character(41,info);
    node2_796=(struct sNode*)come_increment_ref_count(create_null_return_value_of_exception(info));
    list$1sNode$ph_push_back(tuple_elements_794,(struct sNode*)come_increment_ref_count(node2_796));
    node3_797=(struct sNode*)come_increment_ref_count(node_795);
    list$1sNode$ph_push_back(tuple_elements_794,(struct sNode*)come_increment_ref_count(node3_797));
    _inf_value20=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2786, "struct sNode");
    _inf_obj_value20=(struct sNoneNode*)come_increment_ref_count(((struct sNoneNode*)(__right_value1036=sNoneNode_initialize((struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc_v2(1, sizeof(struct sNoneNode)*(1), "06str.c", 2786, "struct sNoneNode*")),(struct list$1sNode$ph*)come_increment_ref_count(tuple_elements_794),info))));
    _inf_value20->_protocol_obj=_inf_obj_value20;
    _inf_value20->finalize=(void*)sNoneNode_finalize;
    _inf_value20->clone=(void*)sNoneNode_clone;
    _inf_value20->compile=(void*)sNoneNode_compile;
    _inf_value20->sline=(void*)sNodeBase_sline;
    _inf_value20->sline_real=(void*)sNodeBase_sline_real;
    _inf_value20->sname=(void*)sNodeBase_sname;
    _inf_value20->terminated=(void*)sNodeBase_terminated;
    _inf_value20->kind=(void*)sNoneNode_kind;
    __result_obj__354 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value1040=_inf_value20)));
    /*c*/ come_call_finalizer3(tuple_elements_794,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_795) ? node_795 = come_decrement_ref_count(node_795, ((struct sNode*)node_795)->finalize, ((struct sNode*)node_795)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((node2_796) ? node2_796 = come_decrement_ref_count(node2_796, ((struct sNode*)node2_796)->finalize, ((struct sNode*)node2_796)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((node3_797) ? node3_797 = come_decrement_ref_count(node3_797, ((struct sNode*)node3_797)->finalize, ((struct sNode*)node3_797)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value1036,sNoneNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value1040) ? __right_value1040 = come_decrement_ref_count(__right_value1040, ((struct sNode*)__right_value1040)->finalize, ((struct sNode*)__right_value1040)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__354) ? __result_obj__354 = come_decrement_ref_count(__result_obj__354, ((struct sNode*)__result_obj__354)->finalize, ((struct sNode*)__result_obj__354)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__354;
}

static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self){
struct sNoneNode* __result_obj__352;
void* __right_value1037 = (void*)0;
struct sNoneNode* result_798;
void* __right_value1038 = (void*)0;
char* __dec_obj179;
void* __right_value1039 = (void*)0;
struct list$1sNode$ph* __dec_obj180;
struct sNoneNode* __result_obj__353;
    if(    self==(void*)0) {
        __result_obj__352 = (void*)0;
        return __result_obj__352;
    }
    result_798=(struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc_v2(1, sizeof(struct sNoneNode)*(1), "sNoneNode_clone", 3, "struct sNoneNode*"));
    if(    self!=((void*)0)) {
        result_798->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj179=result_798->sname,
        result_798->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNoneNode_clone", 5, "char*"));
        __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_798->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj180=result_798->tuple_elements,
        result_798->tuple_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->tuple_elements));
        /*b*/ come_call_finalizer3(__dec_obj180,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__353 = result_798;
    /*c*/ come_call_finalizer3(result_798,sNoneNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__353;
}

