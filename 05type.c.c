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

struct tuple2$2bool$void$p
{
    _Bool v1;
    void* v2;
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
void* come_null_check(void* mem, char* sname, int sline, int id);
void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);
_Bool bool_value(_Bool self);
int int_value(int self);
int int_except(int self, void* parent, void (*block)(void*));
_Bool bool_except(_Bool self, void* parent, void (*block)(void*));
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
void come_free_object(void* mem);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);
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
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute);
void sVarTable_finalize(struct sVarTable* self);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline);
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
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
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
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
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
_Bool is_type_name(char* buf, struct sInfo* info);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key);
static _Bool list$1char$ph_contained(struct list$1char$ph* self, char* item);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
static struct sType* sType_clone(struct sType* self);
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self);
static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_clone(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self);
static unsigned int tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_get_hash_key(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self);
static _Bool tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_equals(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* left, struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* right);
static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2char$phsType$ph$ph_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_initialize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self, struct list$1sType$ph* v1, struct list$1char$ph* v2, struct list$1char$ph* v3, _Bool v4);
static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
struct tuple2$2bool$char$ph* check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
static struct tuple2$2bool$char$ph* tuple2$2bool$char$ph_initialize(struct tuple2$2bool$char$ph* self, _Bool v1, char* v2);
static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct tuple2$2bool$void$p* tuple2$2bool$void$p_initialize(struct tuple2$2bool$void$p* self, _Bool v1, void* v2);
static void tuple2$2bool$void$p$p_finalize(struct tuple2$2bool$void$p* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self);
static void tuple2$2sType$phchar$ph_finalize(struct tuple2$2sType$phchar$ph* self);
static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_clone(struct tuple2$2sType$phchar$ph* self);
static unsigned int tuple2$2sType$phchar$ph_get_hash_key(struct tuple2$2sType$phchar$ph* self);
static _Bool tuple2$2sType$phchar$ph_equals(struct tuple2$2sType$phchar$ph* left, struct tuple2$2sType$phchar$ph* right);
static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType* v1, char* v2);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
void skip_pointer_attribute(struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
static void tuple3$3sType$phchar$phbool$_finalize(struct tuple3$3sType$phchar$phbool$* self);
static struct tuple3$3sType$phchar$phbool$* tuple3$3sType$phchar$phbool$_clone(struct tuple3$3sType$phchar$phbool$* self);
static unsigned int tuple3$3sType$phchar$phbool$_get_hash_key(struct tuple3$3sType$phchar$phbool$* self);
static _Bool tuple3$3sType$phchar$phbool$_equals(struct tuple3$3sType$phchar$phbool$* left, struct tuple3$3sType$phchar$phbool$* right);
static struct tuple3$3sType$phchar$phbool$* tuple3$3sType$phchar$phbool$_initialize(struct tuple3$3sType$phchar$phbool$* self, struct sType* v1, char* v2, _Bool v3);
struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
static int list$1char$ph_length(struct list$1char$ph* self);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static void CVALUE_finalize(struct CVALUE* self);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self);
static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize_with_values(struct list$1sNode$ph* self, int num_value, struct sNode** values);
static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self);
static unsigned int list$1sNode$ph_get_hash_key(struct list$1sNode$ph* self);
static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item);
// uniq global variable
// inline function
static inline int __isspace(int _c){
    return _c==32||(unsigned int)_c-9<5;
}

// body function
static void va_list_finalize(va_list self){
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_132;
struct list$1char$* __result_obj__63;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_132=0;    i_132<num_value;    i_132++    ){
        list$1char$_push_back(self,values[i_132]);
    }
    __result_obj__63 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__63,list$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__63;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value49 = (void*)0;
struct list_item$1char$* litem_133;
void* __right_value50 = (void*)0;
struct list_item$1char$* litem_134;
void* __right_value51 = (void*)0;
struct list_item$1char$* litem_135;
struct list$1char$* __result_obj__62;
    if(    self->len==0) {
        litem_133=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value49=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1227, "struct list_item$1char$*"))));
        litem_133->prev=((void*)0);
        litem_133->next=((void*)0);
        litem_133->item=item;
        self->tail=litem_133;
        self->head=litem_133;
    }
    else if(    self->len==1) {
        litem_134=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value50=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1237, "struct list_item$1char$*"))));
        litem_134->prev=self->head;
        litem_134->next=((void*)0);
        litem_134->item=item;
        self->tail=litem_134;
        self->head->next=litem_134;
    }
    else {
        litem_135=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1247, "struct list_item$1char$*"))));
        litem_135->prev=self->tail;
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail->next=litem_135;
        self->tail=litem_135;
    }
    self->len++;
    __result_obj__62 = self;
    return __result_obj__62;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_136;
struct list_item$1char$* prev_it_137;
    it_136=self->head;
    while(it_136!=((void*)0)) {
        prev_it_137=it_136;
        it_136=it_136->next;
        /*c*/ come_call_finalizer3(prev_it_137,list_item$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_138;
struct list$1char$p* __result_obj__66;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_138=0;    i_138<num_value;    i_138++    ){
        list$1char$p_push_back(self,values[i_138]);
    }
    __result_obj__66 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__66,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__66;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value54 = (void*)0;
struct list_item$1char$p* litem_139;
void* __right_value55 = (void*)0;
struct list_item$1char$p* litem_140;
void* __right_value56 = (void*)0;
struct list_item$1char$p* litem_141;
struct list$1char$p* __result_obj__65;
    if(    self->len==0) {
        litem_139=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value54=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1227, "struct list_item$1char$p*"))));
        litem_139->prev=((void*)0);
        litem_139->next=((void*)0);
        litem_139->item=item;
        self->tail=litem_139;
        self->head=litem_139;
    }
    else if(    self->len==1) {
        litem_140=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value55=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1237, "struct list_item$1char$p*"))));
        litem_140->prev=self->head;
        litem_140->next=((void*)0);
        litem_140->item=item;
        self->tail=litem_140;
        self->head->next=litem_140;
    }
    else {
        litem_141=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1247, "struct list_item$1char$p*"))));
        litem_141->prev=self->tail;
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail->next=litem_141;
        self->tail=litem_141;
    }
    self->len++;
    __result_obj__65 = self;
    return __result_obj__65;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_142;
struct list_item$1char$p* prev_it_143;
    it_142=self->head;
    while(it_142!=((void*)0)) {
        prev_it_143=it_142;
        it_142=it_142->next;
        /*c*/ come_call_finalizer3(prev_it_143,list_item$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_144;
struct list$1short$* __result_obj__69;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_144=0;    i_144<num_value;    i_144++    ){
        list$1short$_push_back(self,values[i_144]);
    }
    __result_obj__69 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__69,list$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__69;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value59 = (void*)0;
struct list_item$1short$* litem_145;
void* __right_value60 = (void*)0;
struct list_item$1short$* litem_146;
void* __right_value61 = (void*)0;
struct list_item$1short$* litem_147;
struct list$1short$* __result_obj__68;
    if(    self->len==0) {
        litem_145=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value59=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1227, "struct list_item$1short$*"))));
        litem_145->prev=((void*)0);
        litem_145->next=((void*)0);
        litem_145->item=item;
        self->tail=litem_145;
        self->head=litem_145;
    }
    else if(    self->len==1) {
        litem_146=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value60=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1237, "struct list_item$1short$*"))));
        litem_146->prev=self->head;
        litem_146->next=((void*)0);
        litem_146->item=item;
        self->tail=litem_146;
        self->head->next=litem_146;
    }
    else {
        litem_147=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1247, "struct list_item$1short$*"))));
        litem_147->prev=self->tail;
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail->next=litem_147;
        self->tail=litem_147;
    }
    self->len++;
    __result_obj__68 = self;
    return __result_obj__68;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_148;
struct list_item$1short$* prev_it_149;
    it_148=self->head;
    while(it_148!=((void*)0)) {
        prev_it_149=it_148;
        it_148=it_148->next;
        /*c*/ come_call_finalizer3(prev_it_149,list_item$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_150;
struct list$1int$* __result_obj__72;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_150=0;    i_150<num_value;    i_150++    ){
        list$1int$_push_back(self,values[i_150]);
    }
    __result_obj__72 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__72,list$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__72;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value64 = (void*)0;
struct list_item$1int$* litem_151;
void* __right_value65 = (void*)0;
struct list_item$1int$* litem_152;
void* __right_value66 = (void*)0;
struct list_item$1int$* litem_153;
struct list$1int$* __result_obj__71;
    if(    self->len==0) {
        litem_151=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value64=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1227, "struct list_item$1int$*"))));
        litem_151->prev=((void*)0);
        litem_151->next=((void*)0);
        litem_151->item=item;
        self->tail=litem_151;
        self->head=litem_151;
    }
    else if(    self->len==1) {
        litem_152=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value65=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1237, "struct list_item$1int$*"))));
        litem_152->prev=self->head;
        litem_152->next=((void*)0);
        litem_152->item=item;
        self->tail=litem_152;
        self->head->next=litem_152;
    }
    else {
        litem_153=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1247, "struct list_item$1int$*"))));
        litem_153->prev=self->tail;
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail->next=litem_153;
        self->tail=litem_153;
    }
    self->len++;
    __result_obj__71 = self;
    return __result_obj__71;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_154;
struct list_item$1int$* prev_it_155;
    it_154=self->head;
    while(it_154!=((void*)0)) {
        prev_it_155=it_154;
        it_154=it_154->next;
        /*c*/ come_call_finalizer3(prev_it_155,list_item$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_156;
struct list$1long$* __result_obj__75;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_156=0;    i_156<num_value;    i_156++    ){
        list$1long$_push_back(self,values[i_156]);
    }
    __result_obj__75 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__75,list$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__75;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value69 = (void*)0;
struct list_item$1long$* litem_157;
void* __right_value70 = (void*)0;
struct list_item$1long$* litem_158;
void* __right_value71 = (void*)0;
struct list_item$1long$* litem_159;
struct list$1long$* __result_obj__74;
    if(    self->len==0) {
        litem_157=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value69=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1227, "struct list_item$1long$*"))));
        litem_157->prev=((void*)0);
        litem_157->next=((void*)0);
        litem_157->item=item;
        self->tail=litem_157;
        self->head=litem_157;
    }
    else if(    self->len==1) {
        litem_158=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value70=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1237, "struct list_item$1long$*"))));
        litem_158->prev=self->head;
        litem_158->next=((void*)0);
        litem_158->item=item;
        self->tail=litem_158;
        self->head->next=litem_158;
    }
    else {
        litem_159=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1247, "struct list_item$1long$*"))));
        litem_159->prev=self->tail;
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail->next=litem_159;
        self->tail=litem_159;
    }
    self->len++;
    __result_obj__74 = self;
    return __result_obj__74;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_160;
struct list_item$1long$* prev_it_161;
    it_160=self->head;
    while(it_160!=((void*)0)) {
        prev_it_161=it_160;
        it_160=it_160->next;
        /*c*/ come_call_finalizer3(prev_it_161,list_item$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_162;
struct list$1float$* __result_obj__78;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_162=0;    i_162<num_value;    i_162++    ){
        list$1float$_push_back(self,values[i_162]);
    }
    __result_obj__78 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__78,list$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__78;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value74 = (void*)0;
struct list_item$1float$* litem_163;
void* __right_value75 = (void*)0;
struct list_item$1float$* litem_164;
void* __right_value76 = (void*)0;
struct list_item$1float$* litem_165;
struct list$1float$* __result_obj__77;
    if(    self->len==0) {
        litem_163=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value74=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1227, "struct list_item$1float$*"))));
        litem_163->prev=((void*)0);
        litem_163->next=((void*)0);
        litem_163->item=item;
        self->tail=litem_163;
        self->head=litem_163;
    }
    else if(    self->len==1) {
        litem_164=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value75=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1237, "struct list_item$1float$*"))));
        litem_164->prev=self->head;
        litem_164->next=((void*)0);
        litem_164->item=item;
        self->tail=litem_164;
        self->head->next=litem_164;
    }
    else {
        litem_165=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1247, "struct list_item$1float$*"))));
        litem_165->prev=self->tail;
        litem_165->next=((void*)0);
        litem_165->item=item;
        self->tail->next=litem_165;
        self->tail=litem_165;
    }
    self->len++;
    __result_obj__77 = self;
    return __result_obj__77;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_166;
struct list_item$1float$* prev_it_167;
    it_166=self->head;
    while(it_166!=((void*)0)) {
        prev_it_167=it_166;
        it_166=it_166->next;
        /*c*/ come_call_finalizer3(prev_it_167,list_item$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_168;
struct list$1double$* __result_obj__81;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_168=0;    i_168<num_value;    i_168++    ){
        list$1double$_push_back(self,values[i_168]);
    }
    __result_obj__81 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__81,list$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__81;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value79 = (void*)0;
struct list_item$1double$* litem_169;
void* __right_value80 = (void*)0;
struct list_item$1double$* litem_170;
void* __right_value81 = (void*)0;
struct list_item$1double$* litem_171;
struct list$1double$* __result_obj__80;
    if(    self->len==0) {
        litem_169=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value79=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1227, "struct list_item$1double$*"))));
        litem_169->prev=((void*)0);
        litem_169->next=((void*)0);
        litem_169->item=item;
        self->tail=litem_169;
        self->head=litem_169;
    }
    else if(    self->len==1) {
        litem_170=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value80=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1237, "struct list_item$1double$*"))));
        litem_170->prev=self->head;
        litem_170->next=((void*)0);
        litem_170->item=item;
        self->tail=litem_170;
        self->head->next=litem_170;
    }
    else {
        litem_171=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1247, "struct list_item$1double$*"))));
        litem_171->prev=self->tail;
        litem_171->next=((void*)0);
        litem_171->item=item;
        self->tail->next=litem_171;
        self->tail=litem_171;
    }
    self->len++;
    __result_obj__80 = self;
    return __result_obj__80;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_172;
struct list_item$1double$* prev_it_173;
    it_172=self->head;
    while(it_172!=((void*)0)) {
        prev_it_173=it_172;
        it_172=it_172->next;
        /*c*/ come_call_finalizer3(prev_it_173,list_item$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__115;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__115 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__115,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__115;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_207;
struct list_item$1char$ph* prev_it_208;
    it_207=self->head;
    while(it_207!=((void*)0)) {
        prev_it_208=it_207;
        it_207=it_207->next;
        /*c*/ come_call_finalizer3(prev_it_208,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value128 = (void*)0;
struct list_item$1char$ph* litem_212;
char* __dec_obj13;
void* __right_value129 = (void*)0;
struct list_item$1char$ph* litem_213;
char* __dec_obj14;
void* __right_value130 = (void*)0;
struct list_item$1char$ph* litem_214;
char* __dec_obj15;
struct list$1char$ph* __result_obj__117;
    if(    self->len==0) {
        litem_212=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value128=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1227, "struct list_item$1char$ph*"))));
        litem_212->prev=((void*)0);
        litem_212->next=((void*)0);
        __dec_obj13=litem_212->item,
        litem_212->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_212;
        self->head=litem_212;
    }
    else if(    self->len==1) {
        litem_213=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value129=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1237, "struct list_item$1char$ph*"))));
        litem_213->prev=self->head;
        litem_213->next=((void*)0);
        __dec_obj14=litem_213->item,
        litem_213->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_213;
        self->head->next=litem_213;
    }
    else {
        litem_214=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1247, "struct list_item$1char$ph*"))));
        litem_214->prev=self->tail;
        litem_214->next=((void*)0);
        __dec_obj15=litem_214->item,
        litem_214->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_214;
        self->tail=litem_214;
    }
    self->len++;
    __result_obj__117 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__117;
}

_Bool is_type_name(char* buf, struct sInfo* info){
void* __right_value186 = (void*)0;
struct sClass* klass_250;
void* __right_value187 = (void*)0;
struct sType* type_260;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
struct sClass* generics_class_264;
void* __right_value190 = (void*)0;
_Bool generics_type_name_265;
void* __right_value191 = (void*)0;
_Bool mgenerics_type_name_271;
    klass_250=((struct sClass*)(__right_value186=map$2char$phsClass$ph$p_operator_load_element(info->classes,buf)));
    /*c*/ come_call_finalizer3(__right_value186,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    type_260=((struct sType*)(__right_value187=map$2char$phsType$ph$p_operator_load_element(info->types,buf)));
    /*c*/ come_call_finalizer3(__right_value187,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    generics_class_264=((struct sClass*)(__right_value189=map$2char$phsClass$ph$p_operator_load_element(info->generics_classes,((char*)(__right_value188=__builtin_string(buf))))));
    (__right_value188 = come_decrement_ref_count(__right_value188, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value189,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    generics_type_name_265=list$1char$ph_contained(info->generics_type_names,((char*)(__right_value190=__builtin_string(buf))));
    (__right_value190 = come_decrement_ref_count(__right_value190, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    mgenerics_type_name_271=list$1char$ph_contained(info->method_generics_type_names,((char*)(__right_value191=__builtin_string(buf))));
    (__right_value191 = come_decrement_ref_count(__right_value191, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    if(    gComeC) {
        return (type_260&&type_260->mTypedef)||(klass_250&&klass_250->mNumber)||(klass_250&&klass_250->mFloat)||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__noreturn")||charp_operator_equals(buf,"_noreturn")||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"__declspec")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||((charp_operator_equals(buf,"__attribute")||charp_operator_equals(buf,"__attribute__"))&&*info->p==40)||charp_operator_equals(buf,"void");
    }
    else {
        return generics_class_264||generics_type_name_265||mgenerics_type_name_271||klass_250||type_260||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||(info->in_top_level&&charp_operator_equals(buf,"_Noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"__noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"_noreturn"))||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"__declspec")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||((charp_operator_equals(buf,"__attribute")||charp_operator_equals(buf,"__attribute__"))&&*info->p==40)||(charp_operator_equals(buf,"immutable"))||(charp_operator_equals(buf,"mutable"))||(charp_operator_equals(buf,"tup")&&(*info->p==58||*info->p==40))||(info->in_top_level&&charp_operator_equals(buf,"exception"))||(info->in_top_level&&charp_operator_equals(buf,"record"))||(info->in_top_level&&charp_operator_equals(buf,"uniq"));
    }
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_251;
unsigned int hash_252;
unsigned int it_253;
struct sClass* __result_obj__167;
struct sClass* __result_obj__168;
struct sClass* __result_obj__169;
struct sClass* __result_obj__170;
default_value_251 = (void*)0;
    memset(&default_value_251,0,sizeof(struct sClass*));
    hash_252=string_get_hash_key(((char*)key))%self->size;
    it_253=hash_252;
    while((_Bool)1) {
        if(        self->item_existance[it_253]) {
            if(            string_equals(self->keys[it_253],key)) {
                __result_obj__167 = come_increment_ref_count(self->items[it_253]);
                /*c*/ come_call_finalizer3(default_value_251,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__167,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__167;
            }
            it_253++;
            if(            it_253>=self->size) {
                it_253=0;
            }
            else if(            it_253==hash_252) {
                __result_obj__168 = come_increment_ref_count(default_value_251);
                /*c*/ come_call_finalizer3(default_value_251,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__168,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__168;
            }
        }
        else {
            __result_obj__169 = come_increment_ref_count(default_value_251);
            /*c*/ come_call_finalizer3(default_value_251,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__169,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__169;
        }
    }
    __result_obj__170 = come_increment_ref_count(default_value_251);
    /*c*/ come_call_finalizer3(default_value_251,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__170,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__170;
}

static void sClass_finalize(struct sClass* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mFields,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_254;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_255;
    it_254=self->head;
    while(it_254!=((void*)0)) {
        prev_it_255=it_254;
        it_254=it_254->next;
        /*c*/ come_call_finalizer3(prev_it_255,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list_item$1sType$ph* it_256;
struct list_item$1sType$ph* prev_it_257;
    it_256=self->head;
    while(it_256!=((void*)0)) {
        prev_it_257=it_256;
        it_256=it_256->next;
        /*c*/ come_call_finalizer3(prev_it_257,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_258;
struct list_item$1sNode$ph* prev_it_259;
    it_258=self->head;
    while(it_258!=((void*)0)) {
        prev_it_259=it_258;
        it_258=it_258->next;
        /*c*/ come_call_finalizer3(prev_it_259,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value_261;
unsigned int hash_262;
unsigned int it_263;
struct sType* __result_obj__171;
struct sType* __result_obj__172;
struct sType* __result_obj__173;
struct sType* __result_obj__174;
default_value_261 = (void*)0;
    memset(&default_value_261,0,sizeof(struct sType*));
    hash_262=string_get_hash_key(((char*)key))%self->size;
    it_263=hash_262;
    while((_Bool)1) {
        if(        self->item_existance[it_263]) {
            if(            string_equals(self->keys[it_263],key)) {
                __result_obj__171 = come_increment_ref_count(self->items[it_263]);
                /*c*/ come_call_finalizer3(default_value_261,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__171,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__171;
            }
            it_263++;
            if(            it_263>=self->size) {
                it_263=0;
            }
            else if(            it_263==hash_262) {
                __result_obj__172 = come_increment_ref_count(default_value_261);
                /*c*/ come_call_finalizer3(default_value_261,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__172,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__172;
            }
        }
        else {
            __result_obj__173 = come_increment_ref_count(default_value_261);
            /*c*/ come_call_finalizer3(default_value_261,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__173,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__173;
        }
    }
    __result_obj__174 = come_increment_ref_count(default_value_261);
    /*c*/ come_call_finalizer3(default_value_261,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__174,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__174;
}

static _Bool list$1char$ph_contained(struct list$1char$ph* self, char* item){
char* it_268;
    for(    it_268=list$1char$ph_begin(self);    !list$1char$ph_end(self);    it_268=list$1char$ph_next(self)    ){
        if(        string_equals(it_268,item)) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_266;
char* __result_obj__175;
char* __result_obj__176;
char* result_267;
char* __result_obj__177;
result_266 = (void*)0;
result_267 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_266,0,sizeof(char*));
        __result_obj__175 = result_266;
        return __result_obj__175;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__176 = self->it->item;
        return __result_obj__176;
    }
    memset(&result_267,0,sizeof(char*));
    __result_obj__177 = result_267;
    return __result_obj__177;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_269;
char* __result_obj__178;
char* __result_obj__179;
char* result_270;
char* __result_obj__180;
result_269 = (void*)0;
result_270 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_269,0,sizeof(char*));
        __result_obj__178 = result_269;
        return __result_obj__178;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__179 = self->it->item;
        return __result_obj__179;
    }
    memset(&result_270,0,sizeof(char*));
    __result_obj__180 = result_270;
    return __result_obj__180;
}

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info){
struct list$1sType$ph* o2_saved_272;
struct sType* it_275;
_Bool __result_obj__187;
    for(    o2_saved_272=(struct list$1sType$ph*)come_increment_ref_count((type->mGenericsTypes)),it_275=list$1sType$ph_begin((o2_saved_272));    !list$1sType$ph_end((o2_saved_272));    it_275=list$1sType$ph_next((o2_saved_272))    ){
        if(        is_contained_generics_class(it_275,info)) {
            __result_obj__187 = (_Bool)1;
            /*c*/ come_call_finalizer3(o2_saved_272,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__187;
        }
    }
    /*c*/ come_call_finalizer3(o2_saved_272,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    type->mClass->mGenerics) {
        return (_Bool)1;
    }
    if(    type->mClass->mMethodGenerics) {
        return (_Bool)1;
    }
    return (_Bool)0;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_273;
struct sType* __result_obj__181;
struct sType* __result_obj__182;
struct sType* result_274;
struct sType* __result_obj__183;
result_273 = (void*)0;
result_274 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_273,0,sizeof(struct sType*));
        __result_obj__181 = result_273;
        return __result_obj__181;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__182 = self->it->item;
        return __result_obj__182;
    }
    memset(&result_274,0,sizeof(struct sType*));
    __result_obj__183 = result_274;
    return __result_obj__183;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_276;
struct sType* __result_obj__184;
struct sType* __result_obj__185;
struct sType* result_277;
struct sType* __result_obj__186;
result_276 = (void*)0;
result_277 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_276,0,sizeof(struct sType*));
        __result_obj__184 = result_276;
        return __result_obj__184;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__185 = self->it->item;
        return __result_obj__185;
    }
    memset(&result_277,0,sizeof(struct sType*));
    __result_obj__186 = result_277;
    return __result_obj__186;
}

struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_){
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
struct list$1sType$ph* param_types_278;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
struct list$1char$ph* param_names_279;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
struct list$1char$ph* param_default_parametors_280;
_Bool var_args_281;
void* __right_value201 = (void*)0;
void* __right_value237 = (void*)0;
struct sType* type__285;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
_Bool void_param_306;
char* p_307;
int sline_308;
void* __right_value240 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var1 = (void*)0;
struct sType* param_type_309=0;
char* param_name_310=0;
_Bool err_311=0;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__206;
void* __right_value247 = (void*)0;
struct sType* param_type2_322;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
char* p_326;
_Bool no_comma_327;
void* __right_value253 = (void*)0;
struct sNode* node_328;
char* p2_329;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__208;
    param_types_278=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05type.c", 74, "struct list$1sType$ph*"))));
    param_names_279=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05type.c", 75, "struct list$1char$ph*"))));
    param_default_parametors_280=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05type.c", 76, "struct list$1char$ph*"))));
    var_args_281=(_Bool)0;
    if(    in_constructor_) {
        list$1char$ph_add(param_names_279,(char*)come_increment_ref_count(xsprintf("self")));
        type__285=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->class_type));
        type__285->mHeap=(_Bool)1;
        list$1sType$ph_add(param_types_278,(struct sType*)come_increment_ref_count(type__285));
        list$1char$ph_add(param_default_parametors_280,((void*)0));
        /*c*/ come_call_finalizer3(type__285,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    info->in_class) {
        list$1char$ph_add(param_names_279,(char*)come_increment_ref_count(xsprintf("self")));
        list$1sType$ph_add(param_types_278,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->class_type)));
        list$1char$ph_add(param_default_parametors_280,((void*)0));
    }
    expected_next_character(40,info);
    void_param_306=(_Bool)0;
    {
        p_307=info->p;
        sline_308=info->sline;
        if(        strmemcmp(info->p,"void")) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(            *info->p==41) {
                void_param_306=(_Bool)1;
            }
        }
        info->p=p_307;
        info->sline=sline_308;
    }
    if(    void_param_306) {
        if(        strmemcmp(info->p,"void")) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            multiple_assign_var1=((struct tuple3$3sType$phchar$phbool$*)(__right_value240=parse_type(info,(_Bool)1,(_Bool)0,(_Bool)1)));
            param_type_309=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            param_name_310=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_311=multiple_assign_var1->v3;
            /*c*/ come_call_finalizer3(__right_value240,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_311) {
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                __result_obj__206 = come_increment_ref_count(((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value246=tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_initialize((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$**)come_increment_ref_count((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_calloc(1, sizeof(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$)*(1), "05type.c", 138, "struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$")),(struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)((void*)0)),(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)((void*)0)),(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)((void*)0)),(_Bool)0))));
                /*c*/ come_call_finalizer3(param_type_309,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (param_name_310 = come_decrement_ref_count(param_name_310, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(param_types_278,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_names_279,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_default_parametors_280,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__right_value246,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__206,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__206;
            }
            param_type2_322=(struct sType*)come_increment_ref_count(solve_generics(param_type_309,info->generics_type,info));
            list$1sType$ph_push_back(param_types_278,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type2_322)));
            list$1char$ph_push_back(param_names_279,(char*)come_increment_ref_count((char*)come_memdup(param_name_310, "05type.c", 144, "char*")));
            if(            *info->p==61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                p_326=info->p;
                no_comma_327=info->no_comma;
                info->no_comma=(_Bool)1;
                node_328=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_327;
                p2_329=info->p;
                char buf_330[p2_329-p_326+1];
                memset(&buf_330, 0, sizeof(char)                *(p2_329-p_326+1)                );
                memcpy(buf_330,p_326,p2_329-p_326);
                buf_330[p2_329-p_326]=0;
                list$1char$ph_push_back(param_default_parametors_280,(char*)come_increment_ref_count(__builtin_string(buf_330)));
                ((node_328) ? node_328 = come_decrement_ref_count(node_328, ((struct sNode*)node_328)->finalize, ((struct sNode*)node_328)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                list$1char$ph_push_back(param_default_parametors_280,((void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                strmemcmp(info->p,"...")) {
                    info->p+=strlen("...");
                    skip_spaces_and_lf(info);
                    var_args_281=(_Bool)1;
                    expected_next_character(41,info);
                    /*c*/ come_call_finalizer3(param_type_309,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (param_name_310 = come_decrement_ref_count(param_name_310, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(param_type2_322,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    break;
                }
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                /*c*/ come_call_finalizer3(param_type_309,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (param_name_310 = come_decrement_ref_count(param_name_310, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(param_type2_322,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
            }
            /*c*/ come_call_finalizer3(param_type_309,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (param_name_310 = come_decrement_ref_count(param_name_310, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(param_type2_322,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    __result_obj__208 = come_increment_ref_count(((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value256=tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_initialize((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$**)come_increment_ref_count((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_calloc(1, sizeof(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$)*(1), "05type.c", 196, "struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$")),(struct list$1sType$ph*)come_increment_ref_count(param_types_278),(struct list$1char$ph*)come_increment_ref_count(param_names_279),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_280),var_args_281))));
    /*c*/ come_call_finalizer3(param_types_278,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_names_279,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_default_parametors_280,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value256,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__208,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__208;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__188;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__188 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__188,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__188;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value198 = (void*)0;
struct list_item$1char$ph* litem_282;
char* __dec_obj16;
void* __right_value199 = (void*)0;
struct list_item$1char$ph* litem_283;
char* __dec_obj17;
void* __right_value200 = (void*)0;
struct list_item$1char$ph* litem_284;
char* __dec_obj18;
struct list$1char$ph* __result_obj__189;
    if(    self->len==0) {
        litem_282=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value198=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1157, "struct list_item$1char$ph*"))));
        litem_282->prev=((void*)0);
        litem_282->next=((void*)0);
        __dec_obj16=litem_282->item,
        litem_282->item=(char*)come_increment_ref_count(item);
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_282;
        self->head=litem_282;
    }
    else if(    self->len==1) {
        litem_283=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value199=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1167, "struct list_item$1char$ph*"))));
        litem_283->prev=self->head;
        litem_283->next=((void*)0);
        __dec_obj17=litem_283->item,
        litem_283->item=(char*)come_increment_ref_count(item);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_283;
        self->head->next=litem_283;
    }
    else {
        litem_284=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value200=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1177, "struct list_item$1char$ph*"))));
        litem_284->prev=self->tail;
        litem_284->next=((void*)0);
        __dec_obj18=litem_284->item,
        litem_284->item=(char*)come_increment_ref_count(item);
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_284;
        self->tail=litem_284;
    }
    self->len++;
    __result_obj__189 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__189;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__190;
void* __right_value202 = (void*)0;
struct sType* result_286;
void* __right_value203 = (void*)0;
struct sType* __dec_obj19;
void* __right_value204 = (void*)0;
struct sType* __dec_obj20;
void* __right_value212 = (void*)0;
struct list$1sType$ph* __dec_obj24;
void* __right_value213 = (void*)0;
struct sType* __dec_obj25;
void* __right_value214 = (void*)0;
struct sType* __dec_obj26;
void* __right_value216 = (void*)0;
struct sNode* __dec_obj27;
void* __right_value217 = (void*)0;
struct sNode* __dec_obj28;
void* __right_value218 = (void*)0;
char* __dec_obj29;
void* __right_value219 = (void*)0;
char* __dec_obj30;
void* __right_value220 = (void*)0;
char* __dec_obj31;
void* __right_value228 = (void*)0;
struct list$1sNode$ph* __dec_obj35;
void* __right_value229 = (void*)0;
char* __dec_obj36;
void* __right_value230 = (void*)0;
struct list$1sType$ph* __dec_obj37;
void* __right_value235 = (void*)0;
struct list$1char$ph* __dec_obj38;
void* __right_value236 = (void*)0;
struct sType* __dec_obj39;
struct sType* __result_obj__202;
    if(    self==(void*)0) {
        __result_obj__190 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__190,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__190;
    }
    result_286=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_286->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj19=result_286->mOriginalLoadVarType,
        result_286->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj19,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj20=result_286->mChannelType,
        result_286->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj20,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj24=result_286->mGenericsTypes,
        result_286->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj24,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj25=result_286->mNoSolvedGenericsType,
        result_286->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_286->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj26=result_286->mAnyOriginalType,
        result_286->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj27=result_286->mSizeNum,
        result_286->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        (__dec_obj27 ? __dec_obj27 = come_decrement_ref_count(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj28=result_286->mAlignas,
        result_286->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        (__dec_obj28 ? __dec_obj28 = come_decrement_ref_count(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj29=result_286->mTupleName,
        result_286->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 13, "char*"));
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj30=result_286->mAttribute,
        result_286->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 14, "char*"));
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_286->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_286->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_286->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_286->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_286->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_286->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_286->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_286->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_286->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_286->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_286->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_286->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_286->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_286->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_286->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_286->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_286->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_286->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_286->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_286->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_286->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_286->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_286->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj31=result_286->mAsmName,
        result_286->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 38, "char*"));
        __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_286->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_286->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_286->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj35=result_286->mArrayNum,
        result_286->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj35,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_286->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_286->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_286->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_286->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_286->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj36=result_286->mOriginalTypeName,
        result_286->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 48, "char*"));
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_286->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_286->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_286->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_286->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj37=result_286->mParamTypes,
        result_286->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj37,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj38=result_286->mParamNames,
        result_286->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj38,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj39=result_286->mResultType,
        result_286->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj39,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_286->mVarArgs=self->mVarArgs;
    }
    __result_obj__202 = come_increment_ref_count(result_286);
    /*c*/ come_call_finalizer3(result_286,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__202,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__202;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__191;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
struct list$1sType$ph* result_287;
struct list_item$1sType$ph* it_288;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
struct list$1sType$ph* __result_obj__193;
    if(    self==((void*)0)) {
        __result_obj__191 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__191,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__191;
    }
    result_287=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1138, "struct list$1sType$ph*"))));
    it_288=self->head;
    while(it_288!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_287,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_288->item)));
        }
        else {
            list$1sType$ph_add(result_287,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_288->item)));
        }
        it_288=it_288->next;
    }
    __result_obj__193 = come_increment_ref_count(result_287);
    /*c*/ come_call_finalizer3(result_287,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__193,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__193;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value207 = (void*)0;
struct list_item$1sType$ph* litem_289;
struct sType* __dec_obj21;
void* __right_value208 = (void*)0;
struct list_item$1sType$ph* litem_290;
struct sType* __dec_obj22;
void* __right_value209 = (void*)0;
struct list_item$1sType$ph* litem_291;
struct sType* __dec_obj23;
struct list$1sType$ph* __result_obj__192;
    if(    self->len==0) {
        litem_289=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value207=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1157, "struct list_item$1sType$ph*"))));
        litem_289->prev=((void*)0);
        litem_289->next=((void*)0);
        __dec_obj21=litem_289->item,
        litem_289->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj21,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_289;
        self->head=litem_289;
    }
    else if(    self->len==1) {
        litem_290=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value208=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1167, "struct list_item$1sType$ph*"))));
        litem_290->prev=self->head;
        litem_290->next=((void*)0);
        __dec_obj22=litem_290->item,
        litem_290->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj22,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_290;
        self->head->next=litem_290;
    }
    else {
        litem_291=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value209=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1177, "struct list_item$1sType$ph*"))));
        litem_291->prev=self->tail;
        litem_291->next=((void*)0);
        __dec_obj23=litem_291->item,
        litem_291->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj23,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_291;
        self->tail=litem_291;
    }
    self->len++;
    __result_obj__192 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__192;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_292;
struct list_item$1sType$ph* prev_it_293;
    it_292=self->head;
    while(it_292!=((void*)0)) {
        prev_it_293=it_292;
        it_292=it_292->next;
        /*c*/ come_call_finalizer3(prev_it_293,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__194;
void* __right_value215 = (void*)0;
struct sNode* result_294;
struct sNode* __result_obj__195;
    if(    self==(void*)0) {
        __result_obj__194 = come_increment_ref_count((void*)0);
        ((__result_obj__194) ? __result_obj__194 = come_decrement_ref_count(__result_obj__194, ((struct sNode*)__result_obj__194)->finalize, ((struct sNode*)__result_obj__194)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__194;
    }
    result_294=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_294->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_294->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_294->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_294->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_294->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_294->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_294->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_294->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_294->kind=self->kind;
    }
    __result_obj__195 = come_increment_ref_count(result_294);
    ((result_294) ? result_294 = come_decrement_ref_count(result_294, ((struct sNode*)result_294)->finalize, ((struct sNode*)result_294)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__195) ? __result_obj__195 = come_decrement_ref_count(__result_obj__195, ((struct sNode*)__result_obj__195)->finalize, ((struct sNode*)__result_obj__195)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__195;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__196;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
struct list$1sNode$ph* result_295;
struct list_item$1sNode$ph* it_296;
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
struct list$1sNode$ph* __result_obj__199;
    if(    self==((void*)0)) {
        __result_obj__196 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__196,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__196;
    }
    result_295=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1138, "struct list$1sNode$ph*"))));
    it_296=self->head;
    while(it_296!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_295,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_296->item)));
        }
        else {
            list$1sNode$ph_add(result_295,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_296->item)));
        }
        it_296=it_296->next;
    }
    __result_obj__199 = come_increment_ref_count(result_295);
    /*c*/ come_call_finalizer3(result_295,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__199,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__199;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__197;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__197 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__197,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__197;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value223 = (void*)0;
struct list_item$1sNode$ph* litem_297;
struct sNode* __dec_obj32;
void* __right_value224 = (void*)0;
struct list_item$1sNode$ph* litem_298;
struct sNode* __dec_obj33;
void* __right_value225 = (void*)0;
struct list_item$1sNode$ph* litem_299;
struct sNode* __dec_obj34;
struct list$1sNode$ph* __result_obj__198;
    if(    self->len==0) {
        litem_297=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value223=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1157, "struct list_item$1sNode$ph*"))));
        litem_297->prev=((void*)0);
        litem_297->next=((void*)0);
        __dec_obj32=litem_297->item,
        litem_297->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj32 ? __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_297;
        self->head=litem_297;
    }
    else if(    self->len==1) {
        litem_298=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value224=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1167, "struct list_item$1sNode$ph*"))));
        litem_298->prev=self->head;
        litem_298->next=((void*)0);
        __dec_obj33=litem_298->item,
        litem_298->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_298;
        self->head->next=litem_298;
    }
    else {
        litem_299=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value225=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1177, "struct list_item$1sNode$ph*"))));
        litem_299->prev=self->tail;
        litem_299->next=((void*)0);
        __dec_obj34=litem_299->item,
        litem_299->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj34 ? __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_299;
        self->tail=litem_299;
    }
    self->len++;
    __result_obj__198 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__198;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_300;
struct list_item$1sNode$ph* prev_it_301;
    it_300=self->head;
    while(it_300!=((void*)0)) {
        prev_it_301=it_300;
        it_300=it_300->next;
        /*c*/ come_call_finalizer3(prev_it_301,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__200;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
struct list$1char$ph* result_302;
struct list_item$1char$ph* it_303;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
struct list$1char$ph* __result_obj__201;
    if(    self==((void*)0)) {
        __result_obj__200 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__200,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__200;
    }
    result_302=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1138, "struct list$1char$ph*"))));
    it_303=self->head;
    while(it_303!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_302,(char*)come_increment_ref_count((char*)come_memdup(it_303->item, "./comelang.h", 1143, "char*")));
        }
        else {
            list$1char$ph_add(result_302,(char*)come_increment_ref_count((char*)come_memdup(it_303->item, "./comelang.h", 1146, "char*")));
        }
        it_303=it_303->next;
    }
    __result_obj__201 = come_increment_ref_count(result_302);
    /*c*/ come_call_finalizer3(result_302,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__201,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__201;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_304;
struct list_item$1char$ph* prev_it_305;
    it_304=self->head;
    while(it_304!=((void*)0)) {
        prev_it_305=it_304;
        it_304=it_304->next;
        /*c*/ come_call_finalizer3(prev_it_305,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v2,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v3,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_clone(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self){
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__203;
void* __right_value241 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* result_312;
void* __right_value242 = (void*)0;
struct list$1sType$ph* __dec_obj40;
void* __right_value243 = (void*)0;
struct list$1char$ph* __dec_obj41;
void* __right_value244 = (void*)0;
struct list$1char$ph* __dec_obj42;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__204;
    if(    self==(void*)0) {
        __result_obj__203 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__203,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__203;
    }
    result_312=(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_increment_ref_count((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_calloc(1, sizeof(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$)*(1), "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_clone", 3, "struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj40=result_312->v1,
        result_312->v1=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->v1));
        /*b*/ come_call_finalizer3(__dec_obj40,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj41=result_312->v2,
        result_312->v2=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->v2));
        /*b*/ come_call_finalizer3(__dec_obj41,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        __dec_obj42=result_312->v3,
        result_312->v3=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->v3));
        /*b*/ come_call_finalizer3(__dec_obj42,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_312->v4=self->v4;
    }
    __result_obj__204 = come_increment_ref_count(result_312);
    /*c*/ come_call_finalizer3(result_312,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__204,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__204;
}

static unsigned int tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_get_hash_key(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self){
unsigned int result_313;
    result_313=0;
    result_313+=int_get_hash_key(((int)self->v1));
    result_313+=int_get_hash_key(((int)self->v2));
    result_313+=int_get_hash_key(((int)self->v3));
    result_313+=int_get_hash_key(((int)self->v4));
    return result_313;
}

static _Bool tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_equals(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* left, struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* right){
    if(    !list$1sType$ph_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph_equals(left->v3,right->v3)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->v4,right->v4)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_314;
struct list_item$1sType$ph* it2_315;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_314=left->head;
    it2_315=right->head;
    while(it_314!=((void*)0)) {
        if(        !sType_equals(it_314->item,it2_315->item)) {
            return (_Bool)0;
        }
        it_314=it_314->next;
        it2_315=it2_315->next;
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
    if(    !list$1sType$ph_equals(left->mGenericsTypes,right->mGenericsTypes)) {
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
    if(    !list$1sNode$ph_equals(left->mArrayNum,right->mArrayNum)) {
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
    if(    !list$1sType$ph_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph_equals(left->mParamNames,right->mParamNames)) {
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
    if(    !list$1tuple2$2char$phsType$ph$ph_equals(left->mFields,right->mFields)) {
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

static _Bool list$1tuple2$2char$phsType$ph$ph_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right){
struct list_item$1tuple2$2char$phsType$ph$ph* it_316;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_317;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_316=left->head;
    it2_317=right->head;
    while(it_316!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph_equals(it_316->item,it2_317->item)) {
            return (_Bool)0;
        }
        it_316=it_316->next;
        it2_317=it2_317->next;
    }
    return (_Bool)1;
}

static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right){
    if(    !string_equals(self->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sType_equals(self->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_318;
struct list_item$1sNode$ph* it2_319;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_318=left->head;
    it2_319=right->head;
    while(it_318!=((void*)0)) {
        if(        !sNode_equals(it_318->item,it2_319->item)) {
            return (_Bool)0;
        }
        it_318=it_318->next;
        it2_319=it2_319->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_320;
struct list_item$1char$ph* it2_321;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_320=left->head;
    it2_321=right->head;
    while(it_320!=((void*)0)) {
        if(        !string_equals(it_320->item,it2_321->item)) {
            return (_Bool)0;
        }
        it_320=it_320->next;
        it2_321=it2_321->next;
    }
    return (_Bool)1;
}

static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_initialize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self, struct list$1sType$ph* v1, struct list$1char$ph* v2, struct list$1char$ph* v3, _Bool v4){
struct list$1sType$ph* __dec_obj43;
struct list$1char$ph* __dec_obj44;
struct list$1char$ph* __dec_obj45;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__205;
    __dec_obj43=self->v1,
    self->v1=(struct list$1sType$ph*)come_increment_ref_count(v1);
    /*b*/ come_call_finalizer3(__dec_obj43,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj44=self->v2,
    self->v2=(struct list$1char$ph*)come_increment_ref_count(v2);
    /*b*/ come_call_finalizer3(__dec_obj44,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj45=self->v3,
    self->v3=(struct list$1char$ph*)come_increment_ref_count(v3);
    /*b*/ come_call_finalizer3(__dec_obj45,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->v4=v4;
    __result_obj__205 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(v1,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(v2,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(v3,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__205,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__205;
}

static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v2,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v3,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value248 = (void*)0;
struct list_item$1sType$ph* litem_323;
struct sType* __dec_obj46;
void* __right_value249 = (void*)0;
struct list_item$1sType$ph* litem_324;
struct sType* __dec_obj47;
void* __right_value250 = (void*)0;
struct list_item$1sType$ph* litem_325;
struct sType* __dec_obj48;
struct list$1sType$ph* __result_obj__207;
    if(    self->len==0) {
        litem_323=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value248=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1227, "struct list_item$1sType$ph*"))));
        litem_323->prev=((void*)0);
        litem_323->next=((void*)0);
        __dec_obj46=litem_323->item,
        litem_323->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj46,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_323;
        self->head=litem_323;
    }
    else if(    self->len==1) {
        litem_324=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value249=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1237, "struct list_item$1sType$ph*"))));
        litem_324->prev=self->head;
        litem_324->next=((void*)0);
        __dec_obj47=litem_324->item,
        litem_324->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj47,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_324;
        self->head->next=litem_324;
    }
    else {
        litem_325=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value250=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1247, "struct list_item$1sType$ph*"))));
        litem_325->prev=self->tail;
        litem_325->next=((void*)0);
        __dec_obj48=litem_325->item,
        litem_325->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_325;
        self->tail=litem_325;
    }
    self->len++;
    __result_obj__207 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__207;
}

struct tuple2$2bool$char$ph* check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info){
void* __right_value257 = (void*)0;
struct sType* left_type2_331;
void* __right_value258 = (void*)0;
struct sType* right_type2_332;
struct sType* left_no_solved_generics_type_333;
struct sType* right_no_solved_generics_type_334;
struct sClass* left_class_335;
struct sClass* right_class_336;
_Bool parent_class_337;
void* __right_value259 = (void*)0;
_Bool __null_value1;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__210;
_Bool __null_value2;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__211;
struct sClass* klass_338;
_Bool flag__339;
void* __right_value266 = (void*)0;
_Bool __null_value3;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__212;
_Bool __null_value4;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__213;
_Bool __null_value5;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__214;
void* __right_value276 = (void*)0;
char* left_type3_340;
void* __right_value277 = (void*)0;
char* __dec_obj50;
void* __right_value278 = (void*)0;
struct sType* __dec_obj51;
void* __right_value279 = (void*)0;
struct sType* __dec_obj52;
_Bool __null_value6;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__215;
void* __right_value283 = (void*)0;
char* left_type3_341;
void* __right_value284 = (void*)0;
char* __dec_obj53;
void* __right_value285 = (void*)0;
struct sType* __dec_obj54;
void* __right_value286 = (void*)0;
struct sType* __dec_obj55;
_Bool __null_value7;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__216;
_Bool __null_value8;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__217;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__219;
int i_342;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var2 = (void*)0;
_Bool come_exception_var_1_346=0;
char* Err_347=0;
_Bool _if_conditional1;
_Bool __null_value9;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__222;
void* __right_value301 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var3 = (void*)0;
_Bool come_exception_var_2_348=0;
char* Err_349=0;
_Bool _if_conditional2;
_Bool __null_value10;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__223;
_Bool __null_value11;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__224;
_Bool __null_value12;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__225;
void* __right_value311 = (void*)0;
char* left_type3_350;
void* __right_value312 = (void*)0;
char* __dec_obj56;
void* __right_value313 = (void*)0;
struct sType* __dec_obj57;
void* __right_value314 = (void*)0;
struct sType* __dec_obj58;
_Bool __null_value13;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__226;
void* __right_value318 = (void*)0;
char* left_type3_351;
void* __right_value319 = (void*)0;
char* __dec_obj59;
void* __right_value320 = (void*)0;
struct sType* __dec_obj60;
void* __right_value321 = (void*)0;
struct sType* __dec_obj61;
_Bool __null_value14;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__227;
void* __right_value325 = (void*)0;
char* __dec_obj62;
void* __right_value326 = (void*)0;
struct sType* __dec_obj63;
void* __right_value327 = (void*)0;
struct sType* __dec_obj64;
_Bool __null_value15;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__228;
void* __right_value331 = (void*)0;
char* left_type3_352;
void* __right_value332 = (void*)0;
char* __dec_obj65;
void* __right_value333 = (void*)0;
struct sType* __dec_obj66;
void* __right_value334 = (void*)0;
struct sType* __dec_obj67;
_Bool __null_value16;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__229;
void* __right_value338 = (void*)0;
char* left_type3_353;
void* __right_value339 = (void*)0;
char* __dec_obj68;
void* __right_value340 = (void*)0;
struct sType* __dec_obj69;
void* __right_value341 = (void*)0;
struct sType* __dec_obj70;
_Bool __null_value17;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__230;
_Bool __null_value18;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__231;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__232;
_Bool __null_value19;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__233;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__234;
_Bool __null_value20;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__235;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__236;
_Bool __null_value21;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__237;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__238;
_Bool __null_value22;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__239;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__240;
_Bool __null_value23;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__241;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__242;
_Bool __null_value24;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__243;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__244;
_Bool __null_value25;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__245;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__246;
_Bool __null_value26;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__247;
void* __right_value388 = (void*)0;
char* tmp_354;
void* __right_value389 = (void*)0;
char* __dec_obj71;
void* __right_value390 = (void*)0;
struct sType* __dec_obj72;
void* __right_value391 = (void*)0;
struct sType* __dec_obj73;
_Bool __null_value27;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__248;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__249;
_Bool __null_value28;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__250;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__251;
void* __right_value402 = (void*)0;
char* tmp_355;
void* __right_value403 = (void*)0;
char* __dec_obj74;
void* __right_value404 = (void*)0;
struct sType* __dec_obj75;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__252;
_Bool __null_value29;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__253;
int i_356;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var4 = (void*)0;
_Bool come_exception_var_3_357=0;
char* Err_358=0;
_Bool _if_conditional3;
_Bool __null_value30;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__254;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__255;
memset(&__null_value1, 0, sizeof(_Bool));
memset(&__null_value2, 0, sizeof(_Bool));
memset(&__null_value3, 0, sizeof(_Bool));
memset(&__null_value4, 0, sizeof(_Bool));
memset(&__null_value5, 0, sizeof(_Bool));
memset(&__null_value6, 0, sizeof(_Bool));
memset(&__null_value7, 0, sizeof(_Bool));
memset(&__null_value8, 0, sizeof(_Bool));
memset(&__null_value9, 0, sizeof(_Bool));
memset(&__null_value10, 0, sizeof(_Bool));
memset(&__null_value11, 0, sizeof(_Bool));
memset(&__null_value12, 0, sizeof(_Bool));
memset(&__null_value13, 0, sizeof(_Bool));
memset(&__null_value14, 0, sizeof(_Bool));
memset(&__null_value15, 0, sizeof(_Bool));
memset(&__null_value16, 0, sizeof(_Bool));
memset(&__null_value17, 0, sizeof(_Bool));
memset(&__null_value18, 0, sizeof(_Bool));
memset(&__null_value19, 0, sizeof(_Bool));
memset(&__null_value20, 0, sizeof(_Bool));
memset(&__null_value21, 0, sizeof(_Bool));
memset(&__null_value22, 0, sizeof(_Bool));
memset(&__null_value23, 0, sizeof(_Bool));
memset(&__null_value24, 0, sizeof(_Bool));
memset(&__null_value25, 0, sizeof(_Bool));
memset(&__null_value26, 0, sizeof(_Bool));
memset(&__null_value27, 0, sizeof(_Bool));
memset(&__null_value28, 0, sizeof(_Bool));
memset(&__null_value29, 0, sizeof(_Bool));
memset(&__null_value30, 0, sizeof(_Bool));
    left_type2_331=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
    right_type2_332=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type));
    left_no_solved_generics_type_333=((void*)0);
    if(    left_type2_331->mNoSolvedGenericsType) {
        left_no_solved_generics_type_333=left_type2_331->mNoSolvedGenericsType;
    }
    right_no_solved_generics_type_334=((void*)0);
    if(    right_type2_332->mNoSolvedGenericsType) {
        right_no_solved_generics_type_334=right_type2_332->mNoSolvedGenericsType;
    }
    left_class_335=left_type2_331->mClass;
    right_class_336=right_type2_332->mClass;
    parent_class_337=(_Bool)0;
    if(    string_operator_not_equals(left_class_335->mName,right_class_336->mName)) {
        while(left_class_335&&right_class_336) {
            if(            string_operator_equals(left_class_335->mName,right_class_336->mName)) {
                parent_class_337=(_Bool)1;
            }
            if(            right_class_336->mParentClassName) {
                right_class_336=((struct sClass*)(__right_value259=map$2char$phsClass$ph$p_operator_load_element(info->classes,right_class_336->mParentClassName)));
                /*c*/ come_call_finalizer3(__right_value259,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                right_class_336=((void*)0);
            }
        }
    }
    if(    pointer_massive) {
        if(        left_type2_331->mPointerNum>0&&right_type->mPointerNum==0) {
            if(            string_operator_equals(left_type2_331->mClass->mName,"lambda")) {
            }
            else if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_331->mClass->mName,left_type2_331->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_332->mClass->mName,right_type2_332->mPointerNum);
                info->err_num++;
                __result_obj__210 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value262=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 242, "struct tuple2$2bool$char$ph")),__null_value1,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__right_value262,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__210,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__210;
            }
        }
        else if(        left_type2_331->mPointerNum==0&&right_type->mPointerNum>0) {
            if(            list$1sNode$ph_length(left_type2_331->mArrayNum)>0) {
            }
            else if(            string_operator_equals(left_type2_331->mClass->mName,"lambda")||string_operator_equals(right_type->mClass->mName,"void")) {
            }
            else if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_331->mClass->mName,left_type2_331->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_332->mClass->mName,right_type2_332->mPointerNum);
                info->err_num++;
                __result_obj__211 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value265=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 257, "struct tuple2$2bool$char$ph")),__null_value2,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__right_value265,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__211,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__211;
            }
        }
        else if(        left_type2_331->mPointerNum>0&&right_type->mPointerNum>0) {
            klass_338=right_type->mClass;
            flag__339=(_Bool)0;
            while(klass_338) {
                if(                string_operator_equals(klass_338->mName,left_type2_331->mClass->mName)) {
                    flag__339=(_Bool)1;
                }
                if(                klass_338->mParentClassName) {
                    klass_338=((struct sClass*)(__right_value266=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_338->mParentClassName)));
                    /*c*/ come_call_finalizer3(__right_value266,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else {
                    klass_338=((void*)0);
                }
            }
            if(            string_operator_equals(left_type2_331->mClass->mName,"void")) {
            }
            else if(            string_operator_equals(left_type2_331->mClass->mName,"lambda")) {
            }
            else if(            left_type2_331->mException) {
            }
            else if(            left_no_solved_generics_type_333&&right_no_solved_generics_type_334&&(list$1sType$ph_length(left_no_solved_generics_type_333->mGenericsTypes)>0||list$1sType$ph_length(right_no_solved_generics_type_334->mGenericsTypes)>0)) {
            }
            else if(            strlen(left_type2_331->mClass->mName)>=strlen("tuple")&&memcmp(left_type2_331->mClass->mName,"tuple",strlen("tuple"))==0&&(strlen(right_type->mClass->mName)>=strlen("tuple"))) {
            }
            else if(            string_operator_equals(right_type->mClass->mName,"void")) {
            }
            else if(            string_operator_not_equals(left_type2_331->mClass->mName,right_type->mClass->mName)&&!flag__339) {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_331->mClass->mName,left_type2_331->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_332->mClass->mName,right_type2_332->mPointerNum);
                    info->err_num++;
                    __result_obj__212 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value269=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 299, "struct tuple2$2bool$char$ph")),__null_value3,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                    /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__right_value269,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__212,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__212;
                }
            }
        }
    }
    if(    left_no_solved_generics_type_333&&right_no_solved_generics_type_334) {
        if(        strlen(left_type2_331->mClass->mName)>=strlen("tuple")&&memcmp(left_type2_331->mClass->mName,"tuple",strlen("tuple"))==0&&!(strlen(right_type->mClass->mName)>=strlen("tuple")&&memcmp(right_type->mClass->mName,"tuple",strlen("tuple"))==0)&&(string_operator_not_equals(right_type->mClass->mName,"void")&&right_type->mPointerNum>=1)) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is tuple, right type is none tuple\n");
                info->err_num++;
                __result_obj__213 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value272=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 318, "struct tuple2$2bool$char$ph")),__null_value4,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__right_value272,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__213,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__213;
            }
        }
        else if(        right_type->mPointerNum==0&&left_type2_331->mPointerNum>0) {
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_331->mClass->mNumber&&left_type2_331->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("(3)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type_333->mGenericsTypes),left_no_solved_generics_type_333->mClass->mName,left_type2_331->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type_334->mGenericsTypes),right_no_solved_generics_type_334->mClass->mName,right_type2_332->mClass->mName);
                    info->err_num++;
                    __result_obj__214 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value275=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 332, "struct tuple2$2bool$char$ph")),__null_value5,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                    /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__right_value275,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__214,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__214;
                }
            }
            else {
                left_type3_340=(char*)come_increment_ref_count(make_type_name_string(left_type2_331,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj50=come_value->c_value,
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type3_340,come_value->c_value));
                __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                __dec_obj51=come_value->type,
                come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_331));
                /*b*/ come_call_finalizer3(__dec_obj51,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value->var=((void*)0);
                __dec_obj52=right_type2_332,
                right_type2_332=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_331));
                /*b*/ come_call_finalizer3(__dec_obj52,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (left_type3_340 = come_decrement_ref_count(left_type3_340, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_331->mClass->mFloat&&left_type2_331->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("(2)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type_333->mGenericsTypes),left_no_solved_generics_type_333->mClass->mName,left_type2_331->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type_334->mGenericsTypes),right_no_solved_generics_type_334->mClass->mName,right_type2_332->mClass->mName);
                    info->err_num++;
                    __result_obj__215 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value282=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 353, "struct tuple2$2bool$char$ph")),__null_value6,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                    /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__right_value282,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__215,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__215;
                }
            }
            else {
                left_type3_341=(char*)come_increment_ref_count(make_type_name_string(left_type2_331,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj53=come_value->c_value,
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type3_341,come_value->c_value));
                __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                __dec_obj54=come_value->type,
                come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_331));
                /*b*/ come_call_finalizer3(__dec_obj54,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value->var=((void*)0);
                __dec_obj55=right_type2_332,
                right_type2_332=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_331));
                /*b*/ come_call_finalizer3(__dec_obj55,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (left_type3_341 = come_decrement_ref_count(left_type3_341, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else if(        string_operator_equals(left_type2_331->mClass->mName,right_type2_332->mClass->mName)&&left_type2_331->mPointerNum==right_type2_332->mPointerNum) {
        }
        else if(        string_operator_equals(left_type2_331->mClass->mName,"void")&&left_type2_331->mPointerNum>0&&string_operator_equals(left_type2_331->mClass->mName,right_type2_332->mClass->mName)&&(left_type2_331->mPointerNum!=right_type2_332->mPointerNum||left_type2_331->mHeap!=right_type2_332->mHeap)) {
        }
        else if(        string_operator_equals(left_type2_331->mClass->mName,right_type2_332->mClass->mName)&&(left_type2_331->mPointerNum!=right_type2_332->mPointerNum||left_type2_331->mHeap!=right_type2_332->mHeap)) {
            printf("%s %d %s\n",info->sname,info->sline,msg);
            printf("left type class_name %s\n",left_type2_331->mClass->mName);
            printf("right type class_name %s\n",right_type2_332->mClass->mName);
            printf("left type pointernum %d\n",left_type2_331->mPointerNum);
            printf("right type pointernum %d\n",right_type->mPointerNum);
            printf("left type heap %d\n",left_type2_331->mHeap);
            printf("right type heap %d\n",right_type->mHeap);
            printf("(1)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type_333->mGenericsTypes),left_no_solved_generics_type_333->mClass->mName,left_type2_331->mClass->mName);
            printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type_334->mGenericsTypes),right_no_solved_generics_type_334->mClass->mName,right_type2_332->mClass->mName);
            info->err_num++;
            __result_obj__216 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value289=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 382, "struct tuple2$2bool$char$ph")),__null_value7,(char*)come_increment_ref_count(xsprintf("ERR"))))));
            /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__right_value289,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__216,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__216;
        }
        else if(        list$1sType$ph_length(left_no_solved_generics_type_333->mGenericsTypes)>0) {
            if(            (string_operator_equals(left_no_solved_generics_type_333->mClass->mName,"void")&&left_no_solved_generics_type_333->mPointerNum>0&&right_no_solved_generics_type_334->mPointerNum>0)||(string_operator_equals(right_no_solved_generics_type_334->mClass->mName,"void")&&right_no_solved_generics_type_334->mPointerNum>0&&left_no_solved_generics_type_333->mPointerNum>0)) {
            }
            else {
                if(                list$1sType$ph_length(left_no_solved_generics_type_333->mGenericsTypes)!=list$1sType$ph_length(right_no_solved_generics_type_334->mGenericsTypes)) {
                    if(                    print_err_msg) {
                        printf("%s %d %s\n",info->sname,info->sline,msg);
                        printf("(4)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type_333->mGenericsTypes),left_no_solved_generics_type_333->mClass->mName,left_type2_331->mClass->mName);
                        printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type_334->mGenericsTypes),right_no_solved_generics_type_334->mClass->mName,right_type2_332->mClass->mName);
                        info->err_num++;
                        __result_obj__217 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value292=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 398, "struct tuple2$2bool$char$ph")),__null_value8,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                        /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(__right_value292,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(__result_obj__217,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__217;
                    }
                    __result_obj__219 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value294=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 401, "struct tuple2$2bool$void$p")),(_Bool)0,((void*)0)))));
                    /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__right_value294,tuple2$2bool$void$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__219,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__219;
                }
                for(                i_342=0;                i_342<list$1sType$ph_length(left_no_solved_generics_type_333->mGenericsTypes);                i_342++                ){
                    multiple_assign_var2=((struct tuple2$2bool$char$ph*)(__right_value297=check_assign_type(msg,((struct sType*)(__right_value295=list$1sType$ph$p_operator_load_element(left_no_solved_generics_type_333->mGenericsTypes,i_342))),((struct sType*)(__right_value296=list$1sType$ph$p_operator_load_element(right_no_solved_generics_type_334->mGenericsTypes,i_342))),come_value,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                    come_exception_var_1_346=multiple_assign_var2->v1;
                    Err_347=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                    if(                    (_if_conditional1=(Err_347)),                    /*c*/ come_call_finalizer3(__right_value295,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    /*c*/ come_call_finalizer3(__right_value296,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    /*c*/ come_call_finalizer3(__right_value297,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    _if_conditional1) {
                        __result_obj__222 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value300=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 406, "struct tuple2$2bool$char$ph")),__null_value9,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                        (Err_347 = come_decrement_ref_count(Err_347, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(__right_value300,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(__result_obj__222,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__222;
                    }
                    else {
                    }
                    (Err_347 = come_decrement_ref_count(Err_347, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                multiple_assign_var3=((struct tuple2$2bool$char$ph*)(__right_value301=check_assign_type(msg,left_no_solved_generics_type_333,right_no_solved_generics_type_334,come_value,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_2_348=multiple_assign_var3->v1;
                Err_349=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                if(                (_if_conditional2=(Err_349)),                /*c*/ come_call_finalizer3(__right_value301,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional2) {
                    __result_obj__223 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value304=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 411, "struct tuple2$2bool$char$ph")),__null_value10,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                    (Err_349 = come_decrement_ref_count(Err_349, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__right_value304,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__223,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__223;
                }
                else {
                }
                (Err_349 = come_decrement_ref_count(Err_349, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    else if(    strlen(left_type2_331->mClass->mName)>=strlen("tuple")&&memcmp(left_type2_331->mClass->mName,"tuple",strlen("tuple"))==0&&!(strlen(right_type->mClass->mName)>=strlen("tuple")&&memcmp(right_type->mClass->mName,"tuple",strlen("tuple"))==0)&&(string_operator_not_equals(right_type->mClass->mName,"void")&&right_type->mPointerNum>=1)) {
        if(        print_err_msg) {
            printf("%s %d %s\n",info->sname,info->sline,msg);
            printf("left type is tuple, right type is none tuple\n");
            info->err_num++;
            __result_obj__224 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value307=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 428, "struct tuple2$2bool$char$ph")),__null_value11,(char*)come_increment_ref_count(xsprintf("ERR"))))));
            /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__right_value307,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__224,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__224;
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_331->mClass->mNumber&&left_type2_331->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("(5)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type_333->mGenericsTypes),left_no_solved_generics_type_333->mClass->mName,left_type2_331->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type_334->mGenericsTypes),right_no_solved_generics_type_334->mClass->mName,right_type2_332->mClass->mName);
                info->err_num++;
                __result_obj__225 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value310=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 440, "struct tuple2$2bool$char$ph")),__null_value12,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__right_value310,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__225,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__225;
            }
        }
        else {
            left_type3_350=(char*)come_increment_ref_count(make_type_name_string(left_type2_331,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj56=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type3_350,come_value->c_value));
            __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj57=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_331));
            /*b*/ come_call_finalizer3(__dec_obj57,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj58=right_type2_332,
            right_type2_332=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_331));
            /*b*/ come_call_finalizer3(__dec_obj58,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (left_type3_350 = come_decrement_ref_count(left_type3_350, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_331->mClass->mFloat&&left_type2_331->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("(6)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type_333->mGenericsTypes),left_no_solved_generics_type_333->mClass->mName,left_type2_331->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type_334->mGenericsTypes),right_no_solved_generics_type_334->mClass->mName,right_type2_332->mClass->mName);
                info->err_num++;
                __result_obj__226 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value317=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 461, "struct tuple2$2bool$char$ph")),__null_value13,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__right_value317,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__226,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__226;
            }
        }
        else {
            left_type3_351=(char*)come_increment_ref_count(make_type_name_string(left_type2_331,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj59=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type3_351,come_value->c_value));
            __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj60=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_331));
            /*b*/ come_call_finalizer3(__dec_obj60,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj61=right_type2_332,
            right_type2_332=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_331));
            /*b*/ come_call_finalizer3(__dec_obj61,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (left_type3_351 = come_decrement_ref_count(left_type3_351, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    left_type2_331->mHeap&&!right_type2_332->mHeap&&left_type2_331->mPointerNum>0&&right_type2_332->mPointerNum>0&&string_operator_not_equals(right_type2_332->mClass->mName,"void")&&!info->in_generics_fun&&!left_type2_331->mMultipleTypes&&!right_type->mMultipleTypes) {
        printf("%s %d %s\n",info->sname,info->sline,msg);
        printf("left type is %s pointer num %d heap %d\n",left_type2_331->mClass->mName,left_type2_331->mPointerNum,left_type2_331->mHeap);
        printf("right type is %s pointer num %d heap %d\n",right_type2_332->mClass->mName,right_type2_332->mPointerNum,right_type2_332->mHeap);
        info->err_num++;
        __result_obj__227 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value324=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 481, "struct tuple2$2bool$char$ph")),__null_value14,(char*)come_increment_ref_count(xsprintf("ERR"))))));
        /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value324,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__result_obj__227,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__227;
    }
    else if(    parent_class_337&&left_type2_331->mPointerNum==1&&right_type->mPointerNum==1) {
        __dec_obj62=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("(struct %s*)%s",left_type2_331->mClass->mName,come_value->c_value));
        __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj63=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_331));
        /*b*/ come_call_finalizer3(__dec_obj63,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value->var=((void*)0);
        __dec_obj64=right_type2_332,
        right_type2_332=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_331));
        /*b*/ come_call_finalizer3(__dec_obj64,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_331->mClass->mNumber&&left_type2_331->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_331->mClass->mName,left_type2_331->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_332->mClass->mName,right_type2_332->mPointerNum);
                info->err_num++;
                __result_obj__228 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value330=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 499, "struct tuple2$2bool$char$ph")),__null_value15,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__right_value330,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__228,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__228;
            }
        }
        else {
            left_type3_352=(char*)come_increment_ref_count(make_type_name_string(left_type2_331,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj65=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type3_352,come_value->c_value));
            __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj66=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_331));
            /*b*/ come_call_finalizer3(__dec_obj66,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj67=right_type2_332,
            right_type2_332=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_331));
            /*b*/ come_call_finalizer3(__dec_obj67,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (left_type3_352 = come_decrement_ref_count(left_type3_352, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_331->mClass->mFloat&&left_type2_331->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_331->mClass->mName,left_type2_331->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_332->mClass->mName,right_type2_332->mPointerNum);
                info->err_num++;
                __result_obj__229 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value337=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 520, "struct tuple2$2bool$char$ph")),__null_value16,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__right_value337,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__229,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__229;
            }
        }
        else {
            left_type3_353=(char*)come_increment_ref_count(make_type_name_string(left_type2_331,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj68=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type3_353,come_value->c_value));
            __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj69=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_331));
            /*b*/ come_call_finalizer3(__dec_obj69,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj70=right_type2_332,
            right_type2_332=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_331));
            /*b*/ come_call_finalizer3(__dec_obj70,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (left_type3_353 = come_decrement_ref_count(left_type3_353, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    string_operator_equals(left_type2_331->mClass->mName,right_type2_332->mClass->mName)&&left_type2_331->mPointerNum>0&&right_type2_332->mPointerNum>0&&!right_type2_332->mAllocaValue) {
        if(        left_type2_331->mHeap&&!right_type2_332->mHeap) {
            printf("%s %d %s\n",info->sname,info->sline,msg);
            printf("left type is %s pointer num %d heap %d\n",left_type2_331->mClass->mName,left_type2_331->mPointerNum,left_type2_331->mHeap);
            printf("right type is %s pointer num %d heap %d\n",right_type2_332->mClass->mName,right_type2_332->mPointerNum,right_type2_332->mHeap);
            info->err_num++;
            __result_obj__230 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value344=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 541, "struct tuple2$2bool$char$ph")),__null_value17,(char*)come_increment_ref_count(xsprintf("ERR"))))));
            /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__right_value344,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__230,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__230;
        }
    }
    else if(    check_no_pointer) {
        if(        left_type2_331->mPointerNum>0) {
            if(            right_type2_332->mPointerNum>0) {
                if(                string_operator_equals(left_type2_331->mClass->mName,"void")||string_operator_equals(right_type2_332->mClass->mName,"void")) {
                }
                else if(                string_operator_equals(left_type2_331->mClass->mName,"va_list")||string_operator_equals(right_type2_332->mClass->mName,"va_list")) {
                }
                else if(                string_operator_not_equals(left_type2_331->mClass->mName,right_type2_332->mClass->mName)) {
                    if(                    print_err_msg) {
                        printf("%s %d %s\n",info->sname,info->sline,msg);
                        printf("left type is %s pointer num %d\n",left_type2_331->mClass->mName,left_type2_331->mPointerNum);
                        printf("right type is %s pointer num %d\n",right_type2_332->mClass->mName,right_type2_332->mPointerNum);
                        info->err_num++;
                        __result_obj__231 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value347=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 557, "struct tuple2$2bool$char$ph")),__null_value18,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                        /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(__right_value347,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(__result_obj__231,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__231;
                    }
                    __result_obj__232 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value349=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 559, "struct tuple2$2bool$void$p")),(_Bool)0,((void*)0)))));
                    /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__right_value349,tuple2$2bool$void$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__232,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__232;
                }
            }
            else if(            right_type->mPointerNum==0) {
            }
            else {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_331->mClass->mName,left_type2_331->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_332->mClass->mName,right_type2_332->mPointerNum);
                    info->err_num++;
                    __result_obj__233 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value352=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 570, "struct tuple2$2bool$char$ph")),__null_value19,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                    /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__right_value352,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__233,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__233;
                }
                __result_obj__234 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value354=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 573, "struct tuple2$2bool$void$p")),(_Bool)0,((void*)0)))));
                /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__right_value354,tuple2$2bool$void$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__234,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__234;
            }
        }
        else if(        left_type2_331->mPointerNum==0&&right_type2_332->mPointerNum>0) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_331->mClass->mName,left_type2_331->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_332->mClass->mName,right_type2_332->mPointerNum);
                info->err_num++;
                __result_obj__235 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value357=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 582, "struct tuple2$2bool$char$ph")),__null_value20,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__right_value357,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__235,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__235;
            }
            __result_obj__236 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value359=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 584, "struct tuple2$2bool$void$p")),(_Bool)0,((void*)0)))));
            /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__right_value359,tuple2$2bool$void$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__236,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__236;
        }
        else if(        left_type2_331->mPointerNum>0&&right_type2_332->mPointerNum==0&&string_operator_equals(right_type2_332->mClass->mName,"lambda")&&string_operator_equals(left_type2_331->mClass->mName,"lambda")) {
        }
        else if(        string_operator_not_equals(left_type2_331->mClass->mName,right_type2_332->mClass->mName)) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_331->mClass->mName,left_type2_331->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_332->mClass->mName,right_type2_332->mPointerNum);
                info->err_num++;
                __result_obj__237 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value362=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 594, "struct tuple2$2bool$char$ph")),__null_value21,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__right_value362,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__237,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__237;
            }
            __result_obj__238 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value364=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 596, "struct tuple2$2bool$void$p")),(_Bool)0,((void*)0)))));
            /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__right_value364,tuple2$2bool$void$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__238,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__238;
        }
    }
    else if(    string_operator_equals(left_type2_331->mClass->mName,"char")&&left_type2_331->mPointerNum==1) {
        if(        string_operator_equals(right_type2_332->mClass->mName,"char")&&right_type2_332->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type2_331->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_332->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type2_331->mClass->mName,"va_list")||string_operator_equals(right_type2_332->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_332->mClass->mName,"lambda")) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_331->mClass->mName,left_type2_331->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_332->mClass->mName,right_type2_332->mPointerNum);
                info->err_num++;
                __result_obj__239 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value367=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 612, "struct tuple2$2bool$char$ph")),__null_value22,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__right_value367,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__239,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__239;
            }
            __result_obj__240 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value369=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 615, "struct tuple2$2bool$void$p")),(_Bool)0,((void*)0)))));
            /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__right_value369,tuple2$2bool$void$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__240,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__240;
        }
        else if(        string_operator_equals(right_type2_332->mClass->mName,"void")&&right_type2_332->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_332->mClass->mName,"void")) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_331->mClass->mName,left_type2_331->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_332->mClass->mName,right_type2_332->mPointerNum);
                info->err_num++;
                __result_obj__241 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value372=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 625, "struct tuple2$2bool$char$ph")),__null_value23,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__right_value372,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__241,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__241;
            }
            __result_obj__242 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value374=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 627, "struct tuple2$2bool$void$p")),(_Bool)0,((void*)0)))));
            /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__right_value374,tuple2$2bool$void$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__242,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__242;
        }
        else if(        string_operator_not_equals(left_type2_331->mClass->mName,right_type2_332->mClass->mName)&&!(left_type2_331->mPointerNum>0&&right_type2_332->mPointerNum==0)) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_331->mClass->mName,left_type2_331->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_332->mClass->mName,right_type2_332->mPointerNum);
                info->err_num++;
                __result_obj__243 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value377=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 635, "struct tuple2$2bool$char$ph")),__null_value24,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__right_value377,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__243,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__243;
            }
            __result_obj__244 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value379=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 637, "struct tuple2$2bool$void$p")),(_Bool)0,((void*)0)))));
            /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__right_value379,tuple2$2bool$void$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__244,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__244;
        }
    }
    else if(    string_operator_equals(left_type2_331->mClass->mName,"void")&&left_type2_331->mPointerNum==1) {
        if(        string_operator_equals(right_type2_332->mClass->mName,"void")&&right_type2_332->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type2_331->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_332->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type2_331->mClass->mName,"va_list")||string_operator_equals(right_type2_332->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_332->mClass->mName,"lambda")) {
        }
        else if(        string_operator_equals(right_type2_332->mClass->mName,"void")&&right_type2_332->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_332->mClass->mName,"void")) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_331->mClass->mName,left_type2_331->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_332->mClass->mName,right_type2_332->mPointerNum);
                info->err_num++;
                __result_obj__245 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value382=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 657, "struct tuple2$2bool$char$ph")),__null_value25,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__right_value382,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__245,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__245;
            }
            __result_obj__246 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value384=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 659, "struct tuple2$2bool$void$p")),(_Bool)0,((void*)0)))));
            /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__right_value384,tuple2$2bool$void$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__246,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__246;
        }
        else if(        right_type2_332->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_331->mClass->mName,left_type2_331->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_332->mClass->mName,right_type2_332->mPointerNum);
                    info->err_num++;
                    __result_obj__247 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value387=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 668, "struct tuple2$2bool$char$ph")),__null_value26,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                    /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__right_value387,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__247,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__247;
                }
            }
            else {
                tmp_354=(char*)come_increment_ref_count(xsprintf("/*a*/(void*)%s",come_value->c_value));
                __dec_obj71=come_value->c_value,
                come_value->c_value=(char*)come_increment_ref_count((char*)come_memdup(tmp_354, "05type.c", 673, "char*"));
                __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                __dec_obj72=come_value->type,
                come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_331));
                /*b*/ come_call_finalizer3(__dec_obj72,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value->var=((void*)0);
                __dec_obj73=right_type2_332,
                right_type2_332=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_331));
                /*b*/ come_call_finalizer3(__dec_obj73,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (tmp_354 = come_decrement_ref_count(tmp_354, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    else if(    left_type2_331->mPointerNum>0||(left_type2_331->mPointerNum==0&&left_type2_331->mClass->mStruct)) {
        if(        right_type2_332->mPointerNum>0||(right_type2_332->mPointerNum==0&&right_type2_332->mClass->mStruct)) {
            if(            string_operator_equals(left_type2_331->mClass->mName,"void")||string_operator_equals(right_type2_332->mClass->mName,"void")) {
            }
            else if(            string_operator_equals(left_type2_331->mClass->mName,"va_list")||string_operator_equals(right_type2_332->mClass->mName,"va_list")) {
            }
            else if(            string_operator_not_equals(left_type2_331->mClass->mName,right_type2_332->mClass->mName)) {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_331->mClass->mName,left_type2_331->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_332->mClass->mName,right_type2_332->mPointerNum);
                    info->err_num++;
                    __result_obj__248 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value394=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 693, "struct tuple2$2bool$char$ph")),__null_value27,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                    /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__right_value394,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__248,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__248;
                }
                __result_obj__249 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value396=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 695, "struct tuple2$2bool$void$p")),(_Bool)0,((void*)0)))));
                /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__right_value396,tuple2$2bool$void$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__249,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__249;
            }
            else if(            int_operator_not_equals(left_type2_331->mPointerNum,right_type2_332->mPointerNum)) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d\n",left_type2_331->mClass->mName,left_type2_331->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_332->mClass->mName,right_type2_332->mPointerNum);
            }
            else if(            list$1sNode$ph_length(right_type2_332->mArrayNum)>0) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d array dimetion num %d\n",left_type2_331->mClass->mName,left_type2_331->mPointerNum,list$1sNode$ph_length(left_type2_331->mArrayNum));
                printf("right type is %s pointer num %d array dimetion num %d\n",right_type2_332->mClass->mName,right_type2_332->mPointerNum,list$1sNode$ph_length(right_type2_332->mArrayNum));
            }
        }
        else if(        string_operator_equals(left_type2_331->mClass->mName,"void")||string_operator_equals(right_type2_332->mClass->mName,"void")) {
        }
        else if(        string_operator_equals(left_type2_331->mClass->mName,"va_list")||string_operator_equals(right_type2_332->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(left_type2_331->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_332->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type2_331->mClass->mName,"lambda")&&string_operator_equals(right_type2_332->mClass->mName,"lambda")) {
        }
        else if(        left_type2_331->mPointerNum>0&&right_type2_332->mPointerNum==0&&string_operator_equals(right_type2_332->mClass->mName,"lambda")&&string_operator_equals(left_type2_331->mClass->mName,"lambda")) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_331->mClass->mName,left_type2_331->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_332->mClass->mName,right_type2_332->mPointerNum);
                info->err_num++;
                __result_obj__250 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value399=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 722, "struct tuple2$2bool$char$ph")),__null_value28,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__right_value399,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__250,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__250;
            }
            __result_obj__251 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value401=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 725, "struct tuple2$2bool$void$p")),(_Bool)0,((void*)0)))));
            /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__right_value401,tuple2$2bool$void$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__251,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__251;
        }
        else if(        left_type2_331->mPointerNum>0&&!(string_operator_equals(right_type2_332->mClass->mName,"lambda")&&string_operator_equals(left_type2_331->mClass->mName,"lambda"))&&right_type2_332->mPointerNum==0) {
            tmp_355=(char*)come_increment_ref_count(xsprintf("/*b*/(void*)%s",come_value->c_value));
            __dec_obj74=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count((char*)come_memdup(tmp_355, "05type.c", 729, "char*"));
            __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj75=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_331));
            /*b*/ come_call_finalizer3(__dec_obj75,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __result_obj__252 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value406=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 731, "struct tuple2$2bool$void$p")),(_Bool)1,((void*)0)))));
            (tmp_355 = come_decrement_ref_count(tmp_355, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__right_value406,tuple2$2bool$void$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__252,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__252;
            (tmp_355 = come_decrement_ref_count(tmp_355, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        list$1sType$ph_length(left_type2_331->mGenericsTypes)>0) {
            if(            list$1sType$ph_length(left_type2_331->mGenericsTypes)!=list$1sType$ph_length(right_type2_332->mGenericsTypes)) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_331->mClass->mName,left_type2_331->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_332->mClass->mName,right_type2_332->mPointerNum);
                info->err_num++;
                __result_obj__253 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value409=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 741, "struct tuple2$2bool$char$ph")),__null_value29,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__right_value409,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__253,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__253;
            }
            for(            i_356=0;            i_356<list$1sType$ph_length(left_type2_331->mGenericsTypes);            i_356++            ){
                multiple_assign_var4=((struct tuple2$2bool$char$ph*)(__right_value412=check_assign_type(msg,((struct sType*)(__right_value410=list$1sType$ph$p_operator_load_element(left_type2_331->mGenericsTypes,i_356))),((struct sType*)(__right_value411=list$1sType$ph$p_operator_load_element(right_type2_332->mGenericsTypes,i_356))),come_value,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_3_357=multiple_assign_var4->v1;
                Err_358=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                if(                (_if_conditional3=(Err_358)),                /*c*/ come_call_finalizer3(__right_value410,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                /*c*/ come_call_finalizer3(__right_value411,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                /*c*/ come_call_finalizer3(__right_value412,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional3) {
                    __result_obj__254 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value415=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 745, "struct tuple2$2bool$char$ph")),__null_value30,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                    (Err_358 = come_decrement_ref_count(Err_358, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__right_value415,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__254,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__254;
                }
                else {
                }
                (Err_358 = come_decrement_ref_count(Err_358, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    __result_obj__255 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value417=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 751, "struct tuple2$2bool$void$p")),(_Bool)1,((void*)0)))));
    /*c*/ come_call_finalizer3(left_type2_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(right_type2_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value417,tuple2$2bool$void$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__255,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__255;
}

static struct tuple2$2bool$char$ph* tuple2$2bool$char$ph_initialize(struct tuple2$2bool$char$ph* self, _Bool v1, char* v2){
char* __dec_obj49;
struct tuple2$2bool$char$ph* __result_obj__209;
    self->v1=v1;
    __dec_obj49=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__209 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__209,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__209;
}

static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2bool$void$p* tuple2$2bool$void$p_initialize(struct tuple2$2bool$void$p* self, _Bool v1, void* v2){
struct tuple2$2bool$void$p* __result_obj__218;
    self->v1=v1;
    self->v2=v2;
    __result_obj__218 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2bool$void$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__218,tuple2$2bool$void$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__218;
}

static void tuple2$2bool$void$p$p_finalize(struct tuple2$2bool$void$p* self){
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_343;
int i_344;
struct sType* __result_obj__220;
struct sType* default_value_345;
struct sType* __result_obj__221;
default_value_345 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_343=self->head;
    i_344=0;
    while(it_343!=((void*)0)) {
        if(        position==i_344) {
            __result_obj__220 = come_increment_ref_count(it_343->item);
            /*c*/ come_call_finalizer3(__result_obj__220,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__220;
        }
        it_343=it_343->next;
        i_344++;
    }
    memset(&default_value_345,0,sizeof(struct sType*));
    __result_obj__221 = come_increment_ref_count(default_value_345);
    /*c*/ come_call_finalizer3(default_value_345,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__221,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__221;
}

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info){
}

struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __right_value418 = (void*)0;
struct sType* result_type_359;
char* var_name_360;
char* p_361;
int sline_362;
void* __right_value419 = (void*)0;
char* word_363;
_Bool between_brace_364;
char* p_365;
int sline_366;
void* __right_value420 = (void*)0;
char* word_367;
void* __right_value421 = (void*)0;
char* __dec_obj76;
void* __right_value422 = (void*)0;
char* __dec_obj77;
_Bool no_comma_369;
void* __right_value423 = (void*)0;
struct sNode* node_370;
struct sNode* __dec_obj78;
char* p_371;
int sline_372;
void* __right_value424 = (void*)0;
char* word_373;
void* __right_value425 = (void*)0;
struct sNode* node_374;
void* __right_value429 = (void*)0;
char* attribute_378;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
char* __dec_obj82;
char* __dec_obj83;
void* __right_value432 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct tuple2$2sType$phchar$ph* __result_obj__260;
    result_type_359=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, base_type_name));
    if(    !first) {
        result_type_359->mPointerNum=result_type_359->mTypedefOriginalPointerNum;
    }
    var_name_360=((void*)0);
    {
        p_361=info->p;
        sline_362=info->sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            word_363=(char*)come_increment_ref_count(parse_word(info));
            if(            string_operator_equals(word_363,"const")||string_operator_equals(word_363,"__restrict")||string_operator_equals(word_363,"restrict")||string_operator_equals(word_363,"__user")||string_operator_equals(word_363,"volatile")||string_operator_equals(word_363,"_Nonnull")||string_operator_equals(word_363,"_Nullable")||string_operator_equals(word_363,"_Null_unspecified")||string_operator_equals(word_363,"__user")||string_operator_equals(word_363,"_Addr")) {
            }
            else {
                info->p=p_361;
                info->sline=sline_362;
            }
            (word_363 = come_decrement_ref_count(word_363, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            info->p=p_361;
            info->sline=sline_362;
        }
    }
    between_brace_364=(_Bool)0;
    {
        p_365=info->p;
        sline_366=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_367=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_367,info)) {
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40) {
                        between_brace_364=(_Bool)1;
                    }
                }
                (word_367 = come_decrement_ref_count(word_367, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=p_365;
        info->sline=sline_366;
    }
    parse_sharp_v5(info);
    while(*info->p==42) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        result_type_359->mPointerNum++;
    }
    parse_sharp_v5(info);
    if(    between_brace_364&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    xisalnum(*info->p)||*info->p==95) {
        __dec_obj76=var_name_360,
        var_name_360=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        static int num_anonymous_var_name_368=0;
        num_anonymous_var_name_368++;
        __dec_obj77=var_name_360,
        var_name_360=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_368));
        __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    between_brace_364&&*info->p==41) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    *info->p==58) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma_369=info->no_comma;
        info->no_comma=(_Bool)1;
        node_370=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_369;
        __dec_obj78=result_type_359->mSizeNum,
        result_type_359->mSizeNum=(struct sNode*)come_increment_ref_count(node_370);
        (__dec_obj78 ? __dec_obj78 = come_decrement_ref_count(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        ((node_370) ? node_370 = come_decrement_ref_count(node_370, ((struct sNode*)node_370)->finalize, ((struct sNode*)node_370)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    while(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        {
            p_371=info->p;
            sline_372=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_373=(char*)come_increment_ref_count(parse_word(info));
                if(                string_operator_equals(word_373,"const")||string_operator_equals(word_373,"__restrict")||string_operator_equals(word_373,"restrict")||string_operator_equals(word_373,"__user")||string_operator_equals(word_373,"volatile")||string_operator_equals(word_373,"_Nonnull")||string_operator_equals(word_373,"_Nullable")||string_operator_equals(word_373,"_Null_unspecified")||string_operator_equals(word_373,"__user")||string_operator_equals(word_373,"_Addr")) {
                }
                else {
                    info->p=p_371;
                    info->sline=sline_372;
                }
                (word_373 = come_decrement_ref_count(word_373, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                info->p=p_371;
                info->sline=sline_372;
            }
        }
        if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_359->mArrayPointerType=(_Bool)1;
            result_type_359->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_374=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNode$ph_push_back(result_type_359->mArrayNum,(struct sNode*)come_increment_ref_count(node_374));
        parse_sharp_v5(info);
        result_type_359->mOriginIsArray=(_Bool)1;
        expected_next_character(93,info);
        ((node_374) ? node_374 = come_decrement_ref_count(node_374, ((struct sNode*)node_374)->finalize, ((struct sNode*)node_374)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    attribute_378=(char*)come_increment_ref_count(parse_struct_attribute(info));
    if(    string_operator_not_equals(attribute_378,"")) {
        if(        result_type_359->mAttribute) {
            __dec_obj82=result_type_359->mAttribute,
            result_type_359->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value430=string_operator_add(result_type_359->mAttribute," "))),attribute_378));
            __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (__right_value430 = come_decrement_ref_count(__right_value430, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            __dec_obj83=result_type_359->mAttribute,
            result_type_359->mAttribute=(char*)come_increment_ref_count(attribute_378);
            __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
    ((struct tuple2$2char$phchar$ph*)(__right_value432=parse_attribute(info,(_Bool)0)));
    /*c*/ come_call_finalizer3(__right_value432,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__260 = come_increment_ref_count(((struct tuple2$2sType$phchar$ph*)(__right_value437=tuple2$2sType$phchar$ph_initialize((struct tuple2$2sType$phchar$ph**)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "05type.c", 913, "struct tuple2$2sType$phchar$ph")),(struct sType*)come_increment_ref_count(result_type_359),(char*)come_increment_ref_count(var_name_360)))));
    /*c*/ come_call_finalizer3(base_type_name,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(result_type_359,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name_360 = come_decrement_ref_count(var_name_360, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (attribute_378 = come_decrement_ref_count(attribute_378, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value437,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__260,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__260;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value426 = (void*)0;
struct list_item$1sNode$ph* litem_375;
struct sNode* __dec_obj79;
void* __right_value427 = (void*)0;
struct list_item$1sNode$ph* litem_376;
struct sNode* __dec_obj80;
void* __right_value428 = (void*)0;
struct list_item$1sNode$ph* litem_377;
struct sNode* __dec_obj81;
struct list$1sNode$ph* __result_obj__256;
    if(    self->len==0) {
        litem_375=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value426=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1227, "struct list_item$1sNode$ph*"))));
        litem_375->prev=((void*)0);
        litem_375->next=((void*)0);
        __dec_obj79=litem_375->item,
        litem_375->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj79 ? __dec_obj79 = come_decrement_ref_count(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_375;
        self->head=litem_375;
    }
    else if(    self->len==1) {
        litem_376=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value427=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1237, "struct list_item$1sNode$ph*"))));
        litem_376->prev=self->head;
        litem_376->next=((void*)0);
        __dec_obj80=litem_376->item,
        litem_376->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj80 ? __dec_obj80 = come_decrement_ref_count(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_376;
        self->head->next=litem_376;
    }
    else {
        litem_377=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value428=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1247, "struct list_item$1sNode$ph*"))));
        litem_377->prev=self->tail;
        litem_377->next=((void*)0);
        __dec_obj81=litem_377->item,
        litem_377->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj81 ? __dec_obj81 = come_decrement_ref_count(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_377;
        self->tail=litem_377;
    }
    self->len++;
    __result_obj__256 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__256;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2sType$phchar$ph_finalize(struct tuple2$2sType$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_clone(struct tuple2$2sType$phchar$ph* self){
struct tuple2$2sType$phchar$ph* __result_obj__257;
void* __right_value433 = (void*)0;
struct tuple2$2sType$phchar$ph* result_379;
void* __right_value434 = (void*)0;
struct sType* __dec_obj84;
void* __right_value435 = (void*)0;
char* __dec_obj85;
struct tuple2$2sType$phchar$ph* __result_obj__258;
    if(    self==(void*)0) {
        __result_obj__257 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__257,tuple2$2sType$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__257;
    }
    result_379=(struct tuple2$2sType$phchar$ph*)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "tuple2$2sType$phchar$ph_clone", 3, "struct tuple2$2sType$phchar$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj84=result_379->v1,
        result_379->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        /*b*/ come_call_finalizer3(__dec_obj84,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj85=result_379->v2,
        result_379->v2=(char*)come_increment_ref_count((char*)come_memdup(self->v2, "tuple2$2sType$phchar$ph_clone", 5, "char*"));
        __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__258 = come_increment_ref_count(result_379);
    /*c*/ come_call_finalizer3(result_379,tuple2$2sType$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__258,tuple2$2sType$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__258;
}

static unsigned int tuple2$2sType$phchar$ph_get_hash_key(struct tuple2$2sType$phchar$ph* self){
unsigned int result_380;
    result_380=0;
    result_380+=int_get_hash_key(((int)self->v1));
    result_380+=int_get_hash_key(((int)self->v2));
    return result_380;
}

static _Bool tuple2$2sType$phchar$ph_equals(struct tuple2$2sType$phchar$ph* left, struct tuple2$2sType$phchar$ph* right){
    if(    !sType_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType* v1, char* v2){
struct sType* __dec_obj86;
char* __dec_obj87;
struct tuple2$2sType$phchar$ph* __result_obj__259;
    __dec_obj86=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    /*b*/ come_call_finalizer3(__dec_obj86,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj87=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__259 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__259,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__259;
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

void skip_pointer_attribute(struct sInfo* info){
char* p_381;
int sline_382;
void* __right_value438 = (void*)0;
char* word_383;
int nest_384;
    p_381=info->p;
    sline_382=info->sline;
    if(    xisalpha(*info->p)||*info->p==95) {
        word_383=(char*)come_increment_ref_count(parse_word(info));
        if(        (string_operator_equals(word_383,"__attribute")||string_operator_equals(word_383,"__attribute__"))&&*info->p==40) {
            nest_384=0;
            while(1) {
                if(                *info->p==40) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_384++;
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_384--;
                    if(                    nest_384==0) {
                        break;
                    }
                }
                else if(                *info->p==0) {
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
        else if(        string_operator_equals(word_383,"const")||string_operator_equals(word_383,"__restrict")||string_operator_equals(word_383,"restrict")||string_operator_equals(word_383,"__user")||string_operator_equals(word_383,"volatile")||string_operator_equals(word_383,"_Nonnull")||string_operator_equals(word_383,"_Nullable")||string_operator_equals(word_383,"__nonnull")||string_operator_equals(word_383,"_Null_unspecified")||string_operator_equals(word_383,"__user")||string_operator_equals(word_383,"_Addr")||string_operator_equals(word_383,"__noreturn")||string_operator_equals(word_383,"_noreturn")||string_operator_equals(word_383,"_Noreturn")) {
        }
        else {
            info->p=p_381;
            info->sline=sline_382;
        }
        (word_383 = come_decrement_ref_count(word_383, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        info->p=p_381;
        info->sline=sline_382;
    }
}

struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info){
_Bool no_output_err_385;
void* __right_value439 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var5 = (void*)0;
struct sType* type_386=0;
char* name_387=0;
_Bool err_388=0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__264;
    no_output_err_385=info->no_output_err;
    info->no_output_err=(_Bool)1;
    multiple_assign_var5=((struct tuple3$3sType$phchar$phbool$*)(__right_value439=parse_type(info,parse_variable_name,(_Bool)1,(_Bool)0)));
    type_386=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
    name_387=(char*)come_increment_ref_count(multiple_assign_var5->v2);
    err_388=multiple_assign_var5->v3;
    /*c*/ come_call_finalizer3(__right_value439,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    info->no_output_err=(_Bool)0;
    info->no_output_err=no_output_err_385;
    __result_obj__264 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value444=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 970, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count(type_386),(char*)come_increment_ref_count(name_387),err_388))));
    /*c*/ come_call_finalizer3(type_386,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (name_387 = come_decrement_ref_count(name_387, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value444,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__264,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__264;
}

static void tuple3$3sType$phchar$phbool$_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple3$3sType$phchar$phbool$* tuple3$3sType$phchar$phbool$_clone(struct tuple3$3sType$phchar$phbool$* self){
struct tuple3$3sType$phchar$phbool$* __result_obj__261;
void* __right_value440 = (void*)0;
struct tuple3$3sType$phchar$phbool$* result_389;
void* __right_value441 = (void*)0;
struct sType* __dec_obj88;
void* __right_value442 = (void*)0;
char* __dec_obj89;
struct tuple3$3sType$phchar$phbool$* __result_obj__262;
    if(    self==(void*)0) {
        __result_obj__261 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__261,tuple3$3sType$phchar$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__261;
    }
    result_389=(struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "tuple3$3sType$phchar$phbool$_clone", 3, "struct tuple3$3sType$phchar$phbool$*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj88=result_389->v1,
        result_389->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        /*b*/ come_call_finalizer3(__dec_obj88,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj89=result_389->v2,
        result_389->v2=(char*)come_increment_ref_count((char*)come_memdup(self->v2, "tuple3$3sType$phchar$phbool$_clone", 5, "char*"));
        __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_389->v3=self->v3;
    }
    __result_obj__262 = come_increment_ref_count(result_389);
    /*c*/ come_call_finalizer3(result_389,tuple3$3sType$phchar$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__262,tuple3$3sType$phchar$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__262;
}

static unsigned int tuple3$3sType$phchar$phbool$_get_hash_key(struct tuple3$3sType$phchar$phbool$* self){
unsigned int result_390;
    result_390=0;
    result_390+=int_get_hash_key(((int)self->v1));
    result_390+=int_get_hash_key(((int)self->v2));
    result_390+=int_get_hash_key(((int)self->v3));
    return result_390;
}

static _Bool tuple3$3sType$phchar$phbool$_equals(struct tuple3$3sType$phchar$phbool$* left, struct tuple3$3sType$phchar$phbool$* right){
    if(    !sType_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->v3,right->v3)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple3$3sType$phchar$phbool$* tuple3$3sType$phchar$phbool$_initialize(struct tuple3$3sType$phchar$phbool$* self, struct sType* v1, char* v2, _Bool v3){
struct sType* __dec_obj90;
char* __dec_obj91;
struct tuple3$3sType$phchar$phbool$* __result_obj__263;
    __dec_obj90=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    /*b*/ come_call_finalizer3(__dec_obj90,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj91=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->v3=v3;
    __result_obj__263 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__263,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__263;
}

struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor){
char* head_391;
int head_sline_392;
void* __right_value445 = (void*)0;
char* type_name_393;
_Bool record__394;
_Bool exception__395;
_Bool constant_396;
_Bool static__397;
_Bool volatile__398;
_Bool register__399;
_Bool unsigned__400;
_Bool long__401;
_Bool long_long_402;
_Bool short__403;
_Bool restrict__404;
_Bool struct__405;
_Bool union__406;
_Bool enum__407;
_Bool no_heap_408;
_Bool extern__409;
_Bool inline__410;
_Bool uniq__411;
_Bool tuple__412;
struct sNode* alignas__413;
_Bool anonymous_type_414;
_Bool anonymous_name_415;
_Bool atomic__416;
_Bool object_interface_417;
void* __right_value446 = (void*)0;
char* __dec_obj92;
void* __right_value447 = (void*)0;
char* __dec_obj93;
void* __right_value448 = (void*)0;
char* __dec_obj94;
int brace_num_418;
void* __right_value449 = (void*)0;
char* __dec_obj95;
int brace_num_419;
void* __right_value450 = (void*)0;
char* __dec_obj96;
void* __right_value451 = (void*)0;
char* __dec_obj97;
void* __right_value452 = (void*)0;
char* __dec_obj98;
void* __right_value453 = (void*)0;
char* __dec_obj99;
void* __right_value454 = (void*)0;
char* __dec_obj100;
void* __right_value455 = (void*)0;
struct sNode* exp_420;
struct sNode* __dec_obj101;
void* __right_value456 = (void*)0;
char* __dec_obj102;
void* __right_value457 = (void*)0;
char* __dec_obj103;
void* __right_value458 = (void*)0;
char* __dec_obj104;
void* __right_value459 = (void*)0;
char* __dec_obj105;
void* __right_value460 = (void*)0;
char* __dec_obj106;
void* __right_value461 = (void*)0;
char* __dec_obj107;
void* __right_value462 = (void*)0;
char* __dec_obj108;
void* __right_value463 = (void*)0;
char* __dec_obj109;
void* __right_value464 = (void*)0;
char* __dec_obj110;
char* p_421;
int sline_422;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
char* __dec_obj111;
void* __right_value467 = (void*)0;
char* __dec_obj112;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
char* __dec_obj113;
char* p_423;
int sline_424;
void* __right_value470 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var6 = (void*)0;
int come_exception_var_c1_425=0;
char* Err_426=0;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__265;
char* p_427;
int sline_428;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__266;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct sNode* node_429;
_Bool Value_430;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__267;
char* p_431;
int sline_432;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
char* __dec_obj114;
void* __right_value484 = (void*)0;
char* __dec_obj115;
void* __right_value485 = (void*)0;
char* __dec_obj116;
char* p_433;
int sline_434;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__268;
void* __right_value489 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var7 = (void*)0;
struct sType* type_435=0;
char* name_436=0;
_Bool err_437=0;
char* p_438;
int sline_439;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__269;
void* __right_value494 = (void*)0;
char* __dec_obj117;
void* __right_value495 = (void*)0;
char* __dec_obj118;
void* __right_value496 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var8 = (void*)0;
struct sType* type_440=0;
char* name_441=0;
_Bool err_442=0;
char* p_443;
int sline_444;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__270;
char* p_445;
int sline_446;
void* __right_value500 = (void*)0;
char* __dec_obj119;
void* __right_value501 = (void*)0;
char* __dec_obj120;
void* __right_value502 = (void*)0;
char* __dec_obj121;
void* __right_value503 = (void*)0;
char* __dec_obj122;
void* __right_value504 = (void*)0;
char* __dec_obj123;
void* __right_value505 = (void*)0;
char* __dec_obj124;
void* __right_value506 = (void*)0;
char* __dec_obj125;
char* p_447;
int sline_448;
void* __right_value507 = (void*)0;
char* __dec_obj126;
char* p_449;
int sline_450;
void* __right_value508 = (void*)0;
char* __dec_obj127;
void* __right_value509 = (void*)0;
char* __dec_obj128;
void* __right_value510 = (void*)0;
char* __dec_obj129;
char* p_451;
int sline_452;
void* __right_value511 = (void*)0;
char* __dec_obj130;
void* __right_value512 = (void*)0;
char* __dec_obj131;
void* __right_value513 = (void*)0;
char* __dec_obj132;
void* __right_value514 = (void*)0;
char* __dec_obj133;
void* __right_value515 = (void*)0;
char* __dec_obj134;
void* __right_value516 = (void*)0;
char* __dec_obj135;
void* __right_value517 = (void*)0;
char* __dec_obj136;
void* __right_value518 = (void*)0;
char* __dec_obj137;
void* __right_value519 = (void*)0;
char* __dec_obj138;
void* __right_value520 = (void*)0;
char* __dec_obj139;
void* __right_value521 = (void*)0;
char* __dec_obj140;
char* p_453;
int sline_454;
void* __right_value522 = (void*)0;
char* __dec_obj141;
void* __right_value523 = (void*)0;
char* __dec_obj142;
void* __right_value524 = (void*)0;
char* attribute_455;
int pointer_num_456;
_Bool heap_457;
_Bool refference_458;
_Bool no_refference_459;
_Bool channel_460;
_Bool any_class_461;
_Bool vtable_462;
char* tuple_name_463;
void* __right_value525 = (void*)0;
char* __dec_obj143;
_Bool lambda_flag_464;
char* pX_465;
int slineX_466;
void* __right_value526 = (void*)0;
struct sType* type_467;
char* var_name_468;
_Bool function_pointer_flag_469;
char* p_470;
int sline_471;
void* __right_value527 = (void*)0;
char* word_472;
_Bool var_name_between_brace_473;
char* p_474;
int sline_475;
void* __right_value528 = (void*)0;
char* word_476;
void* __right_value529 = (void*)0;
char* __dec_obj144;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct sNode* node_478;
_Bool Value_479;
void* __right_value532 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var9 = (void*)0;
int come_exception_var_c2_480=0;
char* Err_481=0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__271;
int pointer_num_482;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct sType* __dec_obj145;
void* __right_value538 = (void*)0;
char* __dec_obj146;
void* __right_value539 = (void*)0;
struct sNode* node_483;
_Bool Value_484;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__272;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct sType* __dec_obj147;
void* __right_value545 = (void*)0;
char* __dec_obj148;
void* __right_value546 = (void*)0;
struct sNode* node_485;
_Bool Value_486;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__273;
int pointer_num_487;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct sType* __dec_obj149;
void* __right_value552 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var10 = (void*)0;
int come_exception_var_c3_488=0;
char* Err_489=0;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__274;
void* __right_value555 = (void*)0;
char* attribute_490;
char* __dec_obj150;
void* __right_value556 = (void*)0;
char* __dec_obj151;
void* __right_value557 = (void*)0;
char* __dec_obj152;
void* __right_value558 = (void*)0;
char* __dec_obj153;
void* __right_value559 = (void*)0;
char* __dec_obj154;
_Bool no_comma_493;
void* __right_value560 = (void*)0;
struct sNode* node_494;
struct sNode* __dec_obj155;
void* __right_value561 = (void*)0;
char* attribute2_495;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
char* __dec_obj156;
char* __dec_obj157;
struct sType* result_type_496;
void* __right_value564 = (void*)0;
_Bool _if_conditional4;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct sType* __dec_obj158;
void* __right_value567 = (void*)0;
int i_497;
void* __right_value568 = (void*)0;
_Bool _if_conditional5;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct sType* __dec_obj159;
int i_501;
void* __right_value572 = (void*)0;
_Bool _if_conditional6;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct sType* __dec_obj160;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
struct sType* __dec_obj161;
struct sNode* __dec_obj162;
void* __right_value579 = (void*)0;
char* __dec_obj163;
void* __right_value580 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var11 = (void*)0;
struct list$1sType$ph* param_types_502=0;
struct list$1char$ph* param_names_503=0;
struct list$1char$ph* param_default_parametors_504=0;
_Bool var_args_505=0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct sType* __dec_obj164;
struct sType* __dec_obj165;
struct list$1sType$ph* __dec_obj166;
struct list$1char$ph* __dec_obj167;
int function_pointer_num_506;
struct sType* result_type_507;
void* __right_value584 = (void*)0;
_Bool _if_conditional7;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct sType* __dec_obj168;
void* __right_value587 = (void*)0;
int i_508;
void* __right_value588 = (void*)0;
_Bool _if_conditional8;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct sType* __dec_obj169;
int i_509;
void* __right_value592 = (void*)0;
_Bool _if_conditional9;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
struct sType* __dec_obj170;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
struct sType* __dec_obj171;
struct sNode* __dec_obj172;
void* __right_value599 = (void*)0;
char* __dec_obj173;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__277;
void* __right_value602 = (void*)0;
char* __dec_obj174;
_Bool function_pointer_array_511;
int function_pointer_array_num_512;
int n_513;
void* __right_value603 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var12 = (void*)0;
struct list$1sType$ph* param_types_514=0;
struct list$1char$ph* param_names_515=0;
struct list$1char$ph* param_default_parametors_516=0;
_Bool var_args_517=0;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
struct sType* __dec_obj175;
void* __right_value607 = (void*)0;
struct sType* __dec_obj176;
struct list$1sType$ph* __dec_obj177;
struct list$1char$ph* __dec_obj178;
void* __right_value608 = (void*)0;
struct sNode* exp_518;
_Bool Value_519;
void* __right_value609 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var13 = (void*)0;
int come_exception_var_c4_520=0;
char* Err_521=0;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__278;
void* __right_value612 = (void*)0;
struct CVALUE* come_value_522;
void* __right_value613 = (void*)0;
struct sType* __dec_obj179;
void* __right_value614 = (void*)0;
char* attribute_523;
char* __dec_obj180;
void* __right_value615 = (void*)0;
char* __dec_obj181;
void* __right_value616 = (void*)0;
char* __dec_obj182;
void* __right_value617 = (void*)0;
char* __dec_obj183;
void* __right_value618 = (void*)0;
char* __dec_obj184;
_Bool no_comma_526;
void* __right_value619 = (void*)0;
struct sNode* node_527;
struct sNode* __dec_obj185;
void* __right_value620 = (void*)0;
char* attribute2_528;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
char* __dec_obj186;
char* __dec_obj187;
void* __right_value623 = (void*)0;
_Bool _if_conditional10;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
struct sType* __dec_obj188;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
char* __dec_obj189;
struct sNode* __dec_obj190;
char* __dec_obj191;
int i_529;
void* __right_value628 = (void*)0;
_Bool _if_conditional11;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
struct sType* __dec_obj192;
struct sNode* __dec_obj193;
char* __dec_obj194;
int i_530;
void* __right_value632 = (void*)0;
_Bool _if_conditional12;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
struct sType* __dec_obj195;
struct sNode* __dec_obj196;
char* __dec_obj197;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
_Bool _if_conditional13;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__279;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
struct sType* __dec_obj198;
void* __right_value643 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var14 = (void*)0;
struct sType* generics_type_531=0;
char* var_name_532=0;
_Bool err_533=0;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__280;
void* __right_value646 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var15 = (void*)0;
int come_exception_var_c5_534=0;
char* Err_535=0;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__281;
void* __right_value649 = (void*)0;
struct sType* __dec_obj199;
void* __right_value650 = (void*)0;
char* new_name_536;
struct sNode* __dec_obj200;
char* __dec_obj201;
char* __dec_obj202;
void* __right_value651 = (void*)0;
struct sClass* klass_537;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
struct sClass* klass_575;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct sType* __dec_obj203;
struct sNode* __dec_obj204;
char* __dec_obj205;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct list$1sType$ph* types_576;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var16 = (void*)0;
struct sType* type2_577=0;
char* name_578=0;
_Bool err_579=0;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__297;
void* __right_value675 = (void*)0;
int num_tuples_580;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct sType* __dec_obj206;
struct list$1sType$ph* o2_saved_581;
struct sType* it_582;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct sType* __dec_obj207;
void* __right_value681 = (void*)0;
char* new_name_583;
char* __dec_obj208;
void* __right_value682 = (void*)0;
char* attribute_584;
char* __dec_obj209;
void* __right_value683 = (void*)0;
char* __dec_obj210;
void* __right_value684 = (void*)0;
char* __dec_obj211;
void* __right_value685 = (void*)0;
char* __dec_obj212;
void* __right_value686 = (void*)0;
char* __dec_obj213;
_Bool no_comma_587;
void* __right_value687 = (void*)0;
struct sNode* node_588;
struct sNode* __dec_obj214;
void* __right_value688 = (void*)0;
char* attribute2_589;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
char* __dec_obj215;
char* __dec_obj216;
void* __right_value691 = (void*)0;
struct sNode* node_590;
void* __right_value692 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var17 = (void*)0;
char* asm_name_591=0;
char* attribute2_592=0;
char* __dec_obj217;
char* __dec_obj218;
void* __right_value693 = (void*)0;
struct sType* type_before_593;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
struct sType* __dec_obj219;
void* __right_value697 = (void*)0;
struct sNode* __list_values1___594[1];
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
struct list$1sNode$ph* __dec_obj220;
struct sType* __dec_obj221;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
struct sType* type2_598;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
struct sType* type3_604;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
struct sType* type4_605;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__303;
char* __dec_obj223;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__304;
type_467 = (void*)0;
var_name_468 = (void*)0;
result_type_496 = (void*)0;
result_type_507 = (void*)0;
    head_391=info->p;
    head_sline_392=info->sline;
    info->define_struct=(_Bool)0;
    type_name_393=(char*)come_increment_ref_count(parse_word(info));
    record__394=(_Bool)0;
    exception__395=(_Bool)0;
    constant_396=(_Bool)0;
    static__397=(_Bool)0;
    volatile__398=(_Bool)0;
    register__399=(_Bool)0;
    unsigned__400=(_Bool)0;
    long__401=(_Bool)0;
    long_long_402=(_Bool)0;
    short__403=(_Bool)0;
    restrict__404=(_Bool)0;
    struct__405=(_Bool)0;
    union__406=(_Bool)0;
    enum__407=(_Bool)0;
    no_heap_408=(_Bool)0;
    extern__409=(_Bool)0;
    inline__410=(_Bool)0;
    uniq__411=(_Bool)0;
    tuple__412=(_Bool)0;
    alignas__413=((void*)0);
    anonymous_type_414=(_Bool)0;
    anonymous_name_415=(_Bool)0;
    atomic__416=(_Bool)0;
    object_interface_417=(_Bool)0;
    while((_Bool)1) {
        if(        string_operator_equals(type_name_393,"object")&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            object_interface_417=(_Bool)1;
            __dec_obj92=type_name_393,
            type_name_393=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_393,"_Atomic")) {
            expected_next_character(40,info);
            __dec_obj93=type_name_393,
            type_name_393=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            atomic__416=(_Bool)1;
        }
        else if(        string_operator_equals(type_name_393,"__extension__")) {
            __dec_obj94=type_name_393,
            type_name_393=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_393,"__attribute__")) {
            if(            *info->p==40) {
                brace_num_418=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_418++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_418--;
                        if(                        brace_num_418==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj95=type_name_393,
            type_name_393=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_393,"__declspec")) {
            if(            *info->p==40) {
                brace_num_419=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_419++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_419--;
                        if(                        brace_num_419==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj96=type_name_393,
            type_name_393=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_393,"_Noreturn")) {
            __dec_obj97=type_name_393,
            type_name_393=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_393,"__noreturn")) {
            __dec_obj98=type_name_393,
            type_name_393=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_393,"_Nullable")) {
            __dec_obj99=type_name_393,
            type_name_393=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_393,"_noreturn")) {
            __dec_obj100=type_name_393,
            type_name_393=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_393,"_Alignas")) {
            expected_next_character(40,info);
            exp_420=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj101=alignas__413,
            alignas__413=(struct sNode*)come_increment_ref_count(exp_420);
            (__dec_obj101 ? __dec_obj101 = come_decrement_ref_count(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            expected_next_character(41,info);
            __dec_obj102=type_name_393,
            type_name_393=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            ((exp_420) ? exp_420 = come_decrement_ref_count(exp_420, ((struct sNode*)exp_420)->finalize, ((struct sNode*)exp_420)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        string_operator_equals(type_name_393,"const")) {
            constant_396=(_Bool)1;
            __dec_obj103=type_name_393,
            type_name_393=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_393,"static")) {
            static__397=(_Bool)1;
            __dec_obj104=type_name_393,
            type_name_393=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_393,"uniq")) {
            uniq__411=(_Bool)1;
            __dec_obj105=type_name_393,
            type_name_393=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_393,"record")) {
            record__394=(_Bool)1;
            __dec_obj106=type_name_393,
            type_name_393=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_393,"exception")) {
            exception__395=(_Bool)1;
            __dec_obj107=type_name_393,
            type_name_393=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_393,"extern")) {
            extern__409=(_Bool)1;
            __dec_obj108=type_name_393,
            type_name_393=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_393,"inline")||string_operator_equals(type_name_393,"__inline")||string_operator_equals(type_name_393,"__inline__")||string_operator_equals(type_name_393,"__always_inline")||string_operator_equals(type_name_393,"__forceinline")) {
            inline__410=(_Bool)1;
            __dec_obj109=type_name_393,
            type_name_393=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_393,"volatile")) {
            volatile__398=(_Bool)1;
            __dec_obj110=type_name_393,
            type_name_393=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_393,"struct")) {
            struct__405=(_Bool)1;
            if(            *info->p==123) {
                p_421=info->p;
                sline_422=info->sline;
                ((char*)(__right_value465=skip_block(info)));
                (__right_value465 = come_decrement_ref_count(__right_value465, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                *info->p==59) {
                    anonymous_name_415=(_Bool)1;
                    anonymous_type_414=(_Bool)1;
                    __dec_obj111=type_name_393,
                    type_name_393=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    info->p=p_421;
                    info->sline=sline_422;
                    break;
                }
                else {
                    anonymous_type_414=(_Bool)1;
                    __dec_obj112=type_name_393,
                    type_name_393=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    info->p=p_421;
                    info->sline=sline_422;
                    break;
                }
            }
            parse_sharp_v5(info);
            if(            *info->p!=62) {
                (void)((char*)(__right_value468=parse_struct_attribute(info)));
                (__right_value468 = come_decrement_ref_count(__right_value468, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                __dec_obj113=type_name_393,
                type_name_393=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                parse_sharp_v5(info);
                if(                *info->p==60) {
                    p_423=info->p;
                    sline_424=info->sline;
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==123) {
                            }
                            else {
                                info->p=p_423;
                                info->sline=sline_424;
                            }
                            break;
                        }
                        else if(                        *info->p==0) {
                            multiple_assign_var6=((struct tuple2$2int$char$ph*)(__right_value470=err_msg(info,"invalid struct definition")));
                            come_exception_var_c1_425=multiple_assign_var6->v1;
                            Err_426=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                            ((Err_426)?(puts(Err_426),exit(0)):(0));
                            /*c*/ come_call_finalizer3(__right_value470,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            __result_obj__265 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value472=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1199, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                            (Err_426 = come_decrement_ref_count(Err_426, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (type_name_393 = come_decrement_ref_count(type_name_393, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            ((alignas__413) ? alignas__413 = come_decrement_ref_count(alignas__413, ((struct sNode*)alignas__413)->finalize, ((struct sNode*)alignas__413)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            /*c*/ come_call_finalizer3(__right_value472,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(__result_obj__265,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                            return __result_obj__265;
                            (Err_426 = come_decrement_ref_count(Err_426, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else {
                            info->p++;
                        }
                    }
                }
                if(                *info->p==123) {
                    p_427=info->p;
                    sline_428=info->sline;
                    ((char*)(__right_value473=skip_block(info)));
                    (__right_value473 = come_decrement_ref_count(__right_value473, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (void)((char*)(__right_value474=parse_struct_attribute(info)));
                    (__right_value474 = come_decrement_ref_count(__right_value474, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    if(                    *info->p==59) {
                        info->p=head_391;
                        info->sline=head_sline_392;
                        info->define_struct=(_Bool)1;
                        __result_obj__266 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value476=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1219, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                        (type_name_393 = come_decrement_ref_count(type_name_393, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((alignas__413) ? alignas__413 = come_decrement_ref_count(alignas__413, ((struct sNode*)alignas__413)->finalize, ((struct sNode*)alignas__413)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(__right_value476,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(__result_obj__266,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__266;
                    }
                    else {
                        info->p=p_427;
                        info->sline=sline_428;
                        node_429=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_393),(char*)come_increment_ref_count(xsprintf("")),info));
                        Value_430=node_compile(node_429,info);
                        if(                        !Value_430) {
                            __result_obj__267 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value480=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1231, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                            ((node_429) ? node_429 = come_decrement_ref_count(node_429, ((struct sNode*)node_429)->finalize, ((struct sNode*)node_429)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            (type_name_393 = come_decrement_ref_count(type_name_393, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            ((alignas__413) ? alignas__413 = come_decrement_ref_count(alignas__413, ((struct sNode*)alignas__413)->finalize, ((struct sNode*)alignas__413)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            /*c*/ come_call_finalizer3(__right_value480,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(__result_obj__267,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                            return __result_obj__267;
                        }
                        else {
                        }
                        ((node_429) ? node_429 = come_decrement_ref_count(node_429, ((struct sNode*)node_429)->finalize, ((struct sNode*)node_429)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        break;
                        ((node_429) ? node_429 = come_decrement_ref_count(node_429, ((struct sNode*)node_429)->finalize, ((struct sNode*)node_429)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_393,"union")) {
            union__406=(_Bool)1;
            if(            *info->p==123) {
                p_431=info->p;
                sline_432=info->sline;
                ((char*)(__right_value481=skip_block(info)));
                (__right_value481 = come_decrement_ref_count(__right_value481, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((struct tuple2$2char$phchar$ph*)(__right_value482=parse_attribute(info,(_Bool)0)));
                    /*c*/ come_call_finalizer3(__right_value482,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                if(                *info->p==59) {
                    info->p=head_391;
                    info->sline=head_sline_392;
                    info->define_struct=(_Bool)0;
                    anonymous_type_414=(_Bool)1;
                    __dec_obj114=type_name_393,
                    type_name_393=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    info->p=p_431;
                    info->sline=sline_432;
                    break;
                }
                else {
                    anonymous_type_414=(_Bool)1;
                    __dec_obj115=type_name_393,
                    type_name_393=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    info->p=p_431;
                    info->sline=sline_432;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj116=type_name_393,
            type_name_393=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_433=info->p;
                sline_434=info->sline;
                ((char*)(__right_value486=skip_block(info)));
                (__right_value486 = come_decrement_ref_count(__right_value486, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                *info->p==59) {
                    info->p=head_391;
                    info->sline=head_sline_392;
                    info->define_struct=(_Bool)1;
                    __result_obj__268 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value488=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1288, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    (type_name_393 = come_decrement_ref_count(type_name_393, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__413) ? alignas__413 = come_decrement_ref_count(alignas__413, ((struct sNode*)alignas__413)->finalize, ((struct sNode*)alignas__413)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(__right_value488,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__268,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__268;
                }
                else {
                    anonymous_type_414=(_Bool)1;
                    info->p=p_433;
                    info->sline=sline_434;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_393,"enum")) {
            enum__407=(_Bool)1;
            parse_sharp_v5(info);
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var7=((struct tuple3$3sType$phchar$phbool$*)(__right_value489=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_435=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                name_436=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                err_437=multiple_assign_var7->v3;
                /*c*/ come_call_finalizer3(__right_value489,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type_435,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_436 = come_decrement_ref_count(name_436, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_438=info->p;
                sline_439=info->sline;
                ((char*)(__right_value490=skip_block(info)));
                (__right_value490 = come_decrement_ref_count(__right_value490, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((struct tuple2$2char$phchar$ph*)(__right_value491=parse_attribute(info,(_Bool)0)));
                    /*c*/ come_call_finalizer3(__right_value491,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                if(                *info->p==59) {
                    info->p=head_391;
                    info->sline=head_sline_392;
                    info->define_struct=(_Bool)1;
                    __result_obj__269 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value493=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1326, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    (type_name_393 = come_decrement_ref_count(type_name_393, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__413) ? alignas__413 = come_decrement_ref_count(alignas__413, ((struct sNode*)alignas__413)->finalize, ((struct sNode*)alignas__413)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(__right_value493,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__269,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__269;
                }
                else {
                    anonymous_type_414=(_Bool)1;
                    __dec_obj117=type_name_393,
                    type_name_393=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    info->p=p_438;
                    info->sline=sline_439;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj118=type_name_393,
            type_name_393=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var8=((struct tuple3$3sType$phchar$phbool$*)(__right_value496=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_440=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                name_441=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                err_442=multiple_assign_var8->v3;
                /*c*/ come_call_finalizer3(__right_value496,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type_440,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_441 = come_decrement_ref_count(name_441, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_443=info->p;
                sline_444=info->sline;
                ((char*)(__right_value497=skip_block(info)));
                (__right_value497 = come_decrement_ref_count(__right_value497, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                *info->p==59) {
                    info->p=head_391;
                    info->sline=head_sline_392;
                    info->define_struct=(_Bool)1;
                    __result_obj__270 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value499=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1362, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    (type_name_393 = come_decrement_ref_count(type_name_393, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__413) ? alignas__413 = come_decrement_ref_count(alignas__413, ((struct sNode*)alignas__413)->finalize, ((struct sNode*)alignas__413)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(__right_value499,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__270,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__270;
                }
                else {
                    anonymous_type_414=(_Bool)1;
                    info->p=p_443;
                    info->sline=sline_444;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_393,"long")) {
            {
                p_445=info->p;
                sline_446=info->sline;
                if(                !(xisalpha(*info->p)||*info->p==95)) {
                    info->p=p_445;
                    info->sline=sline_446;
                    __dec_obj119=type_name_393,
                    type_name_393=(char*)come_increment_ref_count(__builtin_string("long"));
                    __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    break;
                }
                else {
                    __dec_obj120=type_name_393,
                    type_name_393=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    if(                    string_operator_equals(type_name_393,"unsigned")) {
                        __dec_obj121=type_name_393,
                        type_name_393=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        string_operator_equals(type_name_393,"int")) {
                            long__401=(_Bool)1;
                            unsigned__400=(_Bool)1;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name_393,"signed")) {
                        __dec_obj122=type_name_393,
                        type_name_393=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        string_operator_equals(type_name_393,"int")) {
                            long__401=(_Bool)1;
                            unsigned__400=(_Bool)0;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name_393,"long")) {
                        p_445=info->p;
                        sline_446=info->sline;
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            long_long_402=(_Bool)1;
                            __dec_obj123=type_name_393,
                            type_name_393=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        }
                        else {
                            long__401=(_Bool)1;
                            break;
                        }
                        if(                        string_operator_equals(type_name_393,"int")) {
                            long_long_402=(_Bool)1;
                            break;
                        }
                        else if(                        !is_type_name(type_name_393,info)) {
                            __dec_obj124=type_name_393,
                            type_name_393=(char*)come_increment_ref_count(__builtin_string("long"));
                            __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                            long_long_402=(_Bool)1;
                            info->p=p_445;
                            info->sline=sline_446;
                            break;
                        }
                    }
                    else if(                    is_type_name(type_name_393,info)) {
                        if(                        long__401) {
                            long_long_402=(_Bool)1;
                            long__401=(_Bool)0;
                        }
                        else {
                            long__401=(_Bool)1;
                        }
                        break;
                    }
                    else {
                        info->p=p_445;
                        info->sline=sline_446;
                        __dec_obj125=type_name_393,
                        type_name_393=(char*)come_increment_ref_count(__builtin_string("long"));
                        __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        break;
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_393,"unsigned")) {
            unsigned__400=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                p_447=info->p;
                sline_448=info->sline;
                __dec_obj126=type_name_393,
                type_name_393=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                if(                string_operator_equals(type_name_393,"short")) {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        p_449=info->p;
                        sline_450=info->sline;
                        __dec_obj127=type_name_393,
                        type_name_393=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        is_type_name(type_name_393,info)) {
                            short__403=(_Bool)1;
                        }
                        else {
                            short__403=(_Bool)1;
                            __dec_obj128=type_name_393,
                            type_name_393=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                            info->p=p_449;
                            info->sline=sline_450;
                        }
                    }
                    else {
                        short__403=(_Bool)1;
                        __dec_obj129=type_name_393,
                        type_name_393=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        break;
                    }
                }
                else if(                string_operator_equals(type_name_393,"long")) {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        p_451=info->p;
                        sline_452=info->sline;
                        __dec_obj130=type_name_393,
                        type_name_393=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        is_type_name(type_name_393,info)) {
                            long__401=(_Bool)1;
                        }
                        else {
                            long__401=(_Bool)1;
                            __dec_obj131=type_name_393,
                            type_name_393=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                            info->p=p_451;
                            info->sline=sline_452;
                        }
                    }
                    else {
                        long__401=(_Bool)1;
                        __dec_obj132=type_name_393,
                        type_name_393=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        break;
                    }
                }
                else if(                !is_type_name(type_name_393,info)) {
                    __dec_obj133=type_name_393,
                    type_name_393=(char*)come_increment_ref_count(__builtin_string("int"));
                    __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    info->p=p_447;
                    info->sline=sline_448;
                    break;
                }
            }
            else {
                __dec_obj134=type_name_393,
                type_name_393=(char*)come_increment_ref_count(__builtin_string("int"));
                __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                break;
            }
        }
        else if(        string_operator_equals(type_name_393,"signed")||string_operator_equals(type_name_393,"__signed__")) {
            unsigned__400=(_Bool)0;
            __dec_obj135=type_name_393,
            type_name_393=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_393,"register")) {
            register__399=(_Bool)1;
            __dec_obj136=type_name_393,
            type_name_393=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_393,"restrict")) {
            restrict__404=(_Bool)1;
            __dec_obj137=type_name_393,
            type_name_393=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_393,"_Addr")) {
            __dec_obj138=type_name_393,
            type_name_393=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_393,"__restrict")) {
            restrict__404=(_Bool)1;
            __dec_obj139=type_name_393,
            type_name_393=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_393,"tup")) {
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                expected_next_character(58,info);
            }
            __dec_obj140=type_name_393,
            type_name_393=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            parse_multiple_type=(_Bool)1;
            tuple__412=(_Bool)1;
        }
        else if(        string_operator_equals(type_name_393,"short")) {
            short__403=(_Bool)0;
            if(            *info->p==58) {
                break;
            }
            else if(            xisalnum(*info->p)) {
                p_453=info->p;
                sline_454=info->sline;
                __dec_obj141=type_name_393,
                type_name_393=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                if(                string_operator_equals(type_name_393,"int")) {
                    short__403=(_Bool)1;
                    break;
                }
                else if(                string_operator_equals(type_name_393,"short")) {
                    short__403=(_Bool)1;
                    break;
                }
                else if(                is_type_name(type_name_393,info)) {
                    info->p=p_453;
                    info->sline=sline_454;
                }
                else {
                    __dec_obj142=type_name_393,
                    type_name_393=(char*)come_increment_ref_count(__builtin_string("short"));
                    __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    info->p=p_453;
                    info->sline=sline_454;
                    break;
                }
            }
            else {
                break;
            }
        }
        else {
            break;
        }
    }
    attribute_455=(char*)come_increment_ref_count(parse_struct_attribute(info));
    skip_pointer_attribute(info);
    pointer_num_456=0;
    heap_457=(_Bool)0;
    refference_458=(_Bool)0;
    no_refference_459=(_Bool)0;
    channel_460=(_Bool)0;
    any_class_461=(_Bool)0;
    vtable_462=(_Bool)0;
    while(1) {
        if(        *info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            pointer_num_456++;
        }
        else if(        *info->p==126&&*(info->p+1)==126) {
            info->p+=2;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            vtable_462=(_Bool)1;
        }
        else if(        *info->p==126) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            any_class_461=(_Bool)1;
        }
        else if(        *info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
            heap_457=(_Bool)1;
        }
        else if(        gComePthread&&*info->p==64) {
            info->p++;
            skip_spaces_and_lf(info);
            channel_460=(_Bool)1;
        }
        else {
            break;
        }
    }
    skip_pointer_attribute(info);
    tuple_name_463=((void*)0);
    if(    *info->p==58&&*(info->p+1)!=58&&tuple__412) {
        info->p++;
        skip_spaces_and_lf(info);
        __dec_obj143=tuple_name_463,
        tuple_name_463=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    atomic__416) {
        expected_next_character(41,info);
    }
    lambda_flag_464=(_Bool)0;
    {
        pX_465=info->p;
        slineX_466=info->sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            (void)((char*)(__right_value526=parse_word(info)));
            (__right_value526 = come_decrement_ref_count(__right_value526, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            *info->p==40&&info->in_typedef) {
                lambda_flag_464=(_Bool)1;
            }
        }
        info->p=pX_465;
        info->sline=slineX_466;
    }
    function_pointer_flag_469=(_Bool)0;
    {
        p_470=info->p;
        sline_471=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            *info->p==42||*info->p==94) {
                function_pointer_flag_469=(_Bool)1;
            }
            else if(            xisalpha(*info->p)||*info->p==95) {
                word_472=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==40) {
                        function_pointer_flag_469=(_Bool)1;
                    }
                }
                (word_472 = come_decrement_ref_count(word_472, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=p_470;
        info->sline=sline_471;
    }
    var_name_between_brace_473=(_Bool)0;
    {
        p_474=info->p;
        sline_475=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_476=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_476,info)) {
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40) {
                        var_name_between_brace_473=(_Bool)1;
                    }
                }
                (word_476 = come_decrement_ref_count(word_476, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=p_474;
        info->sline=sline_475;
    }
    if(    anonymous_type_414&&*info->p==123) {
        static int anonymous_num_477=0;
        if(        struct__405) {
            if(            string_operator_equals(type_name_393,"")) {
                __dec_obj144=type_name_393,
                type_name_393=(char*)come_increment_ref_count(xsprintf("anonymous_typeX%d",++anonymous_num_477));
                __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            node_478=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_393),(char*)come_increment_ref_count(xsprintf("")),info));
            Value_479=node_compile(node_478,info);
            if(            !Value_479) {
                multiple_assign_var9=((struct tuple2$2int$char$ph*)(__right_value532=err_msg(info,"parse_struct is failed")));
                come_exception_var_c2_480=multiple_assign_var9->v1;
                Err_481=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                ((Err_481)?(puts(Err_481),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value532,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __result_obj__271 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value534=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1776, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                (Err_481 = come_decrement_ref_count(Err_481, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_478) ? node_478 = come_decrement_ref_count(node_478, ((struct sNode*)node_478)->finalize, ((struct sNode*)node_478)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (type_name_393 = come_decrement_ref_count(type_name_393, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((alignas__413) ? alignas__413 = come_decrement_ref_count(alignas__413, ((struct sNode*)alignas__413)->finalize, ((struct sNode*)alignas__413)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (attribute_455 = come_decrement_ref_count(attribute_455, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (tuple_name_463 = come_decrement_ref_count(tuple_name_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(type_467,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (var_name_468 = come_decrement_ref_count(var_name_468, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value534,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__271,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__271;
                (Err_481 = come_decrement_ref_count(Err_481, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            pointer_num_482=0;
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_482++;
            }
            __dec_obj145=type_467,
            type_467=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1789, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name_393)),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj145,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            type_467->mPointerNum=pointer_num_482;
            ((node_478) ? node_478 = come_decrement_ref_count(node_478, ((struct sNode*)node_478)->finalize, ((struct sNode*)node_478)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        enum__407) {
            if(            string_operator_equals(type_name_393,"")) {
                __dec_obj146=type_name_393,
                type_name_393=(char*)come_increment_ref_count(xsprintf("anonymous_typeY%d",++anonymous_num_477));
                __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            node_483=(struct sNode*)come_increment_ref_count(parse_enum((char*)come_increment_ref_count(type_name_393),info));
            if(            !info->no_output_err) {
                Value_484=node_compile(node_483,info);
                if(                !Value_484) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    __result_obj__272 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value541=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1803, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    ((node_483) ? node_483 = come_decrement_ref_count(node_483, ((struct sNode*)node_483)->finalize, ((struct sNode*)node_483)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (type_name_393 = come_decrement_ref_count(type_name_393, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__413) ? alignas__413 = come_decrement_ref_count(alignas__413, ((struct sNode*)alignas__413)->finalize, ((struct sNode*)alignas__413)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (attribute_455 = come_decrement_ref_count(attribute_455, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (tuple_name_463 = come_decrement_ref_count(tuple_name_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(type_467,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_468 = come_decrement_ref_count(var_name_468, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(__right_value541,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__272,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__272;
                }
                else {
                }
            }
            __dec_obj147=type_467,
            type_467=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1807, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name_393)),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj147,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            ((node_483) ? node_483 = come_decrement_ref_count(node_483, ((struct sNode*)node_483)->finalize, ((struct sNode*)node_483)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        union__406) {
            if(            string_operator_equals(type_name_393,"")) {
                __dec_obj148=type_name_393,
                type_name_393=(char*)come_increment_ref_count(xsprintf("anonymous_typeZ%d",++anonymous_num_477));
                __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            node_485=(struct sNode*)come_increment_ref_count(parse_union((char*)come_increment_ref_count(type_name_393),info));
            Value_486=node_compile(node_485,info);
            if(            !Value_486) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                __result_obj__273 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value548=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1819, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                ((node_485) ? node_485 = come_decrement_ref_count(node_485, ((struct sNode*)node_485)->finalize, ((struct sNode*)node_485)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (type_name_393 = come_decrement_ref_count(type_name_393, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((alignas__413) ? alignas__413 = come_decrement_ref_count(alignas__413, ((struct sNode*)alignas__413)->finalize, ((struct sNode*)alignas__413)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (attribute_455 = come_decrement_ref_count(attribute_455, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (tuple_name_463 = come_decrement_ref_count(tuple_name_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(type_467,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (var_name_468 = come_decrement_ref_count(var_name_468, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value548,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__273,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__273;
            }
            else {
            }
            pointer_num_487=0;
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_487++;
            }
            __dec_obj149=type_467,
            type_467=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1833, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name_393)),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj149,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            type_467->mPointerNum=pointer_num_487;
            ((node_485) ? node_485 = come_decrement_ref_count(node_485, ((struct sNode*)node_485)->finalize, ((struct sNode*)node_485)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            multiple_assign_var10=((struct tuple2$2int$char$ph*)(__right_value552=err_msg(info,"unexpected { character")));
            come_exception_var_c3_488=multiple_assign_var10->v1;
            Err_489=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            ((Err_489)?(puts(Err_489),exit(0)):(0));
            /*c*/ come_call_finalizer3(__right_value552,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__274 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value554=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1839, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
            (Err_489 = come_decrement_ref_count(Err_489, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (type_name_393 = come_decrement_ref_count(type_name_393, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((alignas__413) ? alignas__413 = come_decrement_ref_count(alignas__413, ((struct sNode*)alignas__413)->finalize, ((struct sNode*)alignas__413)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (attribute_455 = come_decrement_ref_count(attribute_455, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (tuple_name_463 = come_decrement_ref_count(tuple_name_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(type_467,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_468 = come_decrement_ref_count(var_name_468, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value554,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__274,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__274;
            (Err_489 = come_decrement_ref_count(Err_489, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        attribute_490=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_490,"")) {
            __dec_obj150=type_467->mAttribute,
            type_467->mAttribute=(char*)come_increment_ref_count(attribute_490);
            __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_473&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj151=var_name_468,
                var_name_468=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else if(            anonymous_name_415) {
                static int num_anonymous_var_name_491=0;
                num_anonymous_var_name_491++;
                __dec_obj152=var_name_468,
                var_name_468=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_491));
                __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj153=var_name_468,
                var_name_468=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else {
                static int num_anonymous_var_name_492=0;
                num_anonymous_var_name_492++;
                __dec_obj154=var_name_468,
                var_name_468=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_492));
                __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            if(            var_name_between_brace_473&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_493=info->no_comma;
                info->no_comma=(_Bool)1;
                node_494=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_493;
                __dec_obj155=type_467->mSizeNum,
                type_467->mSizeNum=(struct sNode*)come_increment_ref_count(node_494);
                (__dec_obj155 ? __dec_obj155 = come_decrement_ref_count(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                ((node_494) ? node_494 = come_decrement_ref_count(node_494, ((struct sNode*)node_494)->finalize, ((struct sNode*)node_494)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            attribute2_495=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_490,"")&&string_operator_not_equals(attribute2_495,"")) {
                __dec_obj156=type_467->mAttribute,
                type_467->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value562=string_operator_add(attribute_490," "))),attribute2_495));
                __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (__right_value562 = come_decrement_ref_count(__right_value562, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            string_operator_not_equals(attribute2_495,"")) {
                __dec_obj157=type_467->mAttribute,
                type_467->mAttribute=(char*)come_increment_ref_count(attribute2_495);
                __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            (attribute2_495 = come_decrement_ref_count(attribute2_495, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (attribute_490 = come_decrement_ref_count(attribute_490, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    lambda_flag_464) {
        if(        (_if_conditional4=(((struct sType*)(__right_value564=map$2char$phsType$ph$p_operator_load_element(info->types,type_name_393))))),        /*c*/ come_call_finalizer3(__right_value564,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional4) {
            __dec_obj158=result_type_496,
            result_type_496=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value565=map$2char$phsType$ph$p_operator_load_element(info->types,type_name_393)))));
            /*b*/ come_call_finalizer3(__dec_obj158,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value565,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            result_type_496->mClass=((struct sClass*)(__right_value567=map$2char$phsClass$ph$p_operator_load_element(info->classes,result_type_496->mClass->mName)));
            /*c*/ come_call_finalizer3(__right_value567,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        list$1char$ph_contained(info->generics_type_names,type_name_393)) {
            for(            i_497=0;            i_497<list$1char$ph_length(info->generics_type_names);            i_497++            ){
                if(                (_if_conditional5=(string_operator_equals(((char*)(__right_value568=list$1char$ph$p_operator_load_element(info->generics_type_names,i_497))),type_name_393))),                (__right_value568 = come_decrement_ref_count(__right_value568, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _if_conditional5) {
                    __dec_obj159=result_type_496,
                    result_type_496=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1907, "struct sType*")),(char*)come_increment_ref_count(xsprintf("generics_type%d",i_497)),(_Bool)0,info));
                    /*b*/ come_call_finalizer3(__dec_obj159,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
        }
        else if(        list$1char$ph_contained(info->method_generics_type_names,type_name_393)) {
            for(            i_501=0;            i_501<list$1char$ph_length(info->method_generics_type_names);            i_501++            ){
                if(                (_if_conditional6=(string_operator_equals(((char*)(__right_value572=list$1char$ph$p_operator_load_element(info->method_generics_type_names,i_501))),type_name_393))),                (__right_value572 = come_decrement_ref_count(__right_value572, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _if_conditional6) {
                    __dec_obj160=result_type_496,
                    result_type_496=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1914, "struct sType*")),(char*)come_increment_ref_count(xsprintf("mgenerics_type%d",i_501)),(_Bool)0,info));
                    /*b*/ come_call_finalizer3(__dec_obj160,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
        }
        else {
            __dec_obj161=result_type_496,
            result_type_496=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1919, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name_393)),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj161,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        result_type_496->mAtomic=result_type_496->mAtomic||atomic__416;
        result_type_496->mConstant=result_type_496->mConstant||constant_396;
        __dec_obj162=result_type_496->mAlignas,
        result_type_496->mAlignas=(struct sNode*)come_increment_ref_count(alignas__413);
        (__dec_obj162 ? __dec_obj162 = come_decrement_ref_count(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        result_type_496->mRegister=register__399;
        result_type_496->mUnsigned=result_type_496->mUnsigned||unsigned__400;
        result_type_496->mVolatile=volatile__398;
        result_type_496->mRecord=result_type_496->mRecord||record__394;
        result_type_496->mUniq=result_type_496->mUniq||uniq__411;
        result_type_496->mStatic=(result_type_496->mStatic||static__397)&&!result_type_496->mUniq;
        result_type_496->mException=result_type_496->mException||exception__395;
        result_type_496->mExtern=result_type_496->mExtern||extern__409;
        result_type_496->mInline=result_type_496->mInline||inline__410;
        result_type_496->mRestrict=result_type_496->mRestrict||restrict__404;
        result_type_496->mLongLong=result_type_496->mLongLong||long_long_402;
        result_type_496->mLong=result_type_496->mLong||long__401;
        result_type_496->mShort=result_type_496->mShort||short__403;
        result_type_496->mPointerNum=pointer_num_456;
        result_type_496->mHeap=result_type_496->mHeap||heap_457;
        result_type_496->mChannel=result_type_496->mChannel||channel_460;
        __dec_obj163=var_name_468,
        var_name_468=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        multiple_assign_var11=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value580=parse_params(info,(_Bool)0)));
        param_types_502=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var11->v1);
        param_names_503=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var11->v2);
        param_default_parametors_504=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var11->v3);
        var_args_505=multiple_assign_var11->v4;
        /*c*/ come_call_finalizer3(__right_value580,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj164=type_467,
        type_467=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1946, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj164,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj165=type_467->mResultType,
        type_467->mResultType=(struct sType*)come_increment_ref_count(result_type_496);
        /*b*/ come_call_finalizer3(__dec_obj165,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj166=type_467->mParamTypes,
        type_467->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types_502);
        /*b*/ come_call_finalizer3(__dec_obj166,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj167=type_467->mParamNames,
        type_467->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names_503);
        /*b*/ come_call_finalizer3(__dec_obj167,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type_467->mVarArgs=var_args_505;
        type_467->mExtern=extern__409;
        /*c*/ come_call_finalizer3(result_type_496,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_502,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_503,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_504,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    function_pointer_flag_469) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        function_pointer_num_506=0;
        while(*info->p==42||*info->p==94) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            function_pointer_num_506++;
        }
        skip_pointer_attribute(info);
        if(        (_if_conditional7=(((struct sType*)(__right_value584=map$2char$phsType$ph$p_operator_load_element(info->types,type_name_393))))),        /*c*/ come_call_finalizer3(__right_value584,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional7) {
            __dec_obj168=result_type_507,
            result_type_507=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value585=map$2char$phsType$ph$p_operator_load_element(info->types,type_name_393)))));
            /*b*/ come_call_finalizer3(__dec_obj168,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value585,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            result_type_507->mClass=((struct sClass*)(__right_value587=map$2char$phsClass$ph$p_operator_load_element(info->classes,result_type_507->mClass->mName)));
            /*c*/ come_call_finalizer3(__right_value587,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        list$1char$ph_contained(info->generics_type_names,type_name_393)) {
            for(            i_508=0;            i_508<list$1char$ph_length(info->generics_type_names);            i_508++            ){
                if(                (_if_conditional8=(string_operator_equals(((char*)(__right_value588=list$1char$ph$p_operator_load_element(info->generics_type_names,i_508))),type_name_393))),                (__right_value588 = come_decrement_ref_count(__right_value588, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _if_conditional8) {
                    __dec_obj169=result_type_507,
                    result_type_507=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1979, "struct sType*")),(char*)come_increment_ref_count(xsprintf("generics_type%d",i_508)),(_Bool)0,info));
                    /*b*/ come_call_finalizer3(__dec_obj169,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
        }
        else if(        list$1char$ph_contained(info->method_generics_type_names,type_name_393)) {
            for(            i_509=0;            i_509<list$1char$ph_length(info->method_generics_type_names);            i_509++            ){
                if(                (_if_conditional9=(string_operator_equals(((char*)(__right_value592=list$1char$ph$p_operator_load_element(info->method_generics_type_names,i_509))),type_name_393))),                (__right_value592 = come_decrement_ref_count(__right_value592, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _if_conditional9) {
                    __dec_obj170=result_type_507,
                    result_type_507=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1986, "struct sType*")),(char*)come_increment_ref_count(xsprintf("mgenerics_type%d",i_509)),(_Bool)0,info));
                    /*b*/ come_call_finalizer3(__dec_obj170,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
        }
        else {
            __dec_obj171=result_type_507,
            result_type_507=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1991, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name_393)),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj171,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        result_type_507->mConstant=result_type_507->mConstant||constant_396;
        result_type_507->mAtomic=result_type_507->mAtomic||atomic__416;
        __dec_obj172=result_type_507->mAlignas,
        result_type_507->mAlignas=(struct sNode*)come_increment_ref_count(alignas__413);
        (__dec_obj172 ? __dec_obj172 = come_decrement_ref_count(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        result_type_507->mRegister=register__399;
        result_type_507->mUnsigned=result_type_507->mUnsigned||unsigned__400;
        result_type_507->mVolatile=volatile__398;
        result_type_507->mUniq=result_type_507->mUniq||uniq__411;
        result_type_507->mStatic=(result_type_507->mStatic||static__397)&&!result_type_507->mUniq;
        result_type_507->mRecord=result_type_507->mRecord||record__394;
        result_type_507->mException=result_type_507->mException||exception__395;
        result_type_507->mExtern=result_type_507->mExtern||extern__409;
        result_type_507->mInline=result_type_507->mInline||inline__410;
        result_type_507->mRestrict=result_type_507->mRestrict||restrict__404;
        result_type_507->mLongLong=result_type_507->mLongLong||long_long_402;
        result_type_507->mLong=result_type_507->mLong||long__401;
        result_type_507->mShort=result_type_507->mShort||short__403;
        result_type_507->mPointerNum+=pointer_num_456;
        result_type_507->mHeap=result_type_507->mHeap||heap_457;
        result_type_507->mChannel=result_type_507->mChannel||channel_460;
        if(        xisalnum(*info->p)||*info->p==95) {
            __dec_obj173=var_name_468,
            var_name_468=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            if(            *info->p==40) {
                __result_obj__277 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value601=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2017, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count(result_type_507),(char*)come_increment_ref_count(var_name_468),(_Bool)0))));
                /*c*/ come_call_finalizer3(result_type_507,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (type_name_393 = come_decrement_ref_count(type_name_393, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((alignas__413) ? alignas__413 = come_decrement_ref_count(alignas__413, ((struct sNode*)alignas__413)->finalize, ((struct sNode*)alignas__413)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (attribute_455 = come_decrement_ref_count(attribute_455, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (tuple_name_463 = come_decrement_ref_count(tuple_name_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(type_467,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (var_name_468 = come_decrement_ref_count(var_name_468, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value601,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__277,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__277;
            }
        }
        else {
            static int num_anonymous_var_name_510=0;
            num_anonymous_var_name_510++;
            __dec_obj174=var_name_468,
            var_name_468=(char*)come_increment_ref_count(xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_510));
            __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        function_pointer_array_511=(_Bool)0;
        function_pointer_array_num_512=0;
        if(        *info->p==91) {
            info->p++;
            skip_spaces_and_lf(info);
            n_513=0;
            while(xisdigit(*info->p)) {
                n_513=n_513*10+*info->p-48;
                info->p++;
            }
            skip_spaces_and_lf(info);
            function_pointer_array_num_512=n_513;
            if(            *info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                function_pointer_array_511=(_Bool)1;
            }
        }
        expected_next_character(41,info);
        multiple_assign_var12=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value603=parse_params(info,(_Bool)0)));
        param_types_514=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var12->v1);
        param_names_515=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var12->v2);
        param_default_parametors_516=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var12->v3);
        var_args_517=multiple_assign_var12->v4;
        /*c*/ come_call_finalizer3(__right_value603,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj175=type_467,
        type_467=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2049, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj175,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj176=type_467->mResultType,
        type_467->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_507));
        /*b*/ come_call_finalizer3(__dec_obj176,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj177=type_467->mParamTypes,
        type_467->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types_514);
        /*b*/ come_call_finalizer3(__dec_obj177,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj178=type_467->mParamNames,
        type_467->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names_515);
        /*b*/ come_call_finalizer3(__dec_obj178,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type_467->mVarArgs=var_args_517;
        type_467->mExtern=extern__409;
        if(        function_pointer_array_511) {
            type_467->mLambdaArray=(_Bool)1;
            type_467->mLambdaArrayNum=function_pointer_array_num_512;
        }
        type_467->mFunctionPointerNum=function_pointer_num_506;
        /*c*/ come_call_finalizer3(result_type_507,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_514,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_515,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_516,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    string_operator_equals(type_name_393,"__typeof__")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        exp_518=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        Value_519=node_compile(exp_518,info);
        if(        !Value_519) {
            multiple_assign_var13=((struct tuple2$2int$char$ph*)(__right_value609=err_msg(info,"invalid __typeof__ expression")));
            come_exception_var_c4_520=multiple_assign_var13->v1;
            Err_521=(char*)come_increment_ref_count(multiple_assign_var13->v2);
            ((Err_521)?(puts(Err_521),exit(0)):(0));
            /*c*/ come_call_finalizer3(__right_value609,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__278 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value611=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2073, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
            (Err_521 = come_decrement_ref_count(Err_521, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((exp_518) ? exp_518 = come_decrement_ref_count(exp_518, ((struct sNode*)exp_518)->finalize, ((struct sNode*)exp_518)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (type_name_393 = come_decrement_ref_count(type_name_393, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((alignas__413) ? alignas__413 = come_decrement_ref_count(alignas__413, ((struct sNode*)alignas__413)->finalize, ((struct sNode*)alignas__413)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (attribute_455 = come_decrement_ref_count(attribute_455, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (tuple_name_463 = come_decrement_ref_count(tuple_name_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(type_467,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_468 = come_decrement_ref_count(var_name_468, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value611,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__278,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__278;
            (Err_521 = come_decrement_ref_count(Err_521, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
        }
        come_value_522=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj179=type_467,
        type_467=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_522->type));
        /*b*/ come_call_finalizer3(__dec_obj179,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        attribute_523=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_523,"")) {
            __dec_obj180=type_467->mAttribute,
            type_467->mAttribute=(char*)come_increment_ref_count(attribute_523);
            __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_473&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj181=var_name_468,
                var_name_468=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else if(            anonymous_name_415) {
                static int num_anonymous_var_name_524=0;
                num_anonymous_var_name_524++;
                __dec_obj182=var_name_468,
                var_name_468=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_524));
                __dec_obj182 = come_decrement_ref_count(__dec_obj182, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj183=var_name_468,
                var_name_468=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj183 = come_decrement_ref_count(__dec_obj183, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else {
                static int num_anonymous_var_name_525=0;
                num_anonymous_var_name_525++;
                __dec_obj184=var_name_468,
                var_name_468=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_525));
                __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            if(            var_name_between_brace_473&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_526=info->no_comma;
                info->no_comma=(_Bool)1;
                node_527=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_526;
                __dec_obj185=type_467->mSizeNum,
                type_467->mSizeNum=(struct sNode*)come_increment_ref_count(node_527);
                (__dec_obj185 ? __dec_obj185 = come_decrement_ref_count(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                ((node_527) ? node_527 = come_decrement_ref_count(node_527, ((struct sNode*)node_527)->finalize, ((struct sNode*)node_527)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            attribute2_528=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_523,"")&&string_operator_not_equals(attribute2_528,"")) {
                __dec_obj186=type_467->mAttribute,
                type_467->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value621=string_operator_add(attribute_523," "))),attribute2_528));
                __dec_obj186 = come_decrement_ref_count(__dec_obj186, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (__right_value621 = come_decrement_ref_count(__right_value621, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            string_operator_not_equals(attribute2_528,"")) {
                __dec_obj187=type_467->mAttribute,
                type_467->mAttribute=(char*)come_increment_ref_count(attribute2_528);
                __dec_obj187 = come_decrement_ref_count(__dec_obj187, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            (attribute2_528 = come_decrement_ref_count(attribute2_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        ((exp_518) ? exp_518 = come_decrement_ref_count(exp_518, ((struct sNode*)exp_518)->finalize, ((struct sNode*)exp_518)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_522,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (attribute_523 = come_decrement_ref_count(attribute_523, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        if(        (_if_conditional10=(((struct sType*)(__right_value623=map$2char$phsType$ph$p_operator_load_element(info->types,type_name_393))))),        /*c*/ come_call_finalizer3(__right_value623,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional10) {
            __dec_obj188=type_467,
            type_467=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value624=map$2char$phsType$ph$p_operator_load_element(info->types,type_name_393)))));
            /*b*/ come_call_finalizer3(__dec_obj188,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value624,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type_467->mTypedefOriginalPointerNum=type_467->mPointerNum;
            type_467->mClass=((struct sClass*)(__right_value626=map$2char$phsClass$ph$p_operator_load_element(info->classes,type_467->mClass->mName)));
            /*c*/ come_call_finalizer3(__right_value626,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj189=type_467->mOriginalTypeName,
            type_467->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string(type_name_393));
            __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            type_467->mOriginalTypeNamePointerNum=pointer_num_456;
            type_467->mOriginalTypeNameHeap=heap_457;
            type_467->mConstant=type_467->mConstant||constant_396;
            type_467->mAtomic=type_467->mAtomic||atomic__416;
            __dec_obj190=type_467->mAlignas,
            type_467->mAlignas=(struct sNode*)come_increment_ref_count(alignas__413);
            (__dec_obj190 ? __dec_obj190 = come_decrement_ref_count(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            type_467->mRegister=register__399;
            type_467->mUnsigned=type_467->mUnsigned||unsigned__400;
            type_467->mVolatile=volatile__398;
            type_467->mUniq=type_467->mUniq||uniq__411;
            type_467->mStatic=(type_467->mStatic||static__397)&&!type_467->mUniq;
            type_467->mRecord=type_467->mRecord||record__394;
            type_467->mException=type_467->mException||exception__395;
            type_467->mExtern=type_467->mExtern||extern__409;
            type_467->mInline=type_467->mInline||inline__410;
            type_467->mRestrict=type_467->mRestrict||restrict__404;
            type_467->mLongLong=type_467->mLongLong||long_long_402;
            type_467->mLong=type_467->mLong||long__401;
            type_467->mShort=type_467->mShort||short__403;
            type_467->mPointerNum+=pointer_num_456;
            type_467->mHeap=type_467->mHeap||heap_457;
            type_467->mChannel=type_467->mChannel||channel_460;
            __dec_obj191=type_467->mTupleName,
            type_467->mTupleName=(char*)come_increment_ref_count(tuple_name_463);
            __dec_obj191 = come_decrement_ref_count(__dec_obj191, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        list$1char$ph_contained(info->generics_type_names,type_name_393)) {
            for(            i_529=0;            i_529<list$1char$ph_length(info->generics_type_names);            i_529++            ){
                if(                (_if_conditional11=(string_operator_equals(((char*)(__right_value628=list$1char$ph$p_operator_load_element(info->generics_type_names,i_529))),type_name_393))),                (__right_value628 = come_decrement_ref_count(__right_value628, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _if_conditional11) {
                    __dec_obj192=type_467,
                    type_467=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2169, "struct sType*")),(char*)come_increment_ref_count(xsprintf("generics_type%d",i_529)),(_Bool)0,info));
                    /*b*/ come_call_finalizer3(__dec_obj192,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
            type_467->mConstant=type_467->mConstant||constant_396;
            type_467->mAtomic=type_467->mAtomic||atomic__416;
            __dec_obj193=type_467->mAlignas,
            type_467->mAlignas=(struct sNode*)come_increment_ref_count(alignas__413);
            (__dec_obj193 ? __dec_obj193 = come_decrement_ref_count(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            type_467->mRegister=register__399;
            type_467->mUnsigned=type_467->mUnsigned||unsigned__400;
            type_467->mVolatile=volatile__398;
            type_467->mUniq=type_467->mUniq||uniq__411;
            type_467->mStatic=(type_467->mStatic||static__397)&&!type_467->mUniq;
            type_467->mRecord=type_467->mRecord||record__394;
            type_467->mException=type_467->mException||exception__395;
            type_467->mExtern=type_467->mExtern||extern__409;
            type_467->mInline=type_467->mInline||inline__410;
            type_467->mRestrict=type_467->mRestrict||restrict__404;
            type_467->mLongLong=type_467->mLongLong||long_long_402;
            type_467->mLong=type_467->mLong||long__401;
            type_467->mShort=type_467->mShort||short__403;
            type_467->mPointerNum+=pointer_num_456;
            type_467->mHeap=type_467->mHeap||heap_457;
            type_467->mChannel=type_467->mChannel||channel_460;
            __dec_obj194=type_467->mTupleName,
            type_467->mTupleName=(char*)come_increment_ref_count(tuple_name_463);
            __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        list$1char$ph_contained(info->method_generics_type_names,type_name_393)) {
            for(            i_530=0;            i_530<list$1char$ph_length(info->method_generics_type_names);            i_530++            ){
                if(                (_if_conditional12=(string_operator_equals(((char*)(__right_value632=list$1char$ph$p_operator_load_element(info->method_generics_type_names,i_530))),type_name_393))),                (__right_value632 = come_decrement_ref_count(__right_value632, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _if_conditional12) {
                    __dec_obj195=type_467,
                    type_467=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2197, "struct sType*")),(char*)come_increment_ref_count(xsprintf("mgenerics_type%d",i_530)),(_Bool)0,info));
                    /*b*/ come_call_finalizer3(__dec_obj195,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
            type_467->mConstant=type_467->mConstant||constant_396;
            type_467->mAtomic=type_467->mAtomic||atomic__416;
            __dec_obj196=type_467->mAlignas,
            type_467->mAlignas=(struct sNode*)come_increment_ref_count(alignas__413);
            (__dec_obj196 ? __dec_obj196 = come_decrement_ref_count(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            type_467->mRegister=register__399;
            type_467->mUnsigned=type_467->mUnsigned||unsigned__400;
            type_467->mVolatile=volatile__398;
            type_467->mUniq=type_467->mUniq||uniq__411;
            type_467->mStatic=(type_467->mStatic||static__397)&&!type_467->mUniq;
            type_467->mRecord=type_467->mRecord||record__394;
            type_467->mException=type_467->mException||exception__395;
            type_467->mExtern=type_467->mExtern||extern__409;
            type_467->mInline=type_467->mInline||inline__410;
            type_467->mRestrict=type_467->mRestrict||restrict__404;
            type_467->mLongLong=type_467->mLongLong||long_long_402;
            type_467->mLong=type_467->mLong||long__401;
            type_467->mShort=type_467->mShort||short__403;
            type_467->mPointerNum+=pointer_num_456;
            type_467->mHeap=type_467->mHeap||heap_457;
            type_467->mChannel=type_467->mChannel||channel_460;
            __dec_obj197=type_467->mTupleName,
            type_467->mTupleName=(char*)come_increment_ref_count(tuple_name_463);
            __dec_obj197 = come_decrement_ref_count(__dec_obj197, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            (_if_conditional13=(((struct sClass*)(__right_value637=map$2char$phsClass$ph$p_operator_load_element(info->generics_classes,((char*)(__right_value636=__builtin_string(type_name_393))))))==((void*)0))),            (__right_value636 = come_decrement_ref_count(__right_value636, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value637,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional13) {
                __result_obj__279 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value639=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2228, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                (type_name_393 = come_decrement_ref_count(type_name_393, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((alignas__413) ? alignas__413 = come_decrement_ref_count(alignas__413, ((struct sNode*)alignas__413)->finalize, ((struct sNode*)alignas__413)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (attribute_455 = come_decrement_ref_count(attribute_455, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (tuple_name_463 = come_decrement_ref_count(tuple_name_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(type_467,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (var_name_468 = come_decrement_ref_count(var_name_468, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value639,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__279,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__279;
            }
            __dec_obj198=type_467,
            type_467=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2231, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name_393)),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj198,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            while((_Bool)1) {
                multiple_assign_var14=((struct tuple3$3sType$phchar$phbool$*)(__right_value643=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                generics_type_531=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
                var_name_532=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                err_533=multiple_assign_var14->v3;
                /*c*/ come_call_finalizer3(__right_value643,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_533) {
                    __result_obj__280 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value645=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2237, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    /*c*/ come_call_finalizer3(generics_type_531,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_532 = come_decrement_ref_count(var_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (type_name_393 = come_decrement_ref_count(type_name_393, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__413) ? alignas__413 = come_decrement_ref_count(alignas__413, ((struct sNode*)alignas__413)->finalize, ((struct sNode*)alignas__413)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (attribute_455 = come_decrement_ref_count(attribute_455, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (tuple_name_463 = come_decrement_ref_count(tuple_name_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(type_467,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_468 = come_decrement_ref_count(var_name_468, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(__right_value645,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__280,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__280;
                }
                list$1sType$ph_push_back(type_467->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_531));
                if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    /*c*/ come_call_finalizer3(generics_type_531,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_532 = come_decrement_ref_count(var_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                else {
                    multiple_assign_var15=((struct tuple2$2int$char$ph*)(__right_value646=err_msg(info,"invalid generics type(%c)(%c)(%c)",*info->p,*(info->p+1),*(info->p+2))));
                    come_exception_var_c5_534=multiple_assign_var15->v1;
                    Err_535=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                    ((Err_535)?(puts(Err_535),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value646,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    __result_obj__281 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value648=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2254, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    (Err_535 = come_decrement_ref_count(Err_535, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(generics_type_531,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_532 = come_decrement_ref_count(var_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (type_name_393 = come_decrement_ref_count(type_name_393, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__413) ? alignas__413 = come_decrement_ref_count(alignas__413, ((struct sNode*)alignas__413)->finalize, ((struct sNode*)alignas__413)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (attribute_455 = come_decrement_ref_count(attribute_455, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (tuple_name_463 = come_decrement_ref_count(tuple_name_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(type_467,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_468 = come_decrement_ref_count(var_name_468, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(__right_value648,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__281,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__281;
                    (Err_535 = come_decrement_ref_count(Err_535, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                /*c*/ come_call_finalizer3(generics_type_531,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (var_name_532 = come_decrement_ref_count(var_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            is_contained_generics_class(type_467,info)) {
                __dec_obj199=type_467,
                type_467=(struct sType*)come_increment_ref_count(solve_generics(type_467,info->generics_type,info));
                /*b*/ come_call_finalizer3(__dec_obj199,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            else {
                if(                !output_generics_struct(type_467,type_467,info)) {
                    new_name_536=(char*)come_increment_ref_count(create_generics_name(type_467,info));
                    printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_536);
                    exit(7);
                    (new_name_536 = come_decrement_ref_count(new_name_536, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            type_467->mConstant=type_467->mConstant||constant_396;
            type_467->mAtomic=type_467->mAtomic||atomic__416;
            __dec_obj200=type_467->mAlignas,
            type_467->mAlignas=(struct sNode*)come_increment_ref_count(alignas__413);
            (__dec_obj200 ? __dec_obj200 = come_decrement_ref_count(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            type_467->mRegister=register__399;
            type_467->mUnsigned=type_467->mUnsigned||unsigned__400;
            type_467->mVolatile=volatile__398;
            type_467->mUniq=type_467->mUniq||uniq__411;
            type_467->mStatic=(type_467->mStatic||static__397)&&!type_467->mUniq;
            type_467->mRecord=type_467->mRecord||record__394;
            type_467->mException=type_467->mException||exception__395;
            type_467->mExtern=type_467->mExtern||extern__409;
            type_467->mInline=type_467->mInline||inline__410;
            type_467->mRestrict=type_467->mRestrict||restrict__404;
            type_467->mLongLong=type_467->mLongLong||long_long_402;
            type_467->mLong=type_467->mLong||long__401;
            type_467->mShort=type_467->mShort||short__403;
            type_467->mPointerNum+=pointer_num_456;
            type_467->mHeap=type_467->mHeap||heap_457;
            type_467->mChannel=type_467->mChannel||channel_460;
            __dec_obj201=type_467->mTupleName,
            type_467->mTupleName=(char*)come_increment_ref_count(tuple_name_463);
            __dec_obj201 = come_decrement_ref_count(__dec_obj201, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj202=type_name_393,
            type_name_393=(char*)come_increment_ref_count(type_467->mClass->mName);
            __dec_obj202 = come_decrement_ref_count(__dec_obj202, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else {
            if(            struct__405) {
                klass_537=((struct sClass*)(__right_value651=map$2char$phsClass$ph$p_operator_load_element(info->classes,type_name_393)));
                /*c*/ come_call_finalizer3(__right_value651,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                klass_537==((void*)0)&&*info->p!=60) {
                    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name_393)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05type.c", 2298, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name_393)),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
                }
            }
            if(            union__406) {
                klass_575=((struct sClass*)(__right_value661=map$2char$phsClass$ph$p_operator_load_element(info->classes,type_name_393)));
                /*c*/ come_call_finalizer3(__right_value661,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                klass_575==((void*)0)&&*info->p!=60) {
                    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name_393)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05type.c", 2305, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name_393)),(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
                }
            }
            __dec_obj203=type_467,
            type_467=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2309, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name_393)),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj203,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            type_467->mConstant=type_467->mConstant||constant_396;
            type_467->mAtomic=type_467->mAtomic||atomic__416;
            __dec_obj204=type_467->mAlignas,
            type_467->mAlignas=(struct sNode*)come_increment_ref_count(alignas__413);
            (__dec_obj204 ? __dec_obj204 = come_decrement_ref_count(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            type_467->mRegister=register__399;
            type_467->mUnsigned=type_467->mUnsigned||unsigned__400;
            type_467->mVolatile=volatile__398;
            type_467->mUniq=type_467->mUniq||uniq__411;
            type_467->mStatic=(type_467->mStatic||static__397)&&!type_467->mUniq;
            type_467->mRecord=type_467->mRecord||record__394;
            type_467->mException=type_467->mException||exception__395;
            type_467->mExtern=type_467->mExtern||extern__409;
            type_467->mInline=type_467->mInline||inline__410;
            type_467->mRestrict=type_467->mRestrict||restrict__404;
            type_467->mLongLong=type_467->mLongLong||long_long_402;
            type_467->mLong=type_467->mLong||long__401;
            type_467->mShort=type_467->mShort||short__403;
            type_467->mPointerNum+=pointer_num_456;
            type_467->mHeap=type_467->mHeap||heap_457;
            type_467->mChannel=type_467->mChannel||channel_460;
            __dec_obj205=type_467->mTupleName,
            type_467->mTupleName=(char*)come_increment_ref_count(tuple_name_463);
            __dec_obj205 = come_decrement_ref_count(__dec_obj205, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        skip_pointer_attribute(info);
        while(1) {
            if(            *info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_467->mPointerNum++;
                if(                type_467->mNoSolvedGenericsType) {
                    type_467->mNoSolvedGenericsType->mPointerNum++;
                }
            }
            else if(            *info->p==37) {
                info->p++;
                skip_spaces_and_lf(info);
                type_467->mHeap=(_Bool)1;
                if(                type_467->mNoSolvedGenericsType) {
                    type_467->mNoSolvedGenericsType->mHeap=(_Bool)1;
                }
            }
            else if(            *info->p==38) {
                info->p++;
                skip_spaces_and_lf(info);
                type_467->mNoHeap=(_Bool)1;
                if(                type_467->mNoSolvedGenericsType) {
                    type_467->mNoSolvedGenericsType->mHeap=(_Bool)0;
                }
            }
            else if(            *info->p==63) {
                info->p++;
                if(                *info->p==63) {
                    info->p++;
                    type_467->mGuardValue=(_Bool)1;
                }
                else {
                    type_467->mNullValue=(_Bool)1;
                }
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==96) {
                info->p++;
                skip_spaces_and_lf(info);
                type_467->mNoCallingDestructor=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_pointer_attribute(info);
        while(1) {
            if(            *info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_467->mPointerNum++;
                if(                type_467->mNoSolvedGenericsType) {
                    type_467->mNoSolvedGenericsType->mPointerNum++;
                }
            }
            else if(            *info->p==37) {
                info->p++;
                skip_spaces_and_lf(info);
                type_467->mHeap=(_Bool)1;
                if(                type_467->mNoSolvedGenericsType) {
                    type_467->mNoSolvedGenericsType->mHeap=(_Bool)1;
                }
            }
            else if(            *info->p==126&&*(info->p+1)==126) {
                info->p+=2;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
            }
            else if(            gComePthread&&*info->p==64) {
                info->p++;
                skip_spaces_and_lf(info);
                type_467->mChannel=(_Bool)1;
                if(                type_467->mNoSolvedGenericsType) {
                    type_467->mNoSolvedGenericsType->mChannel=(_Bool)1;
                }
            }
            else {
                break;
            }
        }
        if(        parse_multiple_type&&*info->p==44) {
            types_576=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05type.c", 2435, "struct list$1sType$ph*"))));
            list$1sType$ph_push_back(types_576,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_467)));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var16=((struct tuple3$3sType$phchar$phbool$*)(__right_value672=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type2_577=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
                name_578=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                err_579=multiple_assign_var16->v3;
                /*c*/ come_call_finalizer3(__right_value672,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_579) {
                    __result_obj__297 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value674=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2446, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    /*c*/ come_call_finalizer3(type2_577,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_578 = come_decrement_ref_count(name_578, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(types_576,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (type_name_393 = come_decrement_ref_count(type_name_393, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__413) ? alignas__413 = come_decrement_ref_count(alignas__413, ((struct sNode*)alignas__413)->finalize, ((struct sNode*)alignas__413)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (attribute_455 = come_decrement_ref_count(attribute_455, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (tuple_name_463 = come_decrement_ref_count(tuple_name_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(type_467,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_468 = come_decrement_ref_count(var_name_468, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(__right_value674,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__297,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__297;
                }
                list$1sType$ph_push_back(types_576,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_577)));
                /*c*/ come_call_finalizer3(type2_577,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_578 = come_decrement_ref_count(name_578, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            num_tuples_580=list$1sType$ph_length(types_576);
            __dec_obj206=type_467,
            type_467=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2459, "struct sType*")),(char*)come_increment_ref_count(xsprintf("tuple%d",num_tuples_580)),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj206,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            type_467->mPointerNum++;
            type_467->mHeap=(_Bool)1;
            for(            o2_saved_581=(struct list$1sType$ph*)come_increment_ref_count((types_576)),it_582=list$1sType$ph_begin((o2_saved_581));            !list$1sType$ph_end((o2_saved_581));            it_582=list$1sType$ph_next((o2_saved_581))            ){
                list$1sType$ph_push_back(type_467->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value679=come_call_cloner(sType_clone, it_582))))));
                /*c*/ come_call_finalizer3(__right_value679,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_581,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            while(1) {
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    type_467->mPointerNum++;
                    if(                    type_467->mNoSolvedGenericsType) {
                        type_467->mNoSolvedGenericsType->mPointerNum++;
                    }
                }
                else if(                *info->p==37) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_467->mHeap=(_Bool)1;
                    if(                    type_467->mNoSolvedGenericsType) {
                        type_467->mNoSolvedGenericsType->mHeap=(_Bool)1;
                    }
                }
                else if(                *info->p==126&&*(info->p+1)==126) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                }
                else if(                gComePthread&&*info->p==64) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_467->mChannel=(_Bool)1;
                    if(                    type_467->mNoSolvedGenericsType) {
                        type_467->mNoSolvedGenericsType->mChannel=(_Bool)1;
                    }
                }
                else {
                    break;
                }
            }
            if(            is_contained_generics_class(type_467,info)) {
                __dec_obj207=type_467,
                type_467=(struct sType*)come_increment_ref_count(solve_generics(type_467,info->generics_type,info));
                /*b*/ come_call_finalizer3(__dec_obj207,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            else {
                if(                !output_generics_struct(type_467,type_467,info)) {
                    new_name_583=(char*)come_increment_ref_count(create_generics_name(type_467,info));
                    printf("output generics is failed(%s)\n",new_name_583);
                    exit(9);
                    (new_name_583 = come_decrement_ref_count(new_name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            type_467->mMultipleTypes=(_Bool)1;
            __dec_obj208=type_name_393,
            type_name_393=(char*)come_increment_ref_count(type_467->mClass->mName);
            __dec_obj208 = come_decrement_ref_count(__dec_obj208, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            /*c*/ come_call_finalizer3(types_576,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        attribute_584=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_584,"")) {
            __dec_obj209=type_467->mAttribute,
            type_467->mAttribute=(char*)come_increment_ref_count(attribute_584);
            __dec_obj209 = come_decrement_ref_count(__dec_obj209, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_473&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj210=var_name_468,
                var_name_468=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj210 = come_decrement_ref_count(__dec_obj210, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else if(            anonymous_name_415) {
                static int num_anonymous_var_name_585=0;
                num_anonymous_var_name_585++;
                __dec_obj211=var_name_468,
                var_name_468=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_585));
                __dec_obj211 = come_decrement_ref_count(__dec_obj211, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj212=var_name_468,
                var_name_468=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj212 = come_decrement_ref_count(__dec_obj212, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else {
                static int num_anonymous_var_name_586=0;
                num_anonymous_var_name_586++;
                __dec_obj213=var_name_468,
                var_name_468=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_586));
                __dec_obj213 = come_decrement_ref_count(__dec_obj213, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            if(            var_name_between_brace_473&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_587=info->no_comma;
                info->no_comma=(_Bool)1;
                node_588=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_587;
                __dec_obj214=type_467->mSizeNum,
                type_467->mSizeNum=(struct sNode*)come_increment_ref_count(node_588);
                (__dec_obj214 ? __dec_obj214 = come_decrement_ref_count(__dec_obj214, ((struct sNode*)__dec_obj214)->finalize, ((struct sNode*)__dec_obj214)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                ((node_588) ? node_588 = come_decrement_ref_count(node_588, ((struct sNode*)node_588)->finalize, ((struct sNode*)node_588)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            attribute2_589=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_584,"")&&string_operator_not_equals(attribute2_589,"")) {
                __dec_obj215=type_467->mAttribute,
                type_467->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value689=string_operator_add(attribute_584," "))),attribute2_589));
                __dec_obj215 = come_decrement_ref_count(__dec_obj215, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (__right_value689 = come_decrement_ref_count(__right_value689, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            string_operator_not_equals(attribute2_589,"")) {
                __dec_obj216=type_467->mAttribute,
                type_467->mAttribute=(char*)come_increment_ref_count(attribute2_589);
                __dec_obj216 = come_decrement_ref_count(__dec_obj216, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            (attribute2_589 = come_decrement_ref_count(attribute2_589, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (attribute_584 = come_decrement_ref_count(attribute_584, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    while(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        skip_pointer_attribute(info);
        if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            type_467->mArrayPointerType=(_Bool)1;
            type_467->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_590=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNode$ph_push_back(type_467->mArrayNum,(struct sNode*)come_increment_ref_count(node_590));
        parse_sharp_v5(info);
        expected_next_character(93,info);
        ((node_590) ? node_590 = come_decrement_ref_count(node_590, ((struct sNode*)node_590)->finalize, ((struct sNode*)node_590)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    multiple_assign_var17=((struct tuple2$2char$phchar$ph*)(__right_value692=parse_attribute(info,(_Bool)0)));
    asm_name_591=(char*)come_increment_ref_count(multiple_assign_var17->v1);
    attribute2_592=(char*)come_increment_ref_count(multiple_assign_var17->v2);
    /*c*/ come_call_finalizer3(__right_value692,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    string_operator_not_equals(attribute2_592,"")) {
        __dec_obj217=type_467->mAttribute,
        type_467->mAttribute=(char*)come_increment_ref_count(attribute2_592);
        __dec_obj217 = come_decrement_ref_count(__dec_obj217, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __dec_obj218=type_467->mAsmName,
    type_467->mAsmName=(char*)come_increment_ref_count(asm_name_591);
    __dec_obj218 = come_decrement_ref_count(__dec_obj218, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    parse_sharp_v5(info);
    if(    type_467->mChannel) {
        type_before_593=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_467));
        __dec_obj219=type_467,
        type_467=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2618, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj219,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj220=type_467->mArrayNum,
        type_467->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count((__list_values1___594[0]=((struct sNode*)(__right_value697=create_int_node(2,info))),
list$1sNode$ph_initialize_with_values((struct list$1sNode$ph**)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "05type.c", 2619, "struct list$1sNode$ph")),1,__list_values1___594)));
        /*b*/ come_call_finalizer3(__dec_obj220,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        ((__right_value697) ? __right_value697 = come_decrement_ref_count(__right_value697, ((struct sNode*)__right_value697)->finalize, ((struct sNode*)__right_value697)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        __dec_obj221=type_467->mChannelType,
        type_467->mChannelType=(struct sType*)come_increment_ref_count(type_before_593);
        /*b*/ come_call_finalizer3(__dec_obj221,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type_467->mChannel=(_Bool)1;
        /*c*/ come_call_finalizer3(type_before_593,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    type_467->mException) {
        type2_598=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2624, "struct sType*")),(char*)come_increment_ref_count(xsprintf("tuple2")),(_Bool)0,info));
        list$1sType$ph$p_operator_store_element(type2_598->mGenericsTypes,0,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2625, "struct sType*")),(char*)come_increment_ref_count(xsprintf("generics_type0")),(_Bool)0,info)));
        list$1sType$ph$p_operator_store_element(type2_598->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2626, "struct sType*")),(char*)come_increment_ref_count(xsprintf("generics_type1")),(_Bool)0,info)));
        type2_598->mPointerNum=1;
        type2_598->mHeap=(_Bool)1;
        type3_604=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2630, "struct sType*")),(char*)come_increment_ref_count(xsprintf("tuple2")),(_Bool)0,info));
        list$1sType$ph$p_operator_store_element(type3_604->mGenericsTypes,0,(struct sType*)come_increment_ref_count(type_467));
        list$1sType$ph$p_operator_store_element(type3_604->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2632, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info)));
        ((struct sType*)(__right_value716=list$1sType$ph$p_operator_load_element(type3_604->mGenericsTypes,1)))->mHeap=(_Bool)1;
        /*c*/ come_call_finalizer3(__right_value716,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        type4_605=(struct sType*)come_increment_ref_count(solve_generics(type2_598,type3_604,info));
        type4_605->mException=(_Bool)1;
        type4_605->mUniq=type_467->mUniq;
        __result_obj__303 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value719=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2640, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count(type4_605),(char*)come_increment_ref_count(var_name_468),(_Bool)1))));
        /*c*/ come_call_finalizer3(type2_598,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type3_604,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type4_605,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (type_name_393 = come_decrement_ref_count(type_name_393, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((alignas__413) ? alignas__413 = come_decrement_ref_count(alignas__413, ((struct sNode*)alignas__413)->finalize, ((struct sNode*)alignas__413)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (attribute_455 = come_decrement_ref_count(attribute_455, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (tuple_name_463 = come_decrement_ref_count(tuple_name_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type_467,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_468 = come_decrement_ref_count(var_name_468, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (asm_name_591 = come_decrement_ref_count(asm_name_591, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (attribute2_592 = come_decrement_ref_count(attribute2_592, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value719,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__result_obj__303,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__303;
        /*c*/ come_call_finalizer3(type2_598,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type3_604,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type4_605,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    string_operator_not_equals(attribute_455,"")) {
        __dec_obj223=type_467->mAttribute,
        type_467->mAttribute=(char*)come_increment_ref_count(attribute_455);
        __dec_obj223 = come_decrement_ref_count(__dec_obj223, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__304 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value721=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2647, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count(type_467),(char*)come_increment_ref_count(var_name_468),(_Bool)1))));
    (type_name_393 = come_decrement_ref_count(type_name_393, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((alignas__413) ? alignas__413 = come_decrement_ref_count(alignas__413, ((struct sNode*)alignas__413)->finalize, ((struct sNode*)alignas__413)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (attribute_455 = come_decrement_ref_count(attribute_455, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (tuple_name_463 = come_decrement_ref_count(tuple_name_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type_467,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name_468 = come_decrement_ref_count(var_name_468, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (asm_name_591 = come_decrement_ref_count(asm_name_591, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (attribute2_592 = come_decrement_ref_count(attribute2_592, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value721,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__304,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__304;
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static int list$1char$ph_length(struct list$1char$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_498;
int i_499;
char* __result_obj__275;
char* default_value_500;
char* __result_obj__276;
default_value_500 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_498=self->head;
    i_499=0;
    while(it_498!=((void*)0)) {
        if(        position==i_499) {
            __result_obj__275 = come_increment_ref_count(it_498->item);
            (__result_obj__275 = come_decrement_ref_count(__result_obj__275, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__275;
        }
        it_498=it_498->next;
        i_499++;
    }
    memset(&default_value_500,0,sizeof(char*));
    __result_obj__276 = come_increment_ref_count(default_value_500);
    (default_value_500 = come_decrement_ref_count(default_value_500, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__276 = come_decrement_ref_count(__result_obj__276, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__276;
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

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_555;
unsigned int it_556;
_Bool same_key_exist_573;
char* it2_574;
struct map$2char$phsClass$ph* __result_obj__296;
    if(    self->len*10>=self->size) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash_555=string_get_hash_key(((char*)key))%self->size;
    it_556=hash_555;
    while((_Bool)1) {
        if(        self->item_existance[it_556]) {
            if(            string_equals(self->keys[it_556],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_556]);
                    (self->keys[it_556] = come_decrement_ref_count(self->keys[it_556], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_556]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_556]);
                    self->keys[it_556]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_556],sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_556]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_556]=item;
                }
                break;
            }
            it_556++;
            if(            it_556>=self->size) {
                it_556=0;
            }
            else if(            it_556==hash_555) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_556]=(_Bool)1;
            if(            1) {
                self->keys[it_556]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_556]=key;
            }
            if(            1) {
                self->items[it_556]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_556]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_573=(_Bool)0;
    for(    it2_574=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_574=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_574,key)) {
            same_key_exist_573=(_Bool)1;
        }
    }
    if(    !same_key_exist_573) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__296 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__296;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self){
int size_538;
void* __right_value652 = (void*)0;
char** keys_539;
void* __right_value653 = (void*)0;
struct sClass** items_540;
void* __right_value654 = (void*)0;
_Bool* item_existance_541;
int len_542;
char* it_545;
struct sClass* default_value_548;
void* __right_value655 = (void*)0;
struct sClass* it2_549;
unsigned int hash_552;
int n_553;
struct sClass* default_value_554;
void* __right_value656 = (void*)0;
default_value_548 = (void*)0;
default_value_554 = (void*)0;
    size_538=self->size*10;
    keys_539=(char**)come_increment_ref_count(((char**)(__right_value652=(char**)come_calloc(1, sizeof(char*)*(1*(size_538)), "./comelang.h", 2281, "char**"))));
    items_540=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value653=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_538)), "./comelang.h", 2282, "struct sClass**"))));
    item_existance_541=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value654=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_538)), "./comelang.h", 2283, "_Bool*"))));
    len_542=0;
    for(    it_545=map$2char$phsClass$ph_begin(self);    !map$2char$phsClass$ph_end(self);    it_545=map$2char$phsClass$ph_next(self)    ){
        memset(&default_value_548,0,sizeof(struct sClass*));
        it2_549=((struct sClass*)(__right_value655=map$2char$phsClass$ph_at(self,it_545,(struct sClass*)come_increment_ref_count(default_value_548))));
        /*c*/ come_call_finalizer3(__right_value655,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_552=string_get_hash_key(((char*)it_545))%size_538;
        n_553=hash_552;
        while((_Bool)1) {
            if(            item_existance_541[n_553]) {
                n_553++;
                if(                n_553>=size_538) {
                    n_553=0;
                }
                else if(                n_553==hash_552) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_541[n_553]=(_Bool)1;
                keys_539[n_553]=it_545;
                items_540[n_553]=((struct sClass*)(__right_value656=map$2char$phsClass$ph_at(self,it_545,(struct sClass*)come_increment_ref_count(default_value_554))));
                /*c*/ come_call_finalizer3(__right_value656,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_542++;
                /*c*/ come_call_finalizer3(default_value_554,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_554,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_548,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_539;
    self->items=items_540;
    self->item_existance=item_existance_541;
    self->size=size_538;
    self->len=len_542;
}

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self){
char* result_543;
char* __result_obj__282;
char* __result_obj__283;
char* result_544;
char* __result_obj__284;
result_543 = (void*)0;
result_544 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_543,0,sizeof(char*));
        __result_obj__282 = result_543;
        return __result_obj__282;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__283 = self->key_list->it->item;
        return __result_obj__283;
    }
    memset(&result_544,0,sizeof(char*));
    __result_obj__284 = result_544;
    return __result_obj__284;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self){
char* result_546;
char* __result_obj__285;
char* __result_obj__286;
char* result_547;
char* __result_obj__287;
result_546 = (void*)0;
result_547 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_546,0,sizeof(char*));
        __result_obj__285 = result_546;
        return __result_obj__285;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__286 = self->key_list->it->item;
        return __result_obj__286;
    }
    memset(&result_547,0,sizeof(char*));
    __result_obj__287 = result_547;
    return __result_obj__287;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_550;
unsigned int it_551;
struct sClass* __result_obj__288;
struct sClass* __result_obj__289;
struct sClass* __result_obj__290;
struct sClass* __result_obj__291;
    hash_550=string_get_hash_key(((char*)key))%self->size;
    it_551=hash_550;
    while((_Bool)1) {
        if(        self->item_existance[it_551]) {
            if(            string_equals(self->keys[it_551],key)) {
                __result_obj__288 = come_increment_ref_count(self->items[it_551]);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__288,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__288;
            }
            it_551++;
            if(            it_551>=self->size) {
                it_551=0;
            }
            else if(            it_551==hash_550) {
                __result_obj__289 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__289,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__289;
            }
        }
        else {
            __result_obj__290 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__290,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__290;
        }
    }
    __result_obj__291 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__291,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__291;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_557;
struct list_item$1char$ph* it_558;
struct list$1char$ph* __result_obj__295;
    it2_557=0;
    it_558=self->head;
    while(it_558!=((void*)0)) {
        if(        string_equals(it_558->item,item)) {
            list$1char$ph_delete(self,it2_557,it2_557+1);
            break;
        }
        it2_557++;
        it_558=it_558->next;
    }
    __result_obj__295 = self;
    return __result_obj__295;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_559;
struct list$1char$ph* __result_obj__292;
struct list_item$1char$ph* it_562;
int i_563;
struct list_item$1char$ph* prev_it_564;
struct list_item$1char$ph* it_565;
int i_566;
struct list_item$1char$ph* prev_it_567;
struct list_item$1char$ph* it_568;
struct list_item$1char$ph* head_prev_it_569;
struct list_item$1char$ph* tail_it_570;
int i_571;
struct list_item$1char$ph* prev_it_572;
struct list$1char$ph* __result_obj__294;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_559=tail;
        tail=head;
        head=tmp_559;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__292 = self;
        return __result_obj__292;
    }
    if(    head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(    head==0) {
        it_562=self->head;
        i_563=0;
        while(it_562!=((void*)0)) {
            if(            i_563<tail) {
                prev_it_564=it_562;
                it_562=it_562->next;
                i_563++;
                /*c*/ come_call_finalizer3(prev_it_564,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_563==tail) {
                self->head=it_562;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_562=it_562->next;
                i_563++;
            }
        }
    }
    else if(    tail==self->len) {
        it_565=self->head;
        i_566=0;
        while(it_565!=((void*)0)) {
            if(            i_566==head) {
                self->tail=it_565->prev;
                self->tail->next=((void*)0);
            }
            if(            i_566>=head) {
                prev_it_567=it_565;
                it_565=it_565->next;
                i_566++;
                /*c*/ come_call_finalizer3(prev_it_567,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_565=it_565->next;
                i_566++;
            }
        }
    }
    else {
        it_568=self->head;
        head_prev_it_569=((void*)0);
        tail_it_570=((void*)0);
        i_571=0;
        while(it_568!=((void*)0)) {
            if(            i_571==head) {
                head_prev_it_569=it_568->prev;
            }
            if(            i_571==tail) {
                tail_it_570=it_568;
            }
            if(            i_571>=head&&i_571<tail) {
                prev_it_572=it_568;
                it_568=it_568->next;
                i_571++;
                /*c*/ come_call_finalizer3(prev_it_572,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_568=it_568->next;
                i_571++;
            }
        }
        if(        head_prev_it_569!=((void*)0)) {
            head_prev_it_569->next=tail_it_570;
        }
        if(        tail_it_570!=((void*)0)) {
            tail_it_570->prev=head_prev_it_569;
        }
    }
    __result_obj__294 = self;
    return __result_obj__294;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_560;
struct list_item$1char$ph* prev_it_561;
struct list$1char$ph* __result_obj__293;
    it_560=self->head;
    while(it_560!=((void*)0)) {
        prev_it_561=it_560;
        it_560=it_560->next;
        /*c*/ come_call_finalizer3(prev_it_561,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__293 = self;
    return __result_obj__293;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize_with_values(struct list$1sNode$ph* self, int num_value, struct sNode** values){
int i_595;
struct list$1sNode$ph* __result_obj__298;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_595=0;    i_595<num_value;    i_595++    ){
        list$1sNode$ph_push_back(self,(struct sNode*)come_increment_ref_count(values[i_595]));
    }
    __result_obj__298 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__298,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__298;
}

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__299;
void* __right_value698 = (void*)0;
struct list$1sNode$ph* result_596;
struct list$1sNode$ph* __result_obj__300;
    if(    self==(void*)0) {
        __result_obj__299 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__299,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__299;
    }
    result_596=(struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "list$1sNode$ph_clone", 3, "struct list$1sNode$ph*"));
    if(    self!=((void*)0)) {
        result_596->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_596->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_596->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_596->it=self->it;
    }
    __result_obj__300 = come_increment_ref_count(result_596);
    /*c*/ come_call_finalizer3(result_596,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__300,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__300;
}

static unsigned int list$1sNode$ph_get_hash_key(struct list$1sNode$ph* self){
unsigned int result_597;
    result_597=0;
    result_597+=int_get_hash_key(((int)self->head));
    result_597+=int_get_hash_key(((int)self->tail));
    result_597+=int_get_hash_key(((int)self->len));
    result_597+=int_get_hash_key(((int)self->it));
    return result_597;
}

static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_599;
int i_600;
struct sType* default_value_601;
struct list$1sType$ph* __result_obj__301;
struct list_item$1sType$ph* it_602;
int i_603;
struct sType* __dec_obj222;
struct list$1sType$ph* __result_obj__302;
default_value_601 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_599=self->len;
        for(        i_600=0;        i_600<position-len_599;        i_600++        ){
            memset(&default_value_601,0,sizeof(struct sType*));
            list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(default_value_601));
            /*c*/ come_call_finalizer3(default_value_601,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__301 = self;
        /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__301;
    }
    it_602=self->head;
    i_603=0;
    while(it_602!=((void*)0)) {
        if(        position==i_603) {
            __dec_obj222=it_602->item,
            it_602->item=(struct sType*)come_increment_ref_count(item);
            /*b*/ come_call_finalizer3(__dec_obj222,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_602=it_602->next;
        i_603++;
    }
    __result_obj__302 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__302;
}

