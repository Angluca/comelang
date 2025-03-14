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

extern char* gComeStackFrameSName[128];

extern int gComeStackFrameSLine[128];

extern int gComeStackFrameID[128];

extern int gNumComeStackFrame;

extern char* gComeStackFrameBuffer;

struct buffer
{
    char* buf;
    int len;
    int size;
};

struct sMemHeaderTiny
{
    unsigned long  int size;
    int allocated;
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;
    char* class_name;
    void* finalizer_fun;
    void* cloner_fun;
    void* get_hash_key_fun;
    void* equaler_fun;
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
    void* finalizer_fun;
    void* cloner_fun;
    void* get_hash_key_fun;
    void* equaler_fun;
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
    struct sMemHeaderTiny* mFreeMem[2048*2];
};

extern struct sHeapPage gHeapPages;

struct object
{
    void* _protocol_obj;
    void (*finalize)(void*);
    void* (*clone)(void*);
};

struct smart_pointer$1char$
{
    struct buffer* memory;
    char* p;
};

struct smart_pointer$1short$
{
    struct buffer* memory;
    short* p;
};

struct smart_pointer$1int$
{
    struct buffer* memory;
    int* p;
};

struct smart_pointer$1long$
{
    struct buffer* memory;
    long* p;
};

struct smart_pointer$1char$p
{
    struct buffer* memory;
    char** p;
};

struct smart_pointer$1float$
{
    struct buffer* memory;
    float* p;
};

struct smart_pointer$1double$
{
    struct buffer* memory;
    double* p;
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

struct vector$1char$
{
    char* items;
    int len;
    int size;
    int it;
};

struct vector$1char$p
{
    char** items;
    int len;
    int size;
    int it;
};

struct vector$1short$
{
    short* items;
    int len;
    int size;
    int it;
};

struct vector$1int$
{
    int* items;
    int len;
    int size;
    int it;
};

struct vector$1long$
{
    long* items;
    int len;
    int size;
    int it;
};

struct vector$1float$
{
    float* items;
    int len;
    int size;
    int it;
};

struct vector$1double$
{
    double* items;
    int len;
    int size;
    int it;
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

typedef struct regex_t* re_t;

enum { UNUSED
,DOT
,BEGIN
,END
,QUESTIONMARK
,STAR
,PLUS
,CHAR
,CHAR_CLASS
,INV_CHAR_CLASS
,DIGIT
,NOT_DIGIT
,ALPHA
,NOT_ALPHA
,WHITESPACE
,NOT_WHITESPACE
};

union anonymous_typeZ4
{
unsigned char ch;
unsigned char* ccl;
};

union anonymous_typeZ5
{
unsigned char ch;
unsigned char* ccl;
};

struct regex_t
{
    unsigned char type;
    union anonymous_typeZ5 u;
};

typedef struct regex_t regex_t;

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
    _Bool mChannel;
    _Bool mNoHeap;
    _Bool mNoCallingDestructor;
    _Bool mException;
    _Bool mGenerate;
    _Bool mCreateVTable;
    _Bool mDynamic;
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
};

struct map$2char$phchar$ph
{
    char** keys;
    _Bool* item_existance;
    char** items;
    int size;
    int len;
    struct list$1char$p* key_list;
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
    struct list$1char$p* key_list;
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
    struct list$1char$p* key_list;
    int it;
};

struct map$2char$phsGenericsFun$ph
{
    char** keys;
    _Bool* item_existance;
    struct sGenericsFun** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct map$2char$phsClass$ph
{
    char** keys;
    _Bool* item_existance;
    struct sClass** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct map$2char$phsClassModule$ph
{
    char** keys;
    _Bool* item_existance;
    struct sClassModule** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct map$2char$phsType$ph
{
    char** keys;
    _Bool* item_existance;
    struct sType** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct map$2char$phbuffer$ph
{
    char** keys;
    _Bool* item_existance;
    struct buffer** items;
    int size;
    int len;
    struct list$1char$p* key_list;
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
    _Bool gcc_compiler;
    _Bool in_exception_value;
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

_Bool gComeGC=(_Bool)0;
_Bool gComeC=(_Bool)1;
_Bool gComeStr=(_Bool)0;
_Bool gComeNet=(_Bool)0;
_Bool gComePthread=(_Bool)0;
_Bool gCommonHeader=(_Bool)0;
_Bool gComeMalloc=(_Bool)0;
_Bool gComeDebug=(_Bool)0;
_Bool gComeOriginalSourcePosition=(_Bool)1;
int gComeDebugStackFrameID=0;
char* CC="clang";
static char* RM="rm -rf";
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
void* come_null_check(void* mem, char* sname, int sline, int id);
void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);
_Bool bool_expect(_Bool self, void* parent, void (*block)(void*));
_Bool bool_value(_Bool self);
int int_catch(int self, void* parent, void (*block)(void*));
int int_expect(int self, void* parent, void (*block)(void*));
int int_value(int self);
int int_except(int self, void* parent, void (*block)(void*));
_Bool bool_except(_Bool self, void* parent, void (*block)(void*));
_Bool bool_catch(_Bool self, void* parent, void (*block)(void*));
void xassert(char* msg, _Bool test);
_Bool die(char* msg);
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
void* alloc_from_pages(unsigned long  int size);
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name, void* finalizer_fun, void* cloner_fun, void* get_hash_key_fun, void* equaler_fun);
void come_free_mem_of_heap_pool(void* mem);
char* come_dynamic_typeof(void* mem);
void* come_get_finalizer(void* mem);
void come_print_heap_info(void* mem);
void* come_get_cloner(void* mem);
void* come_get_hash_key(void* mem);
void* come_get_equaler(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name, void* finalizer_fun, char* cloner_fun, void* get_hash_key_fun, void* equaler_fun);
void come_free_object(void* mem);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);
void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);
void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void* come_call_cloner(void* fun, void* mem);
unsigned int come_call_get_hash_key(void* fun, void* mem);
unsigned int come_call_equals(void* fun, void* mem, void* mem2);
char* __builtin_string(char* str);
_Bool come_is_contained_element(void** array, int len, void* element);
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
static unsigned int buffer_get_hash_key(struct buffer* self);
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
struct smart_pointer$1char$* buffer_to_pointer(struct buffer* self);
static struct smart_pointer$1char$* smart_pointer$1char$$p_initialize_with_value(struct smart_pointer$1char$* self, struct buffer* value);
static void smart_pointer$1char$$p_finalize(struct smart_pointer$1char$* self);
struct smart_pointer$1char$* buffer_to_char_pointer(struct buffer* self);
struct smart_pointer$1short$* buffer_to_short_pointer(struct buffer* self);
static struct smart_pointer$1short$* smart_pointer$1short$$p_initialize_with_value(struct smart_pointer$1short$* self, struct buffer* value);
static void smart_pointer$1short$$p_finalize(struct smart_pointer$1short$* self);
struct smart_pointer$1int$* buffer_to_int_pointer(struct buffer* self);
static struct smart_pointer$1int$* smart_pointer$1int$$p_initialize_with_value(struct smart_pointer$1int$* self, struct buffer* value);
static void smart_pointer$1int$$p_finalize(struct smart_pointer$1int$* self);
struct smart_pointer$1long$* buffer_to_long_pointer(struct buffer* self);
static struct smart_pointer$1long$* smart_pointer$1long$$p_initialize_with_value(struct smart_pointer$1long$* self, struct buffer* value);
static void smart_pointer$1long$$p_finalize(struct smart_pointer$1long$* self);
struct smart_pointer$1char$* charpa_to_pointer(char* self, unsigned long  int len);
struct smart_pointer$1char$p* charppa_to_pointer(char** self, unsigned long  int len);
static struct smart_pointer$1char$p* smart_pointer$1char$p$p_initialize_with_value(struct smart_pointer$1char$p* self, struct buffer* value);
static void smart_pointer$1char$p$p_finalize(struct smart_pointer$1char$p* self);
struct smart_pointer$1short$* shortpa_to_pointer(short* self, unsigned long  int len);
struct smart_pointer$1int$* intpa_to_pointer(int* self, unsigned long  int len);
struct smart_pointer$1long$* longpa_to_pointer(long* self, unsigned long  int len);
struct smart_pointer$1float$* floatpa_to_pointer(float* self, unsigned long  int len);
static struct smart_pointer$1float$* smart_pointer$1float$$p_initialize_with_value(struct smart_pointer$1float$* self, struct buffer* value);
static void smart_pointer$1float$$p_finalize(struct smart_pointer$1float$* self);
struct smart_pointer$1double$* doublepa_to_pointer(double* self, unsigned long  int len);
static struct smart_pointer$1double$* smart_pointer$1double$$p_initialize_with_value(struct smart_pointer$1double$* self, struct buffer* value);
static void smart_pointer$1double$$p_finalize(struct smart_pointer$1double$* self);
struct list$1char$* charpa_to_list(char* self, unsigned long  int len);
static struct list$1char$* list$1char$$p_initialize_with_values(struct list$1char$* self, int num_value, char* values);
static struct list$1char$* list$1char$$p_push_back(struct list$1char$* self, char item);
static void list$1char$$p_finalize(struct list$1char$* self);
static void list_item$1char$$p_finalize(struct list_item$1char$* self);
struct list$1char$p* charppa_to_list(char** self, unsigned long  int len);
static struct list$1char$p* list$1char$p$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values);
static struct list$1char$p* list$1char$p$p_push_back(struct list$1char$p* self, char* item);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
struct list$1short$* shortpa_to_list(short* self, unsigned long  int len);
static struct list$1short$* list$1short$$p_initialize_with_values(struct list$1short$* self, int num_value, short* values);
static struct list$1short$* list$1short$$p_push_back(struct list$1short$* self, short item);
static void list$1short$$p_finalize(struct list$1short$* self);
static void list_item$1short$$p_finalize(struct list_item$1short$* self);
struct list$1int$* intpa_to_list(int* self, unsigned long  int len);
static struct list$1int$* list$1int$$p_initialize_with_values(struct list$1int$* self, int num_value, int* values);
static struct list$1int$* list$1int$$p_push_back(struct list$1int$* self, int item);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
struct list$1long$* longpa_to_list(long* self, unsigned long  int len);
static struct list$1long$* list$1long$$p_initialize_with_values(struct list$1long$* self, int num_value, long* values);
static struct list$1long$* list$1long$$p_push_back(struct list$1long$* self, long item);
static void list$1long$$p_finalize(struct list$1long$* self);
static void list_item$1long$$p_finalize(struct list_item$1long$* self);
struct list$1float$* floatpa_to_list(float* self, unsigned long  int len);
static struct list$1float$* list$1float$$p_initialize_with_values(struct list$1float$* self, int num_value, float* values);
static struct list$1float$* list$1float$$p_push_back(struct list$1float$* self, float item);
static void list$1float$$p_finalize(struct list$1float$* self);
static void list_item$1float$$p_finalize(struct list_item$1float$* self);
struct list$1double$* doublepa_to_list(double* self, unsigned long  int len);
static struct list$1double$* list$1double$$p_initialize_with_values(struct list$1double$* self, int num_value, double* values);
static struct list$1double$* list$1double$$p_push_back(struct list$1double$* self, double item);
static void list$1double$$p_finalize(struct list$1double$* self);
static void list_item$1double$$p_finalize(struct list_item$1double$* self);
struct vector$1char$* charpa_to_vector(char* self, unsigned long  int len);
static struct vector$1char$* vector$1char$$p_initialize_with_values(struct vector$1char$* self, int num_value, char* values);
static struct vector$1char$* vector$1char$$p_add(struct vector$1char$* self, char item);
static void vector$1char$$p_finalize(struct vector$1char$* self);
struct vector$1char$p* charppa_to_vector(char** self, unsigned long  int len);
static struct vector$1char$p* vector$1char$p$p_initialize_with_values(struct vector$1char$p* self, int num_value, char** values);
static struct vector$1char$p* vector$1char$p$p_add(struct vector$1char$p* self, char* item);
static void vector$1char$p$p_finalize(struct vector$1char$p* self);
struct vector$1short$* shortpa_to_vector(short* self, unsigned long  int len);
static struct vector$1short$* vector$1short$$p_initialize_with_values(struct vector$1short$* self, int num_value, short* values);
static struct vector$1short$* vector$1short$$p_add(struct vector$1short$* self, short item);
static void vector$1short$$p_finalize(struct vector$1short$* self);
struct vector$1int$* intpa_to_vector(int* self, unsigned long  int len);
static struct vector$1int$* vector$1int$$p_initialize_with_values(struct vector$1int$* self, int num_value, int* values);
static struct vector$1int$* vector$1int$$p_add(struct vector$1int$* self, int item);
static void vector$1int$$p_finalize(struct vector$1int$* self);
struct vector$1long$* longpa_to_vector(long* self, unsigned long  int len);
static struct vector$1long$* vector$1long$$p_initialize_with_values(struct vector$1long$* self, int num_value, long* values);
static struct vector$1long$* vector$1long$$p_add(struct vector$1long$* self, long item);
static void vector$1long$$p_finalize(struct vector$1long$* self);
struct vector$1float$* floatpa_to_vector(float* self, unsigned long  int len);
static struct vector$1float$* vector$1float$$p_initialize_with_values(struct vector$1float$* self, int num_value, float* values);
static struct vector$1float$* vector$1float$$p_add(struct vector$1float$* self, float item);
static void vector$1float$$p_finalize(struct vector$1float$* self);
struct vector$1double$* doublepa_to_vector(double* self, unsigned long  int len);
static struct vector$1double$* vector$1double$$p_initialize_with_values(struct vector$1double$* self, int num_value, double* values);
static struct vector$1double$* vector$1double$$p_add(struct vector$1double$* self, double item);
static void vector$1double$$p_finalize(struct vector$1double$* self);
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
char* charp_clone(char* self);
char* string_clone(char* self);
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
static struct list$1char$ph* list$1char$ph$p_initialize(struct list$1char$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1char$ph* list$1char$ph$p_push_back(struct list$1char$ph* self, char* item);
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
int charp_write(char* self, char* file_name, _Bool append);
char* charp_read(char* file_name);
struct list$1char$ph* FILE_readlines(struct _IO_FILE* f);
int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));
char* charp_puts(char* self);
char* charp_print(char* self);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
void int_times(int self, void* parent, void (*block)(void*,int));
int assert_v2(int exp);
int re_match(const char* pattern, const char* text, int* matchlength);
int re_matchp(struct regex_t* pattern, const char* text, int* matchlength);
struct regex_t* re_compile(const char* pattern);
void re_print(struct regex_t* pattern);
int matchdigit(char c);
int matchalpha(char c);
int matchwhitespace(char c);
int matchalphanum(char c);
int matchrange(char c, const char* str);
int matchdot(char c);
int ismetachar(char c);
int matchmetachar(char c, const char* str);
int matchcharclass(char c, const char* str);
int matchone(struct regex_t p, char c);
int matchstar(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength);
int matchplus(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength);
int matchquestion(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength);
int matchpattern(struct regex_t* pattern, const char* text, int* matchlength);
_Bool wchar_t_equals(unsigned int left, unsigned int right);
_Bool wchar_tp_equals(unsigned int* left, unsigned int* right);
_Bool wchar_t_operator_equals(unsigned int left, unsigned int right);
_Bool wchar_t_operator_not_equals(unsigned int left, unsigned int right);
_Bool wchar_tp_operator_equals(unsigned int* left, unsigned int* right);
_Bool wchar_tp_operator_not_equals(unsigned int* left, unsigned int* right);
unsigned int wchar_t_get_hash_key(unsigned int value);
unsigned int wchar_tp_get_hash_key(unsigned int* value);
char* wchar_t_to_string(unsigned int wc);
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
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute);
void sVarTable_finalize(struct sVarTable* self);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline);
struct tuple2$2int$char$ph* err_msg(struct sInfo* info, char* msg, ...);
int expected_next_character(char c, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
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
struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);
struct sVar* get_variable_from_table(struct sVarTable* table, char* name);
void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
void free_objects_of_match_lv_tables(struct sInfo* info);
void free_objects_on_break(struct sInfo* info);
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);
struct tuple2$2sType$phchar$ph* clone_object(struct sType* type, char* obj, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count);
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
struct sNode* create_null_value(struct sType* type, struct sInfo* info);
struct sNode* create_null_return_value(struct sInfo* info);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
struct sNode* expression_node_v96(struct sInfo* info);
struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple);
struct sNode* parse_some(struct sInfo* info);
struct sNode* parse_none(struct sInfo* info);
struct CVALUE* get_value_from_object(struct CVALUE* come_value, struct sInfo* info);
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
_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);
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
struct sType* use_any_type(struct sType* type);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo* info);
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
static void write_source_file_position_to_source(struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
static void clear_tmp_file(struct sInfo* info);
static void clear_tmp_file_without_object_file(struct sInfo* info);
static void clear_tmp_file_without_object_file_and_ccfile(struct sInfo* info);
static _Bool cpp(struct sInfo* info);
static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1char$ph* object_files);
static struct list$1char$ph* list$1char$ph$p_insert(struct list$1char$ph* self, int position, char* item);
static _Bool linker(struct sInfo* info, struct list$1char$ph* object_files);
static char* list$1char$ph$p_begin(struct list$1char$ph* self);
static _Bool list$1char$ph$p_end(struct list$1char$ph* self);
static char* list$1char$ph$p_next(struct list$1char$ph* self);
_Bool new_project(int argc, char** argv);
_Bool run_project(int argc, char** argv);
_Bool make_header_project(int argc, char** argv);
_Bool compile_project(int argc, char** argv);
_Bool debug_run_project(int argc, char** argv);
_Bool clean_project(int argc, char** argv);
_Bool install_project(int argc, char** argv, char* prefix);
static void init_classes(struct sInfo* info);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph$p_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item);
static void map$2char$phsClass$ph$p_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph$p_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph$p_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph$p_next(struct map$2char$phsClass$ph* self);
static struct sClass* map$2char$phsClass$ph$p_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static struct list$1char$p* list$1char$p$p_remove(struct list$1char$p* self, char* item);
static struct list$1char$p* list$1char$p$p_delete(struct list$1char$p* self, int head, int tail);
static struct list$1char$p* list$1char$p$p_reset(struct list$1char$p* self);
static char* list$1char$p$p_begin(struct list$1char$p* self);
static _Bool list$1char$p$p_end(struct list$1char$p* self);
static char* list$1char$p$p_next(struct list$1char$p* self);
static struct map$2char$phsType$ph* map$2char$phsType$ph$p_insert(struct map$2char$phsType$ph* self, char* key, struct sType* item);
static void map$2char$phsType$ph$p_rehash(struct map$2char$phsType$ph* self);
static char* map$2char$phsType$ph$p_begin(struct map$2char$phsType$ph* self);
static _Bool map$2char$phsType$ph$p_end(struct map$2char$phsType$ph* self);
static char* map$2char$phsType$ph$p_next(struct map$2char$phsType$ph* self);
static struct sType* map$2char$phsType$ph$p_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self);
static struct sType* sType_clone(struct sType* self);
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph$p_initialize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph$p_add(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self);
static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* left, struct tuple2$2char$phsType$ph* right);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2char$phsType$ph$ph$p_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool tuple2$2char$phsType$ph$p_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right);
static _Bool list$1sType$ph$p_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2);
void create_pico_version_header();
int come_main(int argc, char** argv);
static char* list$1char$ph$p_join(struct list$1char$ph* self, char* sep);
static int list$1char$ph$p_length(struct list$1char$ph* self);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph$p_initialize(struct map$2char$phsFun$ph* self);
static struct list$1char$p* list$1char$p$p_initialize(struct list$1char$p* self);
static void list$1char$p_finalize(struct list$1char$p* self);
static void map$2char$phsFun$ph$p_finalize(struct map$2char$phsFun$ph* self);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void map$2char$phsFun$ph_finalize(struct map$2char$phsFun$ph* self);
static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph$p_initialize(struct map$2char$phbuffer$ph* self);
static void map$2char$phbuffer$ph$p_finalize(struct map$2char$phbuffer$ph* self);
static void map$2char$phbuffer$ph_finalize(struct map$2char$phbuffer$ph* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph$p_initialize(struct map$2char$phchar$ph* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self);
static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph$p_initialize(struct map$2char$phsGenericsFun$ph* self);
static void map$2char$phsGenericsFun$ph$p_finalize(struct map$2char$phsGenericsFun$ph* self);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void map$2char$phsGenericsFun$ph_finalize(struct map$2char$phsGenericsFun$ph* self);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph$p_initialize(struct map$2char$phsClass$ph* self);
static void map$2char$phsClass$ph$p_finalize(struct map$2char$phsClass$ph* self);
static void map$2char$phsClass$ph_finalize(struct map$2char$phsClass$ph* self);
static struct map$2char$phsClassModule$ph* map$2char$phsClassModule$ph$p_initialize(struct map$2char$phsClassModule$ph* self);
static void map$2char$phsClassModule$ph$p_finalize(struct map$2char$phsClassModule$ph* self);
static void sClassModule_finalize(struct sClassModule* self);
static void map$2char$phsClassModule$ph_finalize(struct map$2char$phsClassModule$ph* self);
static struct map$2char$phsType$ph* map$2char$phsType$ph$p_initialize(struct map$2char$phsType$ph* self);
static void map$2char$phsType$ph$p_finalize(struct map$2char$phsType$ph* self);
static void map$2char$phsType$ph_finalize(struct map$2char$phsType$ph* self);
static void sModule_finalize(struct sModule* self);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph$p_initialize(struct list$1sRightValueObject$ph* self);
static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self);
static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph$p_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self);
static void sInfo_finalize(struct sInfo* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar* self);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
// uniq global variable
// inline function
static inline int __isspace(int _c){
    return _c==32||(unsigned int)_c-9<5;
}

// body function
static void va_list_finalize(va_list self){
}

static unsigned int buffer_get_hash_key(struct buffer* self){
unsigned int result_158;
    result_158=0;
    result_158+=int_get_hash_key(((int)self->buf));
    result_158+=int_get_hash_key(((int)self->len));
    result_158+=int_get_hash_key(((int)self->size));
    return result_158;
}

static struct smart_pointer$1char$* smart_pointer$1char$$p_initialize_with_value(struct smart_pointer$1char$* self, struct buffer* value){
struct buffer* __dec_obj13;
struct smart_pointer$1char$* __result_obj__81;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char*)value->buf;
    __result_obj__81 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__81,smart_pointer$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__81;
}

static void smart_pointer$1char$$p_finalize(struct smart_pointer$1char$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1short$* smart_pointer$1short$$p_initialize_with_value(struct smart_pointer$1short$* self, struct buffer* value){
struct buffer* __dec_obj14;
struct smart_pointer$1short$* __result_obj__84;
    __dec_obj14=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj14,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(short*)value->buf;
    __result_obj__84 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__84,smart_pointer$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__84;
}

static void smart_pointer$1short$$p_finalize(struct smart_pointer$1short$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1int$* smart_pointer$1int$$p_initialize_with_value(struct smart_pointer$1int$* self, struct buffer* value){
struct buffer* __dec_obj15;
struct smart_pointer$1int$* __result_obj__86;
    __dec_obj15=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(int*)value->buf;
    __result_obj__86 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__86,smart_pointer$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__86;
}

static void smart_pointer$1int$$p_finalize(struct smart_pointer$1int$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1long$* smart_pointer$1long$$p_initialize_with_value(struct smart_pointer$1long$* self, struct buffer* value){
struct buffer* __dec_obj16;
struct smart_pointer$1long$* __result_obj__88;
    __dec_obj16=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj16,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(long*)value->buf;
    __result_obj__88 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__88,smart_pointer$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__88;
}

static void smart_pointer$1long$$p_finalize(struct smart_pointer$1long$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1char$p* smart_pointer$1char$p$p_initialize_with_value(struct smart_pointer$1char$p* self, struct buffer* value){
struct buffer* __dec_obj17;
struct smart_pointer$1char$p* __result_obj__91;
    __dec_obj17=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char**)value->buf;
    __result_obj__91 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__91,smart_pointer$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__91;
}

static void smart_pointer$1char$p$p_finalize(struct smart_pointer$1char$p* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1float$* smart_pointer$1float$$p_initialize_with_value(struct smart_pointer$1float$* self, struct buffer* value){
struct buffer* __dec_obj18;
struct smart_pointer$1float$* __result_obj__96;
    __dec_obj18=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj18,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(float*)value->buf;
    __result_obj__96 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__96,smart_pointer$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__96;
}

static void smart_pointer$1float$$p_finalize(struct smart_pointer$1float$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1double$* smart_pointer$1double$$p_initialize_with_value(struct smart_pointer$1double$* self, struct buffer* value){
struct buffer* __dec_obj19;
struct smart_pointer$1double$* __result_obj__98;
    __dec_obj19=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj19,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(double*)value->buf;
    __result_obj__98 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__98,smart_pointer$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__98;
}

static void smart_pointer$1double$$p_finalize(struct smart_pointer$1double$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$* list$1char$$p_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_180;
struct list$1char$* __result_obj__101;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_180=0;    i_180<num_value;    i_180++    ){
        list$1char$$p_push_back(self,values[i_180]);
    }
    __result_obj__101 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__101,list$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__101;
}

static struct list$1char$* list$1char$$p_push_back(struct list$1char$* self, char item){
void* __right_value92 = (void*)0;
struct list_item$1char$* litem_181;
void* __right_value93 = (void*)0;
struct list_item$1char$* litem_182;
void* __right_value94 = (void*)0;
struct list_item$1char$* litem_183;
struct list$1char$* __result_obj__100;
    if(    self->len==0) {
        litem_181=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value92=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1489, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_181->prev=((void*)0);
        litem_181->next=((void*)0);
        litem_181->item=item;
        self->tail=litem_181;
        self->head=litem_181;
    }
    else if(    self->len==1) {
        litem_182=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value93=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1499, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_182->prev=self->head;
        litem_182->next=((void*)0);
        litem_182->item=item;
        self->tail=litem_182;
        self->head->next=litem_182;
    }
    else {
        litem_183=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value94=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1509, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_183->prev=self->tail;
        litem_183->next=((void*)0);
        litem_183->item=item;
        self->tail->next=litem_183;
        self->tail=litem_183;
    }
    self->len++;
    __result_obj__100 = self;
    return __result_obj__100;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_184;
struct list_item$1char$* prev_it_185;
    it_184=self->head;
    while(it_184!=((void*)0)) {
        prev_it_185=it_184;
        it_184=it_184->next;
        come_call_finalizer3(prev_it_185,list_item$1char$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

static struct list$1char$p* list$1char$p$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_186;
struct list$1char$p* __result_obj__104;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_186=0;    i_186<num_value;    i_186++    ){
        list$1char$p$p_push_back(self,values[i_186]);
    }
    __result_obj__104 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__104,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__104;
}

static struct list$1char$p* list$1char$p$p_push_back(struct list$1char$p* self, char* item){
void* __right_value97 = (void*)0;
struct list_item$1char$p* litem_187;
void* __right_value98 = (void*)0;
struct list_item$1char$p* litem_188;
void* __right_value99 = (void*)0;
struct list_item$1char$p* litem_189;
struct list$1char$p* __result_obj__103;
    if(    self->len==0) {
        litem_187=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value97=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1489, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_187->prev=((void*)0);
        litem_187->next=((void*)0);
        litem_187->item=item;
        self->tail=litem_187;
        self->head=litem_187;
    }
    else if(    self->len==1) {
        litem_188=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value98=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1499, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_188->prev=self->head;
        litem_188->next=((void*)0);
        litem_188->item=item;
        self->tail=litem_188;
        self->head->next=litem_188;
    }
    else {
        litem_189=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value99=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1509, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_189->prev=self->tail;
        litem_189->next=((void*)0);
        litem_189->item=item;
        self->tail->next=litem_189;
        self->tail=litem_189;
    }
    self->len++;
    __result_obj__103 = self;
    return __result_obj__103;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_190;
struct list_item$1char$p* prev_it_191;
    it_190=self->head;
    while(it_190!=((void*)0)) {
        prev_it_191=it_190;
        it_190=it_190->next;
        come_call_finalizer3(prev_it_191,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static struct list$1short$* list$1short$$p_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_192;
struct list$1short$* __result_obj__107;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_192=0;    i_192<num_value;    i_192++    ){
        list$1short$$p_push_back(self,values[i_192]);
    }
    __result_obj__107 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__107,list$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__107;
}

static struct list$1short$* list$1short$$p_push_back(struct list$1short$* self, short item){
void* __right_value102 = (void*)0;
struct list_item$1short$* litem_193;
void* __right_value103 = (void*)0;
struct list_item$1short$* litem_194;
void* __right_value104 = (void*)0;
struct list_item$1short$* litem_195;
struct list$1short$* __result_obj__106;
    if(    self->len==0) {
        litem_193=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value102=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1489, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_193->prev=((void*)0);
        litem_193->next=((void*)0);
        litem_193->item=item;
        self->tail=litem_193;
        self->head=litem_193;
    }
    else if(    self->len==1) {
        litem_194=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value103=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1499, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_194->prev=self->head;
        litem_194->next=((void*)0);
        litem_194->item=item;
        self->tail=litem_194;
        self->head->next=litem_194;
    }
    else {
        litem_195=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value104=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1509, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_195->prev=self->tail;
        litem_195->next=((void*)0);
        litem_195->item=item;
        self->tail->next=litem_195;
        self->tail=litem_195;
    }
    self->len++;
    __result_obj__106 = self;
    return __result_obj__106;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_196;
struct list_item$1short$* prev_it_197;
    it_196=self->head;
    while(it_196!=((void*)0)) {
        prev_it_197=it_196;
        it_196=it_196->next;
        come_call_finalizer3(prev_it_197,list_item$1short$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

static struct list$1int$* list$1int$$p_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_198;
struct list$1int$* __result_obj__110;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_198=0;    i_198<num_value;    i_198++    ){
        list$1int$$p_push_back(self,values[i_198]);
    }
    __result_obj__110 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__110,list$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__110;
}

static struct list$1int$* list$1int$$p_push_back(struct list$1int$* self, int item){
void* __right_value107 = (void*)0;
struct list_item$1int$* litem_199;
void* __right_value108 = (void*)0;
struct list_item$1int$* litem_200;
void* __right_value109 = (void*)0;
struct list_item$1int$* litem_201;
struct list$1int$* __result_obj__109;
    if(    self->len==0) {
        litem_199=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value107=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1489, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_199->prev=((void*)0);
        litem_199->next=((void*)0);
        litem_199->item=item;
        self->tail=litem_199;
        self->head=litem_199;
    }
    else if(    self->len==1) {
        litem_200=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value108=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1499, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_200->prev=self->head;
        litem_200->next=((void*)0);
        litem_200->item=item;
        self->tail=litem_200;
        self->head->next=litem_200;
    }
    else {
        litem_201=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value109=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1509, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_201->prev=self->tail;
        litem_201->next=((void*)0);
        litem_201->item=item;
        self->tail->next=litem_201;
        self->tail=litem_201;
    }
    self->len++;
    __result_obj__109 = self;
    return __result_obj__109;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_202;
struct list_item$1int$* prev_it_203;
    it_202=self->head;
    while(it_202!=((void*)0)) {
        prev_it_203=it_202;
        it_202=it_202->next;
        come_call_finalizer3(prev_it_203,list_item$1int$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

static struct list$1long$* list$1long$$p_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_204;
struct list$1long$* __result_obj__113;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_204=0;    i_204<num_value;    i_204++    ){
        list$1long$$p_push_back(self,values[i_204]);
    }
    __result_obj__113 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__113,list$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__113;
}

static struct list$1long$* list$1long$$p_push_back(struct list$1long$* self, long item){
void* __right_value112 = (void*)0;
struct list_item$1long$* litem_205;
void* __right_value113 = (void*)0;
struct list_item$1long$* litem_206;
void* __right_value114 = (void*)0;
struct list_item$1long$* litem_207;
struct list$1long$* __result_obj__112;
    if(    self->len==0) {
        litem_205=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value112=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1489, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_205->prev=((void*)0);
        litem_205->next=((void*)0);
        litem_205->item=item;
        self->tail=litem_205;
        self->head=litem_205;
    }
    else if(    self->len==1) {
        litem_206=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value113=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1499, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_206->prev=self->head;
        litem_206->next=((void*)0);
        litem_206->item=item;
        self->tail=litem_206;
        self->head->next=litem_206;
    }
    else {
        litem_207=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value114=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1509, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_207->prev=self->tail;
        litem_207->next=((void*)0);
        litem_207->item=item;
        self->tail->next=litem_207;
        self->tail=litem_207;
    }
    self->len++;
    __result_obj__112 = self;
    return __result_obj__112;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_208;
struct list_item$1long$* prev_it_209;
    it_208=self->head;
    while(it_208!=((void*)0)) {
        prev_it_209=it_208;
        it_208=it_208->next;
        come_call_finalizer3(prev_it_209,list_item$1long$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

static struct list$1float$* list$1float$$p_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_210;
struct list$1float$* __result_obj__116;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_210=0;    i_210<num_value;    i_210++    ){
        list$1float$$p_push_back(self,values[i_210]);
    }
    __result_obj__116 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__116,list$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__116;
}

static struct list$1float$* list$1float$$p_push_back(struct list$1float$* self, float item){
void* __right_value117 = (void*)0;
struct list_item$1float$* litem_211;
void* __right_value118 = (void*)0;
struct list_item$1float$* litem_212;
void* __right_value119 = (void*)0;
struct list_item$1float$* litem_213;
struct list$1float$* __result_obj__115;
    if(    self->len==0) {
        litem_211=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value117=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1489, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_211->prev=((void*)0);
        litem_211->next=((void*)0);
        litem_211->item=item;
        self->tail=litem_211;
        self->head=litem_211;
    }
    else if(    self->len==1) {
        litem_212=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value118=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1499, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_212->prev=self->head;
        litem_212->next=((void*)0);
        litem_212->item=item;
        self->tail=litem_212;
        self->head->next=litem_212;
    }
    else {
        litem_213=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value119=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1509, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_213->prev=self->tail;
        litem_213->next=((void*)0);
        litem_213->item=item;
        self->tail->next=litem_213;
        self->tail=litem_213;
    }
    self->len++;
    __result_obj__115 = self;
    return __result_obj__115;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_214;
struct list_item$1float$* prev_it_215;
    it_214=self->head;
    while(it_214!=((void*)0)) {
        prev_it_215=it_214;
        it_214=it_214->next;
        come_call_finalizer3(prev_it_215,list_item$1float$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

static struct list$1double$* list$1double$$p_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_216;
struct list$1double$* __result_obj__119;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_216=0;    i_216<num_value;    i_216++    ){
        list$1double$$p_push_back(self,values[i_216]);
    }
    __result_obj__119 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__119,list$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__119;
}

static struct list$1double$* list$1double$$p_push_back(struct list$1double$* self, double item){
void* __right_value122 = (void*)0;
struct list_item$1double$* litem_217;
void* __right_value123 = (void*)0;
struct list_item$1double$* litem_218;
void* __right_value124 = (void*)0;
struct list_item$1double$* litem_219;
struct list$1double$* __result_obj__118;
    if(    self->len==0) {
        litem_217=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value122=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1489, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_217->prev=((void*)0);
        litem_217->next=((void*)0);
        litem_217->item=item;
        self->tail=litem_217;
        self->head=litem_217;
    }
    else if(    self->len==1) {
        litem_218=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value123=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1499, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_218->prev=self->head;
        litem_218->next=((void*)0);
        litem_218->item=item;
        self->tail=litem_218;
        self->head->next=litem_218;
    }
    else {
        litem_219=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value124=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1509, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_219->prev=self->tail;
        litem_219->next=((void*)0);
        litem_219->item=item;
        self->tail->next=litem_219;
        self->tail=litem_219;
    }
    self->len++;
    __result_obj__118 = self;
    return __result_obj__118;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_220;
struct list_item$1double$* prev_it_221;
    it_220=self->head;
    while(it_220!=((void*)0)) {
        prev_it_221=it_220;
        it_220=it_220->next;
        come_call_finalizer3(prev_it_221,list_item$1double$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

static struct vector$1char$* vector$1char$$p_initialize_with_values(struct vector$1char$* self, int num_value, char* values){
void* __right_value127 = (void*)0;
int i_222;
struct vector$1char$* __result_obj__122;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2306, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_222=0;    i_222<num_value;    i_222++    ){
        vector$1char$$p_add(self,values[i_222]);
    }
    __result_obj__122 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__122,vector$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__122;
}

static struct vector$1char$* vector$1char$$p_add(struct vector$1char$* self, char item){
int new_size_223;
char* items_224;
void* __right_value128 = (void*)0;
int i_225;
struct vector$1char$* __result_obj__121;
memset(&i_225, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_223=self->size*2;
        items_224=self->items;
        self->items=((char*)(__right_value128=(char*)come_calloc(1, sizeof(char)*(1*(new_size_223)), "./comelang.h", 2433, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value128 = come_decrement_ref_count2(__right_value128, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_225=0;        i_225<self->size;        i_225++        ){
            self->items[i_225]=items_224[i_225];
        }
        self->size=new_size_223;
        come_free(items_224);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__121 = self;
    return __result_obj__121;
}

static void vector$1char$$p_finalize(struct vector$1char$* self){
int i_226;
    if(    0) {
        for(        i_226=0;        i_226<self->len;        i_226++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1char$p* vector$1char$p$p_initialize_with_values(struct vector$1char$p* self, int num_value, char** values){
void* __right_value131 = (void*)0;
int i_227;
struct vector$1char$p* __result_obj__125;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value131=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2306, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_227=0;    i_227<num_value;    i_227++    ){
        vector$1char$p$p_add(self,values[i_227]);
    }
    __result_obj__125 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__125,vector$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__125;
}

static struct vector$1char$p* vector$1char$p$p_add(struct vector$1char$p* self, char* item){
int new_size_228;
char** items_229;
void* __right_value132 = (void*)0;
int i_230;
struct vector$1char$p* __result_obj__124;
memset(&i_230, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_228=self->size*2;
        items_229=self->items;
        self->items=((char**)(__right_value132=(char**)come_calloc(1, sizeof(char*)*(1*(new_size_228)), "./comelang.h", 2433, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value132 = come_decrement_ref_count2(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_230=0;        i_230<self->size;        i_230++        ){
            self->items[i_230]=items_229[i_230];
        }
        self->size=new_size_228;
        come_free(items_229);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__124 = self;
    return __result_obj__124;
}

static void vector$1char$p$p_finalize(struct vector$1char$p* self){
int i_231;
    if(    0) {
        for(        i_231=0;        i_231<self->len;        i_231++        ){
            (self->items[i_231] = come_decrement_ref_count2(self->items[i_231], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short$* vector$1short$$p_initialize_with_values(struct vector$1short$* self, int num_value, short* values){
void* __right_value135 = (void*)0;
int i_232;
struct vector$1short$* __result_obj__128;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value135=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2306, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_232=0;    i_232<num_value;    i_232++    ){
        vector$1short$$p_add(self,values[i_232]);
    }
    __result_obj__128 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__128,vector$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__128;
}

static struct vector$1short$* vector$1short$$p_add(struct vector$1short$* self, short item){
int new_size_233;
short* items_234;
void* __right_value136 = (void*)0;
int i_235;
struct vector$1short$* __result_obj__127;
memset(&i_235, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_233=self->size*2;
        items_234=self->items;
        self->items=((short*)(__right_value136=(short*)come_calloc(1, sizeof(short)*(1*(new_size_233)), "./comelang.h", 2433, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value136 = come_decrement_ref_count2(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_235=0;        i_235<self->size;        i_235++        ){
            self->items[i_235]=items_234[i_235];
        }
        self->size=new_size_233;
        come_free(items_234);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__127 = self;
    return __result_obj__127;
}

static void vector$1short$$p_finalize(struct vector$1short$* self){
int i_236;
    if(    0) {
        for(        i_236=0;        i_236<self->len;        i_236++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int$* vector$1int$$p_initialize_with_values(struct vector$1int$* self, int num_value, int* values){
void* __right_value139 = (void*)0;
int i_237;
struct vector$1int$* __result_obj__131;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value139=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2306, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_237=0;    i_237<num_value;    i_237++    ){
        vector$1int$$p_add(self,values[i_237]);
    }
    __result_obj__131 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__131,vector$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__131;
}

static struct vector$1int$* vector$1int$$p_add(struct vector$1int$* self, int item){
int new_size_238;
int* items_239;
void* __right_value140 = (void*)0;
int i_240;
struct vector$1int$* __result_obj__130;
memset(&i_240, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_238=self->size*2;
        items_239=self->items;
        self->items=((int*)(__right_value140=(int*)come_calloc(1, sizeof(int)*(1*(new_size_238)), "./comelang.h", 2433, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value140 = come_decrement_ref_count2(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_240=0;        i_240<self->size;        i_240++        ){
            self->items[i_240]=items_239[i_240];
        }
        self->size=new_size_238;
        come_free(items_239);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__130 = self;
    return __result_obj__130;
}

static void vector$1int$$p_finalize(struct vector$1int$* self){
int i_241;
    if(    0) {
        for(        i_241=0;        i_241<self->len;        i_241++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long$* vector$1long$$p_initialize_with_values(struct vector$1long$* self, int num_value, long* values){
void* __right_value143 = (void*)0;
int i_242;
struct vector$1long$* __result_obj__134;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value143=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2306, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_242=0;    i_242<num_value;    i_242++    ){
        vector$1long$$p_add(self,values[i_242]);
    }
    __result_obj__134 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__134,vector$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__134;
}

static struct vector$1long$* vector$1long$$p_add(struct vector$1long$* self, long item){
int new_size_243;
long* items_244;
void* __right_value144 = (void*)0;
int i_245;
struct vector$1long$* __result_obj__133;
memset(&i_245, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_243=self->size*2;
        items_244=self->items;
        self->items=((long*)(__right_value144=(long*)come_calloc(1, sizeof(long)*(1*(new_size_243)), "./comelang.h", 2433, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value144 = come_decrement_ref_count2(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_245=0;        i_245<self->size;        i_245++        ){
            self->items[i_245]=items_244[i_245];
        }
        self->size=new_size_243;
        come_free(items_244);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__133 = self;
    return __result_obj__133;
}

static void vector$1long$$p_finalize(struct vector$1long$* self){
int i_246;
    if(    0) {
        for(        i_246=0;        i_246<self->len;        i_246++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float$* vector$1float$$p_initialize_with_values(struct vector$1float$* self, int num_value, float* values){
void* __right_value147 = (void*)0;
int i_247;
struct vector$1float$* __result_obj__137;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value147=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2306, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_247=0;    i_247<num_value;    i_247++    ){
        vector$1float$$p_add(self,values[i_247]);
    }
    __result_obj__137 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__137,vector$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__137;
}

static struct vector$1float$* vector$1float$$p_add(struct vector$1float$* self, float item){
int new_size_248;
float* items_249;
void* __right_value148 = (void*)0;
int i_250;
struct vector$1float$* __result_obj__136;
memset(&i_250, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_248=self->size*2;
        items_249=self->items;
        self->items=((float*)(__right_value148=(float*)come_calloc(1, sizeof(float)*(1*(new_size_248)), "./comelang.h", 2433, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value148 = come_decrement_ref_count2(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_250=0;        i_250<self->size;        i_250++        ){
            self->items[i_250]=items_249[i_250];
        }
        self->size=new_size_248;
        come_free(items_249);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__136 = self;
    return __result_obj__136;
}

static void vector$1float$$p_finalize(struct vector$1float$* self){
int i_251;
    if(    0) {
        for(        i_251=0;        i_251<self->len;        i_251++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double$* vector$1double$$p_initialize_with_values(struct vector$1double$* self, int num_value, double* values){
void* __right_value151 = (void*)0;
int i_252;
struct vector$1double$* __result_obj__140;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value151=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2306, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_252=0;    i_252<num_value;    i_252++    ){
        vector$1double$$p_add(self,values[i_252]);
    }
    __result_obj__140 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__140,vector$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__140;
}

static struct vector$1double$* vector$1double$$p_add(struct vector$1double$* self, double item){
int new_size_253;
double* items_254;
void* __right_value152 = (void*)0;
int i_255;
struct vector$1double$* __result_obj__139;
memset(&i_255, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_253=self->size*2;
        items_254=self->items;
        self->items=((double*)(__right_value152=(double*)come_calloc(1, sizeof(double)*(1*(new_size_253)), "./comelang.h", 2433, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value152 = come_decrement_ref_count2(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_255=0;        i_255<self->size;        i_255++        ){
            self->items[i_255]=items_254[i_255];
        }
        self->size=new_size_253;
        come_free(items_254);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__139 = self;
    return __result_obj__139;
}

static void vector$1double$$p_finalize(struct vector$1double$* self){
int i_256;
    if(    0) {
        for(        i_256=0;        i_256<self->len;        i_256++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1char$ph* list$1char$ph$p_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__178;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__178 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__178,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__178;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_290;
struct list_item$1char$ph* prev_it_291;
    it_290=self->head;
    while(it_290!=((void*)0)) {
        prev_it_291=it_290;
        it_290=it_290->next;
        come_call_finalizer3(prev_it_291,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph$p_push_back(struct list$1char$ph* self, char* item){
void* __right_value201 = (void*)0;
struct list_item$1char$ph* litem_295;
char* __dec_obj20;
void* __right_value202 = (void*)0;
struct list_item$1char$ph* litem_296;
char* __dec_obj21;
void* __right_value203 = (void*)0;
struct list_item$1char$ph* litem_297;
char* __dec_obj22;
struct list$1char$ph* __result_obj__180;
    if(    self->len==0) {
        litem_295=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value201=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1489, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_295->prev=((void*)0);
        litem_295->next=((void*)0);
        __dec_obj20=litem_295->item;
        litem_295->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_295;
        self->head=litem_295;
    }
    else if(    self->len==1) {
        litem_296=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value202=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1499, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_296->prev=self->head;
        litem_296->next=((void*)0);
        __dec_obj21=litem_296->item;
        litem_296->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_296;
        self->head->next=litem_296;
    }
    else {
        litem_297=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value203=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1509, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_297->prev=self->tail;
        litem_297->next=((void*)0);
        __dec_obj22=litem_297->item;
        litem_297->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_297;
        self->tail=litem_297;
    }
    self->len++;
    __result_obj__180 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__180;
}

static void write_source_file_position_to_source(struct sInfo* info){
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
    if(    gComeOriginalSourcePosition) {
        if(        info->writing_source_file_position) {
            add_come_code(info,((char*)(__right_value261=xsprintf("# \%s \"\%s\"\n",((char*)(__right_value259=int_to_string(info->sline))),((char*)(__right_value260=string_to_string(info->sname)))))));
            (__right_value259 = come_decrement_ref_count2(__right_value259, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value260 = come_decrement_ref_count2(__right_value260, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            info->writing_source_file_position=(_Bool)0;
        }
    }
}

_Bool node_compile(struct sNode* node, struct sInfo* info){
void* __right_value262 = (void*)0;
char* sname_350;
int sline_351;
int sline_real_352;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
char* __dec_obj23;
_Bool result_353;
void* __right_value265 = (void*)0;
char* __dec_obj24;
_Bool __result_obj__237;
    sname_350=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_351=info->sline;
    sline_real_352=info->sline_real;
    __dec_obj23=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value263=node->sname(node->_protocol_obj)))));
    __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value263 = come_decrement_ref_count2(__right_value263, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    info->sline=node->sline(node->_protocol_obj);
    info->sline_real=node->sline_real(node->_protocol_obj);
    write_source_file_position_to_source(info);
    result_353=node->compile(node->_protocol_obj,info);
    __dec_obj24=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_350));
    __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_351;
    info->sline_real=sline_real_352;
    __result_obj__237 = result_353;
    (sname_350 = come_decrement_ref_count2(sname_350, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__237;
}

static void clear_tmp_file(struct sInfo* info){
char* input_file_name_354;
void* __right_value266 = (void*)0;
    input_file_name_354=(char*)come_increment_ref_count(info->sname);
    if(    input_file_name_354!=((void*)0)&&string_operator_not_equals(input_file_name_354,"")) {
        (void)system(((char*)(__right_value266=xsprintf("%s %s.*",RM,input_file_name_354))));
        (__right_value266 = come_decrement_ref_count2(__right_value266, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    (input_file_name_354 = come_decrement_ref_count2(input_file_name_354, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void clear_tmp_file_without_object_file(struct sInfo* info){
char* input_file_name_355;
void* __right_value267 = (void*)0;
    input_file_name_355=(char*)come_increment_ref_count(info->sname);
    if(    input_file_name_355!=((void*)0)&&string_operator_not_equals(input_file_name_355,"")) {
        (void)system(((char*)(__right_value267=xsprintf("%s %s.i* %s.c*",RM,input_file_name_355,input_file_name_355))));
        (__right_value267 = come_decrement_ref_count2(__right_value267, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    (input_file_name_355 = come_decrement_ref_count2(input_file_name_355, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void clear_tmp_file_without_object_file_and_ccfile(struct sInfo* info){
char* input_file_name_356;
void* __right_value268 = (void*)0;
    input_file_name_356=(char*)come_increment_ref_count(info->sname);
    if(    input_file_name_356!=((void*)0)&&string_operator_not_equals(input_file_name_356,"")) {
        (void)system(((char*)(__right_value268=xsprintf("%s %s.i* %s.c.out",RM,input_file_name_356,input_file_name_356))));
        (__right_value268 = come_decrement_ref_count2(__right_value268, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    (input_file_name_356 = come_decrement_ref_count2(input_file_name_356, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static _Bool cpp(struct sInfo* info){
char* input_file_name_357;
char* output_file_name_358;
void* __right_value269 = (void*)0;
char* __dec_obj25;
void* __right_value270 = (void*)0;
char* __dec_obj26;
_Bool exist_common_h_359;
struct _IO_FILE* Value_360;
int is_mac_361;
int is_android_362;
int is_debian_363;
int is_m5stack_364;
int is_pico_365;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
char* cmd3_366;
int rc_367;
void* __right_value273 = (void*)0;
char* command2_368;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
char* cmd2_369;
int rc_370;
void* __right_value276 = (void*)0;
char* command2_371;
void* __right_value277 = (void*)0;
char* command2_372;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
char* cmd2_373;
void* __right_value280 = (void*)0;
char* command2_374;
int rc_375;
void* __right_value281 = (void*)0;
char* command2_376;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
char* cmd2_377;
void* __right_value284 = (void*)0;
char* command2_378;
int rc_379;
void* __right_value285 = (void*)0;
char* command2_380;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
char* cmd3_381;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
char* __dec_obj27;
int rc_382;
void* __right_value290 = (void*)0;
char* command2_383;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
char* cmd4_384;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
char* __dec_obj28;
void* __right_value295 = (void*)0;
char* command2_385;
_Bool __result_obj__238;
output_file_name_358 = (void*)0;
    input_file_name_357=(char*)come_increment_ref_count(info->sname);
    if(    !info->output_header_file&&info->output_file_name) {
        __dec_obj25=output_file_name_358;
        output_file_name_358=(char*)come_increment_ref_count(string_operator_add(info->output_file_name,".i"));
        __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj26=output_file_name_358;
        output_file_name_358=(char*)come_increment_ref_count(string_operator_add(info->sname,".i"));
        __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    exist_common_h_359=(_Bool)0;
    {
        Value_360=fopen("common.h","r");
        if(        Value_360) {
            exist_common_h_359=(_Bool)1;
            fclose(Value_360);
        }
        else {
        }
        if(        string_operator_equals(info->output_file_name,"common.h")) {
            exist_common_h_359=(_Bool)0;
        }
        if(        !gCommonHeader) {
            exist_common_h_359=(_Bool)0;
        }
    }
    is_mac_361=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null")==0;
    is_android_362=system("uname -a | grep Android 1> /dev/null 2>/dev/null")==0;
    is_debian_363=system("uname -a | grep Debian 1> /dev/null 2>/dev/null")==0;
    is_m5stack_364=info->m5stack_cpp;
    is_pico_365=info->pico_cpp;
    if(    is_android_362) {
        cmd3_366=(char*)come_increment_ref_count(xsprintf("cpp %s -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -I/data/data/com.termux/files/usr/include/mariadb -D__ANDROID__ %s %s > %s 2> %s.cpp.out",(((info->remove_comment)?(""):(" -C"))),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h_359)?(((char*)(__right_value271=__builtin_string(" -include common.h ")))):("")),input_file_name_357,output_file_name_358,output_file_name_358));
        (__right_value271 = come_decrement_ref_count2(__right_value271, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        info->verbose) {
            puts(cmd3_366);
        }
        rc_367=system(cmd3_366);
        command2_368=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name_358));
        if(        info->verbose) {
            puts(command2_368);
        }
        (void)system(command2_368);
        if(        rc_367!=0) {
            printf("cpp failed(%s)\n",command2_368);
            exit(2);
        }
        (cmd3_366 = come_decrement_ref_count2(cmd3_366, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (command2_368 = come_decrement_ref_count2(command2_368, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    is_m5stack_364) {
        cmd2_369=(char*)come_increment_ref_count(xsprintf("xtensa-esp-elf-cpp -E %s -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DNEO_C -D__M5STACK__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_359)?(((char*)(__right_value274=__builtin_string(" -include common.h ")))):("")),input_file_name_357,output_file_name_358,output_file_name_358));
        (__right_value274 = come_decrement_ref_count2(__right_value274, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        info->verbose) {
            puts(cmd2_369);
        }
        rc_370=system(cmd2_369);
        command2_371=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name_358));
        if(        info->verbose) {
            puts(command2_371);
        }
        (void)system(command2_371);
        if(        rc_370!=0) {
            printf("failed to cpp(2) (%s)\n",cmd2_369);
            exit(5);
        }
        (command2_371 = come_decrement_ref_count2(command2_371, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        command2_372=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name_358));
        if(        info->verbose) {
            puts(command2_372);
        }
        (void)system(command2_372);
        (cmd2_369 = come_decrement_ref_count2(cmd2_369, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (command2_372 = come_decrement_ref_count2(command2_372, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    is_pico_365) {
        cmd2_373=(char*)come_increment_ref_count(xsprintf("arm-none-eabi-gcc -E %s -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DNEO_C -D__PICO__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_359)?(((char*)(__right_value278=__builtin_string(" -include common.h ")))):("")),input_file_name_357,output_file_name_358,output_file_name_358));
        (__right_value278 = come_decrement_ref_count2(__right_value278, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        info->verbose) {
            puts(cmd2_373);
        }
        command2_374=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name_358));
        if(        info->verbose) {
            puts(command2_374);
        }
        (void)system(command2_374);
        rc_375=system(cmd2_373);
        if(        rc_375!=0) {
            printf("failed to cpp(2) (%s)\n",cmd2_373);
            exit(5);
        }
        (command2_374 = come_decrement_ref_count2(command2_374, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        command2_376=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name_358));
        if(        info->verbose) {
            puts(command2_376);
        }
        (void)system(command2_376);
        (cmd2_373 = come_decrement_ref_count2(cmd2_373, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (command2_376 = come_decrement_ref_count2(command2_376, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    is_mac_361) {
        cmd2_377=(char*)come_increment_ref_count(xsprintf("gcc -E %s -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DNEO_C -D__MAC__ -I/opt/homebrew/opt/pcre/include -I/opt/homebrew/opt/boehmgc/include/ -I/opt/homebrew/opt/openssl/include -I/opt/homebrew/opt/mysql/include %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_359)?(((char*)(__right_value282=__builtin_string(" -include common.h ")))):("")),input_file_name_357,output_file_name_358,output_file_name_358));
        (__right_value282 = come_decrement_ref_count2(__right_value282, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        info->verbose) {
            puts(cmd2_377);
        }
        command2_378=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name_358));
        if(        info->verbose) {
            puts(command2_378);
        }
        (void)system(command2_378);
        rc_379=system(cmd2_377);
        if(        rc_379!=0) {
            printf("failed to cpp(2) (%s)\n",cmd2_377);
            exit(5);
        }
        (command2_378 = come_decrement_ref_count2(command2_378, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        command2_380=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name_358));
        if(        info->verbose) {
            puts(command2_380);
        }
        (void)system(command2_380);
        (cmd2_377 = come_decrement_ref_count2(cmd2_377, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (command2_380 = come_decrement_ref_count2(command2_380, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        cmd3_381=(char*)come_increment_ref_count(xsprintf("cpp %s -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",(((info->remove_comment)?(""):(" -C"))),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h_359)?(((char*)(__right_value286=__builtin_string(" -include common.h ")))):("")),input_file_name_357,output_file_name_358,output_file_name_358));
        (__right_value286 = come_decrement_ref_count2(__right_value286, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        is_debian_363) {
            __dec_obj27=cmd3_381;
            cmd3_381=(char*)come_increment_ref_count(xsprintf("cpp %s -lang-c %s -I. -D__DEBIAN__ -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h_359)?(((char*)(__right_value288=__builtin_string(" -include common.h ")))):("")),input_file_name_357,output_file_name_358,output_file_name_358));
            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
            (__right_value288 = come_decrement_ref_count2(__right_value288, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        info->verbose) {
            puts(cmd3_381);
        }
        rc_382=system(cmd3_381);
        command2_383=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name_358));
        if(        info->verbose) {
            puts(command2_383);
        }
        (void)system(command2_383);
        if(        rc_382!=0) {
            cmd4_384=(char*)come_increment_ref_count(xsprintf("cpp %s -I. %s -DPREFIX=%s -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_359)?(((char*)(__right_value291=__builtin_string(" -include common.h ")))):("")),input_file_name_357,output_file_name_358,output_file_name_358));
            (__right_value291 = come_decrement_ref_count2(__right_value291, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            is_debian_363) {
                __dec_obj28=cmd4_384;
                cmd4_384=(char*)come_increment_ref_count(xsprintf("cpp %s -D__DEBIAN__ -I. %s -DPREFIX=%s -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_359)?(((char*)(__right_value293=__builtin_string(" -include common.h ")))):("")),input_file_name_357,output_file_name_358,output_file_name_358));
                __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                (__right_value293 = come_decrement_ref_count2(__right_value293, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            command2_385=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name_358));
            if(            info->verbose) {
                puts(command2_385);
            }
            (void)system(command2_385);
            if(            rc_382!=0) {
                printf("failed to cpp(2) (%s)\n",cmd4_384);
                exit(5);
            }
            (cmd4_384 = come_decrement_ref_count2(cmd4_384, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (command2_385 = come_decrement_ref_count2(command2_385, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (cmd3_381 = come_decrement_ref_count2(cmd3_381, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (command2_383 = come_decrement_ref_count2(command2_383, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__238 = (_Bool)1;
    (input_file_name_357 = come_decrement_ref_count2(input_file_name_357, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (output_file_name_358 = come_decrement_ref_count2(output_file_name_358, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__238;
}

static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1char$ph* object_files){
void* __right_value296 = (void*)0;
char* input_file_name_386;
char* output_file_name_387;
void* __right_value297 = (void*)0;
char* __dec_obj29;
void* __right_value298 = (void*)0;
char* __dec_obj30;
void* __right_value299 = (void*)0;
char* command_388;
int rc_389;
void* __right_value300 = (void*)0;
char* __dec_obj31;
int rc_390;
void* __right_value301 = (void*)0;
char* command2_391;
void* __right_value305 = (void*)0;
_Bool __result_obj__241;
output_file_name_387 = (void*)0;
    input_file_name_386=(char*)come_increment_ref_count(string_operator_add(info->sname,".c"));
    if(    info->output_file_name&&output_object_file) {
        __dec_obj29=output_file_name_387;
        output_file_name_387=(char*)come_increment_ref_count(__builtin_string(info->output_file_name));
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj30=output_file_name_387;
        output_file_name_387=(char*)come_increment_ref_count(string_operator_add(info->sname,".o"));
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    command_388=(char*)come_increment_ref_count(xsprintf("%s -o %s -c %s %s >> %s.out 2>&1",CC,output_file_name_387,input_file_name_386,info->clang_option,input_file_name_386));
    if(    info->verbose) {
        puts(command_388);
    }
    rc_389=system(command_388);
    if(    rc_389!=0) {
        __dec_obj31=command_388;
        command_388=(char*)come_increment_ref_count(xsprintf("%s -o %s -c %s %s >> %s.out 2>&1","gcc",output_file_name_387,input_file_name_386,info->clang_option,input_file_name_386));
        __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->verbose) {
            puts(command_388);
        }
        rc_390=system(command_388);
        if(        rc_390!=0) {
            printf("%s is faild\n",CC);
            command2_391=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.out 2>/dev/null",input_file_name_386));
            if(            info->verbose) {
                puts(command2_391);
            }
            (void)system(command2_391);
            exit(2);
            (command2_391 = come_decrement_ref_count2(command2_391, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    !output_object_file) {
        list$1char$ph$p_insert(object_files,0,(char*)come_increment_ref_count(__builtin_string(output_file_name_387)));
    }
    __result_obj__241 = (_Bool)1;
    (input_file_name_386 = come_decrement_ref_count2(input_file_name_386, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (output_file_name_387 = come_decrement_ref_count2(output_file_name_387, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (command_388 = come_decrement_ref_count2(command_388, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__241;
}

static struct list$1char$ph* list$1char$ph$p_insert(struct list$1char$ph* self, int position, char* item){
int len_392;
int i_393;
char* default_value_394;
struct list$1char$ph* __result_obj__239;
void* __right_value302 = (void*)0;
struct list_item$1char$ph* litem_395;
char* __dec_obj32;
void* __right_value303 = (void*)0;
struct list_item$1char$ph* litem_396;
char* __dec_obj33;
struct list_item$1char$ph* it_397;
int i_398;
void* __right_value304 = (void*)0;
struct list_item$1char$ph* litem_399;
char* __dec_obj34;
struct list$1char$ph* __result_obj__240;
default_value_394 = (void*)0;
    if(    position<0) {
        position+=self->len+1;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_392=self->len;
        for(        i_393=0;        i_393<position-len_392;        i_393++        ){
            memset(&default_value_394,0,sizeof(char*));
            list$1char$ph$p_push_back(self,(char*)come_increment_ref_count(default_value_394));
            (default_value_394 = come_decrement_ref_count2(default_value_394, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        list$1char$ph$p_push_back(self,(char*)come_increment_ref_count(item));
        __result_obj__239 = self;
        (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__239;
    }
    if(    position==0) {
        litem_395=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value302=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1649, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_395->prev=((void*)0);
        litem_395->next=self->head;
        __dec_obj32=litem_395->item;
        litem_395->item=(char*)come_increment_ref_count(item);
        __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->head->prev=litem_395;
        self->head=litem_395;
        self->len++;
    }
    else if(    self->len==1) {
        litem_396=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value303=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1661, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_396->prev=self->head;
        litem_396->next=self->tail;
        __dec_obj33=litem_396->item;
        litem_396->item=(char*)come_increment_ref_count(item);
        __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->prev=litem_396;
        self->head->next=litem_396;
        self->len++;
    }
    else {
        it_397=self->head;
        i_398=0;
        while(it_397!=((void*)0)) {
            if(            position==i_398) {
                litem_399=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value304=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1677, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                litem_399->prev=it_397->prev;
                litem_399->next=it_397;
                __dec_obj34=litem_399->item;
                litem_399->item=(char*)come_increment_ref_count(item);
                __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                it_397->prev->next=litem_399;
                it_397->prev=litem_399;
                self->len++;
            }
            it_397=it_397->next;
            i_398++;
        }
    }
    __result_obj__240 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__240;
}

static _Bool linker(struct sInfo* info, struct list$1char$ph* object_files){
char* output_file_name_400;
void* __right_value306 = (void*)0;
char* __dec_obj35;
void* __right_value307 = (void*)0;
char* __dec_obj36;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct buffer* command_401;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct list$1char$ph* o2_saved_402;
char* it_405;
int is_mac_408;
void* __right_value312 = (void*)0;
char* cmd_409;
int rc_410;
void* __right_value313 = (void*)0;
char* cmd_411;
int rc_412;
void* __right_value314 = (void*)0;
char* cmd_413;
int rc_414;
int is_apline_415;
int is_debian_416;
int is_android_417;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
int Value_418;
_Bool _if_conditional1;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
char* str_419;
int Value_420;
_Bool __result_obj__248;
_Bool __result_obj__249;
    output_file_name_400=((void*)0);
    if(    info->output_file_name) {
        __dec_obj35=output_file_name_400;
        output_file_name_400=(char*)come_increment_ref_count(__builtin_string(info->output_file_name));
        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj36=output_file_name_400;
        output_file_name_400=(char*)come_increment_ref_count(xnoextname(info->sname));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    command_401=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 287, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_format(command_401,"%s -o %s ",CC,output_file_name_400);
    buffer_append_str(command_401,((char*)(__right_value311=string_operator_add(((char*)(__right_value310=charp_operator_add(" ",info->linker_option)))," "))));
    (__right_value310 = come_decrement_ref_count2(__right_value310, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value311 = come_decrement_ref_count2(__right_value311, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    for(    o2_saved_402=(object_files),it_405=list$1char$ph$p_begin((o2_saved_402));    !list$1char$ph$p_end((o2_saved_402));    it_405=list$1char$ph$p_next((o2_saved_402))    ){
        buffer_append_format(command_401,"%s ",it_405);
    }
    is_mac_408=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null")==0;
    if(    is_mac_408) {
        buffer_append_str(command_401," -L/opt/homebrew/opt/pcre/lib -L/opt/homebrew/opt/openssl/lib -L/opt/homebrew/opt/boehmgc/lib -L/opt/homebrew/opt/mysql/lib -L/opt/homebrew/opt/zstd/lib ");
    }
    cmd_409=(char*)come_increment_ref_count(xsprintf("ls /usr/local/lib 1> /dev/null 2>/dev/null"));
    rc_410=system(cmd_409);
    if(    rc_410==0) {
        buffer_append_str(command_401," -L. -L/usr/local/lib ");
    }
    (cmd_409 = come_decrement_ref_count2(cmd_409, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    cmd_411=(char*)come_increment_ref_count(xsprintf("ls %s/lib 1> /dev/null 2>/dev/null",getenv("HOME")));
    rc_412=system(cmd_411);
    if(    rc_412==0) {
        buffer_append_format(command_401," -L%s/lib ",getenv("HOME"));
    }
    (cmd_411 = come_decrement_ref_count2(cmd_411, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    cmd_413=(char*)come_increment_ref_count(xsprintf("ls %s/lib 1> /dev/null 2>/dev/null","/usr/local/"));
    rc_414=system(cmd_413);
    if(    rc_414==0) {
        buffer_append_format(command_401," -L%s/lib ","/usr/local/");
    }
    buffer_append_format(command_401," %s ",info->clang_option);
    if(    gComeStr) {
        buffer_append_format(command_401," -lpcre ");
    }
    if(    gComeGC) {
        buffer_append_str(command_401," -lgc ");
    }
    if(    gComePthread) {
        buffer_append_str(command_401," -lpthread ");
    }
    if(    gComeNet) {
        is_apline_415=system("which apk 1> /dev/null 2>/dev/null")==0;
        is_debian_416=system("uname -a | grep Debian 1> /dev/null 2>/dev/null")==0;
        is_android_417=system("uname -a | grep Android 1>/dev/null 2>/dev/null")==0;
        if(        is_android_417) {
            buffer_append_str(command_401," -lssl -I/data/data/com.termux/files/usr/include/mariadb -lmariadb");
        }
        else if(        is_apline_415||is_debian_416) {
            buffer_append_str(command_401," -lssl -I/usr/include/mariadb -L/usr/lib -lmariadb");
        }
        else if(        is_mac_408) {
            buffer_append_format(command_401," -lssl `mysql_config --cflags --libs`");
        }
        else {
            buffer_append_str(command_401," -lssl `mysql_config --cflags --libs`");
        }
    }
    if(    info->verbose) {
        puts(((char*)(__right_value315=buffer_to_string(command_401))));
        (__right_value315 = come_decrement_ref_count2(__right_value315, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    Value_418=system(((char*)(__right_value316=buffer_to_string(command_401))));
    if(    (_if_conditional1=(Value_418)),    (__right_value316 = come_decrement_ref_count2(__right_value316, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    _if_conditional1) {
        str_419=(char*)come_increment_ref_count(charp_operator_add(((char*)(__right_value317=xsprintf("gcc"))),((char*)(__right_value319=charp_substring(((char*)(__right_value318=buffer_to_string(command_401))),strlen(CC),-1)))));
        (__right_value317 = come_decrement_ref_count2(__right_value317, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value318 = come_decrement_ref_count2(__right_value318, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value319 = come_decrement_ref_count2(__right_value319, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        Value_420=system(str_419);
        if(        Value_420) {
            printf("%s is failed\n",CC);
            __result_obj__248 = (_Bool)0;
            (str_419 = come_decrement_ref_count2(str_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (output_file_name_400 = come_decrement_ref_count2(output_file_name_400, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(command_401,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (cmd_413 = come_decrement_ref_count2(cmd_413, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__248;
        }
        else {
        }
        (str_419 = come_decrement_ref_count2(str_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
    }
    __result_obj__249 = (_Bool)1;
    (output_file_name_400 = come_decrement_ref_count2(output_file_name_400, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(command_401,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (cmd_413 = come_decrement_ref_count2(cmd_413, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__249;
}

static char* list$1char$ph$p_begin(struct list$1char$ph* self){
char* result_403;
char* __result_obj__242;
char* __result_obj__243;
char* result_404;
char* __result_obj__244;
result_403 = (void*)0;
result_404 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_403,0,sizeof(char*));
        __result_obj__242 = result_403;
        return __result_obj__242;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__243 = self->it->item;
        return __result_obj__243;
    }
    memset(&result_404,0,sizeof(char*));
    __result_obj__244 = result_404;
    return __result_obj__244;
}

static _Bool list$1char$ph$p_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph$p_next(struct list$1char$ph* self){
char* result_406;
char* __result_obj__245;
char* __result_obj__246;
char* result_407;
char* __result_obj__247;
result_406 = (void*)0;
result_407 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_406,0,sizeof(char*));
        __result_obj__245 = result_406;
        return __result_obj__245;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__246 = self->it->item;
        return __result_obj__246;
    }
    memset(&result_407,0,sizeof(char*));
    __result_obj__247 = result_407;
    return __result_obj__247;
}

_Bool new_project(int argc, char** argv){
void* __right_value321 = (void*)0;
char* project_name_421;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
char* project_name_debug_422;
void* __right_value325 = (void*)0;
char* cc_423;
void* __right_value326 = (void*)0;
char* install_424;
void* __right_value327 = (void*)0;
char* libs_425;
void* __right_value328 = (void*)0;
char* os_426;
void* __right_value329 = (void*)0;
char* prefix_427;
void* __right_value330 = (void*)0;
char* cflags_428;
void* __right_value331 = (void*)0;
char* cflags_debug_429;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
int Value_430;
_Bool _if_conditional2;
_Bool __exception_result_var_b1;
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
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
_Bool __result_obj__250;
    project_name_421=(char*)come_increment_ref_count(__builtin_string(argv[2]));
    project_name_debug_422=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value322=__builtin_string(argv[2]))),((char*)(__right_value323=__builtin_string("-debug")))));
    (__right_value322 = come_decrement_ref_count2(__right_value322, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value323 = come_decrement_ref_count2(__right_value323, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    cc_423=(char*)come_increment_ref_count(__builtin_string("comelang"));
    install_424=(char*)come_increment_ref_count(__builtin_string("install"));
    libs_425=(char*)come_increment_ref_count(__builtin_string("-lpcre"));
    os_426=(char*)come_increment_ref_count(__builtin_string("linux"));
    prefix_427=(char*)come_increment_ref_count(__builtin_string("/usr/local/"));
    cflags_428=(char*)come_increment_ref_count(__builtin_string(" -common-header -O2 "));
    cflags_debug_429=(char*)come_increment_ref_count(__builtin_string(" -common-header -gdwarf-4 -cg "));
    Value_430=system(((char*)(__right_value333=xsprintf("mkdir \%s",((char*)(__right_value332=string_to_string(project_name_421)))))));
    if(    (_if_conditional2=(Value_430<0)),    (__right_value332 = come_decrement_ref_count2(__right_value332, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    (__right_value333 = come_decrement_ref_count2(__right_value333, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    _if_conditional2) {
        (come_push_stackframe("02transpile.c", 377, 0),__exception_result_var_b1=die("mkdir error"), come_pop_stackframe(), __exception_result_var_b1);
    }
    else {
    }
    charp_write(((char*)(__right_value359=xsprintf("\#########################################\n\# istalled directories\n\#########################################\nexec_prefix=${prefix}\nbindir=${exec_prefix}/bin\ndatadir=${datarootdir}\nmandir=${datarootdir}/man\nsharedstatedir=${prefix}/\%s\nsysconfdir=${prefix}/etc/\%s\nincludedir=${prefix}/include/\%s\ndatarootdir=${prefix}/share/\%s\ndocdir=${datarootdir}/doc\nlibdir=${exec_prefix}/lib\n\n\#########################################\n\# environmnet variables\n\#########################################\nCC=\%s\nINSTALL=\%s\nCFLAGS=\%s\nCFLAGS_DEBUG=\%s\nLIBS=\%s\nOS=\%s\nDESTDIR=\%s\nSRCS=$(wildcard *.c)\nSINGLE_SRCS=$(filter-out %%.c.c, $(SRCS))\nOBJS=$(SINGLE_SRCS:.c=.o)\nDEBUG_OBJS=$(SINGLE_SRCS:.c=.debug.o)\nTARGET=\%s\nTARGET_DEBUG=\%s\n\n\#########################################\n\# main\n\#########################################\nall: $(TARGET)\n\n$(TARGET): $(OBJS)\n\t$(CC) $(CFLAGS) $^ -o $@\n\n$(TARGET_DEBUG): $(DEBUG_OBJS)\n\t$(CC) $(CFLAGS_DEBUG) $^ -o $@\n\n%%.o: %%.c\n\t$(CC) $(CFLAGS) -c $< -o $@\n\n%%.debug.o: %%.c\n\t$(CC) $(CFLAGS_DEBUG) -c $< -o $@\n\n\#########################################\n\# header\n\#########################################\n\nheader: common.h\n\ncommon.h: $(SINGLE_SRCS)\n\tcomelang header -common-header $(SINGLE_SRCS)\n\n\#########################################\n\# install\n\#########################################\ninstall:\n\tmkdir -p \"$(DESTDIR)/bin\"\n\t$(INSTALL) -m 755 ./\%s \"$(DESTDIR)/bin\"\n\tmkdir -p \"$(DESTDIR)/include\"\n\tmkdir -p \"$(DESTDIR)/lib\"\n\tmkdir -p \"$(DESTDIR)/share/doc/\%s\"\n\t$(INSTALL) -m 644 README.md \"$(DESTDIR)/share/doc/\%s/README.md\"\n\n\#########################################\n\# clean\n\#########################################\nclean:\n\trm -fR *.o *.c.i *.c.out *.c.c \%s *.log *.out common.h \%s tmp-common-header.c\n\n\#########################################\n\# uninstall\n\#########################################\nuninstall:\n\trm -f \"$(DESTDIR)\"/bin/\%s\n\trm -f \"$(DESTDIR)/share/doc/\%s/README.md\"\n\nrun: \%s\n\trm -f *.log\n\t./\%s\n\ncompile: \%s\n\ndebug: \%s\n\trm -f *.log\n\t./\%s\n",((char*)(__right_value334=string_to_string(project_name_421))),((char*)(__right_value335=string_to_string(project_name_421))),((char*)(__right_value336=string_to_string(project_name_421))),((char*)(__right_value337=string_to_string(project_name_421))),((char*)(__right_value338=string_to_string(cc_423))),((char*)(__right_value339=string_to_string(install_424))),((char*)(__right_value340=string_to_string(cflags_428))),((char*)(__right_value341=string_to_string(cflags_debug_429))),((char*)(__right_value342=string_to_string(libs_425))),((char*)(__right_value343=string_to_string(os_426))),((char*)(__right_value344=string_to_string(prefix_427))),((char*)(__right_value345=string_to_string(project_name_421))),((char*)(__right_value346=string_to_string(project_name_debug_422))),((char*)(__right_value347=string_to_string(project_name_421))),((char*)(__right_value348=string_to_string(project_name_421))),((char*)(__right_value349=string_to_string(project_name_421))),((char*)(__right_value350=string_to_string(project_name_421))),((char*)(__right_value351=string_to_string(project_name_debug_422))),((char*)(__right_value352=string_to_string(project_name_421))),((char*)(__right_value353=string_to_string(project_name_421))),((char*)(__right_value354=string_to_string(project_name_421))),((char*)(__right_value355=string_to_string(project_name_421))),((char*)(__right_value356=string_to_string(project_name_421))),((char*)(__right_value357=string_to_string(project_name_debug_422))),((char*)(__right_value358=string_to_string(project_name_debug_422)))))),((char*)(__right_value361=xsprintf("\%s/Makefile",((char*)(__right_value360=string_to_string(project_name_421)))))),(_Bool)0);
    (__right_value334 = come_decrement_ref_count2(__right_value334, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value335 = come_decrement_ref_count2(__right_value335, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value336 = come_decrement_ref_count2(__right_value336, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value337 = come_decrement_ref_count2(__right_value337, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value338 = come_decrement_ref_count2(__right_value338, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value339 = come_decrement_ref_count2(__right_value339, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value340 = come_decrement_ref_count2(__right_value340, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value341 = come_decrement_ref_count2(__right_value341, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value343 = come_decrement_ref_count2(__right_value343, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value344 = come_decrement_ref_count2(__right_value344, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value345 = come_decrement_ref_count2(__right_value345, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value346 = come_decrement_ref_count2(__right_value346, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value347 = come_decrement_ref_count2(__right_value347, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value348 = come_decrement_ref_count2(__right_value348, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value349 = come_decrement_ref_count2(__right_value349, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value350 = come_decrement_ref_count2(__right_value350, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value351 = come_decrement_ref_count2(__right_value351, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value353 = come_decrement_ref_count2(__right_value353, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value355 = come_decrement_ref_count2(__right_value355, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value356 = come_decrement_ref_count2(__right_value356, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value357 = come_decrement_ref_count2(__right_value357, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value358 = come_decrement_ref_count2(__right_value358, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value359 = come_decrement_ref_count2(__right_value359, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value360 = come_decrement_ref_count2(__right_value360, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value361 = come_decrement_ref_count2(__right_value361, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __result_obj__250 = (_Bool)1;
    (project_name_421 = come_decrement_ref_count2(project_name_421, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (project_name_debug_422 = come_decrement_ref_count2(project_name_debug_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cc_423 = come_decrement_ref_count2(cc_423, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (install_424 = come_decrement_ref_count2(install_424, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (libs_425 = come_decrement_ref_count2(libs_425, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (os_426 = come_decrement_ref_count2(os_426, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (prefix_427 = come_decrement_ref_count2(prefix_427, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cflags_428 = come_decrement_ref_count2(cflags_428, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cflags_debug_429 = come_decrement_ref_count2(cflags_debug_429, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__250;
}

_Bool run_project(int argc, char** argv){
struct _IO_FILE* Value_431;
int Value_432;
_Bool __exception_result_var_b2;
int Value_433;
_Bool __exception_result_var_b3;
    Value_431=fopen("common.h","r");
    if(    Value_431) {
        fclose(Value_431);
    }
    else {
        Value_432=system("make header");
        if(        Value_432<0) {
            (come_push_stackframe("02transpile.c", 483, 1),__exception_result_var_b2=die("system"), come_pop_stackframe(), __exception_result_var_b2);
        }
        else {
        }
    }
    Value_433=system("make run");
    if(    Value_433<0) {
        (come_push_stackframe("02transpile.c", 488, 2),__exception_result_var_b3=die("system"), come_pop_stackframe(), __exception_result_var_b3);
    }
    else {
    }
    return (_Bool)1;
}

_Bool make_header_project(int argc, char** argv){
int Value_434;
_Bool __exception_result_var_b4;
    Value_434=system("make header");
    if(    Value_434<0) {
        (come_push_stackframe("02transpile.c", 497, 3),__exception_result_var_b4=die("system"), come_pop_stackframe(), __exception_result_var_b4);
    }
    else {
    }
    return (_Bool)1;
}

_Bool compile_project(int argc, char** argv){
struct _IO_FILE* Value_435;
int Value_436;
_Bool __exception_result_var_b5;
int Value_437;
_Bool __exception_result_var_b6;
    Value_435=fopen("common.h","r");
    if(    Value_435) {
        fclose(Value_435);
    }
    else {
        Value_436=system("make header");
        if(        Value_436<0) {
            (come_push_stackframe("02transpile.c", 510, 4),__exception_result_var_b5=die("system"), come_pop_stackframe(), __exception_result_var_b5);
        }
        else {
        }
    }
    Value_437=system("make compile");
    if(    Value_437<0) {
        (come_push_stackframe("02transpile.c", 514, 5),__exception_result_var_b6=die("system"), come_pop_stackframe(), __exception_result_var_b6);
    }
    else {
    }
    return (_Bool)1;
}

_Bool debug_run_project(int argc, char** argv){
struct _IO_FILE* Value_438;
int Value_439;
_Bool __exception_result_var_b7;
int Value_440;
_Bool __exception_result_var_b8;
    Value_438=fopen("common.h","r");
    if(    Value_438) {
        fclose(Value_438);
    }
    else {
        Value_439=system("make header");
        if(        Value_439<0) {
            (come_push_stackframe("02transpile.c", 527, 6),__exception_result_var_b7=die("system"), come_pop_stackframe(), __exception_result_var_b7);
        }
        else {
        }
    }
    Value_440=system("make debug");
    if(    Value_440<0) {
        (come_push_stackframe("02transpile.c", 531, 7),__exception_result_var_b8=die("system"), come_pop_stackframe(), __exception_result_var_b8);
    }
    else {
    }
    return (_Bool)1;
}

_Bool clean_project(int argc, char** argv){
int Value_441;
_Bool __exception_result_var_b9;
    Value_441=system("make clean");
    if(    Value_441<0) {
        (come_push_stackframe("02transpile.c", 540, 8),__exception_result_var_b9=die("system"), come_pop_stackframe(), __exception_result_var_b9);
    }
    else {
    }
    return (_Bool)1;
}

_Bool install_project(int argc, char** argv, char* prefix){
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
int Value_442;
_Bool _if_conditional3;
_Bool __exception_result_var_b10;
    Value_442=system(((char*)(__right_value363=xsprintf("make install DESTDIR=\%s",((char*)(__right_value362=charp_to_string(prefix)))))));
    if(    (_if_conditional3=(Value_442<0)),    (__right_value362 = come_decrement_ref_count2(__right_value362, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    (__right_value363 = come_decrement_ref_count2(__right_value363, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    _if_conditional3) {
        (come_push_stackframe("02transpile.c", 549, 9),__exception_result_var_b10=die("system"), come_pop_stackframe(), __exception_result_var_b10);
    }
    else {
    }
    return (_Bool)1;
}

static void init_classes(struct sInfo* info){
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
int i_490;
void* __right_value421 = (void*)0;
char* generics_type_491;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
int i_492;
void* __right_value424 = (void*)0;
char* generics_type_493;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
int is_mac_494;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
char* type_name_495;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
struct sType* type_496;
void* __right_value435 = (void*)0;
char* __dec_obj37;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct sClass* klass_518;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
    map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("int")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 557, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("short")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 558, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("short")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("long")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 559, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("char")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 560, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("bool")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 561, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("_Bool")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 562, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("_Bool")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("void")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 563, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("float")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 564, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("float")),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)));
    map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("double")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 565, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("double")),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)));
    map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("_Float16")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 566, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("_Float16")),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)));
    map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("lambda")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 567, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__uint128_t")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 568, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("__uint128_t")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__int128")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 569, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("__int128")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    for(    i_490=0;    i_490<12;    i_490++    ){
        generics_type_491=(char*)come_increment_ref_count(xsprintf("generics_type%d",i_490));
        map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(generics_type_491),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 572, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(generics_type_491),(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,i_490,-1,(_Bool)0,info)));
        (generics_type_491 = come_decrement_ref_count2(generics_type_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    for(    i_492=0;    i_492<7;    i_492++    ){
        generics_type_493=(char*)come_increment_ref_count(xsprintf("mgenerics_type%d",i_492));
        map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(generics_type_493),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 576, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(generics_type_493),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,-1,i_492,(_Bool)0,info)));
        (generics_type_493 = come_decrement_ref_count2(generics_type_493, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    is_mac_494=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null")==0;
    if(    is_mac_494) {
        map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__builtin_va_list")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 581, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("__builtin_va_list")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
        type_name_495=(char*)come_increment_ref_count(__builtin_string("__builtin_va_list"));
        type_496=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 585, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("__builtin_va_list")),(_Bool)0,info));
        __dec_obj37=type_496->mOriginalTypeName;
        type_496->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string("__builtin_va_list"));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        map$2char$phsType$ph$p_insert(info->types,(char*)come_increment_ref_count(__builtin_string(type_name_495)),(struct sType*)come_increment_ref_count(type_496));
        (type_name_495 = come_decrement_ref_count2(type_name_495, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type_496,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        klass_518=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 591, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("__builtin_va_list")),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
        list$1tuple2$2char$phsType$ph$ph$p_push_back(klass_518->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "02transpile.c", 593, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(__builtin_string("v1")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 593, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info)))));
        list$1tuple2$2char$phsType$ph$ph$p_push_back(klass_518->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "02transpile.c", 594, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(__builtin_string("v2")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 594, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info)))));
        list$1tuple2$2char$phsType$ph$ph$p_push_back(klass_518->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "02transpile.c", 595, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(__builtin_string("v3")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 595, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info)))));
        list$1tuple2$2char$phsType$ph$ph$p_push_back(klass_518->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "02transpile.c", 596, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(__builtin_string("v4")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 596, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info)))));
        list$1tuple2$2char$phsType$ph$ph$p_push_back(klass_518->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "02transpile.c", 597, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(__builtin_string("v5")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 597, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info)))));
        map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__builtin_va_list")),(struct sClass*)come_increment_ref_count(klass_518));
        come_call_finalizer3(klass_518,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph$p_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_466;
unsigned int it_467;
_Bool same_key_exist_484;
char* it2_487;
struct map$2char$phsClass$ph* __result_obj__271;
    if(    self->len*10>=self->size) {
        map$2char$phsClass$ph$p_rehash(self);
    }
    hash_466=string_get_hash_key(((char*)key))%self->size;
    it_467=hash_466;
    while((_Bool)1) {
        if(        self->item_existance[it_467]) {
            if(            string_equals(self->keys[it_467],key)) {
                if(                1) {
                    list$1char$p$p_remove(self->key_list,self->keys[it_467]);
                    (self->keys[it_467] = come_decrement_ref_count2(self->keys[it_467], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_467]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$p$p_remove(self->key_list,self->keys[it_467]);
                    self->keys[it_467]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_467],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_467]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_467]=item;
                }
                break;
            }
            it_467++;
            if(            it_467>=self->size) {
                it_467=0;
            }
            else if(            it_467==hash_466) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_467]=(_Bool)1;
            if(            1) {
                self->keys[it_467]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_467]=key;
            }
            if(            1) {
                self->items[it_467]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_467]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_484=(_Bool)0;
    for(    it2_487=list$1char$p$p_begin(self->key_list);    !list$1char$p$p_end(self->key_list);    it2_487=list$1char$p$p_next(self->key_list)    ){
        if(        string_equals(it2_487,key)) {
            same_key_exist_484=(_Bool)1;
        }
    }
    if(    !same_key_exist_484) {
        list$1char$p$p_push_back(self->key_list,key);
    }
    __result_obj__271 = self;
    (key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__271;
}

static void map$2char$phsClass$ph$p_rehash(struct map$2char$phsClass$ph* self){
int size_443;
void* __right_value364 = (void*)0;
char** keys_444;
void* __right_value365 = (void*)0;
struct sClass** items_445;
void* __right_value366 = (void*)0;
_Bool* item_existance_446;
int len_447;
char* it_450;
struct sClass* default_value_453;
void* __right_value367 = (void*)0;
struct sClass* it2_454;
unsigned int hash_463;
int n_464;
struct sClass* default_value_465;
void* __right_value368 = (void*)0;
default_value_453 = (void*)0;
default_value_465 = (void*)0;
    size_443=self->size*10;
    keys_444=(char**)come_increment_ref_count(((char**)(__right_value364=(char**)come_calloc(1, sizeof(char*)*(1*(size_443)), "./comelang.h", 2934, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_445=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value365=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_443)), "./comelang.h", 2935, "struct sClass**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_446=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value366=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_443)), "./comelang.h", 2936, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_447=0;
    for(    it_450=map$2char$phsClass$ph$p_begin(self);    !map$2char$phsClass$ph$p_end(self);    it_450=map$2char$phsClass$ph$p_next(self)    ){
        memset(&default_value_453,0,sizeof(struct sClass*));
        it2_454=((struct sClass*)(__right_value367=map$2char$phsClass$ph$p_at(self,it_450,(struct sClass*)come_increment_ref_count(default_value_453))));
        come_call_finalizer3(__right_value367,sClass_finalize, 0, 1, 0, 0, (void*)0);
        hash_463=string_get_hash_key(((char*)it_450))%size_443;
        n_464=hash_463;
        while((_Bool)1) {
            if(            item_existance_446[n_464]) {
                n_464++;
                if(                n_464>=size_443) {
                    n_464=0;
                }
                else if(                n_464==hash_463) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_446[n_464]=(_Bool)1;
                keys_444[n_464]=it_450;
                items_445[n_464]=((struct sClass*)(__right_value368=map$2char$phsClass$ph$p_at(self,it_450,(struct sClass*)come_increment_ref_count(default_value_465))));
                come_call_finalizer3(__right_value368,sClass_finalize, 0, 1, 0, 0, (void*)0);
                len_447++;
                come_call_finalizer3(default_value_465,sClass_finalize, 0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer3(default_value_465,sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(default_value_453,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_444;
    self->items=items_445;
    self->item_existance=item_existance_446;
    self->size=size_443;
    self->len=len_447;
}

static char* map$2char$phsClass$ph$p_begin(struct map$2char$phsClass$ph* self){
char* result_448;
char* __result_obj__251;
char* __result_obj__252;
char* result_449;
char* __result_obj__253;
result_448 = (void*)0;
result_449 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_448,0,sizeof(char*));
        __result_obj__251 = result_448;
        return __result_obj__251;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__252 = self->key_list->it->item;
        return __result_obj__252;
    }
    memset(&result_449,0,sizeof(char*));
    __result_obj__253 = result_449;
    return __result_obj__253;
}

static _Bool map$2char$phsClass$ph$p_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph$p_next(struct map$2char$phsClass$ph* self){
char* result_451;
char* __result_obj__254;
char* __result_obj__255;
char* result_452;
char* __result_obj__256;
result_451 = (void*)0;
result_452 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_451,0,sizeof(char*));
        __result_obj__254 = result_451;
        return __result_obj__254;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__255 = self->key_list->it->item;
        return __result_obj__255;
    }
    memset(&result_452,0,sizeof(char*));
    __result_obj__256 = result_452;
    return __result_obj__256;
}

static struct sClass* map$2char$phsClass$ph$p_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_455;
unsigned int it_456;
struct sClass* __result_obj__257;
struct sClass* __result_obj__258;
struct sClass* __result_obj__259;
struct sClass* __result_obj__260;
    hash_455=string_get_hash_key(((char*)key))%self->size;
    it_456=hash_455;
    while((_Bool)1) {
        if(        self->item_existance[it_456]) {
            if(            string_equals(self->keys[it_456],key)) {
                __result_obj__257 = come_increment_ref_count(self->items[it_456]);
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__257,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__257;
            }
            it_456++;
            if(            it_456>=self->size) {
                it_456=0;
            }
            else if(            it_456==hash_455) {
                __result_obj__258 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__258,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__258;
            }
        }
        else {
            __result_obj__259 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__259,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__259;
        }
    }
    __result_obj__260 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__260,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__260;
}

static void sClass_finalize(struct sClass* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        come_call_finalizer3(self->mFields,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        (self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_457;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_458;
    it_457=self->head;
    while(it_457!=((void*)0)) {
        prev_it_458=it_457;
        it_457=it_457->next;
        come_call_finalizer3(prev_it_458,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sType_finalize(struct sType* self){
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer3(self->mGenericsTypes,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer3(self->mArrayNum,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_459;
struct list_item$1sType$ph* prev_it_460;
    it_459=self->head;
    while(it_459!=((void*)0)) {
        prev_it_460=it_459;
        it_459=it_459->next;
        come_call_finalizer3(prev_it_460,list_item$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_461;
struct list_item$1sNode$ph* prev_it_462;
    it_461=self->head;
    while(it_461!=((void*)0)) {
        prev_it_462=it_461;
        it_461=it_461->next;
        come_call_finalizer3(prev_it_462,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1char$p* list$1char$p$p_remove(struct list$1char$p* self, char* item){
int it2_468;
struct list_item$1char$p* it_469;
struct list$1char$p* __result_obj__264;
    it2_468=0;
    it_469=self->head;
    while(it_469!=((void*)0)) {
        if(        charp_equals(it_469->item,item)) {
            list$1char$p$p_delete(self,it2_468,it2_468+1);
            break;
        }
        it2_468++;
        it_469=it_469->next;
    }
    __result_obj__264 = self;
    return __result_obj__264;
}

static struct list$1char$p* list$1char$p$p_delete(struct list$1char$p* self, int head, int tail){
int tmp_470;
struct list$1char$p* __result_obj__261;
struct list_item$1char$p* it_473;
int i_474;
struct list_item$1char$p* prev_it_475;
struct list_item$1char$p* it_476;
int i_477;
struct list_item$1char$p* prev_it_478;
struct list_item$1char$p* it_479;
struct list_item$1char$p* head_prev_it_480;
struct list_item$1char$p* tail_it_481;
int i_482;
struct list_item$1char$p* prev_it_483;
struct list$1char$p* __result_obj__263;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_470=tail;
        tail=head;
        head=tmp_470;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__261 = self;
        return __result_obj__261;
    }
    if(    head==0&&tail==self->len) {
        list$1char$p$p_reset(self);
    }
    else if(    head==0) {
        it_473=self->head;
        i_474=0;
        while(it_473!=((void*)0)) {
            if(            i_474<tail) {
                prev_it_475=it_473;
                it_473=it_473->next;
                i_474++;
                come_call_finalizer3(prev_it_475,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_474==tail) {
                self->head=it_473;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_473=it_473->next;
                i_474++;
            }
        }
    }
    else if(    tail==self->len) {
        it_476=self->head;
        i_477=0;
        while(it_476!=((void*)0)) {
            if(            i_477==head) {
                self->tail=it_476->prev;
                self->tail->next=((void*)0);
            }
            if(            i_477>=head) {
                prev_it_478=it_476;
                it_476=it_476->next;
                i_477++;
                come_call_finalizer3(prev_it_478,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_476=it_476->next;
                i_477++;
            }
        }
    }
    else {
        it_479=self->head;
        head_prev_it_480=((void*)0);
        tail_it_481=((void*)0);
        i_482=0;
        while(it_479!=((void*)0)) {
            if(            i_482==head) {
                head_prev_it_480=it_479->prev;
            }
            if(            i_482==tail) {
                tail_it_481=it_479;
            }
            if(            i_482>=head&&i_482<tail) {
                prev_it_483=it_479;
                it_479=it_479->next;
                i_482++;
                come_call_finalizer3(prev_it_483,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_479=it_479->next;
                i_482++;
            }
        }
        if(        head_prev_it_480!=((void*)0)) {
            head_prev_it_480->next=tail_it_481;
        }
        if(        tail_it_481!=((void*)0)) {
            tail_it_481->prev=head_prev_it_480;
        }
    }
    __result_obj__263 = self;
    return __result_obj__263;
}

static struct list$1char$p* list$1char$p$p_reset(struct list$1char$p* self){
struct list_item$1char$p* it_471;
struct list_item$1char$p* prev_it_472;
struct list$1char$p* __result_obj__262;
    it_471=self->head;
    while(it_471!=((void*)0)) {
        prev_it_472=it_471;
        it_471=it_471->next;
        come_call_finalizer3(prev_it_472,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__262 = self;
    return __result_obj__262;
}

static char* list$1char$p$p_begin(struct list$1char$p* self){
char* result_485;
char* __result_obj__265;
char* __result_obj__266;
char* result_486;
char* __result_obj__267;
result_485 = (void*)0;
result_486 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_485,0,sizeof(char*));
        __result_obj__265 = result_485;
        return __result_obj__265;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__266 = self->it->item;
        return __result_obj__266;
    }
    memset(&result_486,0,sizeof(char*));
    __result_obj__267 = result_486;
    return __result_obj__267;
}

static _Bool list$1char$p$p_end(struct list$1char$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$p$p_next(struct list$1char$p* self){
char* result_488;
char* __result_obj__268;
char* __result_obj__269;
char* result_489;
char* __result_obj__270;
result_488 = (void*)0;
result_489 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_488,0,sizeof(char*));
        __result_obj__268 = result_488;
        return __result_obj__268;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__269 = self->it->item;
        return __result_obj__269;
    }
    memset(&result_489,0,sizeof(char*));
    __result_obj__270 = result_489;
    return __result_obj__270;
}

static struct map$2char$phsType$ph* map$2char$phsType$ph$p_insert(struct map$2char$phsType$ph* self, char* key, struct sType* item){
unsigned int hash_514;
unsigned int it_515;
_Bool same_key_exist_516;
char* it2_517;
struct map$2char$phsType$ph* __result_obj__282;
    if(    self->len*10>=self->size) {
        map$2char$phsType$ph$p_rehash(self);
    }
    hash_514=string_get_hash_key(((char*)key))%self->size;
    it_515=hash_514;
    while((_Bool)1) {
        if(        self->item_existance[it_515]) {
            if(            string_equals(self->keys[it_515],key)) {
                if(                1) {
                    list$1char$p$p_remove(self->key_list,self->keys[it_515]);
                    (self->keys[it_515] = come_decrement_ref_count2(self->keys[it_515], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_515]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$p$p_remove(self->key_list,self->keys[it_515]);
                    self->keys[it_515]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_515],sType_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_515]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_515]=item;
                }
                break;
            }
            it_515++;
            if(            it_515>=self->size) {
                it_515=0;
            }
            else if(            it_515==hash_514) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_515]=(_Bool)1;
            if(            1) {
                self->keys[it_515]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_515]=key;
            }
            if(            1) {
                self->items[it_515]=(struct sType*)come_increment_ref_count(item);
            }
            else {
                self->items[it_515]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_516=(_Bool)0;
    for(    it2_517=list$1char$p$p_begin(self->key_list);    !list$1char$p$p_end(self->key_list);    it2_517=list$1char$p$p_next(self->key_list)    ){
        if(        string_equals(it2_517,key)) {
            same_key_exist_516=(_Bool)1;
        }
    }
    if(    !same_key_exist_516) {
        list$1char$p$p_push_back(self->key_list,key);
    }
    __result_obj__282 = self;
    (key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__282;
}

static void map$2char$phsType$ph$p_rehash(struct map$2char$phsType$ph* self){
int size_497;
void* __right_value436 = (void*)0;
char** keys_498;
void* __right_value437 = (void*)0;
struct sType** items_499;
void* __right_value438 = (void*)0;
_Bool* item_existance_500;
int len_501;
char* it_504;
struct sType* default_value_507;
void* __right_value439 = (void*)0;
struct sType* it2_508;
unsigned int hash_511;
int n_512;
struct sType* default_value_513;
void* __right_value440 = (void*)0;
default_value_507 = (void*)0;
default_value_513 = (void*)0;
    size_497=self->size*10;
    keys_498=(char**)come_increment_ref_count(((char**)(__right_value436=(char**)come_calloc(1, sizeof(char*)*(1*(size_497)), "./comelang.h", 2934, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_499=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value437=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_497)), "./comelang.h", 2935, "struct sType**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_500=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value438=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_497)), "./comelang.h", 2936, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_501=0;
    for(    it_504=map$2char$phsType$ph$p_begin(self);    !map$2char$phsType$ph$p_end(self);    it_504=map$2char$phsType$ph$p_next(self)    ){
        memset(&default_value_507,0,sizeof(struct sType*));
        it2_508=((struct sType*)(__right_value439=map$2char$phsType$ph$p_at(self,it_504,(struct sType*)come_increment_ref_count(default_value_507))));
        come_call_finalizer3(__right_value439,sType_finalize, 0, 1, 0, 0, (void*)0);
        hash_511=string_get_hash_key(((char*)it_504))%size_497;
        n_512=hash_511;
        while((_Bool)1) {
            if(            item_existance_500[n_512]) {
                n_512++;
                if(                n_512>=size_497) {
                    n_512=0;
                }
                else if(                n_512==hash_511) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_500[n_512]=(_Bool)1;
                keys_498[n_512]=it_504;
                items_499[n_512]=((struct sType*)(__right_value440=map$2char$phsType$ph$p_at(self,it_504,(struct sType*)come_increment_ref_count(default_value_513))));
                come_call_finalizer3(__right_value440,sType_finalize, 0, 1, 0, 0, (void*)0);
                len_501++;
                come_call_finalizer3(default_value_513,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer3(default_value_513,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(default_value_507,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_498;
    self->items=items_499;
    self->item_existance=item_existance_500;
    self->size=size_497;
    self->len=len_501;
}

static char* map$2char$phsType$ph$p_begin(struct map$2char$phsType$ph* self){
char* result_502;
char* __result_obj__272;
char* __result_obj__273;
char* result_503;
char* __result_obj__274;
result_502 = (void*)0;
result_503 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_502,0,sizeof(char*));
        __result_obj__272 = result_502;
        return __result_obj__272;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__273 = self->key_list->it->item;
        return __result_obj__273;
    }
    memset(&result_503,0,sizeof(char*));
    __result_obj__274 = result_503;
    return __result_obj__274;
}

static _Bool map$2char$phsType$ph$p_end(struct map$2char$phsType$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsType$ph$p_next(struct map$2char$phsType$ph* self){
char* result_505;
char* __result_obj__275;
char* __result_obj__276;
char* result_506;
char* __result_obj__277;
result_505 = (void*)0;
result_506 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_505,0,sizeof(char*));
        __result_obj__275 = result_505;
        return __result_obj__275;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__276 = self->key_list->it->item;
        return __result_obj__276;
    }
    memset(&result_506,0,sizeof(char*));
    __result_obj__277 = result_506;
    return __result_obj__277;
}

static struct sType* map$2char$phsType$ph$p_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value){
unsigned int hash_509;
unsigned int it_510;
struct sType* __result_obj__278;
struct sType* __result_obj__279;
struct sType* __result_obj__280;
struct sType* __result_obj__281;
    hash_509=string_get_hash_key(((char*)key))%self->size;
    it_510=hash_509;
    while((_Bool)1) {
        if(        self->item_existance[it_510]) {
            if(            string_equals(self->keys[it_510],key)) {
                __result_obj__278 = come_increment_ref_count(self->items[it_510]);
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__278,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__278;
            }
            it_510++;
            if(            it_510>=self->size) {
                it_510=0;
            }
            else if(            it_510==hash_509) {
                __result_obj__279 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__279,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__279;
            }
        }
        else {
            __result_obj__280 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__280,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__280;
        }
    }
    __result_obj__281 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__281,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__281;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value445 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_519;
struct tuple2$2char$phsType$ph* __dec_obj38;
void* __right_value446 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_520;
struct tuple2$2char$phsType$ph* __dec_obj39;
void* __right_value447 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_521;
struct tuple2$2char$phsType$ph* __dec_obj40;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__283;
    if(    self->len==0) {
        litem_519=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value445=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1489, "struct list_item$1tuple2$2char$phsType$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_519->prev=((void*)0);
        litem_519->next=((void*)0);
        __dec_obj38=litem_519->item;
        litem_519->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj38,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_519;
        self->head=litem_519;
    }
    else if(    self->len==1) {
        litem_520=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value446=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1499, "struct list_item$1tuple2$2char$phsType$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_520->prev=self->head;
        litem_520->next=((void*)0);
        __dec_obj39=litem_520->item;
        litem_520->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj39,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_520;
        self->head->next=litem_520;
    }
    else {
        litem_521=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value447=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1509, "struct list_item$1tuple2$2char$phsType$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_521->prev=self->tail;
        litem_521->next=((void*)0);
        __dec_obj40=litem_521->item;
        litem_521->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj40,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_521;
        self->tail=litem_521;
    }
    self->len++;
    __result_obj__283 = self;
    come_call_finalizer3(item,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__283;
}

static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self){
struct tuple2$2char$phsType$ph* __result_obj__284;
void* __right_value452 = (void*)0;
struct tuple2$2char$phsType$ph* result_522;
void* __right_value453 = (void*)0;
char* __dec_obj41;
void* __right_value492 = (void*)0;
struct sType* __dec_obj66;
struct tuple2$2char$phsType$ph* __result_obj__300;
    if(    self==(void*)0) {
        __result_obj__284 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__284,tuple2$2char$phsType$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__284;
    }
    result_522=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj41=result_522->v1;
        result_522->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj66=result_522->v2;
        result_522->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj66,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__300 = come_increment_ref_count(result_522);
    come_call_finalizer3(result_522,tuple2$2char$phsType$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__300,tuple2$2char$phsType$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__300;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__285;
void* __right_value454 = (void*)0;
struct sType* result_523;
void* __right_value455 = (void*)0;
struct sType* __dec_obj42;
void* __right_value456 = (void*)0;
struct sType* __dec_obj43;
void* __right_value464 = (void*)0;
struct list$1sType$ph* __dec_obj47;
void* __right_value465 = (void*)0;
struct sType* __dec_obj48;
void* __right_value466 = (void*)0;
struct sType* __dec_obj49;
void* __right_value468 = (void*)0;
struct sNode* __dec_obj50;
void* __right_value469 = (void*)0;
struct sNode* __dec_obj51;
void* __right_value470 = (void*)0;
char* __dec_obj52;
void* __right_value471 = (void*)0;
char* __dec_obj53;
void* __right_value472 = (void*)0;
char* __dec_obj54;
void* __right_value480 = (void*)0;
struct list$1sNode$ph* __dec_obj58;
void* __right_value481 = (void*)0;
char* __dec_obj59;
void* __right_value482 = (void*)0;
struct list$1sType$ph* __dec_obj60;
void* __right_value490 = (void*)0;
struct list$1char$ph* __dec_obj64;
void* __right_value491 = (void*)0;
struct sType* __dec_obj65;
struct sType* __result_obj__299;
    if(    self==(void*)0) {
        __result_obj__285 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__285,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__285;
    }
    result_523=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_523->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj42=result_523->mOriginalLoadVarType;
        result_523->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj42,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj43=result_523->mChannelType;
        result_523->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj43,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj47=result_523->mGenericsTypes;
        result_523->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj47,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj48=result_523->mNoSolvedGenericsType;
        result_523->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_523->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj49=result_523->mAnyOriginalType;
        result_523->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj49,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj50=result_523->mSizeNum;
        result_523->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj51=result_523->mAlignas;
        result_523->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj52=result_523->mTupleName;
        result_523->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj53=result_523->mAttribute;
        result_523->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_523->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_523->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_523->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_523->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_523->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_523->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_523->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_523->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_523->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_523->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_523->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_523->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_523->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_523->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_523->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_523->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_523->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_523->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_523->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_523->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_523->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_523->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_523->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_523->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_523->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_523->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj54=result_523->mAsmName;
        result_523->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_523->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_523->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_523->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj58=result_523->mArrayNum;
        result_523->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj58,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_523->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_523->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_523->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_523->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_523->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj59=result_523->mOriginalTypeName;
        result_523->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_523->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_523->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_523->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_523->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj60=result_523->mParamTypes;
        result_523->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj60,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj64=result_523->mParamNames;
        result_523->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj64,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj65=result_523->mResultType;
        result_523->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj65,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_523->mVarArgs=self->mVarArgs;
    }
    __result_obj__299 = come_increment_ref_count(result_523);
    come_call_finalizer3(result_523,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__299,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__299;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__286;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct list$1sType$ph* result_524;
struct list_item$1sType$ph* it_525;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct list$1sType$ph* __result_obj__289;
    if(    self==((void*)0)) {
        __result_obj__286 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__286,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__286;
    }
    result_524=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1400, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_525=self->head;
    while(it_525!=((void*)0)) {
        if(        1) {
            list$1sType$ph$p_add(result_524,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_525->item)));
        }
        else {
            list$1sType$ph$p_add(result_524,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_525->item)));
        }
        it_525=it_525->next;
    }
    __result_obj__289 = come_increment_ref_count(result_524);
    come_call_finalizer3(result_524,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__289,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__289;
}

static struct list$1sType$ph* list$1sType$ph$p_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__287;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__287 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__287,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__287;
}

static struct list$1sType$ph* list$1sType$ph$p_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value459 = (void*)0;
struct list_item$1sType$ph* litem_526;
struct sType* __dec_obj44;
void* __right_value460 = (void*)0;
struct list_item$1sType$ph* litem_527;
struct sType* __dec_obj45;
void* __right_value461 = (void*)0;
struct list_item$1sType$ph* litem_528;
struct sType* __dec_obj46;
struct list$1sType$ph* __result_obj__288;
    if(    self->len==0) {
        litem_526=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value459=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1419, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_526->prev=((void*)0);
        litem_526->next=((void*)0);
        __dec_obj44=litem_526->item;
        litem_526->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj44,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_526;
        self->head=litem_526;
    }
    else if(    self->len==1) {
        litem_527=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value460=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1429, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_527->prev=self->head;
        litem_527->next=((void*)0);
        __dec_obj45=litem_527->item;
        litem_527->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj45,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_527;
        self->head->next=litem_527;
    }
    else {
        litem_528=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value461=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1439, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_528->prev=self->tail;
        litem_528->next=((void*)0);
        __dec_obj46=litem_528->item;
        litem_528->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj46,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_528;
        self->tail=litem_528;
    }
    self->len++;
    __result_obj__288 = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__288;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_529;
struct list_item$1sType$ph* prev_it_530;
    it_529=self->head;
    while(it_529!=((void*)0)) {
        prev_it_530=it_529;
        it_529=it_529->next;
        come_call_finalizer3(prev_it_530,list_item$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__290;
void* __right_value467 = (void*)0;
struct sNode* result_531;
struct sNode* __result_obj__291;
    if(    self==(void*)0) {
        __result_obj__290 = come_increment_ref_count((void*)0);
        ((__result_obj__290) ? __result_obj__290 = come_decrement_ref_count2(__result_obj__290, ((struct sNode*)__result_obj__290)->finalize, ((struct sNode*)__result_obj__290)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__290;
    }
    result_531=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_531->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_531->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_531->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_531->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_531->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_531->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_531->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_531->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_531->kind=self->kind;
    }
    __result_obj__291 = come_increment_ref_count(result_531);
    ((result_531) ? result_531 = come_decrement_ref_count2(result_531, ((struct sNode*)result_531)->finalize, ((struct sNode*)result_531)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__291) ? __result_obj__291 = come_decrement_ref_count2(__result_obj__291, ((struct sNode*)__result_obj__291)->finalize, ((struct sNode*)__result_obj__291)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__291;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__292;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct list$1sNode$ph* result_532;
struct list_item$1sNode$ph* it_533;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct list$1sNode$ph* __result_obj__295;
    if(    self==((void*)0)) {
        __result_obj__292 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__292,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__292;
    }
    result_532=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1400, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_533=self->head;
    while(it_533!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_532,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_533->item)));
        }
        else {
            list$1sNode$ph$p_add(result_532,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_533->item)));
        }
        it_533=it_533->next;
    }
    __result_obj__295 = come_increment_ref_count(result_532);
    come_call_finalizer3(result_532,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__295,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__295;
}

static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__293;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__293 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__293,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__293;
}

static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value475 = (void*)0;
struct list_item$1sNode$ph* litem_534;
struct sNode* __dec_obj55;
void* __right_value476 = (void*)0;
struct list_item$1sNode$ph* litem_535;
struct sNode* __dec_obj56;
void* __right_value477 = (void*)0;
struct list_item$1sNode$ph* litem_536;
struct sNode* __dec_obj57;
struct list$1sNode$ph* __result_obj__294;
    if(    self->len==0) {
        litem_534=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value475=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1419, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_534->prev=((void*)0);
        litem_534->next=((void*)0);
        __dec_obj55=litem_534->item;
        litem_534->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_534;
        self->head=litem_534;
    }
    else if(    self->len==1) {
        litem_535=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value476=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1429, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_535->prev=self->head;
        litem_535->next=((void*)0);
        __dec_obj56=litem_535->item;
        litem_535->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_535;
        self->head->next=litem_535;
    }
    else {
        litem_536=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value477=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1439, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_536->prev=self->tail;
        litem_536->next=((void*)0);
        __dec_obj57=litem_536->item;
        litem_536->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count2(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_536;
        self->tail=litem_536;
    }
    self->len++;
    __result_obj__294 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__294;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_537;
struct list_item$1sNode$ph* prev_it_538;
    it_537=self->head;
    while(it_537!=((void*)0)) {
        prev_it_538=it_537;
        it_537=it_537->next;
        come_call_finalizer3(prev_it_538,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__296;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct list$1char$ph* result_539;
struct list_item$1char$ph* it_540;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct list$1char$ph* __result_obj__298;
    if(    self==((void*)0)) {
        __result_obj__296 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__296,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__296;
    }
    result_539=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1400, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_540=self->head;
    while(it_540!=((void*)0)) {
        if(        1) {
            list$1char$ph$p_add(result_539,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_540->item)));
        }
        else {
            list$1char$ph$p_add(result_539,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_540->item)));
        }
        it_540=it_540->next;
    }
    __result_obj__298 = come_increment_ref_count(result_539);
    come_call_finalizer3(result_539,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__298,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__298;
}

static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item){
void* __right_value485 = (void*)0;
struct list_item$1char$ph* litem_541;
char* __dec_obj61;
void* __right_value486 = (void*)0;
struct list_item$1char$ph* litem_542;
char* __dec_obj62;
void* __right_value487 = (void*)0;
struct list_item$1char$ph* litem_543;
char* __dec_obj63;
struct list$1char$ph* __result_obj__297;
    if(    self->len==0) {
        litem_541=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value485=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1419, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_541->prev=((void*)0);
        litem_541->next=((void*)0);
        __dec_obj61=litem_541->item;
        litem_541->item=(char*)come_increment_ref_count(item);
        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_541;
        self->head=litem_541;
    }
    else if(    self->len==1) {
        litem_542=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value486=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1429, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_542->prev=self->head;
        litem_542->next=((void*)0);
        __dec_obj62=litem_542->item;
        litem_542->item=(char*)come_increment_ref_count(item);
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_542;
        self->head->next=litem_542;
    }
    else {
        litem_543=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value487=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1439, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_543->prev=self->tail;
        litem_543->next=((void*)0);
        __dec_obj63=litem_543->item;
        litem_543->item=(char*)come_increment_ref_count(item);
        __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_543;
        self->tail=litem_543;
    }
    self->len++;
    __result_obj__297 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__297;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_544;
struct list_item$1char$ph* prev_it_545;
    it_544=self->head;
    while(it_544!=((void*)0)) {
        prev_it_545=it_544;
        it_544=it_544->next;
        come_call_finalizer3(prev_it_545,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self){
unsigned int result_546;
    result_546=0;
    result_546+=int_get_hash_key(((int)self->v1));
    result_546+=int_get_hash_key(((int)self->v2));
    return result_546;
}

static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* left, struct tuple2$2char$phsType$ph* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sType_equals(struct sType* left, struct sType* right){
    if(    !sClass_equals(left->mClass,right->mClass)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mChannelType,right->mChannelType)) {
        return (_Bool)0;
    }
    if(    !list$1sType$ph$p_equals(left->mGenericsTypes,right->mGenericsTypes)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAnyClass,right->mAnyClass)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mAnyOriginalType,right->mAnyOriginalType)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mSizeNum,right->mSizeNum)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mAlignas,right->mAlignas)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mTupleName,right->mTupleName)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAllocaValue,right->mAllocaValue)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mUnsigned,right->mUnsigned)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mShort,right->mShort)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mLong,right->mLong)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mLongLong,right->mLongLong)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mConstant,right->mConstant)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAtomic,right->mAtomic)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mRegister,right->mRegister)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVolatile,right->mVolatile)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mStatic,right->mStatic)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mUniq,right->mUniq)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mRecord,right->mRecord)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mExtern,right->mExtern)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mRestrict,right->mRestrict)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mImmutable,right->mImmutable)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mHeap,right->mHeap)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mChannel,right->mChannel)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoHeap,right->mNoHeap)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoCallingDestructor,right->mNoCallingDestructor)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mException,right->mException)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenerate,right->mGenerate)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mCreateVTable,right->mCreateVTable)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mDynamic,right->mDynamic)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mInline,right->mInline)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNullValue,right->mNullValue)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGuardValue,right->mGuardValue)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAsmName,right->mAsmName)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mTypedef,right->mTypedef)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mMultipleTypes,right->mMultipleTypes)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOriginIsArray,right->mOriginIsArray)) {
        return (_Bool)0;
    }
    if(    !list$1sNode$ph$p_equals(left->mArrayNum,right->mArrayNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mPointerNum,right->mPointerNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mFunctionPointerNum,right->mFunctionPointerNum)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mOriginalTypeName,right->mOriginalTypeName)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mOriginalPointerNum,right->mOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mArrayPointerType,right->mArrayPointerType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mLambdaArray,right->mLambdaArray)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mLambdaArrayNum,right->mLambdaArrayNum)) {
        return (_Bool)0;
    }
    if(    !list$1sType$ph$p_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph$p_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sClass_equals(struct sClass* left, struct sClass* right){
    if(    !bool_equals(left->mStruct,right->mStruct)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mFloat,right->mFloat)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mUnion,right->mUnion)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenerics,right->mGenerics)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mMethodGenerics,right->mMethodGenerics)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mEnum,right->mEnum)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mProtocol,right->mProtocol)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNumber,right->mNumber)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mGenericsNum,right->mGenericsNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)) {
        return (_Bool)0;
    }
    if(    !list$1tuple2$2char$phsType$ph$ph$p_equals(left->mFields,right->mFields)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mParentClassName,right->mParentClassName)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mDynamic,right->mDynamic)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1tuple2$2char$phsType$ph$ph$p_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right){
struct list_item$1tuple2$2char$phsType$ph$ph* it_547;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_548;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_547=left->head;
    it2_548=right->head;
    while(it_547!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph$p_equals(it_547->item,it2_548->item)) {
            return (_Bool)0;
        }
        it_547=it_547->next;
        it2_548=it2_548->next;
    }
    return (_Bool)1;
}

static _Bool tuple2$2char$phsType$ph$p_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right){
    if(    !string_equals(self->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sType_equals(self->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1sType$ph$p_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_549;
struct list_item$1sType$ph* it2_550;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_549=left->head;
    it2_550=right->head;
    while(it_549!=((void*)0)) {
        if(        !sType_equals(it_549->item,it2_550->item)) {
            return (_Bool)0;
        }
        it_549=it_549->next;
        it2_550=it2_550->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_551;
struct list_item$1sNode$ph* it2_552;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_551=left->head;
    it2_552=right->head;
    while(it_551!=((void*)0)) {
        if(        !sNode_equals(it_551->item,it2_552->item)) {
            return (_Bool)0;
        }
        it_551=it_551->next;
        it2_552=it2_552->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_553;
struct list_item$1char$ph* it2_554;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_553=left->head;
    it2_554=right->head;
    while(it_553!=((void*)0)) {
        if(        !string_equals(it_553->item,it2_554->item)) {
            return (_Bool)0;
        }
        it_553=it_553->next;
        it2_554=it2_554->next;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj67;
struct sType* __dec_obj68;
struct tuple2$2char$phsType$ph* __result_obj__301;
    __dec_obj67=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj68=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj68,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__301 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__301,tuple2$2char$phsType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__301;
}

void create_pico_version_header(){
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
char* Value_555;
_Bool _if_conditional4;
int version_major_556;
char* p_557;
int version_miner_558;
char* p_559;
int version_revision_560;
char* p_561;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
char* version_string_562;
int Value_563;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
    if(    getenv("PICO_SDK_PATH")) {
        Value_555=(char*)come_increment_ref_count(charp_read((((char*)(__right_value520=charp_operator_add(getenv("PICO_SDK_PATH"),"/pico_sdk_version.cmake"))))));
        if(        (_if_conditional4=(Value_555)),        (__right_value520 = come_decrement_ref_count2(__right_value520, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional4) {
            version_major_556=0;
            p_557=strstr(Value_555,"set(PICO_SDK_VERSION_MAJOR");
            if(            p_557) {
                p_557+=strlen("set(PICO_SDK_VERSION_MAJOR");
                while(*p_557==32||*p_557==9) {
                    p_557++;
                }
                while(xisdigit(*p_557)) {
                    version_major_556=version_major_556*10+(*p_557-48);
                    p_557++;
                }
            }
            version_miner_558=0;
            p_559=strstr(Value_555,"set(PICO_SDK_VERSION_MINOR");
            if(            p_559) {
                p_559+=strlen("set(PICO_SDK_VERSION_MINOR");
                while(*p_559==32||*p_559==9) {
                    p_559++;
                }
                while(xisdigit(*p_559)) {
                    version_miner_558=version_miner_558*10+*p_559-48;
                    p_559++;
                }
            }
            version_revision_560=0;
            p_561=strstr(Value_555,"set(PICO_SDK_VERSION_REVISION");
            if(            p_561) {
                p_561+=strlen("set(PICO_SDK_VERSION_REVISION");
                while(*p_561==32||*p_561==9) {
                    p_561++;
                }
                while(xisdigit(*p_561)) {
                    version_revision_560=version_revision_560*10+*p_561-48;
                    p_561++;
                }
            }
            version_string_562=(char*)come_increment_ref_count(xsprintf("\%s.\%s.\%s",((char*)(__right_value522=int_to_string(version_major_556))),((char*)(__right_value523=int_to_string(version_miner_558))),((char*)(__right_value524=int_to_string(version_revision_560)))));
            (__right_value522 = come_decrement_ref_count2(__right_value522, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value523 = come_decrement_ref_count2(__right_value523, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value524 = come_decrement_ref_count2(__right_value524, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            Value_563=system("mkdir -p pico");
            if(            !Value_563) {
                charp_write(((char*)(__right_value530=xsprintf("\#ifndef _PICO_VERSION_H\n\#define _PICO_VERSION_H\n\n\#define PICO_SDK_VERSION_MAJOR \%s\n\#define PICO_SDK_VERSION_MINOR \%s\n\#define PICO_SDK_VERSION_REVISION \%s\n\#define PICO_SDK_VERSION_STRING \"\%s\"\n\n\#endif\n",((char*)(__right_value526=int_to_string(version_major_556))),((char*)(__right_value527=int_to_string(version_miner_558))),((char*)(__right_value528=int_to_string(version_revision_560))),((char*)(__right_value529=string_to_string(version_string_562)))))),"pico/version.h",(_Bool)0);
                (__right_value526 = come_decrement_ref_count2(__right_value526, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value527 = come_decrement_ref_count2(__right_value527, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value528 = come_decrement_ref_count2(__right_value528, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value529 = come_decrement_ref_count2(__right_value529, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value530 = come_decrement_ref_count2(__right_value530, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            (version_string_562 = come_decrement_ref_count2(version_string_562, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
        }
        (Value_555 = come_decrement_ref_count2(Value_555, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    (void)system("touch pico_config_extra_headers.h");
    (void)system("touch pico_config_platform_headers.h");
}

int come_main(int argc, char** argv){
int start_num_564;
void* __right_value531 = (void*)0;
char* output_file_name_str_565;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct buffer* clang_option_566;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct buffer* linker_option_567;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct buffer* cpp_option_568;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct list$1char$ph* files_569;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct list$1char$ph* object_files_570;
_Bool output_object_file_571;
_Bool output_cpp_file_572;
_Bool output_source_file_flag_573;
_Bool output_object_file_flag_574;
char* output_file_name_575;
_Bool verbose_576;
_Bool come_debug_577;
_Bool come_malloc_578;
_Bool m5stack_cpp_579;
_Bool pico_cpp_580;
_Bool gcc_compiler_581;
int i_582;
void* __right_value542 = (void*)0;
char* ext_name_583;
void* __right_value543 = (void*)0;
char* __dec_obj69;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
char* env_584;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct buffer* __dec_obj70;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
char* env_585;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct buffer* __dec_obj71;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
_Bool _elif_conditional1;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
_Bool _elif_conditional2;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
_Bool _elif_conditional3;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
int Value_586;
_Bool _if_conditional5;
_Bool __exception_result_var_b11;
struct _IO_FILE* Value_587;
_Bool __exception_result_var_b12;
void* __right_value629 = (void*)0;
char* tmp_file_588;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
int Value_592;
_Bool _if_conditional6;
_Bool __exception_result_var_b13;
struct sInfo info_593;
void* __right_value637 = (void*)0;
char* __dec_obj72;
void* __right_value638 = (void*)0;
char* __dec_obj73;
void* __right_value639 = (void*)0;
char* __dec_obj74;
void* __right_value640 = (void*)0;
char* __dec_obj75;
void* __right_value641 = (void*)0;
char* __dec_obj76;
void* __right_value642 = (void*)0;
void* __right_value648 = (void*)0;
struct map$2char$phsFun$ph* __dec_obj78;
void* __right_value649 = (void*)0;
void* __right_value655 = (void*)0;
struct map$2char$phbuffer$ph* __dec_obj80;
void* __right_value656 = (void*)0;
void* __right_value662 = (void*)0;
struct map$2char$phchar$ph* __dec_obj82;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct map$2char$phbuffer$ph* __dec_obj83;
void* __right_value665 = (void*)0;
void* __right_value671 = (void*)0;
struct map$2char$phsGenericsFun$ph* __dec_obj85;
void* __right_value672 = (void*)0;
void* __right_value678 = (void*)0;
struct map$2char$phsClass$ph* __dec_obj87;
void* __right_value679 = (void*)0;
void* __right_value685 = (void*)0;
struct map$2char$phsClassModule$ph* __dec_obj89;
void* __right_value686 = (void*)0;
void* __right_value692 = (void*)0;
struct map$2char$phsType$ph* __dec_obj91;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
struct sModule* __dec_obj92;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
struct list$1sRightValueObject$ph* __dec_obj93;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
struct list$1CVALUE$ph* __dec_obj94;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
struct sVarTable* __dec_obj95;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
struct sVarTable* lv_table_639;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
struct list$1char$ph* __dec_obj96;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct list$1char$ph* __dec_obj97;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
struct map$2char$phsClass$ph* __dec_obj98;
void* __right_value709 = (void*)0;
char* __dec_obj99;
_Bool Value_641;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
struct buffer* __dec_obj100;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
struct buffer* __dec_obj101;
_Bool Value_642;
_Bool Value_643;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
_Bool Value_646;
_Bool Value_647;
_Bool Value_648;
_Bool Value_649;
_Bool Value_650;
_Bool Value_651;
_Bool Value_652;
_Bool Value_653;
int start_num_654;
char* output_file_name_str_655;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct buffer* clang_option_656;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
struct buffer* linker_option_657;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
struct buffer* cpp_option_658;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
struct list$1char$ph* files_659;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
struct list$1char$ph* object_files_660;
_Bool output_object_file_661;
_Bool output_cpp_file_662;
_Bool output_source_file_flag_663;
_Bool output_object_file_flag_664;
char* output_file_name_665;
_Bool verbose_666;
_Bool come_debug_667;
_Bool come_malloc_668;
_Bool m5stack_cpp_669;
_Bool pico_cpp_670;
_Bool gcc_compiler_671;
int i_672;
void* __right_value729 = (void*)0;
char* ext_name_673;
void* __right_value730 = (void*)0;
char* __dec_obj102;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
char* env_674;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
struct buffer* __dec_obj103;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
char* env_675;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
struct buffer* __dec_obj104;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
_Bool _elif_conditional4;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
_Bool _elif_conditional5;
void* __right_value799 = (void*)0;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
_Bool _elif_conditional6;
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
void* __right_value807 = (void*)0;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
void* __right_value812 = (void*)0;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
struct list$1char$ph* o2_saved_676;
char* it_677;
struct sInfo info_678;
struct _IO_FILE* Value_679;
void* __right_value815 = (void*)0;
char* __dec_obj105;
void* __right_value816 = (void*)0;
char* __dec_obj106;
void* __right_value817 = (void*)0;
char* __dec_obj107;
void* __right_value818 = (void*)0;
char* __dec_obj108;
void* __right_value819 = (void*)0;
void* __right_value820 = (void*)0;
struct map$2char$phsFun$ph* __dec_obj109;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
struct map$2char$phbuffer$ph* __dec_obj110;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
struct map$2char$phchar$ph* __dec_obj111;
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
struct map$2char$phbuffer$ph* __dec_obj112;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
struct map$2char$phsGenericsFun$ph* __dec_obj113;
void* __right_value829 = (void*)0;
void* __right_value830 = (void*)0;
struct map$2char$phsClass$ph* __dec_obj114;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
struct map$2char$phsClassModule$ph* __dec_obj115;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
struct map$2char$phsType$ph* __dec_obj116;
void* __right_value835 = (void*)0;
void* __right_value836 = (void*)0;
struct sModule* __dec_obj117;
void* __right_value837 = (void*)0;
void* __right_value838 = (void*)0;
struct list$1sRightValueObject$ph* __dec_obj118;
void* __right_value839 = (void*)0;
void* __right_value840 = (void*)0;
struct list$1CVALUE$ph* __dec_obj119;
void* __right_value841 = (void*)0;
void* __right_value842 = (void*)0;
struct sVarTable* __dec_obj120;
void* __right_value843 = (void*)0;
void* __right_value844 = (void*)0;
struct sVarTable* lv_table_680;
void* __right_value845 = (void*)0;
void* __right_value846 = (void*)0;
struct list$1char$ph* __dec_obj121;
void* __right_value847 = (void*)0;
void* __right_value848 = (void*)0;
struct list$1char$ph* __dec_obj122;
void* __right_value849 = (void*)0;
void* __right_value850 = (void*)0;
struct map$2char$phsClass$ph* __dec_obj123;
_Bool Value_681;
void* __right_value851 = (void*)0;
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
struct buffer* __dec_obj124;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
void* __right_value856 = (void*)0;
struct buffer* __dec_obj125;
void* __right_value857 = (void*)0;
char* __dec_obj126;
char* __dec_obj127;
_Bool Value_682;
_Bool Value_683;
_Bool Value_684;
_Bool Value_685;
struct sInfo info_686;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
char* __dec_obj128;
void* __right_value860 = (void*)0;
char* __dec_obj129;
void* __right_value861 = (void*)0;
char* __dec_obj130;
void* __right_value862 = (void*)0;
char* __dec_obj131;
char* __dec_obj132;
_Bool Value_690;
memset(&info_593, 0, sizeof(struct sInfo));
memset(&info_678, 0, sizeof(struct sInfo));
memset(&info_686, 0, sizeof(struct sInfo));
    if(    charp_operator_equals(argv[1],"header")&&argc>=3) {
        start_num_564=2;
        output_file_name_str_565=(char*)come_increment_ref_count(xsprintf("common.h"));
        clang_option_566=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 666, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        linker_option_567=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 667, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        cpp_option_568=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 668, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_str(cpp_option_568,"-U__GNUC__");
        files_569=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 670, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        object_files_570=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 671, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        output_object_file_571=(_Bool)0;
        output_cpp_file_572=(_Bool)0;
        output_source_file_flag_573=(_Bool)0;
        output_object_file_flag_574=(_Bool)1;
        output_file_name_575=(char*)come_increment_ref_count(output_file_name_str_565);
        verbose_576=(_Bool)0;
        come_debug_577=(_Bool)0;
        come_malloc_578=(_Bool)0;
        m5stack_cpp_579=(_Bool)0;
        pico_cpp_580=(_Bool)0;
        gcc_compiler_581=(_Bool)0;
        for(        i_582=start_num_564;        i_582<argc;        i_582++        ){
            ext_name_583=(char*)come_increment_ref_count(xextname(argv[i_582]));
            if(            charp_operator_equals(argv[i_582],"-o")&&i_582+1<argc) {
                __dec_obj69=output_file_name_575;
                output_file_name_575=(char*)come_increment_ref_count(__builtin_string(argv[i_582+1]));
                __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                i_582++;
            }
            else if(            charp_operator_equals(argv[i_582],"-e")&&i_582+1<argc) {
                buffer_append_str(linker_option_567,((char*)(__right_value545=xsprintf("-e \%s",((char*)(__right_value544=charp_to_string(argv[i_582+1])))))));
                (__right_value544 = come_decrement_ref_count2(__right_value544, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value545 = come_decrement_ref_count2(__right_value545, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_582++;
            }
            else if(            charp_operator_equals(argv[i_582],"-str")) {
                gComeStr=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_582],"-pthread")) {
                gComePthread=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_582],"-gc")) {
                gComeGC=(_Bool)1;
                buffer_append_format(cpp_option_568,((char*)(__right_value546=xsprintf(" -DENABLE_GC "))));
                (__right_value546 = come_decrement_ref_count2(__right_value546, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_582],"-gcc")) {
                gcc_compiler_581=(_Bool)1;
                CC="gcc";
            }
            else if(            charp_operator_equals(argv[i_582],"-pico")) {
                output_source_file_flag_573=(_Bool)1;
                output_object_file_flag_574=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env_584=getenv("PICO_SDK_PATH");
                __dec_obj70=cpp_option_568;
                cpp_option_568=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 713, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj70,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                buffer_append_format(cpp_option_568,((char*)(__right_value551=xsprintf(" -I $PICO_SDK_PATH/src/common/pico_stdlib_headers/include/ -I$PICO_SDK_PATH/src/common/pico_base_headers/include/ -I \%s/src/rp2_common/hardware_sync/include \$(find \%s -type d -name include | sed 's/^/ -I/g') -I$PICO_SDK_PATH/src/boards/include -I$PICO_SDK_PATH/src/rp2040/pico_platform/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_regs/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_structs/include -I$PICO_SDK_PATH/src/rp2350/hardware_structs/include/ -I build/generated/pico_base/ -D__PICO__",((char*)(__right_value549=charp_to_string(env_584))),((char*)(__right_value550=charp_to_string(env_584)))))));
                (__right_value549 = come_decrement_ref_count2(__right_value549, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value550 = come_decrement_ref_count2(__right_value550, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value551 = come_decrement_ref_count2(__right_value551, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                create_pico_version_header();
                pico_cpp_580=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_582],"-m5stack")) {
                m5stack_cpp_579=(_Bool)1;
                output_source_file_flag_573=(_Bool)1;
                output_object_file_flag_574=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env_585=getenv("IDF_PATH");
                __dec_obj71=cpp_option_568;
                cpp_option_568=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 724, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj71,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                buffer_append_format(cpp_option_568,((char*)(__right_value575=xsprintf(" -I\%s/.espressif/tools/xtensa-esp-elf/esp-14.2.0_20241119/xtensa-esp-elf/xtensa-esp-elf/include -I\%s/components/freertos/include -I\%s/components/esp32/include -I\%s/components/driver/include -I\%s/components/lwip/include -I\%s/components/freertos/FreeRTOS-Kernel/include -I\%s/components/freertos/config/include/freertos -I\%s/components/freertos/config/xtensa/include -I\%s/components/xtensa/include -I\%s/components/xtensa/esp32/include -I\%s/components/freertos/FreeRTOS-Kernel/portable/xtensa/include/freertos -I\%s/components/esp_hw_support/include -I\%s/components/soc/esp32/include/ -I\%s/components/esp_common/include/components $(find \%s/components -type d -name include | grep esp_ | sed 's/^/ -I/g') -I\%s/components/esp_common/include/ -I\%s/components/soc/esp32/register/soc/ -I\%s/components/soc/esp32/register -I\%s/components/heap/include -I\%s/components/hal/include -I\%s/components/newlib/platform_include -D__M5STACK__",((char*)(__right_value554=charp_to_string(getenv("HOME")))),((char*)(__right_value555=charp_to_string(env_585))),((char*)(__right_value556=charp_to_string(env_585))),((char*)(__right_value557=charp_to_string(env_585))),((char*)(__right_value558=charp_to_string(env_585))),((char*)(__right_value559=charp_to_string(env_585))),((char*)(__right_value560=charp_to_string(env_585))),((char*)(__right_value561=charp_to_string(env_585))),((char*)(__right_value562=charp_to_string(env_585))),((char*)(__right_value563=charp_to_string(env_585))),((char*)(__right_value564=charp_to_string(env_585))),((char*)(__right_value565=charp_to_string(env_585))),((char*)(__right_value566=charp_to_string(env_585))),((char*)(__right_value567=charp_to_string(env_585))),((char*)(__right_value568=charp_to_string(env_585))),((char*)(__right_value569=charp_to_string(env_585))),((char*)(__right_value570=charp_to_string(env_585))),((char*)(__right_value571=charp_to_string(env_585))),((char*)(__right_value572=charp_to_string(env_585))),((char*)(__right_value573=charp_to_string(env_585))),((char*)(__right_value574=charp_to_string(env_585)))))),"/usr/local/");
                (__right_value554 = come_decrement_ref_count2(__right_value554, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value555 = come_decrement_ref_count2(__right_value555, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value556 = come_decrement_ref_count2(__right_value556, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value557 = come_decrement_ref_count2(__right_value557, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value558 = come_decrement_ref_count2(__right_value558, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value559 = come_decrement_ref_count2(__right_value559, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value560 = come_decrement_ref_count2(__right_value560, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value561 = come_decrement_ref_count2(__right_value561, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value562 = come_decrement_ref_count2(__right_value562, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value563 = come_decrement_ref_count2(__right_value563, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value564 = come_decrement_ref_count2(__right_value564, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value565 = come_decrement_ref_count2(__right_value565, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value566 = come_decrement_ref_count2(__right_value566, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value567 = come_decrement_ref_count2(__right_value567, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value568 = come_decrement_ref_count2(__right_value568, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value569 = come_decrement_ref_count2(__right_value569, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value570 = come_decrement_ref_count2(__right_value570, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value571 = come_decrement_ref_count2(__right_value571, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value572 = come_decrement_ref_count2(__right_value572, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value573 = come_decrement_ref_count2(__right_value573, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value574 = come_decrement_ref_count2(__right_value574, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value575 = come_decrement_ref_count2(__right_value575, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            i_582+1<argc&&charp_operator_equals(argv[i_582],"-target")) {
                buffer_append_str(clang_option_566,((char*)(__right_value577=xsprintf("-target \%s",((char*)(__right_value576=charp_to_string(argv[i_582+1])))))));
                (__right_value576 = come_decrement_ref_count2(__right_value576, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value577 = come_decrement_ref_count2(__right_value577, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_582++;
            }
            else if(            i_582+1<argc&&charp_operator_equals(argv[i_582],"-T")) {
                buffer_append_str(clang_option_566,((char*)(__right_value579=xsprintf(" -T \%s ",((char*)(__right_value578=charp_to_string(argv[i_582+1])))))));
                (__right_value578 = come_decrement_ref_count2(__right_value578, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value579 = come_decrement_ref_count2(__right_value579, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_582++;
            }
            else if(            charp_operator_equals(argv[i_582],"-net")) {
                gComeNet=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_582],"-cg")) {
                come_debug_577=(_Bool)1;
                buffer_append_str(clang_option_566,"-g ");
            }
            else if(            charp_operator_equals(argv[i_582],"-C")) {
                buffer_append_str(cpp_option_568,((char*)(__right_value581=xsprintf("\%s ",((char*)(__right_value580=charp_to_string(argv[i_582])))))));
                (__right_value580 = come_decrement_ref_count2(__right_value580, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value581 = come_decrement_ref_count2(__right_value581, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_582],"-M")) {
                buffer_append_str(cpp_option_568,((char*)(__right_value583=xsprintf("\%s ",((char*)(__right_value582=charp_to_string(argv[i_582])))))));
                (__right_value582 = come_decrement_ref_count2(__right_value582, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value583 = come_decrement_ref_count2(__right_value583, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_582],"-MM")) {
                buffer_append_str(cpp_option_568,((char*)(__right_value585=xsprintf("\%s ",((char*)(__right_value584=charp_to_string(argv[i_582])))))));
                (__right_value584 = come_decrement_ref_count2(__right_value584, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value585 = come_decrement_ref_count2(__right_value585, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_582],"-dM")) {
                buffer_append_str(cpp_option_568,((char*)(__right_value587=xsprintf("\%s ",((char*)(__right_value586=charp_to_string(argv[i_582])))))));
                (__right_value586 = come_decrement_ref_count2(__right_value586, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value587 = come_decrement_ref_count2(__right_value587, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_582],"-dD")) {
                buffer_append_str(cpp_option_568,((char*)(__right_value589=xsprintf("\%s ",((char*)(__right_value588=charp_to_string(argv[i_582])))))));
                (__right_value588 = come_decrement_ref_count2(__right_value588, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value589 = come_decrement_ref_count2(__right_value589, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_582],"-H")) {
                buffer_append_str(cpp_option_568,((char*)(__right_value591=xsprintf("\%s ",((char*)(__right_value590=charp_to_string(argv[i_582])))))));
                (__right_value590 = come_decrement_ref_count2(__right_value590, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value591 = come_decrement_ref_count2(__right_value591, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_582],"-P")) {
                buffer_append_str(cpp_option_568,((char*)(__right_value593=xsprintf("\%s ",((char*)(__right_value592=charp_to_string(argv[i_582])))))));
                (__right_value592 = come_decrement_ref_count2(__right_value592, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value593 = come_decrement_ref_count2(__right_value593, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_582],"-nostdinc")) {
                buffer_append_str(cpp_option_568,((char*)(__right_value595=xsprintf("\%s ",((char*)(__right_value594=charp_to_string(argv[i_582])))))));
                (__right_value594 = come_decrement_ref_count2(__right_value594, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value595 = come_decrement_ref_count2(__right_value595, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_582],"-CC")) {
                buffer_append_str(cpp_option_568,((char*)(__right_value597=xsprintf("\%s ",((char*)(__right_value596=charp_to_string(argv[i_582])))))));
                (__right_value596 = come_decrement_ref_count2(__right_value596, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value597 = come_decrement_ref_count2(__right_value597, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            i_582+1<argc&&charp_operator_equals(argv[i_582],"-target")) {
                buffer_append_str(clang_option_566,((char*)(__right_value599=xsprintf("-target \%s",((char*)(__right_value598=charp_to_string(argv[i_582+1])))))));
                (__right_value598 = come_decrement_ref_count2(__right_value598, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value599 = come_decrement_ref_count2(__right_value599, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_582++;
            }
            else if(            i_582+1<argc&&charp_operator_equals(argv[i_582],"-include")) {
                buffer_append_str(cpp_option_568,((char*)(__right_value601=xsprintf("-iclude \%s",((char*)(__right_value600=charp_to_string(argv[i_582+1])))))));
                (__right_value600 = come_decrement_ref_count2(__right_value600, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value601 = come_decrement_ref_count2(__right_value601, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_582++;
            }
            else if(            i_582+1<argc&&charp_operator_equals(argv[i_582],"-isystem")) {
                buffer_append_str(cpp_option_568,((char*)(__right_value603=xsprintf("-isystem \%s",((char*)(__right_value602=charp_to_string(argv[i_582+1])))))));
                (__right_value602 = come_decrement_ref_count2(__right_value602, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value603 = come_decrement_ref_count2(__right_value603, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                buffer_append_str(clang_option_566,((char*)(__right_value605=xsprintf("-isystem \%s",((char*)(__right_value604=charp_to_string(argv[i_582+1])))))));
                (__right_value604 = come_decrement_ref_count2(__right_value604, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value605 = come_decrement_ref_count2(__right_value605, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_582++;
            }
            else if(            i_582+1<argc&&charp_operator_equals(argv[i_582],"-T")) {
                buffer_append_str(clang_option_566,((char*)(__right_value607=xsprintf(" -T \%s ",((char*)(__right_value606=charp_to_string(argv[i_582+1])))))));
                (__right_value606 = come_decrement_ref_count2(__right_value606, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value607 = come_decrement_ref_count2(__right_value607, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_582++;
            }
            else if(            charp_operator_equals(argv[i_582],"-common-header")) {
                gCommonHeader=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_582],"-original-position")) {
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            (_elif_conditional1=(string_operator_equals(((char*)(__right_value608=charp_operator_load_range_element(argv[i_582],0,2))),"-O"))),            (__right_value608 = come_decrement_ref_count2(__right_value608, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            _elif_conditional1) {
                buffer_append_str(clang_option_566,((char*)(__right_value610=xsprintf(" \%s ",((char*)(__right_value609=charp_to_string(argv[i_582])))))));
                (__right_value609 = come_decrement_ref_count2(__right_value609, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value610 = come_decrement_ref_count2(__right_value610, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_debug_577=(_Bool)0;
            }
            else if(            (_elif_conditional2=(string_operator_equals(((char*)(__right_value611=charp_operator_load_range_element(argv[i_582],0,2))),"-D"))),            (__right_value611 = come_decrement_ref_count2(__right_value611, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            _elif_conditional2) {
                buffer_append_str(cpp_option_568,((char*)(__right_value613=xsprintf(" \%s ",((char*)(__right_value612=charp_to_string(argv[i_582])))))));
                (__right_value612 = come_decrement_ref_count2(__right_value612, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value613 = come_decrement_ref_count2(__right_value613, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                buffer_append_str(clang_option_566,((char*)(__right_value615=xsprintf(" \%s ",((char*)(__right_value614=charp_to_string(argv[i_582])))))));
                (__right_value614 = come_decrement_ref_count2(__right_value614, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value615 = come_decrement_ref_count2(__right_value615, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            (_elif_conditional3=(string_operator_equals(((char*)(__right_value616=charp_operator_load_range_element(argv[i_582],0,2))),"-U"))),            (__right_value616 = come_decrement_ref_count2(__right_value616, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            _elif_conditional3) {
                buffer_append_str(cpp_option_568,((char*)(__right_value618=xsprintf(" \%s ",((char*)(__right_value617=charp_to_string(argv[i_582])))))));
                (__right_value617 = come_decrement_ref_count2(__right_value617, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value618 = come_decrement_ref_count2(__right_value618, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                buffer_append_str(clang_option_566,((char*)(__right_value620=xsprintf(" \%s ",((char*)(__right_value619=charp_to_string(argv[i_582])))))));
                (__right_value619 = come_decrement_ref_count2(__right_value619, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value620 = come_decrement_ref_count2(__right_value620, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_582],"-g")) {
                buffer_append_str(clang_option_566,"-g ");
            }
            else if(            charp_operator_equals(argv[i_582],"-v")) {
                buffer_append_str(clang_option_566,"-v ");
                buffer_append_str(cpp_option_568,"-v ");
                verbose_576=(_Bool)1;
            }
            else if(            strlen(argv[i_582])>=2&&memcmp(argv[i_582],"-I",strlen("-I"))==0) {
                buffer_append_str(cpp_option_568,((char*)(__right_value622=string_operator_add(((char*)(__right_value621=charp_operator_add(" ",argv[i_582])))," "))));
                (__right_value621 = come_decrement_ref_count2(__right_value621, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value622 = come_decrement_ref_count2(__right_value622, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_582],"-gdwarf-4")) {
                buffer_append_str(clang_option_566,"-gdwarf-4 ");
            }
            else if(            charp_operator_equals(argv[i_582],"-s")||charp_operator_equals(argv[i_582],"-S")) {
                output_source_file_flag_573=(_Bool)1;
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            charp_operator_equals(argv[i_582],"-c")) {
                output_object_file_571=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_582],"-E")) {
                output_cpp_file_572=(_Bool)1;
            }
            else if(            argv[i_582][0]==45) {
                buffer_append_str(clang_option_566,((char*)(__right_value623=charp_operator_add(argv[i_582]," "))));
                (__right_value623 = come_decrement_ref_count2(__right_value623, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            strlen(argv[i_582])>2&&memcmp(argv[i_582]+strlen(argv[i_582])-2,".o",2)==0) {
                list$1char$ph$p_push_back(object_files_570,(char*)come_increment_ref_count(__builtin_string(argv[i_582])));
            }
            else if(            strlen(argv[i_582])>2&&memcmp(argv[i_582]+strlen(argv[i_582])-2,".a",2)==0) {
                list$1char$ph$p_push_back(object_files_570,(char*)come_increment_ref_count(__builtin_string(argv[i_582])));
            }
            else if(            string_operator_equals(ext_name_583,"c")) {
                list$1char$ph$p_push_back(files_569,(char*)come_increment_ref_count(__builtin_string(argv[i_582])));
            }
            else {
                buffer_append_str(clang_option_566,((char*)(__right_value627=charp_operator_add(argv[i_582]," "))));
                (__right_value627 = come_decrement_ref_count2(__right_value627, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (ext_name_583 = come_decrement_ref_count2(ext_name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        gComeDebug=come_debug_577;
        gComeMalloc=come_malloc_578;
        Value_586=system(((char*)(__right_value628=xsprintf("%s %s",RM,output_file_name_575))));
        if(        (_if_conditional5=(Value_586<0)),        (__right_value628 = come_decrement_ref_count2(__right_value628, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional5) {
            (come_push_stackframe("02transpile.c", 863, 10),__exception_result_var_b11=die("rm"), come_pop_stackframe(), __exception_result_var_b11);
        }
        else {
        }
        Value_587=fopen(output_file_name_575,"w");
        if(        Value_587) {
            fclose(Value_587);
        }
        else {
            (come_push_stackframe("02transpile.c", 870, 11),__exception_result_var_b12=die("fopen"), come_pop_stackframe(), __exception_result_var_b12);
        }
        tmp_file_588=(char*)come_increment_ref_count(__builtin_string("tmp-common-header.c"));
        Value_592=system(((char*)(__right_value636=xsprintf("cat \%s > \%s",((char*)(__right_value634=string_to_string(((char*)(__right_value633=list$1char$ph$p_join(files_569," ")))))),((char*)(__right_value635=string_to_string(tmp_file_588)))))));
        if(        (_if_conditional6=(Value_592<0)),        (__right_value633 = come_decrement_ref_count2(__right_value633, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value634 = come_decrement_ref_count2(__right_value634, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value635 = come_decrement_ref_count2(__right_value635, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value636 = come_decrement_ref_count2(__right_value636, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional6) {
            (come_push_stackframe("02transpile.c", 876, 12),__exception_result_var_b13=die("cat"), come_pop_stackframe(), __exception_result_var_b13);
        }
        else {
        }
        memset(&info_593,0,sizeof(struct sInfo));
        __dec_obj72=info_593.base_sname;
        info_593.base_sname=(char*)come_increment_ref_count(__builtin_string(tmp_file_588));
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj73=info_593.sname;
        info_593.sname=(char*)come_increment_ref_count(__builtin_string(tmp_file_588));
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        info_593.sline=1;
        info_593.err_num=0;
        __dec_obj74=info_593.clang_option;
        info_593.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option_566));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj75=info_593.cpp_option;
        info_593.cpp_option=(char*)come_increment_ref_count(buffer_to_string(cpp_option_568));
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj76=info_593.linker_option;
        info_593.linker_option=(char*)come_increment_ref_count(buffer_to_string(linker_option_567));
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
        info_593.no_output_err=(_Bool)0;
        __dec_obj78=info_593.funcs;
        info_593.funcs=(struct map$2char$phsFun$ph*)come_increment_ref_count(map$2char$phsFun$ph$p_initialize((struct map$2char$phsFun$ph*)come_increment_ref_count((struct map$2char$phsFun$ph*)come_calloc(1, sizeof(struct map$2char$phsFun$ph)*(1), "02transpile.c", 891, "struct map$2char$phsFun$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj78,map$2char$phsFun$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj80=info_593.struct_definition;
        info_593.struct_definition=(struct map$2char$phbuffer$ph*)come_increment_ref_count(map$2char$phbuffer$ph$p_initialize((struct map$2char$phbuffer$ph*)come_increment_ref_count((struct map$2char$phbuffer$ph*)come_calloc(1, sizeof(struct map$2char$phbuffer$ph)*(1), "02transpile.c", 892, "struct map$2char$phbuffer$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj80,map$2char$phbuffer$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj82=info_593.uniq_definition;
        info_593.uniq_definition=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph$p_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc(1, sizeof(struct map$2char$phchar$ph)*(1), "02transpile.c", 893, "struct map$2char$phchar$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj82,map$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj83=info_593.previous_struct_definition;
        info_593.previous_struct_definition=(struct map$2char$phbuffer$ph*)come_increment_ref_count(map$2char$phbuffer$ph$p_initialize((struct map$2char$phbuffer$ph*)come_increment_ref_count((struct map$2char$phbuffer$ph*)come_calloc(1, sizeof(struct map$2char$phbuffer$ph)*(1), "02transpile.c", 894, "struct map$2char$phbuffer$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj83,map$2char$phbuffer$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj85=info_593.generics_funcs;
        info_593.generics_funcs=(struct map$2char$phsGenericsFun$ph*)come_increment_ref_count(map$2char$phsGenericsFun$ph$p_initialize((struct map$2char$phsGenericsFun$ph*)come_increment_ref_count((struct map$2char$phsGenericsFun$ph*)come_calloc(1, sizeof(struct map$2char$phsGenericsFun$ph)*(1), "02transpile.c", 895, "struct map$2char$phsGenericsFun$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj85,map$2char$phsGenericsFun$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj87=info_593.classes;
        info_593.classes=(struct map$2char$phsClass$ph*)come_increment_ref_count(map$2char$phsClass$ph$p_initialize((struct map$2char$phsClass$ph*)come_increment_ref_count((struct map$2char$phsClass$ph*)come_calloc(1, sizeof(struct map$2char$phsClass$ph)*(1), "02transpile.c", 896, "struct map$2char$phsClass$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj87,map$2char$phsClass$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj89=info_593.modules;
        info_593.modules=(struct map$2char$phsClassModule$ph*)come_increment_ref_count(map$2char$phsClassModule$ph$p_initialize((struct map$2char$phsClassModule$ph*)come_increment_ref_count((struct map$2char$phsClassModule$ph*)come_calloc(1, sizeof(struct map$2char$phsClassModule$ph)*(1), "02transpile.c", 897, "struct map$2char$phsClassModule$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj89,map$2char$phsClassModule$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj91=info_593.types;
        info_593.types=(struct map$2char$phsType$ph*)come_increment_ref_count(map$2char$phsType$ph$p_initialize((struct map$2char$phsType$ph*)come_increment_ref_count((struct map$2char$phsType$ph*)come_calloc(1, sizeof(struct map$2char$phsType$ph)*(1), "02transpile.c", 898, "struct map$2char$phsType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj91,map$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj92=info_593.module;
        info_593.module=(struct sModule*)come_increment_ref_count(sModule_initialize((struct sModule*)come_increment_ref_count((struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 899, "struct sModule*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj92,sModule_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj93=info_593.right_value_objects;
        info_593.right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(list$1sRightValueObject$ph$p_initialize((struct list$1sRightValueObject$ph*)come_increment_ref_count((struct list$1sRightValueObject$ph*)come_calloc(1, sizeof(struct list$1sRightValueObject$ph)*(1), "02transpile.c", 900, "struct list$1sRightValueObject$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj93,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj94=info_593.stack;
        info_593.stack=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "02transpile.c", 901, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj94,list$1CVALUE$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj95=info_593.gv_table;
        info_593.gv_table=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 902, "struct sVarTable*", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)1,((void*)0)));
        come_call_finalizer3(__dec_obj95,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        lv_table_639=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 903, "struct sVarTable*", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)));
        info_593.lv_table=lv_table_639;
        __dec_obj96=info_593.generics_type_names;
        info_593.generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 905, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj96,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj97=info_593.method_generics_type_names;
        info_593.method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 906, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj97,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj98=info_593.generics_classes;
        info_593.generics_classes=(struct map$2char$phsClass$ph*)come_increment_ref_count(map$2char$phsClass$ph$p_initialize((struct map$2char$phsClass$ph*)come_increment_ref_count((struct map$2char$phsClass$ph*)come_calloc(1, sizeof(struct map$2char$phsClass$ph)*(1), "02transpile.c", 907, "struct map$2char$phsClass$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj98,map$2char$phsClass$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info_593.verbose=verbose_576;
        info_593.output_header_file=(_Bool)1;
        static int n_640=0;
        info_593.num_source_files=n_640++;
        info_593.max_source_files=list$1char$ph$p_length(files_569);
        __dec_obj99=info_593.output_file_name;
        info_593.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name_575));
        __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        init_classes(&info_593);
        clear_tmp_file(&info_593);
        Value_641=cpp(&info_593);
        if(        !Value_641) {
            printf("transpile failed\n");
            system(((char*)(__right_value710=xsprintf("%s %s*",RM,tmp_file_588))));
            (__right_value710 = come_decrement_ref_count2(__right_value710, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            exit(2);
        }
        else {
        }
        __dec_obj100=info_593.original_source;
        info_593.original_source=(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value712=charp_read(((char*)(__right_value711=xsprintf("%s",tmp_file_588))))))));
        come_call_finalizer3(__dec_obj100,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        (__right_value711 = come_decrement_ref_count2(__right_value711, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value712 = come_decrement_ref_count2(__right_value712, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        __dec_obj101=info_593.source;
        info_593.source=(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value715=charp_read(((char*)(__right_value714=xsprintf("%s.i",tmp_file_588))))))));
        come_call_finalizer3(__dec_obj101,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        (__right_value714 = come_decrement_ref_count2(__right_value714, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value715 = come_decrement_ref_count2(__right_value715, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        info_593.p=info_593.source->buf;
        info_593.head=info_593.source->buf;
        Value_642=output_cpp_file_572;
        if(        !Value_642) {
            transpile(&info_593);
            Value_643=output_header_file(&info_593);
            if(            !Value_643) {
                printf("output source file failed\n");
                system(((char*)(__right_value717=xsprintf("%s %s*",RM,tmp_file_588))));
                (__right_value717 = come_decrement_ref_count2(__right_value717, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                exit(2);
            }
            else {
            }
        }
        else {
        }
        system(((char*)(__right_value718=xsprintf("%s %s*",RM,tmp_file_588))));
        (__right_value718 = come_decrement_ref_count2(__right_value718, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (output_file_name_str_565 = come_decrement_ref_count2(output_file_name_str_565, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(clang_option_566,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(linker_option_567,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(cpp_option_568,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(files_569,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(object_files_570,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (output_file_name_575 = come_decrement_ref_count2(output_file_name_575, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (tmp_file_588 = come_decrement_ref_count2(tmp_file_588, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3((&info_593),sInfo_finalize, 1, 0, 0, 0, (void*)0);
        come_call_finalizer3(lv_table_639,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(argv[1],"new")&&argc==3) {
        Value_646=new_project(argc,argv);
        if(        !Value_646) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"run")&&argc==2) {
        Value_647=run_project(argc,argv);
        if(        !Value_647) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"header")&&argc==2) {
        Value_648=make_header_project(argc,argv);
        if(        !Value_648) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"compile")&&argc==2) {
        Value_649=compile_project(argc,argv);
        if(        !Value_649) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"debug")&&argc==2) {
        Value_650=debug_run_project(argc,argv);
        if(        !Value_650) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"clean")&&argc==2) {
        Value_651=clean_project(argc,argv);
        if(        !Value_651) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"install")&&argc>=2) {
        if(        argc==2) {
            Value_652=install_project(argc,argv,"/usr/local");
            if(            !Value_652) {
                return (_Bool)0;
            }
            else {
            }
        }
        else if(        argc>=3) {
            Value_653=install_project(argc,argv,argv[2]);
            if(            !Value_653) {
                return (_Bool)0;
            }
            else {
            }
        }
    }
    else {
        start_num_654=1;
        output_file_name_str_655=((void*)0);
        clang_option_656=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 666, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        linker_option_657=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 667, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        cpp_option_658=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 668, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_str(cpp_option_658,"-U__GNUC__");
        files_659=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 670, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        object_files_660=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 671, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        output_object_file_661=(_Bool)0;
        output_cpp_file_662=(_Bool)0;
        output_source_file_flag_663=(_Bool)0;
        output_object_file_flag_664=(_Bool)1;
        output_file_name_665=(char*)come_increment_ref_count(output_file_name_str_655);
        verbose_666=(_Bool)0;
        come_debug_667=(_Bool)0;
        come_malloc_668=(_Bool)0;
        m5stack_cpp_669=(_Bool)0;
        pico_cpp_670=(_Bool)0;
        gcc_compiler_671=(_Bool)0;
        for(        i_672=start_num_654;        i_672<argc;        i_672++        ){
            ext_name_673=(char*)come_increment_ref_count(xextname(argv[i_672]));
            if(            charp_operator_equals(argv[i_672],"-o")&&i_672+1<argc) {
                __dec_obj102=output_file_name_665;
                output_file_name_665=(char*)come_increment_ref_count(__builtin_string(argv[i_672+1]));
                __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
                i_672++;
            }
            else if(            charp_operator_equals(argv[i_672],"-e")&&i_672+1<argc) {
                buffer_append_str(linker_option_657,((char*)(__right_value732=xsprintf("-e \%s",((char*)(__right_value731=charp_to_string(argv[i_672+1])))))));
                (__right_value731 = come_decrement_ref_count2(__right_value731, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value732 = come_decrement_ref_count2(__right_value732, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_672++;
            }
            else if(            charp_operator_equals(argv[i_672],"-str")) {
                gComeStr=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_672],"-pthread")) {
                gComePthread=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_672],"-gc")) {
                gComeGC=(_Bool)1;
                buffer_append_format(cpp_option_658,((char*)(__right_value733=xsprintf(" -DENABLE_GC "))));
                (__right_value733 = come_decrement_ref_count2(__right_value733, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_672],"-gcc")) {
                gcc_compiler_671=(_Bool)1;
                CC="gcc";
            }
            else if(            charp_operator_equals(argv[i_672],"-pico")) {
                output_source_file_flag_663=(_Bool)1;
                output_object_file_flag_664=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env_674=getenv("PICO_SDK_PATH");
                __dec_obj103=cpp_option_658;
                cpp_option_658=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 713, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj103,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                buffer_append_format(cpp_option_658,((char*)(__right_value738=xsprintf(" -I $PICO_SDK_PATH/src/common/pico_stdlib_headers/include/ -I$PICO_SDK_PATH/src/common/pico_base_headers/include/ -I \%s/src/rp2_common/hardware_sync/include \$(find \%s -type d -name include | sed 's/^/ -I/g') -I$PICO_SDK_PATH/src/boards/include -I$PICO_SDK_PATH/src/rp2040/pico_platform/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_regs/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_structs/include -I$PICO_SDK_PATH/src/rp2350/hardware_structs/include/ -I build/generated/pico_base/ -D__PICO__",((char*)(__right_value736=charp_to_string(env_674))),((char*)(__right_value737=charp_to_string(env_674)))))));
                (__right_value736 = come_decrement_ref_count2(__right_value736, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value737 = come_decrement_ref_count2(__right_value737, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value738 = come_decrement_ref_count2(__right_value738, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                create_pico_version_header();
                pico_cpp_670=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_672],"-m5stack")) {
                m5stack_cpp_669=(_Bool)1;
                output_source_file_flag_663=(_Bool)1;
                output_object_file_flag_664=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env_675=getenv("IDF_PATH");
                __dec_obj104=cpp_option_658;
                cpp_option_658=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 724, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj104,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                buffer_append_format(cpp_option_658,((char*)(__right_value762=xsprintf(" -I\%s/.espressif/tools/xtensa-esp-elf/esp-14.2.0_20241119/xtensa-esp-elf/xtensa-esp-elf/include -I\%s/components/freertos/include -I\%s/components/esp32/include -I\%s/components/driver/include -I\%s/components/lwip/include -I\%s/components/freertos/FreeRTOS-Kernel/include -I\%s/components/freertos/config/include/freertos -I\%s/components/freertos/config/xtensa/include -I\%s/components/xtensa/include -I\%s/components/xtensa/esp32/include -I\%s/components/freertos/FreeRTOS-Kernel/portable/xtensa/include/freertos -I\%s/components/esp_hw_support/include -I\%s/components/soc/esp32/include/ -I\%s/components/esp_common/include/components $(find \%s/components -type d -name include | grep esp_ | sed 's/^/ -I/g') -I\%s/components/esp_common/include/ -I\%s/components/soc/esp32/register/soc/ -I\%s/components/soc/esp32/register -I\%s/components/heap/include -I\%s/components/hal/include -I\%s/components/newlib/platform_include -D__M5STACK__",((char*)(__right_value741=charp_to_string(getenv("HOME")))),((char*)(__right_value742=charp_to_string(env_675))),((char*)(__right_value743=charp_to_string(env_675))),((char*)(__right_value744=charp_to_string(env_675))),((char*)(__right_value745=charp_to_string(env_675))),((char*)(__right_value746=charp_to_string(env_675))),((char*)(__right_value747=charp_to_string(env_675))),((char*)(__right_value748=charp_to_string(env_675))),((char*)(__right_value749=charp_to_string(env_675))),((char*)(__right_value750=charp_to_string(env_675))),((char*)(__right_value751=charp_to_string(env_675))),((char*)(__right_value752=charp_to_string(env_675))),((char*)(__right_value753=charp_to_string(env_675))),((char*)(__right_value754=charp_to_string(env_675))),((char*)(__right_value755=charp_to_string(env_675))),((char*)(__right_value756=charp_to_string(env_675))),((char*)(__right_value757=charp_to_string(env_675))),((char*)(__right_value758=charp_to_string(env_675))),((char*)(__right_value759=charp_to_string(env_675))),((char*)(__right_value760=charp_to_string(env_675))),((char*)(__right_value761=charp_to_string(env_675)))))),"/usr/local/");
                (__right_value741 = come_decrement_ref_count2(__right_value741, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value742 = come_decrement_ref_count2(__right_value742, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value743 = come_decrement_ref_count2(__right_value743, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value744 = come_decrement_ref_count2(__right_value744, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value745 = come_decrement_ref_count2(__right_value745, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value746 = come_decrement_ref_count2(__right_value746, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value747 = come_decrement_ref_count2(__right_value747, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value748 = come_decrement_ref_count2(__right_value748, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value749 = come_decrement_ref_count2(__right_value749, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value750 = come_decrement_ref_count2(__right_value750, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value751 = come_decrement_ref_count2(__right_value751, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value752 = come_decrement_ref_count2(__right_value752, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value753 = come_decrement_ref_count2(__right_value753, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value754 = come_decrement_ref_count2(__right_value754, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value755 = come_decrement_ref_count2(__right_value755, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value756 = come_decrement_ref_count2(__right_value756, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value757 = come_decrement_ref_count2(__right_value757, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value758 = come_decrement_ref_count2(__right_value758, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value759 = come_decrement_ref_count2(__right_value759, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value760 = come_decrement_ref_count2(__right_value760, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value761 = come_decrement_ref_count2(__right_value761, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value762 = come_decrement_ref_count2(__right_value762, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            i_672+1<argc&&charp_operator_equals(argv[i_672],"-target")) {
                buffer_append_str(clang_option_656,((char*)(__right_value764=xsprintf("-target \%s",((char*)(__right_value763=charp_to_string(argv[i_672+1])))))));
                (__right_value763 = come_decrement_ref_count2(__right_value763, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value764 = come_decrement_ref_count2(__right_value764, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_672++;
            }
            else if(            i_672+1<argc&&charp_operator_equals(argv[i_672],"-T")) {
                buffer_append_str(clang_option_656,((char*)(__right_value766=xsprintf(" -T \%s ",((char*)(__right_value765=charp_to_string(argv[i_672+1])))))));
                (__right_value765 = come_decrement_ref_count2(__right_value765, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value766 = come_decrement_ref_count2(__right_value766, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_672++;
            }
            else if(            charp_operator_equals(argv[i_672],"-net")) {
                gComeNet=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_672],"-cg")) {
                come_debug_667=(_Bool)1;
                buffer_append_str(clang_option_656,"-g ");
            }
            else if(            charp_operator_equals(argv[i_672],"-C")) {
                buffer_append_str(cpp_option_658,((char*)(__right_value768=xsprintf("\%s ",((char*)(__right_value767=charp_to_string(argv[i_672])))))));
                (__right_value767 = come_decrement_ref_count2(__right_value767, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value768 = come_decrement_ref_count2(__right_value768, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_672],"-M")) {
                buffer_append_str(cpp_option_658,((char*)(__right_value770=xsprintf("\%s ",((char*)(__right_value769=charp_to_string(argv[i_672])))))));
                (__right_value769 = come_decrement_ref_count2(__right_value769, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value770 = come_decrement_ref_count2(__right_value770, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_672],"-MM")) {
                buffer_append_str(cpp_option_658,((char*)(__right_value772=xsprintf("\%s ",((char*)(__right_value771=charp_to_string(argv[i_672])))))));
                (__right_value771 = come_decrement_ref_count2(__right_value771, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value772 = come_decrement_ref_count2(__right_value772, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_672],"-dM")) {
                buffer_append_str(cpp_option_658,((char*)(__right_value774=xsprintf("\%s ",((char*)(__right_value773=charp_to_string(argv[i_672])))))));
                (__right_value773 = come_decrement_ref_count2(__right_value773, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value774 = come_decrement_ref_count2(__right_value774, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_672],"-dD")) {
                buffer_append_str(cpp_option_658,((char*)(__right_value776=xsprintf("\%s ",((char*)(__right_value775=charp_to_string(argv[i_672])))))));
                (__right_value775 = come_decrement_ref_count2(__right_value775, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value776 = come_decrement_ref_count2(__right_value776, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_672],"-H")) {
                buffer_append_str(cpp_option_658,((char*)(__right_value778=xsprintf("\%s ",((char*)(__right_value777=charp_to_string(argv[i_672])))))));
                (__right_value777 = come_decrement_ref_count2(__right_value777, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value778 = come_decrement_ref_count2(__right_value778, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_672],"-P")) {
                buffer_append_str(cpp_option_658,((char*)(__right_value780=xsprintf("\%s ",((char*)(__right_value779=charp_to_string(argv[i_672])))))));
                (__right_value779 = come_decrement_ref_count2(__right_value779, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value780 = come_decrement_ref_count2(__right_value780, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_672],"-nostdinc")) {
                buffer_append_str(cpp_option_658,((char*)(__right_value782=xsprintf("\%s ",((char*)(__right_value781=charp_to_string(argv[i_672])))))));
                (__right_value781 = come_decrement_ref_count2(__right_value781, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value782 = come_decrement_ref_count2(__right_value782, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_672],"-CC")) {
                buffer_append_str(cpp_option_658,((char*)(__right_value784=xsprintf("\%s ",((char*)(__right_value783=charp_to_string(argv[i_672])))))));
                (__right_value783 = come_decrement_ref_count2(__right_value783, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value784 = come_decrement_ref_count2(__right_value784, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            i_672+1<argc&&charp_operator_equals(argv[i_672],"-target")) {
                buffer_append_str(clang_option_656,((char*)(__right_value786=xsprintf("-target \%s",((char*)(__right_value785=charp_to_string(argv[i_672+1])))))));
                (__right_value785 = come_decrement_ref_count2(__right_value785, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value786 = come_decrement_ref_count2(__right_value786, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_672++;
            }
            else if(            i_672+1<argc&&charp_operator_equals(argv[i_672],"-include")) {
                buffer_append_str(cpp_option_658,((char*)(__right_value788=xsprintf("-iclude \%s",((char*)(__right_value787=charp_to_string(argv[i_672+1])))))));
                (__right_value787 = come_decrement_ref_count2(__right_value787, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value788 = come_decrement_ref_count2(__right_value788, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_672++;
            }
            else if(            i_672+1<argc&&charp_operator_equals(argv[i_672],"-isystem")) {
                buffer_append_str(cpp_option_658,((char*)(__right_value790=xsprintf("-isystem \%s",((char*)(__right_value789=charp_to_string(argv[i_672+1])))))));
                (__right_value789 = come_decrement_ref_count2(__right_value789, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value790 = come_decrement_ref_count2(__right_value790, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                buffer_append_str(clang_option_656,((char*)(__right_value792=xsprintf("-isystem \%s",((char*)(__right_value791=charp_to_string(argv[i_672+1])))))));
                (__right_value791 = come_decrement_ref_count2(__right_value791, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value792 = come_decrement_ref_count2(__right_value792, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_672++;
            }
            else if(            i_672+1<argc&&charp_operator_equals(argv[i_672],"-T")) {
                buffer_append_str(clang_option_656,((char*)(__right_value794=xsprintf(" -T \%s ",((char*)(__right_value793=charp_to_string(argv[i_672+1])))))));
                (__right_value793 = come_decrement_ref_count2(__right_value793, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value794 = come_decrement_ref_count2(__right_value794, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                i_672++;
            }
            else if(            charp_operator_equals(argv[i_672],"-common-header")) {
                gCommonHeader=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_672],"-original-position")) {
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            (_elif_conditional4=(string_operator_equals(((char*)(__right_value795=charp_operator_load_range_element(argv[i_672],0,2))),"-O"))),            (__right_value795 = come_decrement_ref_count2(__right_value795, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            _elif_conditional4) {
                buffer_append_str(clang_option_656,((char*)(__right_value797=xsprintf(" \%s ",((char*)(__right_value796=charp_to_string(argv[i_672])))))));
                (__right_value796 = come_decrement_ref_count2(__right_value796, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value797 = come_decrement_ref_count2(__right_value797, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_debug_667=(_Bool)0;
            }
            else if(            (_elif_conditional5=(string_operator_equals(((char*)(__right_value798=charp_operator_load_range_element(argv[i_672],0,2))),"-D"))),            (__right_value798 = come_decrement_ref_count2(__right_value798, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            _elif_conditional5) {
                buffer_append_str(cpp_option_658,((char*)(__right_value800=xsprintf(" \%s ",((char*)(__right_value799=charp_to_string(argv[i_672])))))));
                (__right_value799 = come_decrement_ref_count2(__right_value799, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value800 = come_decrement_ref_count2(__right_value800, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                buffer_append_str(clang_option_656,((char*)(__right_value802=xsprintf(" \%s ",((char*)(__right_value801=charp_to_string(argv[i_672])))))));
                (__right_value801 = come_decrement_ref_count2(__right_value801, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value802 = come_decrement_ref_count2(__right_value802, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            (_elif_conditional6=(string_operator_equals(((char*)(__right_value803=charp_operator_load_range_element(argv[i_672],0,2))),"-U"))),            (__right_value803 = come_decrement_ref_count2(__right_value803, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            _elif_conditional6) {
                buffer_append_str(cpp_option_658,((char*)(__right_value805=xsprintf(" \%s ",((char*)(__right_value804=charp_to_string(argv[i_672])))))));
                (__right_value804 = come_decrement_ref_count2(__right_value804, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value805 = come_decrement_ref_count2(__right_value805, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                buffer_append_str(clang_option_656,((char*)(__right_value807=xsprintf(" \%s ",((char*)(__right_value806=charp_to_string(argv[i_672])))))));
                (__right_value806 = come_decrement_ref_count2(__right_value806, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value807 = come_decrement_ref_count2(__right_value807, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_672],"-g")) {
                buffer_append_str(clang_option_656,"-g ");
            }
            else if(            charp_operator_equals(argv[i_672],"-v")) {
                buffer_append_str(clang_option_656,"-v ");
                buffer_append_str(cpp_option_658,"-v ");
                verbose_666=(_Bool)1;
            }
            else if(            strlen(argv[i_672])>=2&&memcmp(argv[i_672],"-I",strlen("-I"))==0) {
                buffer_append_str(cpp_option_658,((char*)(__right_value809=string_operator_add(((char*)(__right_value808=charp_operator_add(" ",argv[i_672])))," "))));
                (__right_value808 = come_decrement_ref_count2(__right_value808, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value809 = come_decrement_ref_count2(__right_value809, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_672],"-gdwarf-4")) {
                buffer_append_str(clang_option_656,"-gdwarf-4 ");
            }
            else if(            charp_operator_equals(argv[i_672],"-s")||charp_operator_equals(argv[i_672],"-S")) {
                output_source_file_flag_663=(_Bool)1;
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            charp_operator_equals(argv[i_672],"-c")) {
                output_object_file_661=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_672],"-E")) {
                output_cpp_file_662=(_Bool)1;
            }
            else if(            argv[i_672][0]==45) {
                buffer_append_str(clang_option_656,((char*)(__right_value810=charp_operator_add(argv[i_672]," "))));
                (__right_value810 = come_decrement_ref_count2(__right_value810, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            strlen(argv[i_672])>2&&memcmp(argv[i_672]+strlen(argv[i_672])-2,".o",2)==0) {
                list$1char$ph$p_push_back(object_files_660,(char*)come_increment_ref_count(__builtin_string(argv[i_672])));
            }
            else if(            strlen(argv[i_672])>2&&memcmp(argv[i_672]+strlen(argv[i_672])-2,".a",2)==0) {
                list$1char$ph$p_push_back(object_files_660,(char*)come_increment_ref_count(__builtin_string(argv[i_672])));
            }
            else if(            string_operator_equals(ext_name_673,"c")) {
                list$1char$ph$p_push_back(files_659,(char*)come_increment_ref_count(__builtin_string(argv[i_672])));
            }
            else {
                buffer_append_str(clang_option_656,((char*)(__right_value814=charp_operator_add(argv[i_672]," "))));
                (__right_value814 = come_decrement_ref_count2(__right_value814, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (ext_name_673 = come_decrement_ref_count2(ext_name_673, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        gComeDebug=come_debug_667;
        gComeMalloc=come_malloc_668;
        for(        o2_saved_676=(struct list$1char$ph*)come_increment_ref_count((files_659)),it_677=list$1char$ph$p_begin((o2_saved_676));        !list$1char$ph$p_end((o2_saved_676));        it_677=list$1char$ph$p_next((o2_saved_676))        ){
            memset(&info_678,0,sizeof(struct sInfo));
            Value_679=fopen(it_677,"r");
            if(            Value_679) {
                fclose(Value_679);
            }
            else {
                come_call_finalizer3((&info_678),sInfo_finalize, 1, 0, 0, 0, (void*)0);
                continue;
            }
            __dec_obj105=info_678.sname;
            info_678.sname=(char*)come_increment_ref_count(__builtin_string(it_677));
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
            info_678.sline=1;
            info_678.err_num=0;
            __dec_obj106=info_678.clang_option;
            info_678.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option_656));
            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj107=info_678.cpp_option;
            info_678.cpp_option=(char*)come_increment_ref_count(buffer_to_string(cpp_option_658));
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj108=info_678.linker_option;
            info_678.linker_option=(char*)come_increment_ref_count(buffer_to_string(linker_option_657));
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
            info_678.no_output_err=(_Bool)0;
            __dec_obj109=info_678.funcs;
            info_678.funcs=(struct map$2char$phsFun$ph*)come_increment_ref_count(map$2char$phsFun$ph$p_initialize((struct map$2char$phsFun$ph*)come_increment_ref_count((struct map$2char$phsFun$ph*)come_calloc(1, sizeof(struct map$2char$phsFun$ph)*(1), "02transpile.c", 1010, "struct map$2char$phsFun$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj109,map$2char$phsFun$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj110=info_678.struct_definition;
            info_678.struct_definition=(struct map$2char$phbuffer$ph*)come_increment_ref_count(map$2char$phbuffer$ph$p_initialize((struct map$2char$phbuffer$ph*)come_increment_ref_count((struct map$2char$phbuffer$ph*)come_calloc(1, sizeof(struct map$2char$phbuffer$ph)*(1), "02transpile.c", 1011, "struct map$2char$phbuffer$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj110,map$2char$phbuffer$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj111=info_678.uniq_definition;
            info_678.uniq_definition=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph$p_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc(1, sizeof(struct map$2char$phchar$ph)*(1), "02transpile.c", 1012, "struct map$2char$phchar$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj111,map$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj112=info_678.previous_struct_definition;
            info_678.previous_struct_definition=(struct map$2char$phbuffer$ph*)come_increment_ref_count(map$2char$phbuffer$ph$p_initialize((struct map$2char$phbuffer$ph*)come_increment_ref_count((struct map$2char$phbuffer$ph*)come_calloc(1, sizeof(struct map$2char$phbuffer$ph)*(1), "02transpile.c", 1013, "struct map$2char$phbuffer$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj112,map$2char$phbuffer$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj113=info_678.generics_funcs;
            info_678.generics_funcs=(struct map$2char$phsGenericsFun$ph*)come_increment_ref_count(map$2char$phsGenericsFun$ph$p_initialize((struct map$2char$phsGenericsFun$ph*)come_increment_ref_count((struct map$2char$phsGenericsFun$ph*)come_calloc(1, sizeof(struct map$2char$phsGenericsFun$ph)*(1), "02transpile.c", 1014, "struct map$2char$phsGenericsFun$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj113,map$2char$phsGenericsFun$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj114=info_678.classes;
            info_678.classes=(struct map$2char$phsClass$ph*)come_increment_ref_count(map$2char$phsClass$ph$p_initialize((struct map$2char$phsClass$ph*)come_increment_ref_count((struct map$2char$phsClass$ph*)come_calloc(1, sizeof(struct map$2char$phsClass$ph)*(1), "02transpile.c", 1015, "struct map$2char$phsClass$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj114,map$2char$phsClass$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj115=info_678.modules;
            info_678.modules=(struct map$2char$phsClassModule$ph*)come_increment_ref_count(map$2char$phsClassModule$ph$p_initialize((struct map$2char$phsClassModule$ph*)come_increment_ref_count((struct map$2char$phsClassModule$ph*)come_calloc(1, sizeof(struct map$2char$phsClassModule$ph)*(1), "02transpile.c", 1016, "struct map$2char$phsClassModule$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj115,map$2char$phsClassModule$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj116=info_678.types;
            info_678.types=(struct map$2char$phsType$ph*)come_increment_ref_count(map$2char$phsType$ph$p_initialize((struct map$2char$phsType$ph*)come_increment_ref_count((struct map$2char$phsType$ph*)come_calloc(1, sizeof(struct map$2char$phsType$ph)*(1), "02transpile.c", 1017, "struct map$2char$phsType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj116,map$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj117=info_678.module;
            info_678.module=(struct sModule*)come_increment_ref_count(sModule_initialize((struct sModule*)come_increment_ref_count((struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 1018, "struct sModule*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj117,sModule_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj118=info_678.right_value_objects;
            info_678.right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(list$1sRightValueObject$ph$p_initialize((struct list$1sRightValueObject$ph*)come_increment_ref_count((struct list$1sRightValueObject$ph*)come_calloc(1, sizeof(struct list$1sRightValueObject$ph)*(1), "02transpile.c", 1019, "struct list$1sRightValueObject$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj118,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj119=info_678.stack;
            info_678.stack=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "02transpile.c", 1020, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj119,list$1CVALUE$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj120=info_678.gv_table;
            info_678.gv_table=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 1021, "struct sVarTable*", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)1,((void*)0)));
            come_call_finalizer3(__dec_obj120,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            lv_table_680=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 1022, "struct sVarTable*", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)));
            info_678.lv_table=lv_table_680;
            __dec_obj121=info_678.generics_type_names;
            info_678.generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 1024, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj121,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj122=info_678.method_generics_type_names;
            info_678.method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 1025, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj122,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj123=info_678.generics_classes;
            info_678.generics_classes=(struct map$2char$phsClass$ph*)come_increment_ref_count(map$2char$phsClass$ph$p_initialize((struct map$2char$phsClass$ph*)come_increment_ref_count((struct map$2char$phsClass$ph*)come_calloc(1, sizeof(struct map$2char$phsClass$ph)*(1), "02transpile.c", 1026, "struct map$2char$phsClass$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj123,map$2char$phsClass$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            info_678.verbose=verbose_666;
            info_678.m5stack_cpp=m5stack_cpp_669;
            info_678.pico_cpp=pico_cpp_670;
            info_678.gcc_compiler=gcc_compiler_671;
            init_classes(&info_678);
            clear_tmp_file(&info_678);
            Value_681=cpp(&info_678);
            if(            !Value_681) {
                printf("transpile failed\n");
                exit(2);
            }
            else {
            }
            __dec_obj124=info_678.original_source;
            info_678.original_source=(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value852=charp_read(((char*)(__right_value851=xsprintf("%s",it_677))))))));
            come_call_finalizer3(__dec_obj124,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (__right_value851 = come_decrement_ref_count2(__right_value851, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value852 = come_decrement_ref_count2(__right_value852, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj125=info_678.source;
            info_678.source=(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value855=charp_read(((char*)(__right_value854=xsprintf("%s.i",it_677))))))));
            come_call_finalizer3(__dec_obj125,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (__right_value854 = come_decrement_ref_count2(__right_value854, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value855 = come_decrement_ref_count2(__right_value855, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            info_678.p=info_678.source->buf;
            info_678.head=info_678.source->buf;
            if(            output_file_name_665) {
                __dec_obj126=info_678.output_file_name;
                info_678.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name_665));
                __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj127=info_678.output_file_name;
                info_678.output_file_name=((void*)0);
                __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            Value_682=output_cpp_file_662;
            if(            !Value_682) {
                transpile(&info_678);
                Value_683=output_source_file(&info_678);
                if(                !Value_683) {
                    printf("output source file faield\n");
                    exit(2);
                }
                else {
                }
                if(                info_678.err_num>0) {
                    printf("transpile error. err num %d\n",info_678.err_num);
                    exit(2);
                }
                Value_684=output_object_file_flag_664;
                if(                Value_684) {
                    Value_685=compile(&info_678,output_object_file_661,object_files_660);
                    if(                    !Value_685) {
                        printf("compile faield\n");
                        exit(27);
                    }
                    else {
                    }
                }
                else {
                }
            }
            else {
            }
            if(            output_cpp_file_662) {
            }
            else if(            info_678.err_num>0) {
            }
            else if(            output_source_file_flag_663) {
                clear_tmp_file_without_object_file_and_ccfile(&info_678);
            }
            else {
                clear_tmp_file_without_object_file(&info_678);
            }
            come_call_finalizer3((&info_678),sInfo_finalize, 1, 0, 0, 0, (void*)0);
            come_call_finalizer3(lv_table_680,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_676,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        if(        !output_object_file_661&&!output_cpp_file_662&&(list$1char$ph$p_length(files_659)>0||list$1char$ph$p_length(object_files_660)>0)) {
            memset(&info_686,0,sizeof(struct sInfo));
            __dec_obj128=info_686.sname;
            info_686.sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, ((char*)(__right_value858=list$1char$ph$p_operator_load_element(files_659,0)))));
            __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
            (__right_value858 = come_decrement_ref_count2(__right_value858, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj129=info_686.clang_option;
            info_686.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option_656));
            __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj130=info_686.linker_option;
            info_686.linker_option=(char*)come_increment_ref_count(buffer_to_string(linker_option_657));
            __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
            info_686.verbose=verbose_666;
            if(            output_file_name_665) {
                __dec_obj131=info_686.output_file_name;
                info_686.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name_665));
                __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj132=info_686.output_file_name;
                info_686.output_file_name=((void*)0);
                __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            output_object_file_flag_664) {
                Value_690=linker(&info_686,object_files_660);
                if(                !Value_690) {
                    printf("linker faield\n");
                    exit(13);
                }
                else {
                }
            }
            if(            !output_cpp_file_662&&!output_source_file_flag_663) {
                clear_tmp_file(&info_686);
            }
            come_call_finalizer3((&info_686),sInfo_finalize, 1, 0, 0, 0, (void*)0);
        }
        (output_file_name_str_655 = come_decrement_ref_count2(output_file_name_str_655, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(clang_option_656,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(linker_option_657,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(cpp_option_658,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(files_659,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(object_files_660,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (output_file_name_665 = come_decrement_ref_count2(output_file_name_665, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    return 0;
}

static char* list$1char$ph$p_join(struct list$1char$ph* self, char* sep){
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
struct buffer* buf_589;
int n_590;
char* it_591;
void* __right_value632 = (void*)0;
char* __result_obj__302;
    buf_589=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2264, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    n_590=0;
    for(    it_591=list$1char$ph$p_begin(self);    !list$1char$ph$p_end(self);    it_591=list$1char$ph$p_next(self)    ){
        buffer_append_str(buf_589,it_591);
        if(        n_590<list$1char$ph$p_length(self)-1) {
            buffer_append_str(buf_589,sep);
        }
        n_590++;
    }
    __result_obj__302 = come_increment_ref_count(((char*)(__right_value632=buffer_to_string(buf_589))));
    come_call_finalizer3(buf_589,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (__right_value632 = come_decrement_ref_count2(__right_value632, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__302 = come_decrement_ref_count2(__result_obj__302, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__302;
}

static int list$1char$ph$p_length(struct list$1char$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph$p_initialize(struct map$2char$phsFun$ph* self){
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
int i_594;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
struct list$1char$p* __dec_obj77;
struct map$2char$phsFun$ph* __result_obj__304;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value643=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2695, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value644=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(128)), "./comelang.h", 2696, "struct sFun**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value645=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2697, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_594=0;    i_594<128;    i_594++    ){
        self->item_existance[i_594]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj77=self->key_list;
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2707, "struct list$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj77,list$1char$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__304 = come_increment_ref_count(self);
    come_call_finalizer3(self,map$2char$phsFun$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__304,map$2char$phsFun$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__304;
}

static struct list$1char$p* list$1char$p$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__303;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__303 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__303,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__303;
}

static void list$1char$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_595;
struct list_item$1char$p* prev_it_596;
    it_595=self->head;
    while(it_595!=((void*)0)) {
        prev_it_596=it_595;
        it_595=it_595->next;
        come_call_finalizer3(prev_it_596,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void map$2char$phsFun$ph$p_finalize(struct map$2char$phsFun$ph* self){
int i_597;
int i_598;
    for(    i_597=0;    i_597<self->size;    i_597++    ){
        if(        self->item_existance[i_597]) {
            if(            1) {
                come_call_finalizer3(self->items[i_597],sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_598=0;    i_598<self->size;    i_598++    ){
        if(        self->item_existance[i_598]) {
            if(            1) {
                (self->keys[i_598] = come_decrement_ref_count2(self->keys[i_598], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void sFun_finalize(struct sFun* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer3(self->mParamDefaultParametors,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        (self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sBlock_finalize(struct sBlock* self){
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        come_call_finalizer3(self->mNodes,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void map$2char$phsFun$ph_finalize(struct map$2char$phsFun$ph* self){
int i_599;
int i_600;
    for(    i_599=0;    i_599<self->size;    i_599++    ){
        if(        self->item_existance[i_599]) {
            if(            1) {
                come_call_finalizer3(self->items[i_599],sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_600=0;    i_600<self->size;    i_600++    ){
        if(        self->item_existance[i_600]) {
            if(            1) {
                (self->keys[i_600] = come_decrement_ref_count2(self->keys[i_600], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph$p_initialize(struct map$2char$phbuffer$ph* self){
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
int i_601;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
struct list$1char$p* __dec_obj79;
struct map$2char$phbuffer$ph* __result_obj__305;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value650=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2695, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(struct buffer**)come_increment_ref_count(((struct buffer**)(__right_value651=(struct buffer**)come_calloc(1, sizeof(struct buffer*)*(1*(128)), "./comelang.h", 2696, "struct buffer**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value652=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2697, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_601=0;    i_601<128;    i_601++    ){
        self->item_existance[i_601]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj79=self->key_list;
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2707, "struct list$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj79,list$1char$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__305 = come_increment_ref_count(self);
    come_call_finalizer3(self,map$2char$phbuffer$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__305,map$2char$phbuffer$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__305;
}

static void map$2char$phbuffer$ph$p_finalize(struct map$2char$phbuffer$ph* self){
int i_602;
int i_603;
    for(    i_602=0;    i_602<self->size;    i_602++    ){
        if(        self->item_existance[i_602]) {
            if(            1) {
                come_call_finalizer3(self->items[i_602],buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_603=0;    i_603<self->size;    i_603++    ){
        if(        self->item_existance[i_603]) {
            if(            1) {
                (self->keys[i_603] = come_decrement_ref_count2(self->keys[i_603], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void map$2char$phbuffer$ph_finalize(struct map$2char$phbuffer$ph* self){
int i_604;
int i_605;
    for(    i_604=0;    i_604<self->size;    i_604++    ){
        if(        self->item_existance[i_604]) {
            if(            1) {
                come_call_finalizer3(self->items[i_604],buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_605=0;    i_605<self->size;    i_605++    ){
        if(        self->item_existance[i_605]) {
            if(            1) {
                (self->keys[i_605] = come_decrement_ref_count2(self->keys[i_605], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phchar$ph* map$2char$phchar$ph$p_initialize(struct map$2char$phchar$ph* self){
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
int i_606;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
struct list$1char$p* __dec_obj81;
struct map$2char$phchar$ph* __result_obj__306;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value657=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2695, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value658=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2696, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value659=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2697, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_606=0;    i_606<128;    i_606++    ){
        self->item_existance[i_606]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj81=self->key_list;
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2707, "struct list$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj81,list$1char$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__306 = come_increment_ref_count(self);
    come_call_finalizer3(self,map$2char$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__306,map$2char$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__306;
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i_607;
int i_608;
    for(    i_607=0;    i_607<self->size;    i_607++    ){
        if(        self->item_existance[i_607]) {
            if(            1) {
                (self->items[i_607] = come_decrement_ref_count2(self->items[i_607], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->items);
    for(    i_608=0;    i_608<self->size;    i_608++    ){
        if(        self->item_existance[i_608]) {
            if(            1) {
                (self->keys[i_608] = come_decrement_ref_count2(self->keys[i_608], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self){
int i_609;
int i_610;
    for(    i_609=0;    i_609<self->size;    i_609++    ){
        if(        self->item_existance[i_609]) {
            if(            1) {
                (self->items[i_609] = come_decrement_ref_count2(self->items[i_609], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->items);
    for(    i_610=0;    i_610<self->size;    i_610++    ){
        if(        self->item_existance[i_610]) {
            if(            1) {
                (self->keys[i_610] = come_decrement_ref_count2(self->keys[i_610], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph$p_initialize(struct map$2char$phsGenericsFun$ph* self){
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
int i_611;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct list$1char$p* __dec_obj84;
struct map$2char$phsGenericsFun$ph* __result_obj__307;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value666=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2695, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value667=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(128)), "./comelang.h", 2696, "struct sGenericsFun**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value668=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2697, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_611=0;    i_611<128;    i_611++    ){
        self->item_existance[i_611]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj84=self->key_list;
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2707, "struct list$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj84,list$1char$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__307 = come_increment_ref_count(self);
    come_call_finalizer3(self,map$2char$phsGenericsFun$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__307,map$2char$phsGenericsFun$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__307;
}

static void map$2char$phsGenericsFun$ph$p_finalize(struct map$2char$phsGenericsFun$ph* self){
int i_612;
int i_613;
    for(    i_612=0;    i_612<self->size;    i_612++    ){
        if(        self->item_existance[i_612]) {
            if(            1) {
                come_call_finalizer3(self->items[i_612],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_613=0;    i_613<self->size;    i_613++    ){
        if(        self->item_existance[i_613]) {
            if(            1) {
                (self->keys[i_613] = come_decrement_ref_count2(self->keys[i_613], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        come_call_finalizer3(self->mGenericsTypeNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        come_call_finalizer3(self->mMethodGenericsTypeNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer3(self->mParamDefaultParametors,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        (self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        (self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void map$2char$phsGenericsFun$ph_finalize(struct map$2char$phsGenericsFun$ph* self){
int i_614;
int i_615;
    for(    i_614=0;    i_614<self->size;    i_614++    ){
        if(        self->item_existance[i_614]) {
            if(            1) {
                come_call_finalizer3(self->items[i_614],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_615=0;    i_615<self->size;    i_615++    ){
        if(        self->item_existance[i_615]) {
            if(            1) {
                (self->keys[i_615] = come_decrement_ref_count2(self->keys[i_615], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph$p_initialize(struct map$2char$phsClass$ph* self){
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
int i_616;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
struct list$1char$p* __dec_obj86;
struct map$2char$phsClass$ph* __result_obj__308;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value673=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2695, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value674=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(128)), "./comelang.h", 2696, "struct sClass**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value675=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2697, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_616=0;    i_616<128;    i_616++    ){
        self->item_existance[i_616]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj86=self->key_list;
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2707, "struct list$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj86,list$1char$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__308 = come_increment_ref_count(self);
    come_call_finalizer3(self,map$2char$phsClass$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__308,map$2char$phsClass$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__308;
}

static void map$2char$phsClass$ph$p_finalize(struct map$2char$phsClass$ph* self){
int i_617;
int i_618;
    for(    i_617=0;    i_617<self->size;    i_617++    ){
        if(        self->item_existance[i_617]) {
            if(            1) {
                come_call_finalizer3(self->items[i_617],sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_618=0;    i_618<self->size;    i_618++    ){
        if(        self->item_existance[i_618]) {
            if(            1) {
                (self->keys[i_618] = come_decrement_ref_count2(self->keys[i_618], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void map$2char$phsClass$ph_finalize(struct map$2char$phsClass$ph* self){
int i_619;
int i_620;
    for(    i_619=0;    i_619<self->size;    i_619++    ){
        if(        self->item_existance[i_619]) {
            if(            1) {
                come_call_finalizer3(self->items[i_619],sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_620=0;    i_620<self->size;    i_620++    ){
        if(        self->item_existance[i_620]) {
            if(            1) {
                (self->keys[i_620] = come_decrement_ref_count2(self->keys[i_620], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phsClassModule$ph* map$2char$phsClassModule$ph$p_initialize(struct map$2char$phsClassModule$ph* self){
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
int i_621;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
struct list$1char$p* __dec_obj88;
struct map$2char$phsClassModule$ph* __result_obj__309;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value680=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2695, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(struct sClassModule**)come_increment_ref_count(((struct sClassModule**)(__right_value681=(struct sClassModule**)come_calloc(1, sizeof(struct sClassModule*)*(1*(128)), "./comelang.h", 2696, "struct sClassModule**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value682=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2697, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_621=0;    i_621<128;    i_621++    ){
        self->item_existance[i_621]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj88=self->key_list;
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2707, "struct list$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj88,list$1char$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__309 = come_increment_ref_count(self);
    come_call_finalizer3(self,map$2char$phsClassModule$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__309,map$2char$phsClassModule$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__309;
}

static void map$2char$phsClassModule$ph$p_finalize(struct map$2char$phsClassModule$ph* self){
int i_622;
int i_623;
    for(    i_622=0;    i_622<self->size;    i_622++    ){
        if(        self->item_existance[i_622]) {
            if(            1) {
                come_call_finalizer3(self->items[i_622],sClassModule_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_623=0;    i_623<self->size;    i_623++    ){
        if(        self->item_existance[i_623]) {
            if(            1) {
                (self->keys[i_623] = come_decrement_ref_count2(self->keys[i_623], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void sClassModule_finalize(struct sClassModule* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        (self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        come_call_finalizer3(self->mParams,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        (self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void map$2char$phsClassModule$ph_finalize(struct map$2char$phsClassModule$ph* self){
int i_624;
int i_625;
    for(    i_624=0;    i_624<self->size;    i_624++    ){
        if(        self->item_existance[i_624]) {
            if(            1) {
                come_call_finalizer3(self->items[i_624],sClassModule_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_625=0;    i_625<self->size;    i_625++    ){
        if(        self->item_existance[i_625]) {
            if(            1) {
                (self->keys[i_625] = come_decrement_ref_count2(self->keys[i_625], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phsType$ph* map$2char$phsType$ph$p_initialize(struct map$2char$phsType$ph* self){
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
int i_626;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
struct list$1char$p* __dec_obj90;
struct map$2char$phsType$ph* __result_obj__310;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value687=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2695, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value688=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(128)), "./comelang.h", 2696, "struct sType**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value689=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2697, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_626=0;    i_626<128;    i_626++    ){
        self->item_existance[i_626]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj90=self->key_list;
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2707, "struct list$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj90,list$1char$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__310 = come_increment_ref_count(self);
    come_call_finalizer3(self,map$2char$phsType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__310,map$2char$phsType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__310;
}

static void map$2char$phsType$ph$p_finalize(struct map$2char$phsType$ph* self){
int i_627;
int i_628;
    for(    i_627=0;    i_627<self->size;    i_627++    ){
        if(        self->item_existance[i_627]) {
            if(            1) {
                come_call_finalizer3(self->items[i_627],sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_628=0;    i_628<self->size;    i_628++    ){
        if(        self->item_existance[i_628]) {
            if(            1) {
                (self->keys[i_628] = come_decrement_ref_count2(self->keys[i_628], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void map$2char$phsType$ph_finalize(struct map$2char$phsType$ph* self){
int i_629;
int i_630;
    for(    i_629=0;    i_629<self->size;    i_629++    ){
        if(        self->item_existance[i_629]) {
            if(            1) {
                come_call_finalizer3(self->items[i_629],sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_630=0;    i_630<self->size;    i_630++    ){
        if(        self->item_existance[i_630]) {
            if(            1) {
                (self->keys[i_630] = come_decrement_ref_count2(self->keys[i_630], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void sModule_finalize(struct sModule* self){
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLastCode!=((void*)0)) {
        (self->mLastCode = come_decrement_ref_count2(self->mLastCode, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLastCode2!=((void*)0)) {
        (self->mLastCode2 = come_decrement_ref_count2(self->mLastCode2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mHeader!=((void*)0)) {
        come_call_finalizer3(self->mHeader,map$2char$phchar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mHeaderStructs!=((void*)0)) {
        come_call_finalizer3(self->mHeaderStructs,map$2char$phchar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph$p_initialize(struct list$1sRightValueObject$ph* self){
struct list$1sRightValueObject$ph* __result_obj__311;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__311 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sRightValueObject$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__311,list$1sRightValueObject$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__311;
}

static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_631;
struct list_item$1sRightValueObject$ph* prev_it_632;
    it_631=self->head;
    while(it_631!=((void*)0)) {
        prev_it_632=it_631;
        it_631=it_631->next;
        come_call_finalizer3(prev_it_632,list_item$1sRightValueObject$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        (self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_633;
struct list_item$1sRightValueObject$ph* prev_it_634;
    it_633=self->head;
    while(it_633!=((void*)0)) {
        prev_it_634=it_633;
        it_633=it_633->next;
        come_call_finalizer3(prev_it_634,list_item$1sRightValueObject$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__312;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__312 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1CVALUE$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__312,list$1CVALUE$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__312;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_635;
struct list_item$1CVALUE$ph* prev_it_636;
    it_635=self->head;
    while(it_635!=((void*)0)) {
        prev_it_636=it_635;
        it_635=it_635->next;
        come_call_finalizer3(prev_it_636,list_item$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void CVALUE_finalize(struct CVALUE* self){
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_637;
struct list_item$1CVALUE$ph* prev_it_638;
    it_637=self->head;
    while(it_637!=((void*)0)) {
        prev_it_638=it_637;
        it_637=it_637->next;
        come_call_finalizer3(prev_it_638,list_item$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sInfo_finalize(struct sInfo* self){
    if(    self!=((void*)0)&&self->original_source!=((void*)0)) {
        come_call_finalizer3(self->original_source,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        come_call_finalizer3(self->source,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->sname_at_head!=((void*)0)) {
        (self->sname_at_head = come_decrement_ref_count2(self->sname_at_head, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->base_sname!=((void*)0)) {
        (self->base_sname = come_decrement_ref_count2(self->base_sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->err_line!=((void*)0)) {
        (self->err_line = come_decrement_ref_count2(self->err_line, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->clang_option!=((void*)0)) {
        (self->clang_option = come_decrement_ref_count2(self->clang_option, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->cpp_option!=((void*)0)) {
        (self->cpp_option = come_decrement_ref_count2(self->cpp_option, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->linker_option!=((void*)0)) {
        (self->linker_option = come_decrement_ref_count2(self->linker_option, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->funcs!=((void*)0)) {
        come_call_finalizer3(self->funcs,map$2char$phsFun$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->generics_funcs!=((void*)0)) {
        come_call_finalizer3(self->generics_funcs,map$2char$phsGenericsFun$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->classes!=((void*)0)) {
        come_call_finalizer3(self->classes,map$2char$phsClass$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->modules!=((void*)0)) {
        come_call_finalizer3(self->modules,map$2char$phsClassModule$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->types!=((void*)0)) {
        come_call_finalizer3(self->types,map$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->generics_classes!=((void*)0)) {
        come_call_finalizer3(self->generics_classes,map$2char$phsClass$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->struct_definition!=((void*)0)) {
        come_call_finalizer3(self->struct_definition,map$2char$phbuffer$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->previous_struct_definition!=((void*)0)) {
        come_call_finalizer3(self->previous_struct_definition,map$2char$phbuffer$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->module!=((void*)0)) {
        come_call_finalizer3(self->module,sModule_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->right_value_objects!=((void*)0)) {
        come_call_finalizer3(self->right_value_objects,list$1sRightValueObject$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->generics_type!=((void*)0)) {
        come_call_finalizer3(self->generics_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        come_call_finalizer3(self->method_generics_types,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->stack!=((void*)0)) {
        come_call_finalizer3(self->stack,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->come_function_result_type!=((void*)0)) {
        come_call_finalizer3(self->come_function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->come_method_block_function_result_type!=((void*)0)) {
        come_call_finalizer3(self->come_method_block_function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->gv_table!=((void*)0)) {
        come_call_finalizer3(self->gv_table,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->generics_type_names!=((void*)0)) {
        come_call_finalizer3(self->generics_type_names,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_generics_type_names!=((void*)0)) {
        come_call_finalizer3(self->method_generics_type_names,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->impl_type!=((void*)0)) {
        come_call_finalizer3(self->impl_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->class_type!=((void*)0)) {
        come_call_finalizer3(self->class_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->output_file_name!=((void*)0)) {
        (self->output_file_name = come_decrement_ref_count2(self->output_file_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->function_result_type!=((void*)0)) {
        come_call_finalizer3(self->function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->module_params!=((void*)0)) {
        come_call_finalizer3(self->module_params,map$2char$phchar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->if_result_var_name!=((void*)0)) {
        (self->if_result_var_name = come_decrement_ref_count2(self->if_result_var_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->match_it_var!=((void*)0)) {
        come_call_finalizer3(self->match_it_var,list$1sVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->uniq_definition!=((void*)0)) {
        come_call_finalizer3(self->uniq_definition,map$2char$phchar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_644;
struct list_item$1sVar$ph* prev_it_645;
    it_644=self->head;
    while(it_644!=((void*)0)) {
        prev_it_645=it_644;
        it_644=it_644->next;
        come_call_finalizer3(prev_it_645,list_item$1sVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sVar_finalize(struct sVar* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        (self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_687;
int i_688;
char* __result_obj__313;
char* default_value_689;
char* __result_obj__314;
default_value_689 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_687=self->head;
    i_688=0;
    while(it_687!=((void*)0)) {
        if(        position==i_688) {
            __result_obj__313 = come_increment_ref_count(it_687->item);
            (__result_obj__313 = come_decrement_ref_count2(__result_obj__313, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__313;
        }
        it_687=it_687->next;
        i_688++;
    }
    memset(&default_value_689,0,sizeof(char*));
    __result_obj__314 = come_increment_ref_count(default_value_689);
    (default_value_689 = come_decrement_ref_count2(default_value_689, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__314 = come_decrement_ref_count2(__result_obj__314, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__314;
}

