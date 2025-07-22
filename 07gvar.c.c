/// previous struct definition ///
struct __locale_t;

struct __sFILE;

struct __timezone_t;

struct sigevent;

struct sType;

struct sClass;

struct sInfo;

struct sVar;

struct sRightValueObject;

struct sVarTable;

struct sBlock;

/// struct definition ///
typedef long  int ptrdiff_t;

typedef unsigned long  int size_t;

typedef unsigned int wchar_t;

struct anonymous_typeX1
{
    long long __clang_max_align_nonce1 __attribute__((__aligned__(__alignof__(long long))));
    long  double __clang_max_align_nonce2 __attribute__((__aligned__(__alignof__(long double))));
};

typedef struct anonymous_typeX1 max_align_t;

typedef char __int8_t;

typedef unsigned char __uint8_t;

typedef short __int16_t;

typedef unsigned short int __uint16_t;

typedef int __int32_t;

typedef unsigned int __uint32_t;

typedef long __int64_t;

typedef unsigned long  int __uint64_t;

typedef long __intptr_t;

typedef unsigned long  int __uintptr_t;

typedef char int8_t;

typedef unsigned char uint8_t;

typedef short int16_t;

typedef unsigned short int uint16_t;

typedef int int32_t;

typedef unsigned int uint32_t;

typedef long int64_t;

typedef unsigned long  int uint64_t;

typedef long intptr_t;

typedef unsigned long  int uintptr_t;

typedef char int_least8_t;

typedef unsigned char uint_least8_t;

typedef short int_least16_t;

typedef unsigned short int uint_least16_t;

typedef int int_least32_t;

typedef unsigned int uint_least32_t;

typedef long int_least64_t;

typedef unsigned long  int uint_least64_t;

typedef char int_fast8_t;

typedef unsigned char uint_fast8_t;

typedef long int_fast64_t;

typedef unsigned long  int uint_fast64_t;

typedef long int_fast16_t;

typedef unsigned long  int uint_fast16_t;

typedef long int_fast32_t;

typedef unsigned long  int uint_fast32_t;

typedef unsigned long  int uintmax_t;

typedef long intmax_t;

typedef char __s8;

typedef unsigned char __u8;

typedef short __s16;

typedef unsigned short int __u16;

typedef int __s32;

typedef unsigned int __u32;

typedef long long __s64;

typedef unsigned long  long __u64;

struct anonymous_typeX2
{
    unsigned long  int fds_bits[1024/(8*sizeof(long))];
};

typedef struct anonymous_typeX2 __kernel_fd_set;

typedef void (*__kernel_sighandler_t)(int);

typedef int __kernel_key_t;

typedef int __kernel_mqd_t;

typedef unsigned short int __kernel_old_uid_t;

typedef unsigned short int __kernel_old_gid_t;

typedef long __kernel_long_t;

typedef unsigned long  int __kernel_ulong_t;

typedef unsigned long  int __kernel_ino_t;

typedef unsigned int __kernel_mode_t;

typedef int __kernel_pid_t;

typedef int __kernel_ipc_pid_t;

typedef unsigned int __kernel_uid_t;

typedef unsigned int __kernel_gid_t;

typedef long __kernel_suseconds_t;

typedef int __kernel_daddr_t;

typedef unsigned int __kernel_uid32_t;

typedef unsigned int __kernel_gid32_t;

typedef unsigned int __kernel_old_dev_t;

typedef unsigned long  int __kernel_size_t;

typedef long __kernel_ssize_t;

typedef long __kernel_ptrdiff_t;

struct anonymous_typeX3
{
    int val[2];
};

typedef struct anonymous_typeX3 __kernel_fsid_t;

typedef long __kernel_off_t;

typedef long long __kernel_loff_t;

typedef long __kernel_old_time_t;

typedef long __kernel_time_t;

typedef long long __kernel_time64_t;

typedef long __kernel_clock_t;

typedef int __kernel_timer_t;

typedef int __kernel_clockid_t;

typedef char* __kernel_caddr_t;

typedef unsigned short int __kernel_uid16_t;

typedef unsigned short int __kernel_gid16_t;

typedef __int128 __s128 __attribute__((aligned(16)));

typedef unsigned __int128 __u128 __attribute__((aligned(16)));

typedef unsigned short int __le16;

typedef unsigned short int __be16;

typedef unsigned int __le32;

typedef unsigned int __be32;

typedef unsigned long  long __le64;

typedef unsigned long  long __be64;

typedef unsigned short int __sum16;

typedef unsigned int __wsum;

typedef unsigned int __poll_t;

struct anonymous_typeX4
{
    unsigned int flags;
    void* stack_base;
    unsigned long  int stack_size;
    unsigned long  int guard_size;
    int sched_policy;
    int sched_priority;
    char __reserved[16];
};

typedef struct anonymous_typeX4 pthread_attr_t;

struct anonymous_typeX5
{
    long __private[4];
};

typedef struct anonymous_typeX5 pthread_barrier_t;

typedef int pthread_barrierattr_t;

struct anonymous_typeX6
{
    int __private[12];
};

typedef struct anonymous_typeX6 pthread_cond_t;

typedef long pthread_condattr_t;

typedef int pthread_key_t;

struct anonymous_typeX7
{
    int __private[10];
};

typedef struct anonymous_typeX7 pthread_mutex_t;

typedef long pthread_mutexattr_t;

typedef int pthread_once_t;

struct anonymous_typeX8
{
    int __private[14];
};

typedef struct anonymous_typeX8 pthread_rwlock_t;

typedef long pthread_rwlockattr_t;

struct anonymous_typeX9
{
    long __private;
};

typedef struct anonymous_typeX9 pthread_spinlock_t;

typedef long pthread_t;

typedef unsigned int __gid_t;

typedef unsigned int gid_t;

typedef unsigned int __uid_t;

typedef unsigned int uid_t;

typedef int __pid_t;

typedef int pid_t;

typedef unsigned int __id_t;

typedef unsigned int id_t;

typedef unsigned long  int blkcnt_t;

typedef unsigned long  int blksize_t;

typedef char* caddr_t;

typedef long clock_t;

typedef int __clockid_t;

typedef int clockid_t;

typedef int daddr_t;

typedef unsigned long  int fsblkcnt_t;

typedef unsigned long  int fsfilcnt_t;

typedef unsigned int __mode_t;

typedef unsigned int mode_t;

typedef int __key_t;

typedef int key_t;

typedef unsigned long  int __ino_t;

typedef unsigned long  int ino_t;

typedef unsigned long  int ino64_t;

typedef unsigned int __nlink_t;

typedef unsigned int nlink_t;

typedef void* __timer_t;

typedef void* timer_t;

typedef long __suseconds_t;

typedef long suseconds_t;

typedef unsigned int __useconds_t;

typedef unsigned int useconds_t;

typedef unsigned long  int dev_t;

typedef long __time_t;

typedef long time_t;

typedef long off_t;

typedef long loff_t;

typedef long off64_t;

typedef unsigned int __socklen_t;

typedef unsigned int socklen_t;

typedef __builtin_va_list __va_list;

typedef long ssize_t;

typedef unsigned int uint_t;

typedef unsigned int uint;

typedef unsigned char u_char;

typedef unsigned short int u_short;

typedef unsigned int u_int;

typedef unsigned long  int u_long;

typedef unsigned int u_int32_t;

typedef unsigned short int u_int16_t;

typedef unsigned char u_int8_t;

typedef unsigned long  int u_int64_t;

typedef __builtin_va_list __gnuc_va_list;

typedef __builtin_va_list va_list;

typedef struct __locale_t* locale_t;

struct flock
{
    short l_type;
    short l_whence;
    long l_start;
    long l_len;
    int l_pid;
};

struct flock64
{
    short l_type;
    short l_whence;
    long l_start;
    long l_len;
    int l_pid;
};

struct f_owner_ex
{
    int type;
    int pid;
};

typedef long fpos_t;

typedef long fpos64_t;

typedef struct __sFILE FILE;

extern struct __sFILE* stdin __attribute__((__availability__(android,strict,introduced=23 )));
extern struct __sFILE* stdout __attribute__((__availability__(android,strict,introduced=23 )));
extern struct __sFILE* stderr __attribute__((__availability__(android,strict,introduced=23 )));
struct mallinfo
{
    unsigned long  int arena;
    unsigned long  int ordblks;
    unsigned long  int smblks;
    unsigned long  int hblks;
    unsigned long  int hblkhd;
    unsigned long  int usmblks;
    unsigned long  int fsmblks;
    unsigned long  int uordblks;
    unsigned long  int fordblks;
    unsigned long  int keepcost;
};

struct mallinfo2
{
    unsigned long  int arena;
    unsigned long  int ordblks;
    unsigned long  int smblks;
    unsigned long  int hblks;
    unsigned long  int hblkhd;
    unsigned long  int usmblks;
    unsigned long  int fsmblks;
    unsigned long  int uordblks;
    unsigned long  int fordblks;
    unsigned long  int keepcost;
};

enum HeapTaggingLevel { M_HEAP_TAGGING_LEVEL_NONE=(0),
M_HEAP_TAGGING_LEVEL_TBI=(1),
M_HEAP_TAGGING_LEVEL_ASYNC=(2),
M_HEAP_TAGGING_LEVEL_SYNC=(3)
};

struct anonymous_typeX10
{
    int quot;
    int rem;
};

typedef struct anonymous_typeX10 div_t;

struct anonymous_typeX11
{
    long  int quot;
    long  int rem;
};

typedef struct anonymous_typeX11 ldiv_t;

struct anonymous_typeX12
{
    long long int quot;
    long long int rem;
};

typedef struct anonymous_typeX12 lldiv_t;

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

extern const char* _ctype_;
struct timespec
{
    long tv_sec;
    long tv_nsec;
};

struct __kernel_timespec
{
    long long tv_sec;
    long long tv_nsec;
};

struct __kernel_itimerspec
{
    struct __kernel_timespec it_interval;
    struct __kernel_timespec it_value;
};

struct __kernel_old_timespec
{
    long tv_sec;
    long tv_nsec;
};

struct __kernel_sock_timeval
{
    long long tv_sec;
    long long tv_usec;
};

struct timeval
{
    long tv_sec;
    long tv_usec;
};

struct itimerspec
{
    struct timespec it_interval;
    struct timespec it_value;
};

struct itimerval
{
    struct timeval it_interval;
    struct timeval it_value;
};

struct sigcontext
{
    unsigned long  long fault_address;
    unsigned long  long regs[31];
    unsigned long  long sp;
    unsigned long  long pc;
    unsigned long  long pstate;
    unsigned char __reserved[4096] __attribute__((__aligned__(16)));
};

struct _aarch64_ctx
{
    unsigned int magic;
    unsigned int size;
};

struct fpsimd_context
{
    struct _aarch64_ctx head;
    unsigned int fpsr;
    unsigned int fpcr;
    __uint128_t vregs[32];
};

struct esr_context
{
    struct _aarch64_ctx head;
    unsigned long  long esr;
};

struct extra_context
{
    struct _aarch64_ctx head;
    unsigned long  long datap;
    unsigned int size;
    unsigned int __reserved[3];
};

struct sve_context
{
    struct _aarch64_ctx head;
    unsigned short int vl;
    unsigned short int flags;
    unsigned short int __reserved[2];
};

struct tpidr2_context
{
    struct _aarch64_ctx head;
    unsigned long  long tpidr2;
};

struct za_context
{
    struct _aarch64_ctx head;
    unsigned short int vl;
    unsigned short int __reserved[3];
};

struct zt_context
{
    struct _aarch64_ctx head;
    unsigned short int nregs;
    unsigned short int __reserved[3];
};

struct anonymous_typeX13
{
    unsigned long  int sig[(64/64)];
};

typedef struct anonymous_typeX13 sigset_t;

typedef unsigned long  int old_sigset_t;

typedef void (*__signalfn_t)(int);

typedef void (*__sighandler_t)(int);

typedef void (*__restorefn_t)();

typedef void (*__sigrestore_t)();

struct __kernel_sigaction
{
    void (*sa_handler)(int);
    unsigned long  int sa_flags;
    void (*sa_restorer)();
    struct anonymous_typeX13 sa_mask;
};

struct sigaltstack
{
    void* ss_sp;
    int ss_flags;
    unsigned long  int ss_size;
};

typedef struct sigaltstack stack_t;

union sigval
{
int sival_int;
void* sival_ptr;
};

typedef union sigval sigval_t;

struct anonymous_typeX14
{
    int _pid;
    unsigned int _uid;
};

struct anonymous_typeX15
{
    int _tid;
    int _overrun;
    union sigval _sigval;
    int _sys_private;
};

struct anonymous_typeX16
{
    int _pid;
    unsigned int _uid;
    union sigval _sigval;
};

struct anonymous_typeX17
{
    int _pid;
    unsigned int _uid;
    int _status;
    long _utime;
    long _stime;
};

struct anonymous_typeX20
{
    char _dummy_bnd[(((__alignof__(void*)<sizeof(short))?(sizeof(short)):(__alignof__(void*))))];
    void* _lower;
    void* _upper;
};

struct anonymous_typeX21
{
    char _dummy_pkey[(((__alignof__(void*)<sizeof(short))?(sizeof(short)):(__alignof__(void*))))];
    unsigned int _pkey;
};

struct anonymous_typeX22
{
    unsigned long  int _data;
    unsigned int _type;
    unsigned int _flags;
};

union anonymous_typeZ19
{
int _trapno;
short _addr_lsb;
struct anonymous_typeX20 _addr_bnd;
struct anonymous_typeX21 _addr_pkey;
struct anonymous_typeX22 _perf;
};

struct anonymous_typeX24
{
    char _dummy_bnd[(((__alignof__(void*)<sizeof(short))?(sizeof(short)):(__alignof__(void*))))];
    void* _lower;
    void* _upper;
};

struct anonymous_typeX25
{
    char _dummy_pkey[(((__alignof__(void*)<sizeof(short))?(sizeof(short)):(__alignof__(void*))))];
    unsigned int _pkey;
};

struct anonymous_typeX26
{
    unsigned long  int _data;
    unsigned int _type;
    unsigned int _flags;
};

union anonymous_typeZ23
{
int _trapno;
short _addr_lsb;
struct anonymous_typeX24 _addr_bnd;
struct anonymous_typeX25 _addr_pkey;
struct anonymous_typeX26 _perf;
};

struct anonymous_typeX18
{
    void* _addr;
    union anonymous_typeZ23 anonymous_var_nameY2;
};

struct anonymous_typeX27
{
    long _band;
    int _fd;
};

struct anonymous_typeX28
{
    void* _call_addr;
    int _syscall;
    unsigned int _arch;
};

union __sifields
{
struct anonymous_typeX14 _kill;
struct anonymous_typeX15 _timer;
struct anonymous_typeX16 _rt;
struct anonymous_typeX17 _sigchld;
struct anonymous_typeX18 _sigfault;
struct anonymous_typeX27 _sigpoll;
struct anonymous_typeX28 _sigsys;
};

struct anonymous_typeX30
{
    int si_signo;
    int si_errno;
    int si_code;
    union __sifields _sifields;
};

union anonymous_typeZ29
{
struct anonymous_typeX30 anonymous_var_nameXYZ1;
int _si_pad[128/sizeof(int)];
};

struct anonymous_typeX32
{
    int si_signo;
    int si_errno;
    int si_code;
    union __sifields _sifields;
};

union anonymous_typeZ31
{
struct anonymous_typeX32 anonymous_var_nameXYZ2;
int _si_pad[128/sizeof(int)];
};

struct siginfo
{
    union anonymous_typeZ31 anonymous_var_nameY4;
};

typedef struct siginfo siginfo_t;

struct anonymous_typeX34
{
    void (*_function)(union sigval);
    void* _attribute;
};

union anonymous_typeZ33
{
int _pad[((64-(sizeof(int)*2+sizeof(union sigval)))/sizeof(int))];
int _tid;
struct anonymous_typeX34 _sigev_thread;
};

struct anonymous_typeX36
{
    void (*_function)(union sigval);
    void* _attribute;
};

union anonymous_typeZ35
{
int _pad[((64-(sizeof(int)*2+sizeof(union sigval)))/sizeof(int))];
int _tid;
struct anonymous_typeX36 _sigev_thread;
};

struct sigevent
{
    union sigval sigev_value;
    int sigev_signo;
    int sigev_notify;
    union anonymous_typeZ35 _sigev_un;
};

typedef struct sigevent sigevent_t;

typedef int sig_atomic_t;

typedef void (*sig_t)(int);

typedef void (*sighandler_t)(int);

typedef struct anonymous_typeX13 sigset64_t;

union anonymous_typeZ37
{
void (*sa_handler)(int);
void (*sa_sigaction)(int,struct siginfo*,void*);
};

union anonymous_typeZ38
{
void (*sa_handler)(int);
void (*sa_sigaction)(int,struct siginfo*,void*);
};

struct sigaction
{
    int sa_flags;
    union anonymous_typeZ38 anonymous_var_nameY6;
    struct anonymous_typeX13 sa_mask;
    void (*sa_restorer)();
};

union anonymous_typeZ39
{
void (*sa_handler)(int);
void (*sa_sigaction)(int,struct siginfo*,void*);
};

union anonymous_typeZ40
{
void (*sa_handler)(int);
void (*sa_sigaction)(int,struct siginfo*,void*);
};

struct sigaction64
{
    int sa_flags;
    union anonymous_typeZ40 anonymous_var_nameY8;
    struct anonymous_typeX13 sa_mask;
    void (*sa_restorer)();
};

struct user_regs_struct
{
    unsigned long  int regs[31];
    unsigned long  int sp;
    unsigned long  int pc;
    unsigned long  int pstate;
};

struct user_fpsimd_struct
{
    __uint128_t vregs[32];
    unsigned int fpsr;
    unsigned int fpcr;
};

typedef unsigned long  int greg_t;

typedef unsigned long  int gregset_t[34];

typedef struct user_fpsimd_struct fpregset_t;

typedef struct sigcontext mcontext_t;

union anonymous_typeZ41
{
struct anonymous_typeX13 uc_sigmask;
struct anonymous_typeX13 uc_sigmask64;
};

union anonymous_typeZ42
{
struct anonymous_typeX13 uc_sigmask;
struct anonymous_typeX13 uc_sigmask64;
};

struct ucontext
{
    unsigned long  int uc_flags;
    struct ucontext* uc_link;
    struct sigaltstack uc_stack;
    union anonymous_typeZ42 anonymous_var_nameY10;
    char __padding[128-sizeof(struct anonymous_typeX13)];
    struct sigcontext uc_mcontext;
};

typedef struct ucontext ucontext_t;

extern const char* sys_siglist[(64+1)];
extern const char* sys_signame[(64+1)];
typedef unsigned long  int fd_mask;

struct anonymous_typeX43
{
    unsigned long  int fds_bits[1024/(8*sizeof(unsigned long  int))];
};

typedef struct anonymous_typeX43 fd_set;

typedef struct __timezone_t* timezone_t;

extern char* tzname[];
extern int daylight;
extern long  int timezone;
struct tm
{
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
    long  int tm_gmtoff;
    const char* tm_zone;
};

enum :unsigned long  int { BIONIC_MULTIBYTE_RESULT_ILLEGAL_SEQUENCE=(18446744073709551615UL),
BIONIC_MULTIBYTE_RESULT_INCOMPLETE_SEQUENCE=(18446744073709551614UL),
BIONIC_MULTIBYTE_RESULT_NO_BYTES_CONSUMED=(18446744073709551613UL)
};

struct anonymous_typeX44
{
    unsigned char __seq[4];
    unsigned char __reserved[4];
};

typedef struct anonymous_typeX44 mbstate_t;

typedef unsigned int wint_t;

typedef long wctype_t;

typedef const void* wctrans_t;

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
extern _Bool gComeBareMetal;
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
    _Bool (*no_mutex)(void*);
};

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
    _Bool mUniq;
    char* mName;
    int mGenericsNum;
    int mMethodGenericsNum;
    struct list$1tuple2$2char$phsType$ph$ph* mFields;
    char* mParentClassName;
    char* mAttribute;
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
    _Bool mTask;
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
    _Bool mDefferRightValue;
};

struct sVar
{
    char* mName;
    char* mCValueName;
    struct sType* mType;
    _Bool mGlobal;
    _Bool mAllocaValue;
    _Bool mNoFree;
    _Bool mComma;
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
    char* mTextBlock;
    char* mTextBlockSName;
    int mTextBlockSline;
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
    _Bool mGenericsFun;
    _Bool mImmutable;
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

struct CVALUE
{
    char* c_value;
    struct sType* type;
    struct sVar* var;
    struct sRightValueObject* right_value_objects;
    char* c_value_without_right_value_objects;
    char* c_value_without_cast_object_value;
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
    struct sVar* mObjVar;
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
    struct buffer* source;
    char* sname;
    char* sname_at_head;
    char* base_sname;
    int sline;
    int err_num;
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
    struct map$2char$phsFun$ph* uniq_funcs;
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
    _Bool in_method_block;
    _Bool prohibits_output_last_code;
};

struct sNodeBase
{
    int sline;
    char* sname;
    int sline_real;
};

struct sCurrentNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct tuple2$2int$bool$
{
    int v1;
    _Bool v2;
};

struct tuple2$2sType$phchar$ph
{
    struct sType* v1;
    char* v2;
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

struct tuple3$3char$phsFun$psGenericsFun$p
{
    char* v1;
    struct sFun* v2;
    struct sGenericsFun* v3;
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

struct tuple4$4char$phchar$phchar$phchar$ph
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
};

struct tuple3$3sType$phchar$phchar$ph
{
    struct sType* v1;
    char* v2;
    char* v3;
};

struct list_item$1tuple3$3sType$phchar$phchar$ph$ph
{
    struct tuple3$3sType$phchar$phchar$ph* item;
    struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* prev;
    struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* next;
};

struct list$1tuple3$3sType$phchar$phchar$ph$ph
{
    struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* head;
    struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* tail;
    int len;
    struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* it;
};

struct sGlobalVariable
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
    char* name;
    struct sNode* right_node;
    char* array_initializer;
    struct list$1tuple3$3sType$phchar$phchar$ph$ph* multiple_declare;
};

struct sExternalGlobalVariable
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
    char* name;
    struct list$1tuple3$3sType$phchar$phchar$ph$ph* multiple_declare;
};

struct tuple3$3sType$phchar$phvoid$p
{
    struct sType* v1;
    char* v2;
    void* v3;
};

// source head

// header function
int android_get_application_target_sdk_version();
int __system_property_get(const char* __name, char* __value);
int strcasecmp(const char* __s1, const char* __s2);
int strcasecmp_l(const char* __s1, const char* __s2, struct __locale_t* __l);
int strncasecmp(const char* __s1, const char* __s2, unsigned long  int __n);
int strncasecmp_l(const char* __s1, const char* __s2, unsigned long  int __n, struct __locale_t* __l);
void* memccpy(void* __dst, const void* __src, int __stop_char, unsigned long  int __n);
void* memchr(const void* __s, int __ch, unsigned long  int __n);
void* memrchr(const void* __s, int __ch, unsigned long  int __n);
int memcmp(const void* __lhs, const void* __rhs, unsigned long  int __n);
void* memcpy(void* anonymous_var_nameX2, const void* anonymous_var_nameX3, unsigned long  int anonymous_var_nameX4);
void* mempcpy(void* __dst, const void* __src, unsigned long  int __n);
void* memmove(void* __dst, const void* __src, unsigned long  int __n);
void* memset(void* __dst, int __ch, unsigned long  int __n);
void* memmem(const void* __haystack, unsigned long  int __haystack_size, const void* __needle, unsigned long  int __needle_size);
char* strchr(const char* __s, int __ch);
char* __strchr_chk(const char* __s, int __ch, unsigned long  int __n);
char* strchrnul(const char* __s, int __ch);
char* strrchr(const char* __s, int __ch);
char* __strrchr_chk(const char* __s, int __ch, unsigned long  int __n);
unsigned long  int strlen(const char* __s);
unsigned long  int __strlen_chk(const char* __s, unsigned long  int __n);
int strcmp(const char* __lhs, const char* __rhs);
char* stpcpy(char* __dst, const char* __src);
char* strcpy(char* __dst, const char* __src);
char* strcat(char* __dst, const char* __src);
char* strdup(const char* __s);
char* strstr(const char* __haystack, const char* __needle);
char* strcasestr(const char* __haystack, const char* __needle);
char* strtok(char* __s, const char* __delimiter);
char* strtok_r(char* __s, const char* __delimiter, char** __pos_ptr);
char* strerror_l(int __errno_value, struct __locale_t* __l);
char* __gnu_strerror_r(int __errno_value, char* __buf, unsigned long  int __n);
const char* strerror(int __errno_value);
unsigned long  int strnlen(const char* __s, unsigned long  int __n);
char* strncat(char* __dst, const char* __src, unsigned long  int __n);
char* strndup(const char* __s, unsigned long  int __n);
int strncmp(const char* __lhs, const char* __rhs, unsigned long  int __n);
char* stpncpy(char* __dst, const char* __src, unsigned long  int __n);
char* strncpy(char* __dst, const char* __src, unsigned long  int __n);
unsigned long  int strlcat(char* __dst, const char* __src, unsigned long  int __n);
unsigned long  int strlcpy(char* __dst, const char* __src, unsigned long  int __n);
unsigned long  int strcspn(const char* __s, const char* __reject);
char* strpbrk(const char* __s, const char* __accept);
char* strsep(char** __s_ptr, const char* __delimiter);
unsigned long  int strspn(const char* __s, const char* __accept);
char* strsignal(int __signal);
int strcoll(const char* __lhs, const char* __rhs);
unsigned long  int strxfrm(char* __dst, const char* __src, unsigned long  int __n);
int strcoll_l(const char* __lhs, const char* __rhs, struct __locale_t* __l);
unsigned long  int strxfrm_l(char* __dst, const char* __src, unsigned long  int __n, struct __locale_t* __l);
char* __gnu_basename(const char* __path);
void clearerr(struct __sFILE* __fp);
int fclose(struct __sFILE* __fp);
int feof(struct __sFILE* __fp);
int ferror(struct __sFILE* __fp);
int fflush(struct __sFILE* __fp);
int fgetc(struct __sFILE* __fp);
char* fgets(char* __buf, int __size, struct __sFILE* __fp);
int fprintf(struct __sFILE* __fp, const char* __fmt, ...);
int fputc(int __ch, struct __sFILE* __fp);
int fputs(const char* __s, struct __sFILE* __fp);
unsigned long  int fread(void* __buf, unsigned long  int __size, unsigned long  int __count, struct __sFILE* __fp);
int fscanf(struct __sFILE* __fp, const char* __fmt, ...);
unsigned long  int fwrite(const void* __buf, unsigned long  int __size, unsigned long  int __count, struct __sFILE* __fp);
int getc(struct __sFILE* __fp);
int getchar();
long getdelim(char** __line_ptr, unsigned long  int* __line_length_ptr, int __delimiter, struct __sFILE* __fp);
long getline(char** __line_ptr, unsigned long  int* __line_length_ptr, struct __sFILE* __fp);
void perror(const char* __msg);
int printf(const char* __fmt, ...);
int putc(int __ch, struct __sFILE* __fp);
int putchar(int __ch);
int puts(const char* __s);
int remove(const char* __path);
void rewind(struct __sFILE* __fp);
int scanf(const char* __fmt, ...);
void setbuf(struct __sFILE* __fp, char* __buf);
int setvbuf(struct __sFILE* __fp, char* __buf, int __mode, unsigned long  int __size);
int sscanf(const char* __s, const char* __fmt, ...);
int ungetc(int __ch, struct __sFILE* __fp);
int vfprintf(struct __sFILE* __fp, const char* __fmt, va_list __args);
int vprintf(const char* __fp, va_list __args);
int dprintf(int __fd, const char* __fmt, ...);
int vdprintf(int __fd, const char* __fmt, va_list __args);
int sprintf(char* __s, const char* __fmt, ...);
int vsprintf(char* __s, const char* __fmt, va_list __args);
char* tmpnam(char* __s);
char* tempnam(const char* __dir, const char* __prefix);
int rename(const char* __old_path, const char* __new_path);
int renameat(int __old_dir_fd, const char* __old_path, int __new_dir_fd, const char* __new_path);
int fseek(struct __sFILE* __fp, long __offset, int __whence);
long ftell(struct __sFILE* __fp);
int fgetpos(struct __sFILE* __fp, long* __pos);
int fsetpos(struct __sFILE* __fp, const long* __pos);
int fseeko(struct __sFILE* __fp, long __offset, int __whence);
long ftello(struct __sFILE* __fp);
struct __sFILE* funopen(const void* __cookie, int (*__read_fn)(void*,char*,int), int (*__write_fn)(void*,const char*,int), long (*__seek_fn)(void*,long,int), int (*__close_fn)(void*));
int fgetpos64(struct __sFILE* __fp, long* __pos);
int fsetpos64(struct __sFILE* __fp, const long* __pos);
int fseeko64(struct __sFILE* __fp, long __offset, int __whence);
long ftello64(struct __sFILE* __fp);
struct __sFILE* funopen64(const void* __cookie, int (*__read_fn)(void*,char*,int), int (*__write_fn)(void*,const char*,int), long (*__seek_fn)(void*,long,int), int (*__close_fn)(void*));
struct __sFILE* fopen(const char* __path, const char* __mode);
struct __sFILE* fopen64(const char* __path, const char* __mode);
struct __sFILE* freopen(const char* __path, const char* __mode, struct __sFILE* __fp);
struct __sFILE* freopen64(const char* __path, const char* __mode, struct __sFILE* __fp);
struct __sFILE* tmpfile64();
int snprintf(char* __buf, unsigned long  int __size, const char* __fmt, ...);
int vfscanf(struct __sFILE* __fp, const char* __fmt, va_list __args);
int vscanf(const char* __fmt, va_list __args);
int vsnprintf(char* __buf, unsigned long  int __size, const char* __fmt, va_list __args);
int vsscanf(const char* __s, const char* __fmt, va_list __args);
struct __sFILE* fdopen(int __fd, const char* __mode);
int fileno(struct __sFILE* __fp);
int pclose(struct __sFILE* __fp);
struct __sFILE* popen(const char* __command, const char* __mode);
void flockfile(struct __sFILE* __fp);
int ftrylockfile(struct __sFILE* __fp);
void funlockfile(struct __sFILE* __fp);
int getc_unlocked(struct __sFILE* __fp);
int getchar_unlocked();
int putc_unlocked(int __ch, struct __sFILE* __fp);
int putchar_unlocked(int __ch);
struct __sFILE* fmemopen(void* __buf, unsigned long  int __size, const char* __mode);
struct __sFILE* open_memstream(char** __ptr, unsigned long  int* __size_ptr);
int asprintf(char** __s_ptr, const char* __fmt, ...);
char* fgetln(struct __sFILE* __fp, unsigned long  int* __length_ptr);
int fpurge(struct __sFILE* __fp);
void setbuffer(struct __sFILE* __fp, char* __buf, int __size);
int setlinebuf(struct __sFILE* __fp);
int vasprintf(char** __s_ptr, const char* __fmt, va_list __args);
void clearerr_unlocked(struct __sFILE* __fp);
int feof_unlocked(struct __sFILE* __fp);
int ferror_unlocked(struct __sFILE* __fp);
int fileno_unlocked(struct __sFILE* __fp);
int open(const char* anonymous_var_nameX25, int anonymous_var_nameX26, ...);
int getpid();
int unlink(const char* anonymous_var_nameX27);
void* malloc(unsigned long  int __byte_count);
void* calloc(unsigned long  int __item_count, unsigned long  int __item_size);
void* realloc(void* __ptr, unsigned long  int __byte_count);
void free(void* __ptr);
void* memalign(unsigned long  int __alignment, unsigned long  int __byte_count);
unsigned long  int malloc_usable_size(const void* __ptr);
struct mallinfo2 mallinfo();
int malloc_info(int __must_be_zero, struct __sFILE* __fp);
void abort();
void exit(int __status);
void _Exit(int __status);
int atexit(void (*__fn)());
int at_quick_exit(void (*__fn)());
void quick_exit(int __status);
char* getenv(const char* __name);
int putenv(char* __assignment);
int setenv(const char* __name, const char* __value, int __overwrite);
int unsetenv(const char* __name);
int clearenv();
char* mkdtemp(char* __template);
char* mktemp(char* __template);
int mkostemp64(char* __template, int __flags);
int mkostemp(char* __template, int __flags);
int mkostemps64(char* __template, int __suffix_length, int __flags);
int mkostemps(char* __template, int __suffix_length, int __flags);
int mkstemp64(char* __template);
int mkstemp(char* __template);
int mkstemps64(char* __template, int __flags);
int mkstemps(char* __template, int __flags);
long strtol(const char* __s, char** __end_ptr, int __base);
long long strtoll(const char* __s, char** __end_ptr, int __base);
unsigned long  int strtoul(const char* __s, char** __end_ptr, int __base);
unsigned long  long strtoull(const char* __s, char** __end_ptr, int __base);
int posix_memalign(void** __memptr, unsigned long  int __alignment, unsigned long  int __size);
double strtod(const char* __s, char** __end_ptr);
long  double strtold(const char* __s, char** __end_ptr);
int atoi(const char* __s);
long atol(const char* __s);
long long atoll(const char* __s);
char* realpath(const char* __path, char* __resolved);
int system(const char* __command);
void* bsearch(const void* __key, const void* __base, unsigned long  int __nmemb, unsigned long  int __size, int (*__comparator)(const void*,const void*));
void qsort(void* __base, unsigned long  int __nmemb, unsigned long  int __size, int (*__comparator)(const void*,const void*));
unsigned int arc4random();
unsigned int arc4random_uniform(unsigned int __upper_bound);
void arc4random_buf(void* __buf, unsigned long  int __n);
int rand_r(unsigned int* __seed_ptr);
double drand48();
double erand48(unsigned short int __xsubi[3]);
long jrand48(unsigned short int __xsubi[3]);
void lcong48(unsigned short int __param[7]);
long lrand48();
long mrand48();
long nrand48(unsigned short int __xsubi[3]);
unsigned short int* seed48(unsigned short int __seed16v[3]);
void srand48(long __seed);
char* initstate(unsigned int __seed, char* __state, unsigned long  int __n);
char* setstate(char* __state);
int getpt();
int posix_openpt(int __flags);
char* ptsname(int __fd);
int ptsname_r(int __fd, char* __buf, unsigned long  int __n);
int unlockpt(int __fd);
struct anonymous_typeX10 div(int __numerator, int __denominator);
struct anonymous_typeX11 ldiv(long __numerator, long __denominator);
struct anonymous_typeX12 lldiv(long long __numerator, long long __denominator);
const char* getprogname();
void setprogname(const char* __name);
int mblen(const char* __s, unsigned long  int __n);
unsigned long  int mbstowcs(unsigned int* __dst, const char* __src, unsigned long  int __n);
int mbtowc(unsigned int* __wc_ptr, const char* __s, unsigned long  int __n);
int wctomb(char* __dst, unsigned int __wc);
unsigned long  int wcstombs(char* __dst, const unsigned int* __src, unsigned long  int __n);
int abs(int __x);
long labs(long __x);
long long llabs(long long __x);
float strtof(const char* __s, char** __end_ptr);
double atof(const char* __s);
int rand();
void srand(unsigned int __seed);
long random();
void srandom(unsigned int __seed);
int grantpt(int __fd);
long long strtoll_l(const char* __s, char** __end_ptr, int __base, struct __locale_t* __l);
unsigned long  long strtoull_l(const char* __s, char** __end_ptr, int __base, struct __locale_t* __l);
long  double strtold_l(const char* __s, char** __end_ptr, struct __locale_t* __l);
struct lconv* localeconv();
struct __locale_t* duplocale(struct __locale_t* __l);
void freelocale(struct __locale_t* __l);
struct __locale_t* newlocale(int __category_mask, const char* __locale_name, struct __locale_t* __base);
char* setlocale(int __category, const char* __locale_name);
struct __locale_t* uselocale(struct __locale_t* __l);
int* __errno();
void __assert(const char* __file, int __line, const char* __msg);
void __assert2(const char* __file, int __line, const char* __function, const char* __msg);
int __libc_current_sigrtmin();
int __libc_current_sigrtmax();
int sigaction(int __signal, const struct sigaction* __new_action, struct sigaction* __old_action);
int siginterrupt(int __signal, int __flag);
void (*signal(int __signal, void (*__handler)(int)))(int);
int sigaddset(struct anonymous_typeX13* __set, int __signal);
int sigdelset(struct anonymous_typeX13* __set, int __signal);
int sigemptyset(struct anonymous_typeX13* __set);
int sigfillset(struct anonymous_typeX13* __set);
int sigismember(const struct anonymous_typeX13* __set, int __signal);
int sigpending(struct anonymous_typeX13* __set);
int sigprocmask(int __how, const struct anonymous_typeX13* __new_set, struct anonymous_typeX13* __old_set);
int sigsuspend(const struct anonymous_typeX13* __mask);
int sigwait(const struct anonymous_typeX13* __set, int* __signal);
int raise(int __signal);
int kill(int __pid, int __signal);
int killpg(int __pgrp, int __signal);
int tgkill(int __tgid, int __tid, int __signal);
int sigaltstack(const struct sigaltstack* __new_signal_stack, struct sigaltstack* __old_signal_stack);
void psiginfo(const struct siginfo* __info, const char* __msg);
void psignal(int __signal, const char* __msg);
int pthread_kill(long __pthread, int __signal);
int pthread_sigmask(int __how, const struct anonymous_typeX13* __new_set, struct anonymous_typeX13* __old_set);
int sigqueue(int __pid, int __signal, const union sigval __value);
int sigtimedwait(const struct anonymous_typeX13* __set, struct siginfo* __info, const struct timespec* __timeout);
int sigwaitinfo(const struct anonymous_typeX13* __set, struct siginfo* __info);
void __FD_CLR_chk(int anonymous_var_nameX45, struct anonymous_typeX43* anonymous_var_nameX46, unsigned long  int anonymous_var_nameX47);
void __FD_SET_chk(int anonymous_var_nameX48, struct anonymous_typeX43* anonymous_var_nameX49, unsigned long  int anonymous_var_nameX50);
int __FD_ISSET_chk(int anonymous_var_nameX51, const struct anonymous_typeX43* anonymous_var_nameX52, unsigned long  int anonymous_var_nameX53);
int select(int __max_fd_plus_one, struct anonymous_typeX43* __read_fds, struct anonymous_typeX43* __write_fds, struct anonymous_typeX43* __exception_fds, struct timeval* __timeout);
int pselect(int __max_fd_plus_one, struct anonymous_typeX43* __read_fds, struct anonymous_typeX43* __write_fds, struct anonymous_typeX43* __exception_fds, const struct timespec* __timeout, const struct anonymous_typeX13* __mask);
int gettimeofday(struct timeval* __tv, struct timezone* __tz);
int settimeofday(const struct timeval* __tv, const struct timezone* __tz);
int getitimer(int __which, struct itimerval* __current_value);
int setitimer(int __which, const struct itimerval* __new_value, struct itimerval* __old_value);
int utimes(const char* __path, const struct timeval __times[2]);
int futimes(int __fd, const struct timeval __times[2]);
int lutimes(const char* __path, const struct timeval __times[2]);
int futimesat(int __dir_fd, const char* __path, const struct timeval __times[2]);
long time(long* __t);
int nanosleep(const struct timespec* __duration, struct timespec* __remainder);
char* asctime(const struct tm* __tm);
char* asctime_r(const struct tm* __tm, char* __buf);
double difftime(long __lhs, long __rhs);
long mktime(struct tm* __tm);
struct tm* localtime(const long* __t);
struct tm* localtime_r(const long* __t, struct tm* __tm);
long timelocal(struct tm* __tm);
struct tm* gmtime(const long* __t);
struct tm* gmtime_r(const long* __t, struct tm* __tm);
long timegm(struct tm* __tm);
char* strptime(const char* __s, const char* __fmt, struct tm* __tm);
unsigned long  int strftime(char* __buf, unsigned long  int __n, const char* __fmt, const struct tm* __tm);
unsigned long  int strftime_l(char* __buf, unsigned long  int __n, const char* __fmt, const struct tm* __tm, struct __locale_t* __l);
char* ctime(const long* __t);
char* ctime_r(const long* __t, char* __buf);
void tzset();
long clock();
int clock_getcpuclockid(int __pid, int* __clock);
int clock_getres(int __clock, struct timespec* __resolution);
int clock_gettime(int __clock, struct timespec* __ts);
int clock_nanosleep(int __clock, int __flags, const struct timespec* __time, struct timespec* __remainder);
int clock_settime(int __clock, const struct timespec* __ts);
int timer_create(int __clock, struct sigevent* __event, void** __timer_ptr);
int timer_delete(void* __timer);
int timer_settime(void* __timer, int __flags, const struct itimerspec* __new_value, struct itimerspec* __old_value);
int timer_gettime(void* _timer, struct itimerspec* __ts);
int timer_getoverrun(void* __timer);
int iswalnum(unsigned int __wc);
int iswalpha(unsigned int __wc);
int iswblank(unsigned int __wc);
int iswcntrl(unsigned int __wc);
int iswdigit(unsigned int __wc);
int iswgraph(unsigned int __wc);
int iswlower(unsigned int __wc);
int iswprint(unsigned int __wc);
int iswpunct(unsigned int __wc);
int iswspace(unsigned int __wc);
int iswupper(unsigned int __wc);
int iswxdigit(unsigned int __wc);
unsigned int towlower(unsigned int __wc);
unsigned int towupper(unsigned int __wc);
long wctype(const char* __name);
int iswctype(unsigned int __wc, long __type);
unsigned int towctrans(unsigned int __wc, const void* __transform);
const void* wctrans(const char* __name);
unsigned int btowc(int __ch);
int fwprintf(struct __sFILE* __fp, const unsigned int* __fmt, ...);
int fwscanf(struct __sFILE* __fp, const unsigned int* __fmt, ...);
unsigned int fgetwc(struct __sFILE* __fp);
unsigned int* fgetws(unsigned int* __buf, int __size, struct __sFILE* __fp);
unsigned int fputwc(unsigned int __wc, struct __sFILE* __fp);
int fputws(const unsigned int* __s, struct __sFILE* __fp);
int fwide(struct __sFILE* __fp, int __mode);
unsigned int getwc(struct __sFILE* __fp);
unsigned int getwchar();
int mbsinit(const struct anonymous_typeX44* __ps);
unsigned long  int mbrlen(const char* __s, unsigned long  int __n, struct anonymous_typeX44* __ps);
unsigned long  int mbrtowc(unsigned int* __buf, const char* __s, unsigned long  int __n, struct anonymous_typeX44* __ps);
unsigned long  int mbsrtowcs(unsigned int* __dst, const char** __src, unsigned long  int __dst_n, struct anonymous_typeX44* __ps);
unsigned long  int mbsnrtowcs(unsigned int* __dst, const char** __src, unsigned long  int __src_n, unsigned long  int __dst_n, struct anonymous_typeX44* __ps);
unsigned int putwc(unsigned int __wc, struct __sFILE* __fp);
unsigned int putwchar(unsigned int __wc);
int swprintf(unsigned int* __buf, unsigned long  int __n, const unsigned int* __fmt, ...);
int swscanf(const unsigned int* __s, const unsigned int* __fmt, ...);
unsigned int ungetwc(unsigned int __wc, struct __sFILE* __fp);
int vfwprintf(struct __sFILE* __fp, const unsigned int* __fmt, va_list __args);
int vfwscanf(struct __sFILE* __fp, const unsigned int* __fmt, va_list __args);
int vswprintf(unsigned int* __buf, unsigned long  int __n, const unsigned int* __fmt, va_list __args);
int vswscanf(const unsigned int* __s, const unsigned int* __fmt, va_list __args);
int vwprintf(const unsigned int* __fmt, va_list __args);
int vwscanf(const unsigned int* __fmt, va_list __args);
unsigned int* wcpcpy(unsigned int* __dst, const unsigned int* __src);
unsigned int* wcpncpy(unsigned int* __dst, const unsigned int* __src, unsigned long  int __n);
unsigned long  int wcrtomb(char* __buf, unsigned int __wc, struct anonymous_typeX44* __ps);
int wcscasecmp(const unsigned int* __lhs, const unsigned int* __rhs);
int wcscasecmp_l(const unsigned int* __lhs, const unsigned int* __rhs, struct __locale_t* __l);
unsigned int* wcscat(unsigned int* __dst, const unsigned int* __src);
unsigned int* wcschr(const unsigned int* __s, unsigned int __wc);
int wcscmp(const unsigned int* __lhs, const unsigned int* __rhs);
int wcscoll(const unsigned int* __lhs, const unsigned int* __rhs);
unsigned int* wcscpy(unsigned int* __dst, const unsigned int* __src);
unsigned long  int wcscspn(const unsigned int* __s, const unsigned int* __accept);
unsigned long  int wcsftime(unsigned int* __buf, unsigned long  int __n, const unsigned int* __fmt, const struct tm* __tm);
unsigned long  int wcslen(const unsigned int* __s);
int wcsncasecmp(const unsigned int* __lhs, const unsigned int* __rhs, unsigned long  int __n);
int wcsncasecmp_l(const unsigned int* __lhs, const unsigned int* __rhs, unsigned long  int __n, struct __locale_t* __l);
unsigned int* wcsncat(unsigned int* __dst, const unsigned int* __src, unsigned long  int __n);
int wcsncmp(const unsigned int* __lhs, const unsigned int* __rhs, unsigned long  int __n);
unsigned int* wcsncpy(unsigned int* __dst, const unsigned int* __src, unsigned long  int __n);
unsigned long  int wcsnrtombs(char* __dst, const unsigned int** __src, unsigned long  int __src_n, unsigned long  int __dst_n, struct anonymous_typeX44* __ps);
unsigned int* wcspbrk(const unsigned int* __s, const unsigned int* __accept);
unsigned int* wcsrchr(const unsigned int* __s, unsigned int __wc);
unsigned long  int wcsrtombs(char* __dst, const unsigned int** __src, unsigned long  int __dst_n, struct anonymous_typeX44* __ps);
unsigned long  int wcsspn(const unsigned int* __s, const unsigned int* __accept);
unsigned int* wcsstr(const unsigned int* __haystack, const unsigned int* __needle);
double wcstod(const unsigned int* __s, unsigned int** __end_ptr);
float wcstof(const unsigned int* __s, unsigned int** __end_ptr);
unsigned int* wcstok(unsigned int* __s, const unsigned int* __delimiter, unsigned int** __ptr);
long wcstol(const unsigned int* __s, unsigned int** __end_ptr, int __base);
long long wcstoll(const unsigned int* __s, unsigned int** __end_ptr, int __base);
long  double wcstold(const unsigned int* __s, unsigned int** __end_ptr);
unsigned long  int wcstoul(const unsigned int* __s, unsigned int** __end_ptr, int __base);
unsigned long  long wcstoull(const unsigned int* __s, unsigned int** __end_ptr, int __base);
int wcswidth(const unsigned int* __s, unsigned long  int __n);
unsigned long  int wcsxfrm(unsigned int* __dst, const unsigned int* __src, unsigned long  int __n);
int wctob(unsigned int __wc);
int wcwidth(unsigned int __wc);
unsigned int* wmemchr(const unsigned int* __src, unsigned int __wc, unsigned long  int __n);
int wmemcmp(const unsigned int* __lhs, const unsigned int* __rhs, unsigned long  int __n);
unsigned int* wmemcpy(unsigned int* __dst, const unsigned int* __src, unsigned long  int __n);
unsigned int* wmempcpy(unsigned int* __dst, const unsigned int* __src, unsigned long  int __n);
unsigned int* wmemmove(unsigned int* __dst, const unsigned int* __src, unsigned long  int __n);
unsigned int* wmemset(unsigned int* __dst, unsigned int __wc, unsigned long  int __n);
int wprintf(const unsigned int* __fmt, ...);
int wscanf(const unsigned int* __fmt, ...);
long long wcstoll_l(const unsigned int* __s, unsigned int** __end_ptr, int __base, struct __locale_t* __l);
unsigned long  long wcstoull_l(const unsigned int* __s, unsigned int** __end_ptr, int __base, struct __locale_t* __l);
long  double wcstold_l(const unsigned int* __s, unsigned int** __end_ptr, struct __locale_t* __l);
int wcscoll_l(const unsigned int* __lhs, const unsigned int* __rhs, struct __locale_t* __l);
unsigned long  int wcsxfrm_l(unsigned int* __dst, const unsigned int* __src, unsigned long  int __n, struct __locale_t* __l);
unsigned long  int wcslcat(unsigned int* __dst, const unsigned int* __src, unsigned long  int __n);
unsigned long  int wcslcpy(unsigned int* __dst, const unsigned int* __src, unsigned long  int __n);
struct __sFILE* open_wmemstream(unsigned int** __ptr, unsigned long  int* __size_ptr);
unsigned int* wcsdup(const unsigned int* __s);
unsigned long  int wcsnlen(const unsigned int* __s, unsigned long  int __n);
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
void come_free_mem_of_heap_pool(void* mem);
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name);
char* come_dynamic_typeof(void* mem);
void come_print_heap_info(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
int come_get_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj);
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
struct list$1char$p* charppa_to_list(char** self, unsigned long  int len);
struct list$1short$* shortpa_to_list(short* self, unsigned long  int len);
struct list$1int$* intpa_to_list(int* self, unsigned long  int len);
struct list$1long$* longpa_to_list(long* self, unsigned long  int len);
struct list$1float$* floatpa_to_list(float* self, unsigned long  int len);
struct list$1double$* doublepa_to_list(double* self, unsigned long  int len);
_Bool bool_equals(_Bool self, _Bool right);
_Bool _Bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool short_equals(short self, short right);
_Bool int_equals(int self, int right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(unsigned long  int self, unsigned long  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool bool_operator_equals(_Bool self, _Bool right);
_Bool _Bool_operator_equals(_Bool self, _Bool right);
_Bool char_operator_equals(char self, char right);
_Bool short_operator_equals(short self, short right);
_Bool int_operator_equals(int self, int right);
_Bool long_operator_equals(long self, long right);
_Bool bool_operator_not_equals(_Bool self, _Bool right);
_Bool _Bool_operator_not_equals(_Bool self, _Bool right);
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
unsigned int _Bool_get_hash_key(_Bool value);
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
_Bool _Bool_clone(_Bool self);
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
_Bool xiswascii(unsigned int c);
_Bool xisalpha(char c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xispunct(char c);
int string_length(char* str);
int charp_length(char* str);
char* charp_reverse(char* str);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_substring(char* str, int head, int tail);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
struct list$1char$ph* charp_split_char(char* self, char c);
char* charp_xsprintf(char* self, char* msg, ...);
char* int_xsprintf(int self, char* msg, ...);
char* charp_printable(char* str);
char* charp_sub_plain(char* self, char* str, char* replace);
char* xbasename(char* path);
char* xnoextname(char* path);
char* xextname(char* path);
char* bool_to_string(_Bool self);
char* _Bool_to_string(_Bool self);
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
int _Bool_compare(_Bool left, _Bool right);
int char_compare(char left, char right);
int short_compare(short left, short right);
int int_compare(int left, int right);
int long_compare(long left, long right);
int size_t_compare(unsigned long  int left, unsigned long  int right);
int float_compare(float left, float right);
int double_compare(double left, double right);
int string_compare(char* left, char* right);
int charp_compare(char* left, char* right);
char* FILE_read(struct __sFILE* f);
int FILE_write(struct __sFILE* f, char* str);
int FILE_fclose(struct __sFILE* f);
struct __sFILE* FILE_fprintf(struct __sFILE* f, const char* msg, ...);
void FILE_on_drop(struct __sFILE* self);
int charp_write(char* self, char* file_name, _Bool append);
char* charp_read(char* file_name);
struct list$1char$ph* FILE_readlines(struct __sFILE* f);
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
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, _Bool uniq_, struct sInfo* info);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute, _Bool const_fun, char* text_block, char* generics_sname, int generics_sline, _Bool immutable_);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline, _Bool const_fun);
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
struct sModule* sModule_initialize(struct sModule* self);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
struct sBlock* sBlock_initialize(struct sBlock* self);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info);
_Bool sNodeBase_terminated(struct sNodeBase* self);
_Bool sNodeBase_no_mutex(struct sNodeBase* self);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info);
int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_kind(struct sCurrentNode* self);
_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info);
void transpile_conditional_with_free_right_object_value(struct CVALUE* condtional_value, struct sInfo* info);
struct tuple2$2int$bool$* err_msg(struct sInfo* info, char* msg, ...);
int expected_next_character(char c, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main(int argc, char** argv);
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static);
char* make_come_type_name_string(struct sType* type, struct sInfo* info, _Bool original_type_name);
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
char* make_define_var(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info, _Bool come_type);
void transpiler_clear_last_code(struct sInfo* info);
_Bool output_header_file(struct sInfo* info);
void on_drop_object(struct sType* type, char* obj, struct sInfo* info, _Bool comma);
void on_load_object(struct sType* type, char* obj, struct sInfo* info);
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
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value);
struct tuple2$2sType$phchar$ph* clone_object(struct sType* type, char* obj, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
void append_object_to_right_values(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count, struct sType* obj_type, char* obj_value, struct sVar* obj_var);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool no_free);
struct sNode* reverse_node(struct sNode* value, struct sInfo* info);
struct sFun* compile_uniq_function(struct sFun* fun, struct sInfo* info);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct sNode* node, struct CVALUE* left_value, struct sInfo* info);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info, _Bool if_result);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
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
char* skip_block(struct sInfo* info, _Bool return_self_at_last);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* p2, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
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
_Bool is_inner_calling(struct sNode* node, struct sInfo* info);
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info);
struct sNode* expression_node_v95(struct sInfo* info);
struct sNode* store_var(char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, _Bool comma);
struct sNode* create_load_var(char* var_name, struct sInfo* info);
struct sNode* parse_array_initializer(struct sInfo* info);
struct sNode* parse_struct_initializer(struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info, _Bool function_param, _Bool comma);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);
struct sNode* parse_expect_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info);
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
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);
struct tuple3$3char$phsFun$psGenericsFun$p* get_method(char* fun_name, struct sType* obj_type, struct sInfo* info);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo* info, _Bool no_err);
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
struct sGlobalVariable* sGlobalVariable_initialize(struct sGlobalVariable* self, struct list$1tuple3$3sType$phchar$phchar$ph$ph* multiple_declare, struct sType* type, char* name, struct sNode* right_node, char* array_initializer, struct sInfo* info);
char* sGlobalVariable_kind(struct sGlobalVariable* self);
_Bool sGlobalVariable_compile(struct sGlobalVariable* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
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
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static struct list$1tuple3$3sType$phchar$phchar$ph$ph* list$1tuple3$3sType$phchar$phchar$ph$ph$p_clone(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self);
static void list$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self);
static void list_item$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* self);
static void tuple3$3sType$phchar$phchar$ph$p_finalize(struct tuple3$3sType$phchar$phchar$ph* self);
static struct list$1tuple3$3sType$phchar$phchar$ph$ph* list$1tuple3$3sType$phchar$phchar$ph$ph_initialize(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self);
static struct list$1tuple3$3sType$phchar$phchar$ph$ph* list$1tuple3$3sType$phchar$phchar$ph$ph_add(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self, struct tuple3$3sType$phchar$phchar$ph* item);
static struct tuple3$3sType$phchar$phchar$ph* tuple3$3sType$phchar$phchar$ph_clone(struct tuple3$3sType$phchar$phchar$ph* self);
static void tuple3$3sType$phchar$phchar$ph_finalize(struct tuple3$3sType$phchar$phchar$ph* self);
static void list$1tuple3$3sType$phchar$phchar$ph$ph_finalize(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self);
static void sGlobalVariable_finalize(struct sGlobalVariable* self);
static struct tuple3$3sType$phchar$phchar$ph* list$1tuple3$3sType$phchar$phchar$ph$ph_begin(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self);
static _Bool list$1tuple3$3sType$phchar$phchar$ph$ph_end(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self);
static struct tuple3$3sType$phchar$phchar$ph* list$1tuple3$3sType$phchar$phchar$ph$ph_next(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self);
static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_insert(struct map$2char$phbuffer$ph* self, char* key, struct buffer* item);
static void map$2char$phbuffer$ph_rehash(struct map$2char$phbuffer$ph* self);
static char* map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self);
static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self);
static char* map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self);
static struct buffer* map$2char$phbuffer$ph_at(struct map$2char$phbuffer$ph* self, char* key, struct buffer* default_value);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item);
static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self);
static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value);
static void CVALUE_finalize(struct CVALUE* self);
struct sExternalGlobalVariable* sExternalGlobalVariable_initialize(struct sExternalGlobalVariable* self, struct list$1tuple3$3sType$phchar$phchar$ph$ph* multiple_declare, struct sType* type, char* name, struct sInfo* info);
char* sExternalGlobalVariable_kind(struct sExternalGlobalVariable* self);
_Bool sExternalGlobalVariable_compile(struct sExternalGlobalVariable* self, struct sInfo* info);
static void sExternalGlobalVariable_finalize(struct sExternalGlobalVariable* self);
struct sNode* parse_global_variable(struct sInfo* info);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
static struct list$1tuple3$3sType$phchar$phchar$ph$ph* list$1tuple3$3sType$phchar$phchar$ph$ph_push_back(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self, struct tuple3$3sType$phchar$phchar$ph* item);
static struct tuple3$3sType$phchar$phchar$ph* tuple3$3sType$phchar$phchar$ph_initialize(struct tuple3$3sType$phchar$phchar$ph* self, struct sType* v1, char* v2, char* v3);
static struct tuple3$3sType$phchar$phvoid$p* tuple3$3sType$phchar$phvoid$p_initialize(struct tuple3$3sType$phchar$phvoid$p* self, struct sType* v1, char* v2, void* v3);
static void tuple3$3sType$phchar$phvoid$p$p_finalize(struct tuple3$3sType$phchar$phvoid$p* self);
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
static struct sExternalGlobalVariable* sExternalGlobalVariable_clone(struct sExternalGlobalVariable* self);
static struct sGlobalVariable* sGlobalVariable_clone(struct sGlobalVariable* self);
// uniq global variable
// inline function
static inline int android_get_device_api_level(){
int api_level_1;
    char value_0[92]={0};
    if(    __system_property_get("ro.build.version.sdk",value_0)<1    ) {
        return -1;
    }
    api_level_1=atoi(value_0);
    return (((api_level_1>0))?(api_level_1):(-1));
}
static inline void __bionic_bcopy(const void* b1, void* b2, unsigned long  int len){
    __builtin_memmove(b2,b1,len);
}
static inline void __bionic_bzero(void* b, unsigned long  int len){
    __builtin_memset(b,0,len);
}
static inline int ffs(int __n){
    return __builtin_ffs(__n);
}
static inline int ffsl(long __n){
    return __builtin_ffsl(__n);
}
static inline int ffsll(long long __n){
    return __builtin_ffsll(__n);
}
static inline char* ctermid(char* s){
    if(    s==0    ) {
        return (char*)"/dev/tty";
    }
    strcpy(s,"/dev/tty");
    return s;
}
static inline struct __sFILE* tmpfile(){
int p_2;
char* path_3;
int i_4;
unsigned int r_5;
int fd_6;
struct __sFILE* result_7;
path_3 = (void*)0;
memset(&i_4, 0, sizeof(int));
    p_2=getpid();
    for(    i_4=0    ;    i_4<100    ;    i_4++    ){
        r_5=arc4random();
        if(        asprintf(&path_3,"/data/data/com.termux/files/usr/tmp/tmpfile.%d-%u",p_2,r_5)==-1        ) {
            return ((void*)0);
        }
        fd_6=open(path_3,2|64|128|131072,384);
        if(        fd_6>=0        ) {
            result_7=fdopen(fd_6,"w+");
            unlink(path_3);
            free(path_3);
            return result_7;
        }
        free(path_3);
    }
    return ((void*)0);
}
static inline double strtod_l(const char* __s, char** __end_ptr, struct __locale_t* __l){
    return strtod(__s,__end_ptr);
}
static inline float strtof_l(const char* __s, char** __end_ptr, struct __locale_t* __l){
    return strtof(__s,__end_ptr);
}
static inline long strtol_l(const char* __s, char** __end_ptr, int __base, struct __locale_t* __l){
    return strtol(__s,__end_ptr,__base);
}
static inline int isalpha(int __ch){
    return (__ch>=65&&__ch<=90)||(__ch>=97&&__ch<=122);
}
static inline int isblank(int __ch){
    return __ch==32||__ch==9;
}
static inline int iscntrl(int __ch){
    return (((unsigned int)(__ch))<32)||__ch==127;
}
static inline int isdigit(int __ch){
    return (__ch>=48&&__ch<=57);
}
static inline int isgraph(int __ch){
    return (__ch>=33&&__ch<=126);
}
static inline int islower(int __ch){
    return (__ch>=97&&__ch<=122);
}
static inline int isprint(int __ch){
    return (__ch>=32&&__ch<=126);
}
static inline int isspace(int __ch){
    return __ch==32||(__ch>=9&&__ch<=13);
}
static inline int isupper(int __ch){
    return (__ch>=65&&__ch<=90);
}
static inline int isxdigit(int __ch){
    return (__ch>=48&&__ch<=57)||(__ch>=97&&__ch<=102)||(__ch>=65&&__ch<=70);
}
static inline int isalnum(int __ch){
    return isalpha(__ch)||isdigit(__ch);
}
static inline int ispunct(int __ch){
    return isgraph(__ch)&&!isalnum(__ch);
}
static inline int _tolower(int __ch){
    return __ch|32;
}
static inline int tolower(int __ch){
    if(    __ch>=65&&__ch<=90    ) {
        return _tolower(__ch);
    }
    return __ch;
}
static inline int _toupper(int __ch){
    return __ch^32;
}
static inline int toupper(int __ch){
    if(    __ch>=97&&__ch<=122    ) {
        return _toupper(__ch);
    }
    return __ch;
}
static inline int isascii(int __ch){
    return ((unsigned int)(__ch))<128;
}
static inline int toascii(int __ch){
    return __ch&127;
}
static inline int isalnum_l(int __ch, struct __locale_t* __l){
    return isalnum(__ch);
}
static inline int isalpha_l(int __ch, struct __locale_t* __l){
    return isalpha(__ch);
}
static inline int isblank_l(int __ch, struct __locale_t* __l){
    return isblank(__ch);
}
static inline int iscntrl_l(int __ch, struct __locale_t* __l){
    return iscntrl(__ch);
}
static inline int isdigit_l(int __ch, struct __locale_t* __l){
    return isdigit(__ch);
}
static inline int isgraph_l(int __ch, struct __locale_t* __l){
    return isgraph(__ch);
}
static inline int islower_l(int __ch, struct __locale_t* __l){
    return islower(__ch);
}
static inline int isprint_l(int __ch, struct __locale_t* __l){
    return isprint(__ch);
}
static inline int ispunct_l(int __ch, struct __locale_t* __l){
    return ispunct(__ch);
}
static inline int isspace_l(int __ch, struct __locale_t* __l){
    return isspace(__ch);
}
static inline int isupper_l(int __ch, struct __locale_t* __l){
    return isupper(__ch);
}
static inline int isxdigit_l(int __ch, struct __locale_t* __l){
    return isxdigit(__ch);
}
static inline int tolower_l(int __ch, struct __locale_t* __l){
    return tolower(__ch);
}
static inline int toupper_l(int __ch, struct __locale_t* __l){
    return toupper(__ch);
}

// body function
struct sGlobalVariable* sGlobalVariable_initialize(struct sGlobalVariable* self, struct list$1tuple3$3sType$phchar$phchar$ph$ph* multiple_declare, struct sType* type, char* name, struct sNode* right_node, char* array_initializer, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value38 = (void*)0;
struct sType* __dec_obj24;
void* __right_value39 = (void*)0;
char* __dec_obj25;
struct sNode* __dec_obj26;
char* __dec_obj27;
void* __right_value51 = (void*)0;
struct list$1tuple3$3sType$phchar$phchar$ph$ph* __dec_obj34;
struct sGlobalVariable* __result_obj__23;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj24=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj24,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj25=self->name,
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj26=self->right_node,
    self->right_node=(struct sNode*)come_increment_ref_count(right_node);
    (__dec_obj26 ? __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj27=self->array_initializer,
    self->array_initializer=(char*)come_increment_ref_count(array_initializer);
    __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj34=self->multiple_declare,
    self->multiple_declare=(struct list$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phchar$ph$ph$p_clone(multiple_declare));
    come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph_finalize, __dec_obj34,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__23 = (struct sGlobalVariable*)come_increment_ref_count(self);
    come_call_finalizer(sGlobalVariable_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize, multiple_declare, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (array_initializer = come_decrement_ref_count(array_initializer, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sGlobalVariable_finalize, __result_obj__23, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__23;
}

char* sGlobalVariable_kind(struct sGlobalVariable* self){
void* __right_value52 = (void*)0;
char* __result_obj__24;
    __result_obj__24 = (char*)come_increment_ref_count(((char*)(__right_value52=__builtin_string("sGlobalVariable"))));
    (__right_value52 = come_decrement_ref_count(__right_value52, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__24 = come_decrement_ref_count(__result_obj__24, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__24;
}

_Bool sGlobalVariable_compile(struct sGlobalVariable* self, struct sInfo* info){
void* __right_value53 = (void*)0;
struct sType* type_47;
void* __right_value54 = (void*)0;
char* name_48;
struct sNode* right_node_49;
void* __right_value55 = (void*)0;
char* array_initializer_50;
struct list$1tuple3$3sType$phchar$phchar$ph$ph* o2_saved_51;
struct tuple3$3sType$phchar$phchar$ph* it_54;
struct tuple3$3sType$phchar$phchar$ph* multiple_assign_var1 = (void*)0;
struct sType* type_57=0;
char* name_58=0;
char* initializer_59=0;
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
char* id_60;
void* __right_value58 = (void*)0;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
void* __right_value76 = (void*)0;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
char* id_126;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
void* __right_value91 = (void*)0;
void* __right_value92 = (void*)0;
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
void* __right_value95 = (void*)0;
void* __right_value96 = (void*)0;
void* __right_value97 = (void*)0;
void* __right_value98 = (void*)0;
void* __right_value99 = (void*)0;
void* __right_value100 = (void*)0;
_Bool Value_127;
_Bool __result_obj__64;
void* __right_value101 = (void*)0;
struct CVALUE* come_value_128;
void* __right_value102 = (void*)0;
char* id_129;
void* __right_value103 = (void*)0;
void* __right_value104 = (void*)0;
void* __right_value105 = (void*)0;
void* __right_value106 = (void*)0;
void* __right_value107 = (void*)0;
void* __right_value108 = (void*)0;
void* __right_value109 = (void*)0;
void* __right_value110 = (void*)0;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
void* __right_value113 = (void*)0;
void* __right_value114 = (void*)0;
void* __right_value115 = (void*)0;
char* id_130;
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
void* __right_value118 = (void*)0;
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
void* __right_value122 = (void*)0;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
_Bool __result_obj__65;
    type_47=(struct sType*)come_increment_ref_count(sType_clone(self->type));
    name_48=(char*)come_increment_ref_count((char*)come_memdup(self->name, "07gvar.c", 25, "char*"));
    right_node_49=self->right_node;
    array_initializer_50=(char*)come_increment_ref_count((char*)come_memdup(self->array_initializer, "07gvar.c", 27, "char*"));
    if(    self->multiple_declare    ) {
        for(        o2_saved_51=(struct list$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count((self->multiple_declare)),it_54=list$1tuple3$3sType$phchar$phchar$ph$ph_begin((o2_saved_51))        ;        !list$1tuple3$3sType$phchar$phchar$ph$ph_end((o2_saved_51))        ;        it_54=list$1tuple3$3sType$phchar$phchar$ph$ph_next((o2_saved_51))        ){
            multiple_assign_var1=it_54;
            type_57=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            name_58=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            initializer_59=(char*)come_increment_ref_count(multiple_assign_var1->v3);
            add_variable_to_global_table(name_58,(struct sType*)come_increment_ref_count(sType_clone(type_57)),info);
            if(            info->output_header_file            ) {
                if(                !type_57->mStatic                ) {
                    id_60=(char*)come_increment_ref_count(__builtin_string(name_58));
                    add_come_code_at_come_header(info,id_60,"extern %s;\n",((char*)(__right_value58=make_define_var(type_57,name_58,(_Bool)0,(_Bool)1,info,(_Bool)0))));
                    (__right_value58 = come_decrement_ref_count(__right_value58, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (id_60 = come_decrement_ref_count(id_60, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            else if(            type_57->mUniq            ) {
                map$2char$phbuffer$ph_insert(info->struct_definition,(char*)come_increment_ref_count(__builtin_string(name_58)),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value69=xsprintf("extern %s;\n",((char*)(__right_value68=make_define_var(type_57,name_58,(_Bool)0,(_Bool)0,info,(_Bool)0)))))))));
                (__right_value68 = come_decrement_ref_count(__right_value68, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value69 = come_decrement_ref_count(__right_value69, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                map$2char$phchar$ph_insert(info->uniq_definition,(char*)come_increment_ref_count(__builtin_string(name_58)),(char*)come_increment_ref_count(xsprintf("%s;\n",((char*)(__right_value77=make_define_var(type_57,name_58,(_Bool)0,(_Bool)0,info,(_Bool)0))))));
                (__right_value77 = come_decrement_ref_count(__right_value77, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            initializer_59            ) {
                map$2char$phbuffer$ph_insert(info->struct_definition,(char*)come_increment_ref_count(__builtin_string(name_58)),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value81=xsprintf("%s=%s;",((char*)(__right_value80=make_define_var(type_57,name_58,(_Bool)0,(_Bool)0,info,(_Bool)0))),initializer_59))))));
                (__right_value80 = come_decrement_ref_count(__right_value80, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value81 = come_decrement_ref_count(__right_value81, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                map$2char$phbuffer$ph_insert(info->struct_definition,(char*)come_increment_ref_count(__builtin_string(name_58)),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value85=xsprintf("%s;",((char*)(__right_value84=make_define_var(type_57,name_58,(_Bool)0,(_Bool)0,info,(_Bool)0)))))))));
                (__right_value84 = come_decrement_ref_count(__right_value84, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value85 = come_decrement_ref_count(__right_value85, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            come_call_finalizer(sType_finalize, type_57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_58 = come_decrement_ref_count(name_58, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (initializer_59 = come_decrement_ref_count(initializer_59, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize, o2_saved_51, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else {
        add_variable_to_global_table(name_48,(struct sType*)come_increment_ref_count(sType_clone(type_47)),info);
        if(        array_initializer_50        ) {
            if(            info->output_header_file            ) {
                if(                !type_47->mStatic                ) {
                    id_126=(char*)come_increment_ref_count(__builtin_string(name_48));
                    add_come_code_at_come_header(info,id_126,"extern %s;\n",((char*)(__right_value89=make_define_var(type_47,name_48,(_Bool)0,(_Bool)1,info,(_Bool)0))));
                    (__right_value89 = come_decrement_ref_count(__right_value89, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (id_126 = come_decrement_ref_count(id_126, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            else if(            type_47->mUniq            ) {
                map$2char$phbuffer$ph_insert(info->struct_definition,(char*)come_increment_ref_count(__builtin_string(name_48)),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value92=xsprintf("extern %s;\n",((char*)(__right_value91=make_define_var(type_47,name_48,(_Bool)0,(_Bool)0,info,(_Bool)0)))))))));
                (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                map$2char$phchar$ph_insert(info->uniq_definition,(char*)come_increment_ref_count(__builtin_string(name_48)),(char*)come_increment_ref_count(xsprintf("%s=%s;\n",((char*)(__right_value95=make_define_var(type_47,name_48,(_Bool)0,(_Bool)0,info,(_Bool)0))),array_initializer_50)));
                (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                map$2char$phbuffer$ph_insert(info->struct_definition,(char*)come_increment_ref_count(__builtin_string(name_48)),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value99=xsprintf("%s=%s;",((char*)(__right_value98=make_define_var(type_47,name_48,(_Bool)0,(_Bool)0,info,(_Bool)0))),array_initializer_50))))));
                (__right_value98 = come_decrement_ref_count(__right_value98, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        else if(        right_node_49        ) {
            Value_127=node_compile(right_node_49,info);
            if(            !Value_127            ) {
                __result_obj__64 = (_Bool)0;
                come_call_finalizer(sType_finalize, type_47, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (name_48 = come_decrement_ref_count(name_48, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (array_initializer_50 = come_decrement_ref_count(array_initializer_50, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__64;
            }
            else {
            }
            come_value_128=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            info->output_header_file            ) {
                if(                !type_47->mStatic                ) {
                    id_129=(char*)come_increment_ref_count(__builtin_string(name_48));
                    add_come_code_at_come_header(info,id_129,"extern %s;\n",((char*)(__right_value103=make_define_var(type_47,name_48,(_Bool)0,(_Bool)1,info,(_Bool)0))));
                    (__right_value103 = come_decrement_ref_count(__right_value103, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (id_129 = come_decrement_ref_count(id_129, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            else if(            type_47->mUniq            ) {
                map$2char$phbuffer$ph_insert(info->struct_definition,(char*)come_increment_ref_count(__builtin_string(name_48)),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value106=xsprintf("extern %s;\n",((char*)(__right_value105=make_define_var(type_47,name_48,(_Bool)0,(_Bool)0,info,(_Bool)0)))))))));
                (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                map$2char$phchar$ph_insert(info->uniq_definition,(char*)come_increment_ref_count(__builtin_string(name_48)),(char*)come_increment_ref_count(xsprintf("%s=%s;\n",((char*)(__right_value109=make_define_var(type_47,name_48,(_Bool)0,(_Bool)0,info,(_Bool)0))),come_value_128->c_value)));
                (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                map$2char$phbuffer$ph_insert(info->struct_definition,(char*)come_increment_ref_count(__builtin_string(name_48)),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value113=xsprintf("%s=%s;",((char*)(__right_value112=make_define_var(type_47,name_48,(_Bool)0,(_Bool)0,info,(_Bool)0))),come_value_128->c_value))))));
                (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            come_call_finalizer(CVALUE_finalize, come_value_128, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else {
            if(            info->output_header_file            ) {
                if(                !type_47->mStatic                ) {
                    id_130=(char*)come_increment_ref_count(__builtin_string(name_48));
                    add_come_code_at_come_header(info,id_130,"extern %s;\n",((char*)(__right_value116=make_define_var(type_47,name_48,(_Bool)0,(_Bool)1,info,(_Bool)0))));
                    (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (id_130 = come_decrement_ref_count(id_130, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            else if(            type_47->mUniq            ) {
                map$2char$phbuffer$ph_insert(info->struct_definition,(char*)come_increment_ref_count(__builtin_string(name_48)),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value119=xsprintf("extern %s;\n",((char*)(__right_value118=make_define_var(type_47,name_48,(_Bool)0,(_Bool)0,info,(_Bool)0)))))))));
                (__right_value118 = come_decrement_ref_count(__right_value118, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                map$2char$phchar$ph_insert(info->uniq_definition,(char*)come_increment_ref_count(__builtin_string(name_48)),(char*)come_increment_ref_count(xsprintf("%s;\n",((char*)(__right_value122=make_define_var(type_47,name_48,(_Bool)0,(_Bool)0,info,(_Bool)0))))));
                (__right_value122 = come_decrement_ref_count(__right_value122, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                map$2char$phbuffer$ph_insert(info->struct_definition,(char*)come_increment_ref_count(__builtin_string(name_48)),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value126=xsprintf("%s;",((char*)(__right_value125=make_define_var(type_47,name_48,(_Bool)0,(_Bool)0,info,(_Bool)0)))))))));
                (__right_value125 = come_decrement_ref_count(__right_value125, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value126 = come_decrement_ref_count(__right_value126, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    __result_obj__65 = (_Bool)1;
    come_call_finalizer(sType_finalize, type_47, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (name_48 = come_decrement_ref_count(name_48, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (array_initializer_50 = come_decrement_ref_count(array_initializer_50, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__65;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__1;
void* __right_value1 = (void*)0;
struct sType* result_8;
void* __right_value2 = (void*)0;
struct sType* __dec_obj1;
void* __right_value3 = (void*)0;
struct sType* __dec_obj2;
void* __right_value11 = (void*)0;
struct list$1sType$ph* __dec_obj6;
void* __right_value12 = (void*)0;
struct sType* __dec_obj7;
void* __right_value14 = (void*)0;
struct sNode* __dec_obj8;
void* __right_value15 = (void*)0;
struct sNode* __dec_obj9;
void* __right_value16 = (void*)0;
char* __dec_obj10;
void* __right_value17 = (void*)0;
char* __dec_obj11;
void* __right_value18 = (void*)0;
char* __dec_obj12;
void* __right_value26 = (void*)0;
struct list$1sNode$ph* __dec_obj16;
void* __right_value27 = (void*)0;
char* __dec_obj17;
void* __right_value28 = (void*)0;
struct list$1sType$ph* __dec_obj18;
void* __right_value36 = (void*)0;
struct list$1char$ph* __dec_obj22;
void* __right_value37 = (void*)0;
struct sType* __dec_obj23;
struct sType* __result_obj__16;
    if(    self==(void*)0    ) {
        __result_obj__1 = (void*)0;
        return __result_obj__1;
    }
    result_8=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result_8->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __dec_obj1=result_8->mOriginalLoadVarType,
        result_8->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj1,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __dec_obj2=result_8->mChannelType,
        result_8->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __dec_obj6=result_8->mGenericsTypes,
        result_8->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __dec_obj7=result_8->mNoSolvedGenericsType,
        result_8->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __dec_obj8=result_8->mSizeNum,
        result_8->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj8 ? __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __dec_obj9=result_8->mAlignas,
        result_8->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __dec_obj10=result_8->mTupleName,
        result_8->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj11=result_8->mAttribute,
        result_8->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_8->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_8->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)    ) {
        result_8->mShort=self->mShort;
    }
    if(    self!=((void*)0)    ) {
        result_8->mLong=self->mLong;
    }
    if(    self!=((void*)0)    ) {
        result_8->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)    ) {
        result_8->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)    ) {
        result_8->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)    ) {
        result_8->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)    ) {
        result_8->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)    ) {
        result_8->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result_8->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result_8->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)    ) {
        result_8->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)    ) {
        result_8->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)    ) {
        result_8->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)    ) {
        result_8->mTask=self->mTask;
    }
    if(    self!=((void*)0)    ) {
        result_8->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)    ) {
        result_8->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)    ) {
        result_8->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)    ) {
        result_8->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)    ) {
        result_8->mException=self->mException;
    }
    if(    self!=((void*)0)    ) {
        result_8->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result_8->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)    ) {
        result_8->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        __dec_obj12=result_8->mAsmName,
        result_8->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 37, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_8->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result_8->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)    ) {
        result_8->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj16=result_8->mArrayNum,
        result_8->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj16,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_8->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_8->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_8->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)    ) {
        result_8->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_8->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __dec_obj17=result_8->mOriginalTypeName,
        result_8->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 47, "char*"));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_8->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_8->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)    ) {
        result_8->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)    ) {
        result_8->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __dec_obj18=result_8->mParamTypes,
        result_8->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj18,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __dec_obj22=result_8->mParamNames,
        result_8->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj22,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __dec_obj23=result_8->mResultType,
        result_8->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj23,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_8->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)    ) {
        result_8->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__16 = result_8;
    come_call_finalizer(sType_finalize, result_8, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__16;
}

static void sType_finalize(struct sType* self){
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_9;
struct list_item$1sType$ph* prev_it_10;
    it_9=self->head;
    while(    it_9!=((void*)0)    ) {
        prev_it_10=it_9;
        it_9=it_9->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_10, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_11;
struct list_item$1sNode$ph* prev_it_12;
    it_11=self->head;
    while(    it_11!=((void*)0)    ) {
        prev_it_12=it_11;
        it_11=it_11->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_13;
struct list_item$1char$ph* prev_it_14;
    it_13=self->head;
    while(    it_13!=((void*)0)    ) {
        prev_it_14=it_13;
        it_13=it_13->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_14, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__2;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct list$1sType$ph* result_15;
struct list_item$1sType$ph* it_16;
void* __right_value9 = (void*)0;
void* __right_value10 = (void*)0;
struct list$1sType$ph* __result_obj__5;
    if(    self==((void*)0)    ) {
        __result_obj__2 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__2;
    }
    result_15=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1sType$ph*"))));
    it_16=self->head;
    while(    it_16!=((void*)0)    ) {
        if(        1        ) {
            list$1sType$ph_add(result_15,(struct sType*)come_increment_ref_count(sType_clone(it_16->item)));
        }
        else {
            list$1sType$ph_add(result_15,(struct sType*)come_increment_ref_count(sType_clone(it_16->item)));
        }
        it_16=it_16->next;
    }
    __result_obj__5 = (struct list$1sType$ph*)come_increment_ref_count(result_15);
    come_call_finalizer(list$1sType$ph$p_finalize, result_15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__5, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__5;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__3;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__3 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__3;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value6 = (void*)0;
struct list_item$1sType$ph* litem_17;
struct sType* __dec_obj3;
void* __right_value7 = (void*)0;
struct list_item$1sType$ph* litem_18;
struct sType* __dec_obj4;
void* __right_value8 = (void*)0;
struct list_item$1sType$ph* litem_19;
struct sType* __dec_obj5;
struct list$1sType$ph* __result_obj__4;
    if(    self->len==0    ) {
        litem_17=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value6=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1sType$ph*"))));
        litem_17->prev=((void*)0);
        litem_17->next=((void*)0);
        __dec_obj3=litem_17->item,
        litem_17->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_17;
        self->head=litem_17;
    }
    else if(    self->len==1    ) {
        litem_18=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value7=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1sType$ph*"))));
        litem_18->prev=self->head;
        litem_18->next=((void*)0);
        __dec_obj4=litem_18->item,
        litem_18->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_18;
        self->head->next=litem_18;
    }
    else {
        litem_19=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value8=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1sType$ph*"))));
        litem_19->prev=self->tail;
        litem_19->next=((void*)0);
        __dec_obj5=litem_19->item,
        litem_19->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_19;
        self->tail=litem_19;
    }
    self->len++;
    __result_obj__4 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__4;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_20;
struct list_item$1sType$ph* prev_it_21;
    it_20=self->head;
    while(    it_20!=((void*)0)    ) {
        prev_it_21=it_20;
        it_20=it_20->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_21, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__6;
void* __right_value13 = (void*)0;
struct sNode* result_22;
struct sNode* __result_obj__7;
    if(    self==(void*)0    ) {
        __result_obj__6 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__6) ? __result_obj__6 = come_decrement_ref_count(__result_obj__6, ((struct sNode*)__result_obj__6)->finalize, ((struct sNode*)__result_obj__6)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__6;
    }
    result_22=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)    ) {
        result_22->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)    ) {
        result_22->finalize=self->finalize;
    }
    if(    self!=((void*)0)    ) {
        result_22->clone=self->clone;
    }
    if(    self!=((void*)0)    ) {
        result_22->compile=self->compile;
    }
    if(    self!=((void*)0)    ) {
        result_22->sline=self->sline;
    }
    if(    self!=((void*)0)    ) {
        result_22->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_22->sname=self->sname;
    }
    if(    self!=((void*)0)    ) {
        result_22->terminated=self->terminated;
    }
    if(    self!=((void*)0)    ) {
        result_22->kind=self->kind;
    }
    if(    self!=((void*)0)    ) {
        result_22->no_mutex=self->no_mutex;
    }
    __result_obj__7 = (struct sNode*)come_increment_ref_count(result_22);
    ((result_22) ? result_22 = come_decrement_ref_count(result_22, ((struct sNode*)result_22)->finalize, ((struct sNode*)result_22)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__7) ? __result_obj__7 = come_decrement_ref_count(__result_obj__7, ((struct sNode*)__result_obj__7)->finalize, ((struct sNode*)__result_obj__7)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__7;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__8;
void* __right_value19 = (void*)0;
void* __right_value20 = (void*)0;
struct list$1sNode$ph* result_23;
struct list_item$1sNode$ph* it_24;
void* __right_value24 = (void*)0;
void* __right_value25 = (void*)0;
struct list$1sNode$ph* __result_obj__11;
    if(    self==((void*)0)    ) {
        __result_obj__8 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__8, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__8;
    }
    result_23=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1sNode$ph*"))));
    it_24=self->head;
    while(    it_24!=((void*)0)    ) {
        if(        1        ) {
            list$1sNode$ph_add(result_23,(struct sNode*)come_increment_ref_count(sNode_clone(it_24->item)));
        }
        else {
            list$1sNode$ph_add(result_23,(struct sNode*)come_increment_ref_count(sNode_clone(it_24->item)));
        }
        it_24=it_24->next;
    }
    __result_obj__11 = (struct list$1sNode$ph*)come_increment_ref_count(result_23);
    come_call_finalizer(list$1sNode$ph$p_finalize, result_23, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__11, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__11;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__9;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__9 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__9, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__9;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value21 = (void*)0;
struct list_item$1sNode$ph* litem_25;
struct sNode* __dec_obj13;
void* __right_value22 = (void*)0;
struct list_item$1sNode$ph* litem_26;
struct sNode* __dec_obj14;
void* __right_value23 = (void*)0;
struct list_item$1sNode$ph* litem_27;
struct sNode* __dec_obj15;
struct list$1sNode$ph* __result_obj__10;
    if(    self->len==0    ) {
        litem_25=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value21=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1sNode$ph*"))));
        litem_25->prev=((void*)0);
        litem_25->next=((void*)0);
        __dec_obj13=litem_25->item,
        litem_25->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj13 ? __dec_obj13 = come_decrement_ref_count(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_25;
        self->head=litem_25;
    }
    else if(    self->len==1    ) {
        litem_26=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value22=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1sNode$ph*"))));
        litem_26->prev=self->head;
        litem_26->next=((void*)0);
        __dec_obj14=litem_26->item,
        litem_26->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj14 ? __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_26;
        self->head->next=litem_26;
    }
    else {
        litem_27=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value23=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1sNode$ph*"))));
        litem_27->prev=self->tail;
        litem_27->next=((void*)0);
        __dec_obj15=litem_27->item,
        litem_27->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_27;
        self->tail=litem_27;
    }
    self->len++;
    __result_obj__10 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__10;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_28;
struct list_item$1sNode$ph* prev_it_29;
    it_28=self->head;
    while(    it_28!=((void*)0)    ) {
        prev_it_29=it_28;
        it_28=it_28->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_29, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__12;
void* __right_value29 = (void*)0;
void* __right_value30 = (void*)0;
struct list$1char$ph* result_30;
struct list_item$1char$ph* it_31;
void* __right_value34 = (void*)0;
void* __right_value35 = (void*)0;
struct list$1char$ph* __result_obj__15;
    if(    self==((void*)0)    ) {
        __result_obj__12 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__12;
    }
    result_30=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1char$ph*"))));
    it_31=self->head;
    while(    it_31!=((void*)0)    ) {
        if(        1        ) {
            list$1char$ph_add(result_30,(char*)come_increment_ref_count((char*)come_memdup(it_31->item, "/usr/local/include/comelang.h", 1013, "char*")));
        }
        else {
            list$1char$ph_add(result_30,(char*)come_increment_ref_count((char*)come_memdup(it_31->item, "/usr/local/include/comelang.h", 1016, "char*")));
        }
        it_31=it_31->next;
    }
    __result_obj__15 = (struct list$1char$ph*)come_increment_ref_count(result_30);
    come_call_finalizer(list$1char$ph$p_finalize, result_30, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__15;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__13;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__13 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__13, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__13;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value31 = (void*)0;
struct list_item$1char$ph* litem_32;
char* __dec_obj19;
void* __right_value32 = (void*)0;
struct list_item$1char$ph* litem_33;
char* __dec_obj20;
void* __right_value33 = (void*)0;
struct list_item$1char$ph* litem_34;
char* __dec_obj21;
struct list$1char$ph* __result_obj__14;
    if(    self->len==0    ) {
        litem_32=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value31=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1char$ph*"))));
        litem_32->prev=((void*)0);
        litem_32->next=((void*)0);
        __dec_obj19=litem_32->item,
        litem_32->item=(char*)come_increment_ref_count(item);
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_32;
        self->head=litem_32;
    }
    else if(    self->len==1    ) {
        litem_33=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value32=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1char$ph*"))));
        litem_33->prev=self->head;
        litem_33->next=((void*)0);
        __dec_obj20=litem_33->item,
        litem_33->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_33;
        self->head->next=litem_33;
    }
    else {
        litem_34=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value33=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1char$ph*"))));
        litem_34->prev=self->tail;
        litem_34->next=((void*)0);
        __dec_obj21=litem_34->item,
        litem_34->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_34;
        self->tail=litem_34;
    }
    self->len++;
    __result_obj__14 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__14;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_35;
struct list_item$1char$ph* prev_it_36;
    it_35=self->head;
    while(    it_35!=((void*)0)    ) {
        prev_it_36=it_35;
        it_35=it_35->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_36, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1tuple3$3sType$phchar$phchar$ph$ph* list$1tuple3$3sType$phchar$phchar$ph$ph$p_clone(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self){
struct list$1tuple3$3sType$phchar$phchar$ph$ph* __result_obj__17;
void* __right_value40 = (void*)0;
void* __right_value41 = (void*)0;
struct list$1tuple3$3sType$phchar$phchar$ph$ph* result_39;
struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* it_40;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct list$1tuple3$3sType$phchar$phchar$ph$ph* __result_obj__22;
    if(    self==((void*)0)    ) {
        __result_obj__17 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize, __result_obj__17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__17;
    }
    result_39=(struct list$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phchar$ph$ph_initialize((struct list$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count((struct list$1tuple3$3sType$phchar$phchar$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple3$3sType$phchar$phchar$ph$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1tuple3$3sType$phchar$phchar$ph$ph*"))));
    it_40=self->head;
    while(    it_40!=((void*)0)    ) {
        if(        1        ) {
            list$1tuple3$3sType$phchar$phchar$ph$ph_add(result_39,(struct tuple3$3sType$phchar$phchar$ph*)come_increment_ref_count(tuple3$3sType$phchar$phchar$ph_clone(it_40->item)));
        }
        else {
            list$1tuple3$3sType$phchar$phchar$ph$ph_add(result_39,(struct tuple3$3sType$phchar$phchar$ph*)come_increment_ref_count(tuple3$3sType$phchar$phchar$ph_clone(it_40->item)));
        }
        it_40=it_40->next;
    }
    __result_obj__22 = (struct list$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count(result_39);
    come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize, result_39, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize, __result_obj__22, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__22;
}

static void list$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self){
struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* it_37;
struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* prev_it_38;
    it_37=self->head;
    while(    it_37!=((void*)0)    ) {
        prev_it_38=it_37;
        it_37=it_37->next;
        come_call_finalizer(list_item$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize, prev_it_38, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(tuple3$3sType$phchar$phchar$ph$p_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void tuple3$3sType$phchar$phchar$ph$p_finalize(struct tuple3$3sType$phchar$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)    ) {
        (self->v3 = come_decrement_ref_count(self->v3, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1tuple3$3sType$phchar$phchar$ph$ph* list$1tuple3$3sType$phchar$phchar$ph$ph_initialize(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self){
struct list$1tuple3$3sType$phchar$phchar$ph$ph* __result_obj__18;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__18 = (struct list$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize, __result_obj__18, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__18;
}

static struct list$1tuple3$3sType$phchar$phchar$ph$ph* list$1tuple3$3sType$phchar$phchar$ph$ph_add(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self, struct tuple3$3sType$phchar$phchar$ph* item){
void* __right_value42 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* litem_41;
struct tuple3$3sType$phchar$phchar$ph* __dec_obj28;
void* __right_value43 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* litem_42;
struct tuple3$3sType$phchar$phchar$ph* __dec_obj29;
void* __right_value44 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* litem_43;
struct tuple3$3sType$phchar$phchar$ph* __dec_obj30;
struct list$1tuple3$3sType$phchar$phchar$ph$ph* __result_obj__19;
    if(    self->len==0    ) {
        litem_41=(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)(__right_value42=(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*"))));
        litem_41->prev=((void*)0);
        litem_41->next=((void*)0);
        __dec_obj28=litem_41->item,
        litem_41->item=(struct tuple3$3sType$phchar$phchar$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phchar$ph$p_finalize, __dec_obj28,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_41;
        self->head=litem_41;
    }
    else if(    self->len==1    ) {
        litem_42=(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)(__right_value43=(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*"))));
        litem_42->prev=self->head;
        litem_42->next=((void*)0);
        __dec_obj29=litem_42->item,
        litem_42->item=(struct tuple3$3sType$phchar$phchar$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phchar$ph$p_finalize, __dec_obj29,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_42;
        self->head->next=litem_42;
    }
    else {
        litem_43=(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)(__right_value44=(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*"))));
        litem_43->prev=self->tail;
        litem_43->next=((void*)0);
        __dec_obj30=litem_43->item,
        litem_43->item=(struct tuple3$3sType$phchar$phchar$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phchar$ph$p_finalize, __dec_obj30,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_43;
        self->tail=litem_43;
    }
    self->len++;
    __result_obj__19 = self;
    come_call_finalizer(tuple3$3sType$phchar$phchar$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__19;
}

static struct tuple3$3sType$phchar$phchar$ph* tuple3$3sType$phchar$phchar$ph_clone(struct tuple3$3sType$phchar$phchar$ph* self){
struct tuple3$3sType$phchar$phchar$ph* __result_obj__20;
void* __right_value45 = (void*)0;
struct tuple3$3sType$phchar$phchar$ph* result_44;
void* __right_value46 = (void*)0;
struct sType* __dec_obj31;
void* __right_value47 = (void*)0;
char* __dec_obj32;
void* __right_value48 = (void*)0;
char* __dec_obj33;
struct tuple3$3sType$phchar$phchar$ph* __result_obj__21;
    if(    self==(void*)0    ) {
        __result_obj__20 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(tuple3$3sType$phchar$phchar$ph$p_finalize, __result_obj__20, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__20;
    }
    result_44=(struct tuple3$3sType$phchar$phchar$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phchar$ph)*(1), "tuple3$3sType$phchar$phchar$ph_clone", 3, "struct tuple3$3sType$phchar$phchar$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        __dec_obj31=result_44->v1,
        result_44->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer(sType_finalize, __dec_obj31,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        __dec_obj32=result_44->v2,
        result_44->v2=(char*)come_increment_ref_count((char*)come_memdup(self->v2, "tuple3$3sType$phchar$phchar$ph_clone", 5, "char*"));
        __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)    ) {
        __dec_obj33=result_44->v3,
        result_44->v3=(char*)come_increment_ref_count((char*)come_memdup(self->v3, "tuple3$3sType$phchar$phchar$ph_clone", 6, "char*"));
        __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__21 = (struct tuple3$3sType$phchar$phchar$ph*)come_increment_ref_count(result_44);
    come_call_finalizer(tuple3$3sType$phchar$phchar$ph_finalize, result_44, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple3$3sType$phchar$phchar$ph$p_finalize, __result_obj__21, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__21;
}

static void tuple3$3sType$phchar$phchar$ph_finalize(struct tuple3$3sType$phchar$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)    ) {
        (self->v3 = come_decrement_ref_count(self->v3, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void list$1tuple3$3sType$phchar$phchar$ph$ph_finalize(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self){
struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* it_45;
struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* prev_it_46;
    it_45=self->head;
    while(    it_45!=((void*)0)    ) {
        prev_it_46=it_45;
        it_45=it_45->next;
        come_call_finalizer(list_item$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize, prev_it_46, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sGlobalVariable_finalize(struct sGlobalVariable* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)    ) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->right_node!=((void*)0)    ) {
        ((self->right_node) ? self->right_node = come_decrement_ref_count(self->right_node, ((struct sNode*)self->right_node)->finalize, ((struct sNode*)self->right_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->array_initializer!=((void*)0)    ) {
        (self->array_initializer = come_decrement_ref_count(self->array_initializer, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)    ) {
        come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize, self->multiple_declare, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct tuple3$3sType$phchar$phchar$ph* list$1tuple3$3sType$phchar$phchar$ph$ph_begin(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self){
struct tuple3$3sType$phchar$phchar$ph* result_52;
struct tuple3$3sType$phchar$phchar$ph* __result_obj__25;
struct tuple3$3sType$phchar$phchar$ph* __result_obj__26;
struct tuple3$3sType$phchar$phchar$ph* result_53;
struct tuple3$3sType$phchar$phchar$ph* __result_obj__27;
result_52 = (void*)0;
result_53 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_52,0,sizeof(struct tuple3$3sType$phchar$phchar$ph*));
        __result_obj__25 = result_52;
        return __result_obj__25;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__26 = self->it->item;
        return __result_obj__26;
    }
    memset(&result_53,0,sizeof(struct tuple3$3sType$phchar$phchar$ph*));
    __result_obj__27 = result_53;
    return __result_obj__27;
}

static _Bool list$1tuple3$3sType$phchar$phchar$ph$ph_end(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple3$3sType$phchar$phchar$ph* list$1tuple3$3sType$phchar$phchar$ph$ph_next(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self){
struct tuple3$3sType$phchar$phchar$ph* result_55;
struct tuple3$3sType$phchar$phchar$ph* __result_obj__28;
struct tuple3$3sType$phchar$phchar$ph* __result_obj__29;
struct tuple3$3sType$phchar$phchar$ph* result_56;
struct tuple3$3sType$phchar$phchar$ph* __result_obj__30;
result_55 = (void*)0;
result_56 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_55,0,sizeof(struct tuple3$3sType$phchar$phchar$ph*));
        __result_obj__28 = result_55;
        return __result_obj__28;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__29 = self->it->item;
        return __result_obj__29;
    }
    memset(&result_56,0,sizeof(struct tuple3$3sType$phchar$phchar$ph*));
    __result_obj__30 = result_56;
    return __result_obj__30;
}

static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_insert(struct map$2char$phbuffer$ph* self, char* key, struct buffer* item){
unsigned int hash_78;
unsigned int it_79;
_Bool same_key_exist_96;
char* it2_99;
struct map$2char$phbuffer$ph* __result_obj__52;
    if(    self->len*10>=self->size    ) {
        map$2char$phbuffer$ph_rehash(self);
    }
    hash_78=string_get_hash_key(((char*)key))%self->size;
    it_79=hash_78;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_79]        ) {
            if(            string_equals(self->keys[it_79],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it_79]);
                    (self->keys[it_79] = come_decrement_ref_count(self->keys[it_79], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_79]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_79]);
                    self->keys[it_79]=key;
                }
                if(                1                ) {
                    come_call_finalizer(buffer_finalize, self->items[it_79], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_79]=(struct buffer*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_79]=item;
                }
                break;
            }
            it_79++;
            if(            it_79>=self->size            ) {
                it_79=0;
            }
            else if(            it_79==hash_78            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_79]=(_Bool)1;
            if(            1            ) {
                self->keys[it_79]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_79]=key;
            }
            if(            1            ) {
                self->items[it_79]=(struct buffer*)come_increment_ref_count(item);
            }
            else {
                self->items[it_79]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_96=(_Bool)0;
    for(    it2_99=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_99=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_99,key)        ) {
            same_key_exist_96=(_Bool)1;
        }
    }
    if(    !same_key_exist_96    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__52 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__52;
}

static void map$2char$phbuffer$ph_rehash(struct map$2char$phbuffer$ph* self){
int size_61;
void* __right_value59 = (void*)0;
char** keys_62;
void* __right_value60 = (void*)0;
struct buffer** items_63;
void* __right_value61 = (void*)0;
_Bool* item_existance_64;
int len_65;
char* it_68;
struct buffer* default_value_71;
void* __right_value62 = (void*)0;
struct buffer* it2_72;
unsigned int hash_75;
int n_76;
struct buffer* default_value_77;
void* __right_value63 = (void*)0;
default_value_71 = (void*)0;
default_value_77 = (void*)0;
    size_61=self->size*10;
    keys_62=(char**)come_increment_ref_count(((char**)(__right_value59=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_61)), "/usr/local/include/comelang.h", 2163, "char**"))));
    items_63=(struct buffer**)come_increment_ref_count(((struct buffer**)(__right_value60=(struct buffer**)come_calloc_v2(1, sizeof(struct buffer*)*(1*(size_61)), "/usr/local/include/comelang.h", 2164, "struct buffer**"))));
    item_existance_64=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value61=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_61)), "/usr/local/include/comelang.h", 2165, "_Bool*"))));
    len_65=0;
    for(    it_68=map$2char$phbuffer$ph_begin(self)    ;    !map$2char$phbuffer$ph_end(self)    ;    it_68=map$2char$phbuffer$ph_next(self)    ){
        memset(&default_value_71,0,sizeof(struct buffer*));
        it2_72=((struct buffer*)(__right_value62=map$2char$phbuffer$ph_at(self,it_68,(struct buffer*)come_increment_ref_count(default_value_71))));
        come_call_finalizer(buffer_finalize, __right_value62, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash_75=string_get_hash_key(((char*)it_68))%size_61;
        n_76=hash_75;
        while(        (_Bool)1        ) {
            if(            item_existance_64[n_76]            ) {
                n_76++;
                if(                n_76>=size_61                ) {
                    n_76=0;
                }
                else if(                n_76==hash_75                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_64[n_76]=(_Bool)1;
                keys_62[n_76]=it_68;
                items_63[n_76]=((struct buffer*)(__right_value63=map$2char$phbuffer$ph_at(self,it_68,(struct buffer*)come_increment_ref_count(default_value_77))));
                come_call_finalizer(buffer_finalize, __right_value63, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len_65++;
                come_call_finalizer(buffer_finalize, default_value_77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(buffer_finalize, default_value_77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(buffer_finalize, default_value_71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_62;
    self->items=items_63;
    self->item_existance=item_existance_64;
    self->size=size_61;
    self->len=len_65;
}

static char* map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self){
char* result_66;
char* __result_obj__31;
char* __result_obj__32;
char* result_67;
char* __result_obj__33;
result_66 = (void*)0;
result_67 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_66,0,sizeof(char*));
        __result_obj__31 = result_66;
        return __result_obj__31;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__32 = self->key_list->it->item;
        return __result_obj__32;
    }
    memset(&result_67,0,sizeof(char*));
    __result_obj__33 = result_67;
    return __result_obj__33;
}

static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self){
char* result_69;
char* __result_obj__34;
char* __result_obj__35;
char* result_70;
char* __result_obj__36;
result_69 = (void*)0;
result_70 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_69,0,sizeof(char*));
        __result_obj__34 = result_69;
        return __result_obj__34;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__35 = self->key_list->it->item;
        return __result_obj__35;
    }
    memset(&result_70,0,sizeof(char*));
    __result_obj__36 = result_70;
    return __result_obj__36;
}

static struct buffer* map$2char$phbuffer$ph_at(struct map$2char$phbuffer$ph* self, char* key, struct buffer* default_value){
unsigned int hash_73;
unsigned int it_74;
struct buffer* __result_obj__37;
struct buffer* __result_obj__38;
struct buffer* __result_obj__39;
struct buffer* __result_obj__40;
    hash_73=string_get_hash_key(((char*)key))%self->size;
    it_74=hash_73;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_74]        ) {
            if(            string_equals(self->keys[it_74],key)            ) {
                __result_obj__37 = (struct buffer*)come_increment_ref_count(self->items[it_74]);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__37;
            }
            it_74++;
            if(            it_74>=self->size            ) {
                it_74=0;
            }
            else if(            it_74==hash_73            ) {
                __result_obj__38 = (struct buffer*)come_increment_ref_count(default_value);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__38, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__38;
            }
        }
        else {
            __result_obj__39 = (struct buffer*)come_increment_ref_count(default_value);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, __result_obj__39, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__39;
        }
    }
    __result_obj__40 = (struct buffer*)come_increment_ref_count(default_value);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__40, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__40;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_80;
struct list_item$1char$ph* it_81;
struct list$1char$ph* __result_obj__44;
    it2_80=0;
    it_81=self->head;
    while(    it_81!=((void*)0)    ) {
        if(        string_equals(it_81->item,item)        ) {
            list$1char$ph_delete(self,it2_80,it2_80+1);
            break;
        }
        it2_80++;
        it_81=it_81->next;
    }
    __result_obj__44 = self;
    return __result_obj__44;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_82;
struct list$1char$ph* __result_obj__41;
struct list_item$1char$ph* it_85;
int i_86;
struct list_item$1char$ph* prev_it_87;
struct list_item$1char$ph* it_88;
int i_89;
struct list_item$1char$ph* prev_it_90;
struct list_item$1char$ph* it_91;
struct list_item$1char$ph* head_prev_it_92;
struct list_item$1char$ph* tail_it_93;
int i_94;
struct list_item$1char$ph* prev_it_95;
struct list$1char$ph* __result_obj__43;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_82=tail;
        tail=head;
        head=tmp_82;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__41 = self;
        return __result_obj__41;
    }
    if(    head==0&&tail==self->len    ) {
        list$1char$ph_reset(self);
    }
    else if(    head==0    ) {
        it_85=self->head;
        i_86=0;
        while(        it_85!=((void*)0)        ) {
            if(            i_86<tail            ) {
                prev_it_87=it_85;
                it_85=it_85->next;
                i_86++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_87, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_86==tail            ) {
                self->head=it_85;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_85=it_85->next;
                i_86++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_88=self->head;
        i_89=0;
        while(        it_88!=((void*)0)        ) {
            if(            i_89==head            ) {
                self->tail=it_88->prev;
                self->tail->next=((void*)0);
            }
            if(            i_89>=head            ) {
                prev_it_90=it_88;
                it_88=it_88->next;
                i_89++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_88=it_88->next;
                i_89++;
            }
        }
    }
    else {
        it_91=self->head;
        head_prev_it_92=((void*)0);
        tail_it_93=((void*)0);
        i_94=0;
        while(        it_91!=((void*)0)        ) {
            if(            i_94==head            ) {
                head_prev_it_92=it_91->prev;
            }
            if(            i_94==tail            ) {
                tail_it_93=it_91;
            }
            if(            i_94>=head&&i_94<tail            ) {
                prev_it_95=it_91;
                it_91=it_91->next;
                i_94++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_91=it_91->next;
                i_94++;
            }
        }
        if(        head_prev_it_92!=((void*)0)        ) {
            head_prev_it_92->next=tail_it_93;
        }
        if(        tail_it_93!=((void*)0)        ) {
            tail_it_93->prev=head_prev_it_92;
        }
    }
    __result_obj__43 = self;
    return __result_obj__43;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_83;
struct list_item$1char$ph* prev_it_84;
struct list$1char$ph* __result_obj__42;
    it_83=self->head;
    while(    it_83!=((void*)0)    ) {
        prev_it_84=it_83;
        it_83=it_83->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__42 = self;
    return __result_obj__42;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_97;
char* __result_obj__45;
char* __result_obj__46;
char* result_98;
char* __result_obj__47;
result_97 = (void*)0;
result_98 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_97,0,sizeof(char*));
        __result_obj__45 = result_97;
        return __result_obj__45;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__46 = self->it->item;
        return __result_obj__46;
    }
    memset(&result_98,0,sizeof(char*));
    __result_obj__47 = result_98;
    return __result_obj__47;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_100;
char* __result_obj__48;
char* __result_obj__49;
char* result_101;
char* __result_obj__50;
result_100 = (void*)0;
result_101 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_100,0,sizeof(char*));
        __result_obj__48 = result_100;
        return __result_obj__48;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__49 = self->it->item;
        return __result_obj__49;
    }
    memset(&result_101,0,sizeof(char*));
    __result_obj__50 = result_101;
    return __result_obj__50;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value64 = (void*)0;
struct list_item$1char$ph* litem_102;
char* __dec_obj35;
void* __right_value65 = (void*)0;
struct list_item$1char$ph* litem_103;
char* __dec_obj36;
void* __right_value66 = (void*)0;
struct list_item$1char$ph* litem_104;
char* __dec_obj37;
struct list$1char$ph* __result_obj__51;
    if(    self->len==0    ) {
        litem_102=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value64=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$ph*"))));
        litem_102->prev=((void*)0);
        litem_102->next=((void*)0);
        __dec_obj35=litem_102->item,
        litem_102->item=(char*)come_increment_ref_count(item);
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_102;
        self->head=litem_102;
    }
    else if(    self->len==1    ) {
        litem_103=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value65=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$ph*"))));
        litem_103->prev=self->head;
        litem_103->next=((void*)0);
        __dec_obj36=litem_103->item,
        litem_103->item=(char*)come_increment_ref_count(item);
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_103;
        self->head->next=litem_103;
    }
    else {
        litem_104=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value66=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$ph*"))));
        litem_104->prev=self->tail;
        litem_104->next=((void*)0);
        __dec_obj37=litem_104->item,
        litem_104->item=(char*)come_increment_ref_count(item);
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_104;
        self->tail=litem_104;
    }
    self->len++;
    __result_obj__51 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__51;
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item){
unsigned int hash_122;
unsigned int it_123;
_Bool same_key_exist_124;
char* it2_125;
struct map$2char$phchar$ph* __result_obj__63;
    if(    self->len*10>=self->size    ) {
        map$2char$phchar$ph_rehash(self);
    }
    hash_122=string_get_hash_key(((char*)key))%self->size;
    it_123=hash_122;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_123]        ) {
            if(            string_equals(self->keys[it_123],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it_123]);
                    (self->keys[it_123] = come_decrement_ref_count(self->keys[it_123], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_123]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_123]);
                    self->keys[it_123]=key;
                }
                if(                1                ) {
                    (self->items[it_123] = come_decrement_ref_count(self->items[it_123], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->items[it_123]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_123]=item;
                }
                break;
            }
            it_123++;
            if(            it_123>=self->size            ) {
                it_123=0;
            }
            else if(            it_123==hash_122            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_123]=(_Bool)1;
            if(            1            ) {
                self->keys[it_123]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_123]=key;
            }
            if(            1            ) {
                self->items[it_123]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_123]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_124=(_Bool)0;
    for(    it2_125=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_125=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_125,key)        ) {
            same_key_exist_124=(_Bool)1;
        }
    }
    if(    !same_key_exist_124    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__63 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__63;
}

static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self){
int size_105;
void* __right_value71 = (void*)0;
char** keys_106;
void* __right_value72 = (void*)0;
char** items_107;
void* __right_value73 = (void*)0;
_Bool* item_existance_108;
int len_109;
char* it_112;
char* default_value_115;
void* __right_value74 = (void*)0;
char* it2_116;
unsigned int hash_119;
int n_120;
char* default_value_121;
void* __right_value75 = (void*)0;
default_value_115 = (void*)0;
default_value_121 = (void*)0;
    size_105=self->size*10;
    keys_106=(char**)come_increment_ref_count(((char**)(__right_value71=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_105)), "/usr/local/include/comelang.h", 2163, "char**"))));
    items_107=(char**)come_increment_ref_count(((char**)(__right_value72=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_105)), "/usr/local/include/comelang.h", 2164, "char**"))));
    item_existance_108=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value73=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_105)), "/usr/local/include/comelang.h", 2165, "_Bool*"))));
    len_109=0;
    for(    it_112=map$2char$phchar$ph_begin(self)    ;    !map$2char$phchar$ph_end(self)    ;    it_112=map$2char$phchar$ph_next(self)    ){
        memset(&default_value_115,0,sizeof(char*));
        it2_116=((char*)(__right_value74=map$2char$phchar$ph_at(self,it_112,(char*)come_increment_ref_count(default_value_115))));
        (__right_value74 = come_decrement_ref_count(__right_value74, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        hash_119=string_get_hash_key(((char*)it_112))%size_105;
        n_120=hash_119;
        while(        (_Bool)1        ) {
            if(            item_existance_108[n_120]            ) {
                n_120++;
                if(                n_120>=size_105                ) {
                    n_120=0;
                }
                else if(                n_120==hash_119                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_108[n_120]=(_Bool)1;
                keys_106[n_120]=it_112;
                items_107[n_120]=((char*)(__right_value75=map$2char$phchar$ph_at(self,it_112,(char*)come_increment_ref_count(default_value_121))));
                (__right_value75 = come_decrement_ref_count(__right_value75, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                len_109++;
                (default_value_121 = come_decrement_ref_count(default_value_121, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
                (default_value_121 = come_decrement_ref_count(default_value_121, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        (default_value_115 = come_decrement_ref_count(default_value_115, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_106;
    self->items=items_107;
    self->item_existance=item_existance_108;
    self->size=size_105;
    self->len=len_109;
}

static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self){
char* result_110;
char* __result_obj__53;
char* __result_obj__54;
char* result_111;
char* __result_obj__55;
result_110 = (void*)0;
result_111 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_110,0,sizeof(char*));
        __result_obj__53 = result_110;
        return __result_obj__53;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__54 = self->key_list->it->item;
        return __result_obj__54;
    }
    memset(&result_111,0,sizeof(char*));
    __result_obj__55 = result_111;
    return __result_obj__55;
}

static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self){
char* result_113;
char* __result_obj__56;
char* __result_obj__57;
char* result_114;
char* __result_obj__58;
result_113 = (void*)0;
result_114 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_113,0,sizeof(char*));
        __result_obj__56 = result_113;
        return __result_obj__56;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__57 = self->key_list->it->item;
        return __result_obj__57;
    }
    memset(&result_114,0,sizeof(char*));
    __result_obj__58 = result_114;
    return __result_obj__58;
}

static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value){
unsigned int hash_117;
unsigned int it_118;
char* __result_obj__59;
char* __result_obj__60;
char* __result_obj__61;
char* __result_obj__62;
    hash_117=string_get_hash_key(((char*)key))%self->size;
    it_118=hash_117;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_118]        ) {
            if(            string_equals(self->keys[it_118],key)            ) {
                __result_obj__59 = (char*)come_increment_ref_count(self->items[it_118]);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__result_obj__59 = come_decrement_ref_count(__result_obj__59, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                return __result_obj__59;
            }
            it_118++;
            if(            it_118>=self->size            ) {
                it_118=0;
            }
            else if(            it_118==hash_117            ) {
                __result_obj__60 = (char*)come_increment_ref_count(default_value);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                (__result_obj__60 = come_decrement_ref_count(__result_obj__60, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                return __result_obj__60;
            }
        }
        else {
            __result_obj__61 = (char*)come_increment_ref_count(default_value);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            (__result_obj__61 = come_decrement_ref_count(__result_obj__61, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__61;
        }
    }
    __result_obj__62 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__62 = come_decrement_ref_count(__result_obj__62, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__62;
}

static void CVALUE_finalize(struct CVALUE* self){
    if(    self!=((void*)0)&&self->c_value!=((void*)0)    ) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)    ) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)    ) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sExternalGlobalVariable* sExternalGlobalVariable_initialize(struct sExternalGlobalVariable* self, struct list$1tuple3$3sType$phchar$phchar$ph$ph* multiple_declare, struct sType* type, char* name, struct sInfo* info){
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
struct sType* __dec_obj38;
void* __right_value130 = (void*)0;
char* __dec_obj39;
void* __right_value131 = (void*)0;
struct list$1tuple3$3sType$phchar$phchar$ph$ph* __dec_obj40;
struct sExternalGlobalVariable* __result_obj__66;
    ((struct sNodeBase*)(__right_value128=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value128, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj38=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj38,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj39=self->name,
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj40=self->multiple_declare,
    self->multiple_declare=(struct list$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phchar$ph$ph$p_clone(multiple_declare));
    come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph_finalize, __dec_obj40,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__66 = (struct sExternalGlobalVariable*)come_increment_ref_count(self);
    come_call_finalizer(sExternalGlobalVariable_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize, multiple_declare, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sExternalGlobalVariable_finalize, __result_obj__66, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__66;
}

char* sExternalGlobalVariable_kind(struct sExternalGlobalVariable* self){
void* __right_value132 = (void*)0;
char* __result_obj__67;
    __result_obj__67 = (char*)come_increment_ref_count(((char*)(__right_value132=__builtin_string("sExternalGlobalVariable"))));
    (__right_value132 = come_decrement_ref_count(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__67 = come_decrement_ref_count(__result_obj__67, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__67;
}

_Bool sExternalGlobalVariable_compile(struct sExternalGlobalVariable* self, struct sInfo* info){
struct sType* type_131;
char* name_132;
struct list$1tuple3$3sType$phchar$phchar$ph$ph* o2_saved_133;
struct tuple3$3sType$phchar$phchar$ph* it_134;
struct tuple3$3sType$phchar$phchar$ph* multiple_assign_var2 = (void*)0;
struct sType* type_135=0;
char* name_136=0;
char* initializer_137=0;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
char* id_138;
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
void* __right_value137 = (void*)0;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
void* __right_value140 = (void*)0;
void* __right_value141 = (void*)0;
char* id_139;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
void* __right_value144 = (void*)0;
void* __right_value145 = (void*)0;
void* __right_value146 = (void*)0;
_Bool __result_obj__68;
    type_131=self->type;
    name_132=(char*)come_increment_ref_count(self->name);
    if(    self->multiple_declare    ) {
        for(        o2_saved_133=(struct list$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count((self->multiple_declare)),it_134=list$1tuple3$3sType$phchar$phchar$ph$ph_begin((o2_saved_133))        ;        !list$1tuple3$3sType$phchar$phchar$ph$ph_end((o2_saved_133))        ;        it_134=list$1tuple3$3sType$phchar$phchar$ph$ph_next((o2_saved_133))        ){
            multiple_assign_var2=it_134;
            type_135=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            name_136=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            initializer_137=(char*)come_increment_ref_count(multiple_assign_var2->v3);
            add_variable_to_global_table(name_136,(struct sType*)come_increment_ref_count(sType_clone(type_135)),info);
            if(            info->output_header_file            ) {
                if(                !type_135->mStatic                ) {
                    id_138=(char*)come_increment_ref_count(__builtin_string(name_136));
                    add_come_code_at_come_header(info,id_138,"extern %s;\n",((char*)(__right_value135=make_define_var(type_135,name_136,(_Bool)0,(_Bool)1,info,(_Bool)0))));
                    (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (id_138 = come_decrement_ref_count(id_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            else {
                map$2char$phbuffer$ph_insert(info->struct_definition,(char*)come_increment_ref_count(__builtin_string(name_136)),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value138=xsprintf("extern %s;",((char*)(__right_value137=make_define_var(type_135,name_136,(_Bool)0,(_Bool)0,info,(_Bool)0)))))))));
                (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            come_call_finalizer(sType_finalize, type_135, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_136 = come_decrement_ref_count(name_136, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (initializer_137 = come_decrement_ref_count(initializer_137, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize, o2_saved_133, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else {
        add_variable_to_global_table(name_132,(struct sType*)come_increment_ref_count(sType_clone(type_131)),info);
        if(        info->output_header_file        ) {
            if(            !type_131->mStatic            ) {
                id_139=(char*)come_increment_ref_count(__builtin_string(name_132));
                add_come_code_at_come_header(info,id_139,"extern %s;\n",((char*)(__right_value142=make_define_var(type_131,name_132,(_Bool)0,(_Bool)1,info,(_Bool)0))));
                (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (id_139 = come_decrement_ref_count(id_139, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        else {
            map$2char$phbuffer$ph_insert(info->struct_definition,(char*)come_increment_ref_count(__builtin_string(name_132)),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value145=xsprintf("extern %s;",((char*)(__right_value144=make_define_var(type_131,name_132,(_Bool)0,(_Bool)0,info,(_Bool)0)))))))));
            (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    __result_obj__68 = (_Bool)1;
    (name_132 = come_decrement_ref_count(name_132, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__68;
}

static void sExternalGlobalVariable_finalize(struct sExternalGlobalVariable* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)    ) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)    ) {
        come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize, self->multiple_declare, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

struct sNode* parse_global_variable(struct sInfo* info){
_Bool multiple_declare_140;
char* p_141;
int sline_142;
void* __right_value147 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var3 = (void*)0;
struct sType* type_143=0;
char* name_144=0;
_Bool err_145=0;
void* __right_value148 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var4 = (void*)0;
struct sType* type_146=0;
char* name_147=0;
void* __right_value149 = (void*)0;
_Bool no_output_err_148;
_Bool no_comma_149;
_Bool no_output_come_code_150;
void* __right_value150 = (void*)0;
struct sNode* exp_151;
void* __right_value151 = (void*)0;
void* __right_value152 = (void*)0;
struct list$1tuple3$3sType$phchar$phchar$ph$ph* multiple_declare_152;
void* __right_value153 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var5 = (void*)0;
struct sType* base_type_153=0;
char* name_154=0;
_Bool err_155=0;
void* __right_value154 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var6 = (void*)0;
struct sType* type2_156=0;
char* var_name_157=0;
char* head_158;
void* __right_value155 = (void*)0;
_Bool no_output_err_159;
_Bool no_comma_160;
_Bool no_output_come_code_161;
void* __right_value156 = (void*)0;
struct sNode* exp_162;
char* tail_163;
void* __right_value157 = (void*)0;
void* __right_value158 = (void*)0;
struct buffer* buf_164;
void* __right_value159 = (void*)0;
char* initializer_165;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var7 = (void*)0;
struct sType* type2_169=0;
char* var_name_170=0;
char* head_171;
void* __right_value168 = (void*)0;
_Bool no_output_err_172;
_Bool no_comma_173;
_Bool no_output_come_code_174;
void* __right_value169 = (void*)0;
struct sNode* exp_175;
char* tail_176;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
struct buffer* buf_177;
void* __right_value172 = (void*)0;
char* initializer_178;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
struct sNode* right_node_179;
char* array_initializer_180;
void* __right_value177 = (void*)0;
char* var_name2_181;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
struct sNode* _inf_value1;
struct sExternalGlobalVariable* _inf_obj_value1;
void* __right_value186 = (void*)0;
struct sNode* __result_obj__74;
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
struct sNode* _inf_value2;
struct sGlobalVariable* _inf_obj_value2;
void* __right_value196 = (void*)0;
struct sNode* __result_obj__77;
void* __right_value197 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var8 = (void*)0;
struct sType* result_type_184=0;
char* var_name_185=0;
_Bool err_186=0;
struct sNode* right_node_187;
char* array_initializer_188;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
struct buffer* buf_189;
_Bool squort_190;
_Bool dquort_191;
int nest_192;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
char* __dec_obj59;
void* __right_value202 = (void*)0;
struct sNode* __dec_obj60;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
struct sNode* _inf_value3;
struct sExternalGlobalVariable* _inf_obj_value3;
void* __right_value206 = (void*)0;
struct sNode* __result_obj__78;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
struct sNode* _inf_value4;
struct sGlobalVariable* _inf_obj_value4;
void* __right_value209 = (void*)0;
struct sNode* __result_obj__79;
struct sNode* __result_obj__80;
    multiple_declare_140=(_Bool)0;
    {
        p_141=info->p;
        sline_142=info->sline;
        if(        xisalpha(*info->p)||*info->p==95        ) {
            parse_sharp_v5(info);
            multiple_assign_var3=((struct tuple3$3sType$phchar$phbool$*)(__right_value147=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_143=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            name_144=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_145=multiple_assign_var3->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value147, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            parse_sharp_v5(info);
            if(            err_145            ) {
                parse_sharp_v5(info);
                multiple_assign_var4=((struct tuple2$2sType$phchar$ph*)(__right_value148=parse_variable_name((struct sType*)come_increment_ref_count(type_143),(_Bool)1,info)));
                type_146=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                name_147=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value148, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                parse_sharp_v5(info);
                if(                *info->p==61&&*(info->p+1)!=62                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==123                    ) {
                        ((char*)(__right_value149=skip_block(info,(_Bool)0)));
                        (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                    else {
                        no_output_err_148=info->no_output_err;
                        no_comma_149=info->no_comma;
                        no_output_come_code_150=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_151=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        info->no_comma=no_comma_149;
                        info->no_output_err=no_output_err_148;
                        info->no_output_come_code=no_output_come_code_150;
                        ((exp_151) ? exp_151 = come_decrement_ref_count(exp_151, ((struct sNode*)exp_151)->finalize, ((struct sNode*)exp_151)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    }
                }
                if(                !is_type_name(name_147,info)&&*info->p==44                ) {
                    multiple_declare_140=(_Bool)1;
                }
                come_call_finalizer(sType_finalize, type_146, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (name_147 = come_decrement_ref_count(name_147, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            come_call_finalizer(sType_finalize, type_143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_144 = come_decrement_ref_count(name_144, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        info->p=p_141;
        info->sline=sline_142;
    }
    if(    multiple_declare_140    ) {
        multiple_declare_152=(struct list$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phchar$ph$ph_initialize((struct list$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count((struct list$1tuple3$3sType$phchar$phchar$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple3$3sType$phchar$phchar$ph$ph)*(1), "07gvar.c", 350, "struct list$1tuple3$3sType$phchar$phchar$ph$ph*"))));
        parse_sharp_v5(info);
        multiple_assign_var5=((struct tuple3$3sType$phchar$phbool$*)(__right_value153=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        base_type_153=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
        name_154=(char*)come_increment_ref_count(multiple_assign_var5->v2);
        err_155=multiple_assign_var5->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value153, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        parse_sharp_v5(info);
        if(        !err_155        ) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        parse_sharp_v5(info);
        multiple_assign_var6=((struct tuple2$2sType$phchar$ph*)(__right_value154=parse_variable_name((struct sType*)come_increment_ref_count(base_type_153),(_Bool)1,info)));
        type2_156=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
        var_name_157=(char*)come_increment_ref_count(multiple_assign_var6->v2);
        come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value154, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        parse_sharp_v5(info);
        if(        *info->p==61        ) {
            info->p++;
            skip_spaces_and_lf(info);
            head_158=info->p;
            if(            *info->p==123            ) {
                ((char*)(__right_value155=skip_block(info,(_Bool)0)));
                (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                no_output_err_159=info->no_output_err;
                no_comma_160=info->no_comma;
                no_output_come_code_161=info->no_output_come_code;
                info->no_output_err=(_Bool)1;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp_162=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_160;
                info->no_output_err=no_output_err_159;
                info->no_output_come_code=no_output_come_code_161;
                ((exp_162) ? exp_162 = come_decrement_ref_count(exp_162, ((struct sNode*)exp_162)->finalize, ((struct sNode*)exp_162)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            tail_163=info->p;
            buf_164=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "07gvar.c", 392, "struct buffer*"))));
            buffer_append(buf_164,head_158,tail_163-head_158);
            initializer_165=(char*)come_increment_ref_count(buffer_to_string(buf_164));
            list$1tuple3$3sType$phchar$phchar$ph$ph_push_back(multiple_declare_152,(struct tuple3$3sType$phchar$phchar$ph*)come_increment_ref_count(tuple3$3sType$phchar$phchar$ph_initialize((struct tuple3$3sType$phchar$phchar$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phchar$ph)*(1), "07gvar.c", 398, "struct tuple3$3sType$phchar$phchar$ph")),(struct sType*)come_increment_ref_count(type2_156),(char*)come_increment_ref_count(var_name_157),(char*)come_increment_ref_count(initializer_165))));
            come_call_finalizer(buffer_finalize, buf_164, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (initializer_165 = come_decrement_ref_count(initializer_165, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            list$1tuple3$3sType$phchar$phchar$ph$ph_push_back(multiple_declare_152,(struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count(tuple3$3sType$phchar$phvoid$p_initialize((struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count((struct tuple3$3sType$phchar$phvoid$p*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phvoid$p)*(1), "07gvar.c", 401, "struct tuple3$3sType$phchar$phvoid$p")),(struct sType*)come_increment_ref_count(type2_156),(char*)come_increment_ref_count(var_name_157),((void*)0))));
        }
        while(        *info->p==44        ) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            multiple_assign_var7=((struct tuple2$2sType$phchar$ph*)(__right_value167=parse_variable_name((struct sType*)come_increment_ref_count(base_type_153),(_Bool)0,info)));
            type2_169=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
            var_name_170=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value167, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            *info->p==61            ) {
                info->p++;
                skip_spaces_and_lf(info);
                head_171=info->p;
                if(                *info->p==123                ) {
                    ((char*)(__right_value168=skip_block(info,(_Bool)0)));
                    (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                else {
                    no_output_err_172=info->no_output_err;
                    no_comma_173=info->no_comma;
                    no_output_come_code_174=info->no_output_come_code;
                    info->no_output_err=(_Bool)1;
                    info->no_comma=(_Bool)1;
                    info->no_output_come_code=(_Bool)1;
                    exp_175=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_173;
                    info->no_output_err=no_output_err_172;
                    info->no_output_come_code=no_output_come_code_174;
                    ((exp_175) ? exp_175 = come_decrement_ref_count(exp_175, ((struct sNode*)exp_175)->finalize, ((struct sNode*)exp_175)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                }
                tail_176=info->p;
                buf_177=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "07gvar.c", 438, "struct buffer*"))));
                buffer_append(buf_177,head_171,tail_176-head_171);
                initializer_178=(char*)come_increment_ref_count(buffer_to_string(buf_177));
                list$1tuple3$3sType$phchar$phchar$ph$ph_push_back(multiple_declare_152,(struct tuple3$3sType$phchar$phchar$ph*)come_increment_ref_count(tuple3$3sType$phchar$phchar$ph_initialize((struct tuple3$3sType$phchar$phchar$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phchar$ph)*(1), "07gvar.c", 444, "struct tuple3$3sType$phchar$phchar$ph")),(struct sType*)come_increment_ref_count(type2_169),(char*)come_increment_ref_count(var_name_170),(char*)come_increment_ref_count(initializer_178))));
                come_call_finalizer(buffer_finalize, buf_177, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (initializer_178 = come_decrement_ref_count(initializer_178, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                list$1tuple3$3sType$phchar$phchar$ph$ph_push_back(multiple_declare_152,(struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count(tuple3$3sType$phchar$phvoid$p_initialize((struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count((struct tuple3$3sType$phchar$phvoid$p*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phvoid$p)*(1), "07gvar.c", 447, "struct tuple3$3sType$phchar$phvoid$p")),(struct sType*)come_increment_ref_count(type2_169),(char*)come_increment_ref_count(var_name_170),((void*)0))));
            }
            come_call_finalizer(sType_finalize, type2_169, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (var_name_170 = come_decrement_ref_count(var_name_170, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        right_node_179=((void*)0);
        array_initializer_180=((void*)0);
        var_name2_181=(char*)come_increment_ref_count(__builtin_string(""));
        if(        base_type_153->mExtern        ) {
            if(            right_node_179            ) {
                ((struct tuple2$2int$bool$*)(__right_value178=err_msg(info,"invalid right value")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value178, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07gvar.c", 460, "struct sNode");
            _inf_obj_value1=(struct sExternalGlobalVariable*)come_increment_ref_count(((struct sExternalGlobalVariable*)(__right_value180=sExternalGlobalVariable_initialize((struct sExternalGlobalVariable*)come_increment_ref_count((struct sExternalGlobalVariable*)come_calloc_v2(1, sizeof(struct sExternalGlobalVariable)*(1), "07gvar.c", 460, "struct sExternalGlobalVariable*")),(struct list$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count(multiple_declare_152),base_type_153,(char*)come_increment_ref_count(var_name2_181),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sExternalGlobalVariable_finalize;
            _inf_value1->clone=(void*)sExternalGlobalVariable_clone;
            _inf_value1->compile=(void*)sExternalGlobalVariable_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sline_real=(void*)sNodeBase_sline_real;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sExternalGlobalVariable_kind;
            _inf_value1->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__74 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value186=_inf_value1)));
            come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize, multiple_declare_152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, base_type_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_154 = come_decrement_ref_count(name_154, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, type2_156, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (var_name_157 = come_decrement_ref_count(var_name_157, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((right_node_179) ? right_node_179 = come_decrement_ref_count(right_node_179, ((struct sNode*)right_node_179)->finalize, ((struct sNode*)right_node_179)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            (array_initializer_180 = come_decrement_ref_count(array_initializer_180, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (var_name2_181 = come_decrement_ref_count(var_name2_181, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sExternalGlobalVariable_finalize, __right_value180, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value186) ? __right_value186 = come_decrement_ref_count(__right_value186, ((struct sNode*)__right_value186)->finalize, ((struct sNode*)__right_value186)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__74) ? __result_obj__74 = come_decrement_ref_count(__result_obj__74, ((struct sNode*)__result_obj__74)->finalize, ((struct sNode*)__result_obj__74)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__74;
        }
        else {
            _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07gvar.c", 463, "struct sNode");
            _inf_obj_value2=(struct sGlobalVariable*)come_increment_ref_count(((struct sGlobalVariable*)(__right_value188=sGlobalVariable_initialize((struct sGlobalVariable*)come_increment_ref_count((struct sGlobalVariable*)come_calloc_v2(1, sizeof(struct sGlobalVariable)*(1), "07gvar.c", 463, "struct sGlobalVariable*")),(struct list$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count(multiple_declare_152),base_type_153,(char*)come_increment_ref_count(var_name2_181),(struct sNode*)come_increment_ref_count(right_node_179),(char*)come_increment_ref_count(array_initializer_180),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sGlobalVariable_finalize;
            _inf_value2->clone=(void*)sGlobalVariable_clone;
            _inf_value2->compile=(void*)sGlobalVariable_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sline_real=(void*)sNodeBase_sline_real;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sNodeBase_terminated;
            _inf_value2->kind=(void*)sGlobalVariable_kind;
            _inf_value2->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__77 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value196=_inf_value2)));
            come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize, multiple_declare_152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, base_type_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_154 = come_decrement_ref_count(name_154, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, type2_156, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (var_name_157 = come_decrement_ref_count(var_name_157, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((right_node_179) ? right_node_179 = come_decrement_ref_count(right_node_179, ((struct sNode*)right_node_179)->finalize, ((struct sNode*)right_node_179)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            (array_initializer_180 = come_decrement_ref_count(array_initializer_180, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (var_name2_181 = come_decrement_ref_count(var_name2_181, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sGlobalVariable_finalize, __right_value188, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value196) ? __right_value196 = come_decrement_ref_count(__right_value196, ((struct sNode*)__right_value196)->finalize, ((struct sNode*)__right_value196)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__77) ? __result_obj__77 = come_decrement_ref_count(__result_obj__77, ((struct sNode*)__result_obj__77)->finalize, ((struct sNode*)__result_obj__77)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__77;
        }
        come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize, multiple_declare_152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, base_type_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_154 = come_decrement_ref_count(name_154, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type2_156, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name_157 = come_decrement_ref_count(var_name_157, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((right_node_179) ? right_node_179 = come_decrement_ref_count(right_node_179, ((struct sNode*)right_node_179)->finalize, ((struct sNode*)right_node_179)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        (array_initializer_180 = come_decrement_ref_count(array_initializer_180, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (var_name2_181 = come_decrement_ref_count(var_name2_181, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        parse_sharp_v5(info);
        multiple_assign_var8=((struct tuple3$3sType$phchar$phbool$*)(__right_value197=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
        result_type_184=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        var_name_185=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_186=multiple_assign_var8->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value197, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        parse_sharp_v5(info);
        if(        !err_186        ) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        right_node_187=((void*)0);
        array_initializer_188=((void*)0);
        if(        *info->p==61        ) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            *info->p==123            ) {
                buf_189=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "07gvar.c", 484, "struct buffer*"))));
                buffer_append_char(buf_189,*info->p);
                info->p++;
                squort_190=(_Bool)0;
                dquort_191=(_Bool)0;
                nest_192=1;
                while(                1                ) {
                    if(                    *info->p==0                    ) {
                        ((struct tuple2$2int$bool$*)(__right_value200=err_msg(info,"unexpected source end in array initiailizer")));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value200, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        exit(2);
                    }
                    else if(                    *info->p==92                    ) {
                        buffer_append_char(buf_189,*info->p);
                        info->p++;
                        if(                        *info->p==10                        ) {
                            info->sline++;
                        }
                        buffer_append_char(buf_189,*info->p);
                        info->p++;
                    }
                    else if(                    !squort_190&&*info->p==34                    ) {
                        buffer_append_char(buf_189,*info->p);
                        info->p++;
                        dquort_191=!dquort_191;
                    }
                    else if(                    !dquort_191&&*info->p==39                    ) {
                        buffer_append_char(buf_189,*info->p);
                        info->p++;
                        squort_190=!squort_190;
                    }
                    else if(                    squort_190||dquort_191                    ) {
                        if(                        *info->p==10                        ) {
                            info->sline++;
                        }
                        buffer_append_char(buf_189,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==123                    ) {
                        nest_192++;
                        buffer_append_char(buf_189,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==125                    ) {
                        nest_192--;
                        buffer_append_char(buf_189,*info->p);
                        info->p++;
                        if(                        nest_192==0                        ) {
                            skip_spaces_and_lf(info);
                            break;
                        }
                    }
                    else if(                    *info->p==10                    ) {
                        info->sline++;
                        buffer_append_char(buf_189,*info->p);
                        info->p++;
                    }
                    else {
                        buffer_append_char(buf_189,*info->p);
                        info->p++;
                    }
                }
                __dec_obj59=array_initializer_188,
                array_initializer_188=(char*)come_increment_ref_count(buffer_to_string(buf_189));
                __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, buf_189, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            else {
                parse_sharp_v5(info);
                __dec_obj60=right_node_187,
                right_node_187=(struct sNode*)come_increment_ref_count(expression_v13(info));
                (__dec_obj60 ? __dec_obj60 = come_decrement_ref_count(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                parse_sharp_v5(info);
            }
        }
        if(        result_type_184->mExtern        ) {
            if(            right_node_187            ) {
                ((struct tuple2$2int$bool$*)(__right_value203=err_msg(info,"invalid right value")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value203, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07gvar.c", 562, "struct sNode");
            _inf_obj_value3=(struct sExternalGlobalVariable*)come_increment_ref_count(((struct sExternalGlobalVariable*)(__right_value205=sExternalGlobalVariable_initialize((struct sExternalGlobalVariable*)come_increment_ref_count((struct sExternalGlobalVariable*)come_calloc_v2(1, sizeof(struct sExternalGlobalVariable)*(1), "07gvar.c", 562, "struct sExternalGlobalVariable*")),((void*)0),result_type_184,(char*)come_increment_ref_count(var_name_185),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sExternalGlobalVariable_finalize;
            _inf_value3->clone=(void*)sExternalGlobalVariable_clone;
            _inf_value3->compile=(void*)sExternalGlobalVariable_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sExternalGlobalVariable_kind;
            _inf_value3->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__78 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value206=_inf_value3)));
            come_call_finalizer(sType_finalize, result_type_184, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (var_name_185 = come_decrement_ref_count(var_name_185, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((right_node_187) ? right_node_187 = come_decrement_ref_count(right_node_187, ((struct sNode*)right_node_187)->finalize, ((struct sNode*)right_node_187)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            (array_initializer_188 = come_decrement_ref_count(array_initializer_188, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sExternalGlobalVariable_finalize, __right_value205, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value206) ? __right_value206 = come_decrement_ref_count(__right_value206, ((struct sNode*)__right_value206)->finalize, ((struct sNode*)__right_value206)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__78) ? __result_obj__78 = come_decrement_ref_count(__result_obj__78, ((struct sNode*)__result_obj__78)->finalize, ((struct sNode*)__result_obj__78)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__78;
        }
        else {
            _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07gvar.c", 565, "struct sNode");
            _inf_obj_value4=(struct sGlobalVariable*)come_increment_ref_count(((struct sGlobalVariable*)(__right_value208=sGlobalVariable_initialize((struct sGlobalVariable*)come_increment_ref_count((struct sGlobalVariable*)come_calloc_v2(1, sizeof(struct sGlobalVariable)*(1), "07gvar.c", 565, "struct sGlobalVariable*")),((void*)0),result_type_184,(char*)come_increment_ref_count(var_name_185),(struct sNode*)come_increment_ref_count(right_node_187),(char*)come_increment_ref_count(array_initializer_188),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sGlobalVariable_finalize;
            _inf_value4->clone=(void*)sGlobalVariable_clone;
            _inf_value4->compile=(void*)sGlobalVariable_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sGlobalVariable_kind;
            _inf_value4->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__79 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value209=_inf_value4)));
            come_call_finalizer(sType_finalize, result_type_184, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (var_name_185 = come_decrement_ref_count(var_name_185, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((right_node_187) ? right_node_187 = come_decrement_ref_count(right_node_187, ((struct sNode*)right_node_187)->finalize, ((struct sNode*)right_node_187)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            (array_initializer_188 = come_decrement_ref_count(array_initializer_188, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sGlobalVariable_finalize, __right_value208, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value209) ? __right_value209 = come_decrement_ref_count(__right_value209, ((struct sNode*)__right_value209)->finalize, ((struct sNode*)__right_value209)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__79) ? __result_obj__79 = come_decrement_ref_count(__result_obj__79, ((struct sNode*)__result_obj__79)->finalize, ((struct sNode*)__result_obj__79)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__79;
        }
        come_call_finalizer(sType_finalize, result_type_184, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name_185 = come_decrement_ref_count(var_name_185, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((right_node_187) ? right_node_187 = come_decrement_ref_count(right_node_187, ((struct sNode*)right_node_187)->finalize, ((struct sNode*)right_node_187)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        (array_initializer_188 = come_decrement_ref_count(array_initializer_188, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __result_obj__80 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__80) ? __result_obj__80 = come_decrement_ref_count(__result_obj__80, ((struct sNode*)__result_obj__80)->finalize, ((struct sNode*)__result_obj__80)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__80;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1tuple3$3sType$phchar$phchar$ph$ph* list$1tuple3$3sType$phchar$phchar$ph$ph_push_back(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self, struct tuple3$3sType$phchar$phchar$ph* item){
void* __right_value160 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* litem_166;
struct tuple3$3sType$phchar$phchar$ph* __dec_obj41;
void* __right_value161 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* litem_167;
struct tuple3$3sType$phchar$phchar$ph* __dec_obj42;
void* __right_value162 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* litem_168;
struct tuple3$3sType$phchar$phchar$ph* __dec_obj43;
struct list$1tuple3$3sType$phchar$phchar$ph$ph* __result_obj__69;
    if(    self->len==0    ) {
        litem_166=(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)(__right_value160=(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*"))));
        litem_166->prev=((void*)0);
        litem_166->next=((void*)0);
        __dec_obj41=litem_166->item,
        litem_166->item=(struct tuple3$3sType$phchar$phchar$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phchar$ph_finalize, __dec_obj41,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_166;
        self->head=litem_166;
    }
    else if(    self->len==1    ) {
        litem_167=(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)(__right_value161=(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*"))));
        litem_167->prev=self->head;
        litem_167->next=((void*)0);
        __dec_obj42=litem_167->item,
        litem_167->item=(struct tuple3$3sType$phchar$phchar$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phchar$ph_finalize, __dec_obj42,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_167;
        self->head->next=litem_167;
    }
    else {
        litem_168=(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)(__right_value162=(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*"))));
        litem_168->prev=self->tail;
        litem_168->next=((void*)0);
        __dec_obj43=litem_168->item,
        litem_168->item=(struct tuple3$3sType$phchar$phchar$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phchar$ph_finalize, __dec_obj43,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_168;
        self->tail=litem_168;
    }
    self->len++;
    __result_obj__69 = self;
    come_call_finalizer(tuple3$3sType$phchar$phchar$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__69;
}

static struct tuple3$3sType$phchar$phchar$ph* tuple3$3sType$phchar$phchar$ph_initialize(struct tuple3$3sType$phchar$phchar$ph* self, struct sType* v1, char* v2, char* v3){
struct sType* __dec_obj44;
char* __dec_obj45;
char* __dec_obj46;
struct tuple3$3sType$phchar$phchar$ph* __result_obj__70;
    __dec_obj44=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer(sType_finalize, __dec_obj44,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj45=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj46=self->v3,
    self->v3=(char*)come_increment_ref_count(v3);
    __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__70 = (struct tuple3$3sType$phchar$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple3$3sType$phchar$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (v3 = come_decrement_ref_count(v3, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple3$3sType$phchar$phchar$ph$p_finalize, __result_obj__70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__70;
}

static struct tuple3$3sType$phchar$phvoid$p* tuple3$3sType$phchar$phvoid$p_initialize(struct tuple3$3sType$phchar$phvoid$p* self, struct sType* v1, char* v2, void* v3){
struct sType* __dec_obj47;
char* __dec_obj48;
struct tuple3$3sType$phchar$phvoid$p* __result_obj__71;
    __dec_obj47=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer(sType_finalize, __dec_obj47,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj48=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->v3=v3;
    __result_obj__71 = (struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count(self);
    come_call_finalizer(tuple3$3sType$phchar$phvoid$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple3$3sType$phchar$phvoid$p$p_finalize, __result_obj__71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__71;
}

static void tuple3$3sType$phchar$phvoid$p$p_finalize(struct tuple3$3sType$phchar$phvoid$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
}

static struct sExternalGlobalVariable* sExternalGlobalVariable_clone(struct sExternalGlobalVariable* self){
struct sExternalGlobalVariable* __result_obj__72;
void* __right_value181 = (void*)0;
struct sExternalGlobalVariable* result_182;
void* __right_value182 = (void*)0;
char* __dec_obj49;
void* __right_value183 = (void*)0;
struct sType* __dec_obj50;
void* __right_value184 = (void*)0;
char* __dec_obj51;
void* __right_value185 = (void*)0;
struct list$1tuple3$3sType$phchar$phchar$ph$ph* __dec_obj52;
struct sExternalGlobalVariable* __result_obj__73;
    if(    self==(void*)0    ) {
        __result_obj__72 = (void*)0;
        return __result_obj__72;
    }
    result_182=(struct sExternalGlobalVariable*)come_increment_ref_count((struct sExternalGlobalVariable*)come_calloc_v2(1, sizeof(struct sExternalGlobalVariable)*(1), "sExternalGlobalVariable_clone", 3, "struct sExternalGlobalVariable*"));
    if(    self!=((void*)0)    ) {
        result_182->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj49=result_182->sname,
        result_182->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sExternalGlobalVariable_clone", 5, "char*"));
        __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_182->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        __dec_obj50=result_182->type,
        result_182->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj50,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)    ) {
        __dec_obj51=result_182->name,
        result_182->name=(char*)come_increment_ref_count((char*)come_memdup(self->name, "sExternalGlobalVariable_clone", 8, "char*"));
        __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)    ) {
        __dec_obj52=result_182->multiple_declare,
        result_182->multiple_declare=(struct list$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phchar$ph$ph$p_clone(self->multiple_declare));
        come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph_finalize, __dec_obj52,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__73 = result_182;
    come_call_finalizer(sExternalGlobalVariable_finalize, result_182, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__73;
}

static struct sGlobalVariable* sGlobalVariable_clone(struct sGlobalVariable* self){
struct sGlobalVariable* __result_obj__75;
void* __right_value189 = (void*)0;
struct sGlobalVariable* result_183;
void* __right_value190 = (void*)0;
char* __dec_obj53;
void* __right_value191 = (void*)0;
struct sType* __dec_obj54;
void* __right_value192 = (void*)0;
char* __dec_obj55;
void* __right_value193 = (void*)0;
struct sNode* __dec_obj56;
void* __right_value194 = (void*)0;
char* __dec_obj57;
void* __right_value195 = (void*)0;
struct list$1tuple3$3sType$phchar$phchar$ph$ph* __dec_obj58;
struct sGlobalVariable* __result_obj__76;
    if(    self==(void*)0    ) {
        __result_obj__75 = (void*)0;
        return __result_obj__75;
    }
    result_183=(struct sGlobalVariable*)come_increment_ref_count((struct sGlobalVariable*)come_calloc_v2(1, sizeof(struct sGlobalVariable)*(1), "sGlobalVariable_clone", 3, "struct sGlobalVariable*"));
    if(    self!=((void*)0)    ) {
        result_183->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj53=result_183->sname,
        result_183->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sGlobalVariable_clone", 5, "char*"));
        __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_183->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        __dec_obj54=result_183->type,
        result_183->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj54,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)    ) {
        __dec_obj55=result_183->name,
        result_183->name=(char*)come_increment_ref_count((char*)come_memdup(self->name, "sGlobalVariable_clone", 8, "char*"));
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->right_node!=((void*)0)    ) {
        __dec_obj56=result_183->right_node,
        result_183->right_node=(struct sNode*)come_increment_ref_count(sNode_clone(self->right_node));
        (__dec_obj56 ? __dec_obj56 = come_decrement_ref_count(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->array_initializer!=((void*)0)    ) {
        __dec_obj57=result_183->array_initializer,
        result_183->array_initializer=(char*)come_increment_ref_count((char*)come_memdup(self->array_initializer, "sGlobalVariable_clone", 10, "char*"));
        __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)    ) {
        __dec_obj58=result_183->multiple_declare,
        result_183->multiple_declare=(struct list$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phchar$ph$ph$p_clone(self->multiple_declare));
        come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph_finalize, __dec_obj58,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__76 = result_183;
    come_call_finalizer(sGlobalVariable_finalize, result_183, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__76;
}

